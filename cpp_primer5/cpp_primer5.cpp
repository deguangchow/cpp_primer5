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

//wstring get_bill_standard_code(wstring &code) {
//    /*
//    2、2018清单规范相同牲的清单判断标准为：
//    （1）清单编码以数字开头，且位数大于等于9位时，根据“清单前9位编码+清单名称+清单单位+项目特征文本”进行对比。
//    （2）清单编码以WB开头，且位数大于等于11位时，根据“清单前11位编码+清单名称+清单单位+项目特征文本”进行对比。
//    （3）清单编码以ZB开头，且位数大于等于11位时，根据“清单前11位编码+清单名称+清单单位+项目特征文本”进行对比。
//    （4）除（1）、（2）、（3）之外的，根据“清单完整编码+清单名称+清单单位+项目特征文本”进行对比。
//    注：应去掉“项目特征文本”前后的空格再进行对比。
//    */
//
//    wstring stext = code;
//    if (code.length() <= 9) {
//        return stext;
//    }
//
//    if (stext[0] >= L'0' && stext[0] <= L'9') {
//        stext = code.substr(0, 9);
//    } else if ((stext[0] == L'W' || stext[0] == L'Z') && stext[1] == L'B') {
//        stext = code.substr(0, 11);
//    }
//
//    return stext;
//}

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

    //wstring code = L"0123456789123";
    //wstring stext = get_bill_standard_code(code);

    //Target *t = new ClassAdapter();
    //t->Request();
    //if (t) {
    //    delete t;
    //    t = nullptr;
    //}
    //t = new ObjectAdapter();
    //t->Request();
    //Target_D *td = new MyInteresting();
    //td->f1();
    //td->f2();
    //td->f3();

    double a = 0.0, b = 0.0, c = 0.0, d = 0.0;


    return 0;
}
