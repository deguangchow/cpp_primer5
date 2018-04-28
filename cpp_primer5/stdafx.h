///  Copyright (C) 2018 cpp_prime5 DG.C
///      http://www.futuresoft.com.cn
///
/// \brief stdafx.h
///
/// \author zhoudeguang
/// \version 1.0
/// \2018/02/13

// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//
#ifndef STDAFX_H
#define STDAFX_H

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

////boost
//#include <boost/assign.hpp>
//#include <boost/archive/binary_oarchive.hpp>
//#include <boost/assign/std/vector.hpp>
//#include <boost/iostreams/copy.hpp>
//#include <boost/iostreams/device/file.hpp>
//#include <boost/iostreams/device/file_descriptor.hpp>
//#include <boost/iostreams/filter/zlib.hpp>
//#include <boost/iostreams/filtering_stream.hpp>

// TODO(zhoudeguang):  在此处引用程序需要的其他头文件
#include <iostream>
#include <vector>
#include <functional>    //std::function
#include <algorithm>    //std::for_each
#include <thread>        //std::thread
#include <atomic>
#include <mutex>
#include <condition_variable>
#include <future>


//TODO(zhoudeguang)：注意命名空间污染问题，请勿使用 using namespace std; 之类方式使用命名空间
using std::string;
using std::wstring;
using std::cout;
using std::endl;


//TODO(zhoudeguang)：此处添加自定义的头文件
#include "function_test.h"
#include "bind_test.h"
#include "lambad_test.h"
#include "override_test.h"
#include "class_adapter.h"
#include "object_adapter.h"
#include "default_adapter.h"
#include "thread_test.h"
#include "singleton_test.h"

#endif

