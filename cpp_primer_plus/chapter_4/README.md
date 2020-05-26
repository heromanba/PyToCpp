
# 第4章 复合类型

## 4.7 指针和自由存储空间

计算机程序在存储数据是必须跟踪3中基本属性：
- 信息存储在何处
- 存储的值为多少
- 新出的信息是什么类型

使用常规变量时，值是指定的量，而地址为派生量。

### 指针与C++基本原理
处理存储数据的新策略刚好相反，将地址视为指定的量，而将值视为派生量。

### 4.7.1 声明和初始化指针
计算机需要跟踪指针指向的值的类型。例如，char的地址与double的地址看上去没什么两样，但char和double使用的字节数是不同的，他们存储值时使用的内部格式也不同。因此，**指针声明必须指定指针指向的数据的类型**

### 4.7.4 使用new来分配内存
变量是在编译时分配的有名称的内存，而指针只是为可以通过名称直接访问的内存提供了一个别名。指针真正的用武之地在于，在运行阶段分配未命名的内存以存储值。在这种情况下，只能通过指针来访问内存。在C语言中，可以用库函数malloc()来分配内存；在C++中仍然可以这样做，但C++有更好的方法--new运算符。