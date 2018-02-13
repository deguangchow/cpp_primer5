///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief function_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13

#include "stdafx.h"
#include "function_test.h"

void cout_func() {
    std::cout << "cout_func" << endl;
}

void function_func(std::function<void()> f) {
    f();
}

bool compare_func(int i, double d) {
    return i > d;
}

//std::function 表达式测试函数
void function_test() {
    function_func(cout_func);

    auto i = 10;
    auto d = 1.1;
    auto f = &compare_func;    /*std::function<bool(int, double)> f = &some_func;*/
    if (f(i, d)) {
        cout << i << " > " << d << endl;
    }
}

