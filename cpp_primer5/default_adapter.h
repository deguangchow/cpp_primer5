///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief 设计模式：适配器模式之缺省适配器。（也称为接口适配器）
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/25
#ifndef DEFAULT_ADAPTER_H
#define DEFAULT_ADAPTER_H

class Target_D {
public:
    virtual void f1() {};
    virtual void f2() {};
    virtual void f3() {};
};

class DefaultAdapter : public Target_D {
public:
    void f1() {};
    void f2() {};
    void f3() {};
};

class MyInteresting : public DefaultAdapter {
public:
    void f3() {
        cout << "实现f3方法" << endl;
    }

};



#endif
