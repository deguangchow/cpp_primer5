///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief 设计模式：单例模式
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/04/28
#ifndef SINGLETON_TEST_H
#define SINGLETON_TEST_H

//单例模式：Singleton 类
class Singleton{
public:
    //Singleton 公共的静态成员函数：获取Singleton类唯一的对象
    static Singleton* getInstance() {
        if (nullptr == instance) {
            instance = new Singleton();
        }
        return instance;
    }

private:
   //Singleton 私有的静态成员变量：Singleton类唯一的对象。
   static Singleton *instance;

   //单例模式的类，构造函数、拷贝构造函数、运算符=、析构函数需设置为私有的。
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

