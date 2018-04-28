///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief ���ģʽ��������ģʽ֮����������
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/25
#ifndef CLASS_ADAPTER_H
#define CLASS_ADAPTER_H

//��Ҫʵ�ֵ�Ŀ��ӿ���
class Target {
public:
    virtual void Request() {}
};

//���������
class Adaptee {
public:
    void SpecificRequest() {
        cout << "Called specificRequest()" << endl;
    }
};

//�����������̳д�������ࡢ�̳�Ŀ��ӿ���
class ClassAdapter : public Adaptee, public Target {
public:
    void Request() {
        this->SpecificRequest();
    }
};


#endif

