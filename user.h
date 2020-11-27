//源程序有效注释量与源代码比例大于20％
/*************************************
 * Copyright (c) 2020,北京航天拓扑高科技有限责任公司
 * All rights reserved.
 * 
 * Filename：user.h
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
#ifndef USER_H
#define USER_H
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
#endif //USER_H

