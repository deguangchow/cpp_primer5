///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief lambda_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13

#include "stdafx.h"
#include "lambad_test.h"

//std::lambad 表达式测试函数
void lambad_test() {
    auto sum = 0, count = 0;

    //lambad 求和
    auto lambad_sum = [&sum](const int x) {
        sum += x;
    };

    //lambad 计数
    auto lambad_count = [&count](const int x) {
        ++count;
    };

    //lambad 统一调用
    auto lambad_in = [&](const int x) {
        lambad_sum(x);
        lambad_count(x);
    };

    std::vector<int> vct = { 1, 2, 3, 4 };
    std::for_each(vct.cbegin(), vct.cend(), lambad_in);

    cout << "求和=" << sum << endl;
    cout << "计数=" << count << endl;
}
