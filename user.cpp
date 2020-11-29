//源程序有效注释量与源代码比例大于20％
/*************************************
 * Copyright (c) 2020,北京航天拓扑高科技有限责任公司
 * All rights reserved.
 * 
 * Filename：user.cpp
 * 
 * Current Version: 1.1
 * Author: Zhangsan
 * Current Date:2020年11月17日
 * 
 * Replaced Version: 1.0
 * Author: Lisi
 * Current Date:2020年11月10日
 * 
 * Summary:这里写文件的摘要
 * 
 * **************************************/

#include <stdio.h>            /*C头文件*/
#include <string>             /*C++头文件*/
#include <log4cplus/logger.h> /*外部库头文件*/
#include "user.h"             /*本工程的头文件*/

/*g_nError错误编码,取值范围0~3*/
/*全局错误如下:*/
/*0－成功*/
/*1－文件名错误*/
/*2－路径错误*/
/*3－其他错误*/
int g_nError = 0;

static s_nFlag = 0;

/***************************************
 * 描述；计算儿童全天的学习分钟数
 * 参数：am,[in]上午学习分钟数
 *       pm,[in]下午学习分钟数
 * 返回值：全天学习分钟数
 * *************************************/
int add(int ap, int pm)
{
    return ap + pm;
}

/***************************************
 * 描述；打印分数
 * 参数：score,[in]考试分数
 * 返回值：无
 * *************************************/
void print(int score)
{
    if((score <=  MAX_SCORE) && (score >=  MIN_SCORE))
    {
        printf("valid score!\n");
        while(sorce >= EXCELLENT_SCORE )
        {
            printf("excellent score!\n");
        }/**while(sorce >= EXCELLENT_SCORE )/
    }/*if((score <=  MAX_SCORE) && (score >=  MIN_SCORE))*/
}

void define()
{
    bool bIsParent;
    BYTE byFlag;
    short int nStepCount;
    long lSum;
    char cCount;
    float fAvg;
    double dData;
    void vVariant;
    unsigned int uiCount;
    unsigned long ulBroad;
    HANDLE  hHandle;
    DWORD  dwWord;
    LPCSTR strString;
    float *pfStat;
    float *ppfStat;
    float *pppfStat;
    
    return;
}

int add_user()
{
    return 0;
}

int delete_user()
{
    return 0;
}
