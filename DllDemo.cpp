// DllDemo.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "DllDemo.h"


// 这是导出变量的一个示例
DLLDEMO_API int nDllDemo=0;

// 这是导出函数的一个示例。
DLLDEMO_API int fnDllDemo(void)
{
    return 345;
}

// 这是已导出类的构造函数。
CDllDemo::CDllDemo()
{
    return;
}


int CDllDemo::add(int a, int b)
{
    // TODO: 在此处添加实现代码.
    return 0;
}
