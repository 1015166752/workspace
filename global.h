//源程序有效注释量与源代码比例大于20％
/*************************************
 * Copyright (c) 2020,北京航天拓扑高科技有限责任公司
 * All rights reserved.
 * 
 * Filename：global.h
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
#ifndef GLOGAL_H
#define GLOGAL_H
#include <stdio.h>            /*C头文件*/
#include <string>             /*C++头文件*/
#include <log4cplus/logger.h> /*外部库头文件*/
#include "user.h"             /*本工程的头文件*/

/*sccp interface with sccp user primitive message name*/
enum ESCCP_USER_PRIMITIVE{
    N_UNITDATA_IND, 
    N_NOTICE_IND,   
    N_UNITDATA_REQ, 
};
#endif //GLOGAL_H
