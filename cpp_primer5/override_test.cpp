///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief override_test
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13

#include "stdafx.h"
#include "override_test.h"

Object::Object() {
    cout << "Object" << endl;
}

Object::~Object() {
    cout << "~Object" << endl;
}

void Object::Print() {
    cout << "Object Print" << endl;
}

void Object::fun1() {
    cout << "Object fun1" << endl;
}

void Object::fun1() const {
    cout << "Object fun1 const" << endl;
}


//////////////////////////////////////////////////////////////////////////
Person::Person() {
    cout << "Person" << endl;
}

Person::~Person() {
    cout << "~Person" << endl;
}

void Person::Print() {
    cout << "Person Print" << endl;
}

void Person::fun1() {
    cout << "Person fun1" << endl;
}

void Person::fun1() const {
}


//////////////////////////////////////////////////////////////////////////
Student::Student() {
    cout << "Student" << endl;
}

Student::~Student() {
    cout << "~Student" << endl;
}

void Student::Print() {
    cout << "Student Print" << endl;
}

void Student::fun1() {
    cout << "Student fun1" << endl;
}


//////////////////////////////////////////////////////////////////////////
Teacher::Teacher() {
    cout << "Teacher" << endl;
}

Teacher::~Teacher() {
    cout << "~Teacher" << endl;
}

void Teacher::Print() {
    cout << "Teacher Print" << endl;
}

void Teacher::fun1() {
    cout << "Teacher fun1" << endl;
}


//////////////////////////////////////////////////////////////////////////
void inherit_test() {
    Object *pObj = new Person();
    if ( nullptr != pObj ) {
        pObj->Print();
        pObj->fun1();
        delete pObj;
        pObj = nullptr;
    }

    Object *pObj1 = new Student();
    if (nullptr != pObj1) {
        pObj1->Print();
        pObj1->fun1();
        delete pObj1;
        pObj1 = nullptr;
    }

    Person *pPerson1 = new Person();
    if ( nullptr != pPerson1 ) {
        delete pPerson1;
        pPerson1 = nullptr;
    }

    Student *pStudent = new Student();
    if ( nullptr != pStudent ) {
        delete pStudent;
        pStudent = nullptr;
    }
}
