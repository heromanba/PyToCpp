#include <torch/torch.h>
#include <iostream>


struct Net : torch::nn::Module {
  Net (int64_t N, int16_t M) 
      : linear(register_module("linear", torch::nn::Linear(N, M))) {
        another_bias = register_parameter("b", torch::randn(M));
      }
  torch::Tensor forward(torch::Tensor input) {
    return linear(input) + another_bias;
  }
  torch::nn::Linear linear;
  torch::Tensor another_bias;
};


int main() {
  // torch::Tensor tensor = torch::rand({2, 3});

  // //  0.2001  0.2045  0.4438
  // //  0.9675  0.5846  0.2598
  // // [ CPUFloatType{2,3} ]
  // std::cout << tensor << std::endl;

  // // Mave tensor to gpu.
  // tensor = tensor.to(torch::kCUDA);

  // // tensor:
  // // 0.3928  0.0914  0.5617
  // // 0.9043  0.8306  0.9202
  // // [ CUDAFloatType{2,3} ]
  // std::cout << tensor << std::endl;

  Net net(4, 5);
  for (const auto& p : net.parameters()) {
    //  0.0778
    //  1.9726
    // -0.1295
    // -0.7740
    // -0.3881
    // [ CPUFloatType{5} ]
    // -0.1289 -0.2810 -0.2571 -0.4551
    //  0.2566  0.0741 -0.4756 -0.1016
    //  0.0782 -0.2407  0.1418  0.1839
    // -0.0616  0.3684  0.4527 -0.0255
    //  0.3350  0.4619 -0.4733  0.2971
    // [ CPUFloatType{5,4} ]
    //  0.3446
    // -0.4719
    //  0.3557
    // -0.0060
    // -0.1007
    // [ CPUFloatType{5} ]
    std::cout << p << std::endl;
  }
}