//
// Created by panFeng on 2023/6/29.
//

#ifdef __cplusplus
#define EXPORT_DLL extern "C" __declspec(dllexport)
#else
#define EXPORT_DLL __declspec(dllexport)
#endif

#include <stdio.h>
#include<iostream>




EXPORT_DLL int hello() {
    std::cout << "this is hello" << std::endl;
    return 100;
}