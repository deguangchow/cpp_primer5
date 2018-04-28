///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief 设计模式：适配器模式之类适配器。
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/25
#ifndef CLASS_ADAPTER_H
#define CLASS_ADAPTER_H

//需要实现的目标接口类
class Target {
public:
    virtual void Request() {}
};

//待适配的类
class Adaptee {
public:
    void SpecificRequest() {
        cout << "Called specificRequest()" << endl;
    }
};

//类适配器：继承待适配的类、继承目标接口类
class ClassAdapter : public Adaptee, public Target {
public:
    void Request() {
        this->SpecificRequest();
    }
};


#endif

