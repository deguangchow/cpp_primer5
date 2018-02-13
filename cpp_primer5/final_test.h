///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief final_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13
#pragma once

class NoDrived /*final*/{
public:
    NoDrived();
    virtual ~NoDrived();

    virtual void Print() /*final*/;
    void fun1() /*final*/;
    virtual void fun2();
};


class Drived : public NoDrived {
public:
    Drived();
    ~Drived();

    virtual void Print();
    void fun2() final;
};


class WaterDrived : public Drived {
public:
    WaterDrived();
    ~WaterDrived();

    /*void fun2(){}*/
};

