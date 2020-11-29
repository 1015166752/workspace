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

#ifndef H_GLOGAL_H
#define H_GLOGAL_H

#define MAX_ACT_TASK_NUMBER 1000  /*actives tatistic task number*/
#define MAX_SCORE       100           /*max score*/
#define EXCELLENT_SCORE 90            /*excellent score*/
#define MIN_SCORE        0            /*min score*/
const char* c_szFileName = "log.txt";

/*星期几*/
enum EDays
{
    EDAYS_MONDAY，/*星期一*/
    EDAYS_TUESDAY /*星期二*/
};

/*点坐标*/
struct SPoint
{
    int nX;//点的X位置
    int nY;//点的Y位置
};

/*点坐标*/
union UPoint
{
    unsigned int uiValue;
    char cCount[4];
};
#endif //H_GLOGAL_H
