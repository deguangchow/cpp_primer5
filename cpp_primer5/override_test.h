///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief override_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13
#pragma once
#include "stdafx.h"

class Object {
public:
    Object();

    //为多态基类声明 virtual 析构函数
    virtual ~Object();

    virtual void Print();
    virtual void fun1();
    virtual void fun1() const;

    virtual void fun2() {
        cout << "Object：fun2" << endl;
    }
};



class Person : public Object {
public:
    Person();
    ~Person();

    void Print() override;
    void fun1();
    void fun1() const override;
};


class Student : public Person {
public:
    Student();
    ~Student();

    virtual void Print();
    void fun1() override;

    virtual void fun2() {
        cout << "Student：fun2" << endl;
    }
};

class Teacher : public Person {
public:
    Teacher();
    ~Teacher();

    virtual void Print();
    void fun1() override;

    virtual void fun2() {
        cout << "Teacher：fun2" << endl;
    }
};

void inherit_test();
