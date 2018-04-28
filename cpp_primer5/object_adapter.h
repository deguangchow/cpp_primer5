///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief 设计模式：适配器模式之对象适配器。
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/25
#ifndef OBJECT_ADAPTER_H
#define OBJECT_ADAPTER_H

#include "class_adapter.h"

//对象适配器：持有的待适配类的对象，继承目标接口类
class ObjectAdapter : public Target {
private:
    Adaptee *adaptee;

public:
    ObjectAdapter() {
        adaptee = new Adaptee();
    }

    //实现目标接口类中的接口
    void Request() {
        adaptee->SpecificRequest();
    }
};

#endif
