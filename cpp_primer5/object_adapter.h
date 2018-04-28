///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief ���ģʽ��������ģʽ֮������������
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/25
#ifndef OBJECT_ADAPTER_H
#define OBJECT_ADAPTER_H

#include "class_adapter.h"

//���������������еĴ�������Ķ��󣬼̳�Ŀ��ӿ���
class ObjectAdapter : public Target {
private:
    Adaptee *adaptee;

public:
    ObjectAdapter() {
        adaptee = new Adaptee();
    }

    //ʵ��Ŀ��ӿ����еĽӿ�
    void Request() {
        adaptee->SpecificRequest();
    }
};

#endif
