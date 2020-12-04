/**
* @file attendance.h
*/
#ifndef __ATTENDANCE_H__
#define __ATTENDANCE_H__
#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>

/**
*  calculate amount to be paid
* @param[in] aggregate
* @param[in] usual
* @return usual
*/
int normal(float aggregate,int usual);


/**
*  calculate amount to be paid when approved by CAC
* @param[in] aggregate
* @param[in] proof
* @param[in] condonation
* @param[in] usual
* @param[in] fine
* @return usual+fine
*/


int cac(float aggregate,int proof,int condonation,int usual,int fine);


#endif
