// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�

//********************************************************************************
//user-added .h file
#include <math.h>
#include <malloc.h>
#include <windows.h>
#include <time.h>
#include <process.h>

//********************************************************************************
//inside-project .h file
#include <common.h>
#include <io.h>
#include <jacobiSerial_1D.h>
#include <jacobiSerial_2D.h>

//********************************************************************************
//constant variable
#define DEFAULT_INPUT_FILE	"input.txt"		//default input .txt filename
#define MUL					100000			//time accuracy control numer


//********************************************************************************
//structure define
struct boundary
{
	double		left;
	double		up;
	double		right;
	double		down;
};
