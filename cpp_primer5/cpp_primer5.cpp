///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief cpp_primer5
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13

// cpp_primer5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "function_test.h"
#include "bind_test.h"
#include "lambad_test.h"
#include "override_test.h"

void f1(int n) {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread " << n << " executing\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

void f2(int& n) {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread 2 executing\n";
        ++n;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

void thread_test() {
    int n = 0;
    std::thread t1; // t1 is not a thread
    std::thread t2(f1, n + 1); // pass by value
    std::thread t3(f2, std::ref(n)); // pass by reference
    std::thread t4(std::move(t3)); // t4 is now running f2(). t3 is no longer a thread
    t2.join();
    t4.join();
    std::cout << "Final value of n is " << n << '\n';
}

void thread_task() {
    std::cout << "hello thread" << endl;
}


wstring get_bill_standard_code(wstring &code) {
    /*
    2、2018清单规范相同牲的清单判断标准为：
    （1）清单编码以数字开头，且位数大于等于9位时，根据“清单前9位编码+清单名称+清单单位+项目特征文本”进行对比。
    （2）清单编码以WB开头，且位数大于等于11位时，根据“清单前11位编码+清单名称+清单单位+项目特征文本”进行对比。
    （3）清单编码以ZB开头，且位数大于等于11位时，根据“清单前11位编码+清单名称+清单单位+项目特征文本”进行对比。
    （4）除（1）、（2）、（3）之外的，根据“清单完整编码+清单名称+清单单位+项目特征文本”进行对比。
    注：应去掉“项目特征文本”前后的空格再进行对比。
    */

    wstring stext = code;
    if (code.length() <= 9) {
        return stext;
    }

    if (stext[0] >= L'0' && stext[0] <= L'9') {
        stext = code.substr(0, 9);
    } else if ((stext[0] == L'W' || stext[0] == L'Z') && stext[1] == L'B') {
        stext = code.substr(0, 11);
    }

    return stext;
}

int main() {
    //function_test();
    //bind_test();
    //lambad_test();
    //inherit_test();

    //string name = "垫层(C15砼) 不分格";
    //string smatch = "(C15砼)";
    //int pos_match = 4;
    //string name_source = "(C15砼20mm32.5坍落度35-50)";
    //name.replace(pos_match, smatch.size(), name_source);
    //printf("%s", name.c_str());



    //std::thread t(thread_task);
    //if ( t.joinable() )
    //{
    //    t.join();
    //}

    //if ( t.joinable() )
    //{
    //    t.detach();
    //}


    wstring code = L"0123456789123";
    wstring stext = get_bill_standard_code(code);

    return 0;
}
