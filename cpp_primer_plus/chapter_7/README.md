
# 第7章 函数--C++的编程模块

本章内容包括：
- 函数基本知识。
- 函数原型。
- 按值传递函数参数。
- 设计处理数组的函数。
- 使用const指针参数。
- 设计处理文本字符串的函数。
- 设计处理结构的函数。
- 设计处理string对象的函数。
- 调用自身的函数（递归）。
- 指向函数的指针。


## 7.1 复习函数的基本知识

要使用C++函数，必须完成如下工作：
- 提供函数定义
- 提供函数原型
- 调用函数

原型的功能：
- 编译器正确处理函数返回值
- 编译器检查使用的参数数目是否正确
- 编译器检查使用的参数类型是否正确。如果不正确，则转换为正确的类型（如果可能的话）。

## 7.10 函数指针

### 7.10.3 深入探讨函数指针

```cpp
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);
```

声明函数指针指向上述三个函数之一，假设该指针名为pa：
```cpp
const double * (*p1)(const double *, int);
```

可在声明的同时进行初始化：
```cpp
const double * (*p1)(const double *, int) = f1;
```

使用C++11的自动类型推断功能时，代码要简单得多：
```cpp
auto p2 = f2;    // C++11 automatic type deduction
```

现在来看下面的语句：
```cpp
std::cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << std::endl;
std::cout << p2(av, 3) << ": " << *p2(av, 3) << std::endl;
```

声明一个函数指针数组：
```cpp
const double * (*pa[3])(const double *, int) = {f1, f2, f3};
```
运算符```[]```的优先级高于```*```，因此```*pa[3]```表明pa是一个包含三个指针的数组。上述声明的其他部分指出了每个指针指向的是什么：特征标为```const double *, int```
且返回类型为```const double *```的函数。

这里不能使用auto，自动类型推断只能用于单值初始化，而不能用于初始化列表。但声明数组pa后，声明同样类型的数组就很简单了：
```cpp
auto pb = pa;
```

创建指向整个数组的指针。由于数组名pa是指向函数指针的指针，因此指向数组的指针将是这样的指针，即它指向数组指针的指针。

可使用auto：
```cpp
auto pc = &pa;    // C++11 automatic type deduction
```

自己声明：这种声明应类似于pa的生命，但由于增加了一层间接，因此需要在某个地方添加一个```*```。具体地说如果这个指针名为pd，则需要指出她是一个指针，而不是数组。
这意味着声明的核心部分应为```(*pd)[3]```，其中的括号让标示符pd与```*```先结合：
```cpp
*pd[3]    // an array of 3 pointers
(*pd)[3]    // a pointer to an array of 3 elements
```

换句话说，pd是一个指针，它指向一个包含三个元素的数组。这些元素是什么呢？由pa的声明的其他部分描述，结果如下：
```cpp
const double *(*(*pd)[3])(const double *, int) = &pa;
```