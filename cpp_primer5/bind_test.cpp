///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief bind_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13
#include "stdafx.h"
#include "bind_test.h"
#include "function_test.h"

void bind_test() {
    auto i = 10;
    auto d = 1.1;
    //std::bind        函数 bind_func = 绑定函数 some_func, 参数1、2不变；
    auto bind_func = std::bind(&compare_func, std::placeholders::_1, std::placeholders::_2);
    if (bind_func(i, d)) {
        cout << i << " > " << d << endl;
    }
}
