///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief ���ģʽ������ģʽ
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/28
#ifndef SINGLETON_TEST_H
#define SINGLETON_TEST_H

//����ģʽ��Singleton ��
class Singleton{
public:
    //Singleton �����ľ�̬��Ա��������ȡSingleton��Ψһ�Ķ���
    static Singleton* getInstance() {
        if (nullptr == instance) {
            instance = new Singleton();
        }
        return instance;
    }

private:
   //Singleton ˽�еľ�̬��Ա������Singleton��Ψһ�Ķ���
   static Singleton *instance;

   //����ģʽ���࣬���캯�����������캯���������=����������������Ϊ˽�еġ�
   Singleton() {

   }
   
   Singleton(const Singleton &) {

   }

   Singleton& operator=(const Singleton &) {

   }

   ~Singleton() {

   }
};

#endif

