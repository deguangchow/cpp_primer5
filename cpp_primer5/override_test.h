///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief override_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13
#ifndef OVERRIDE_TEST_H
#define OVERRIDE_TEST_H

class Object {
public:
    Object();

    //为多态基类声明 virtual 析构函数
    virtual ~Object();

    virtual void Print();
    virtual void fun1();
    virtual void fun1() const;

    virtual void fun2();
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

    virtual void fun2();
};

class Teacher : public Person {
public:
    Teacher();
    ~Teacher();

    virtual void Print();
    void fun1() override;

    virtual void fun2();
};

void inherit_test();

#endif
