#pragma once
#include <iostream>

#include <opencv2/opencv.hpp>   
#include <opencv2/core/core.hpp>   
#include <opencv2/highgui/highgui.hpp>   


#define imax(x, y) ((x>y) ? x : y)
#define imin(x, y) ((x<y) ? x : y)
#define clipping(x, st, end) (imin(end, imax(st, x)))
#define SQ(x) ((x)*(x))

using namespace std;
using namespace cv;



//C++ 클래스 테스트 함수 선언
class Seller
{
private:
	int myMoney;
public :
	int num;

	void InitMembers();

};

class buyer
{
private:
	int byerMoney;
public :
	bool setMoney(int num);
};

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass()
	{
		num1 = 1;
		num2 = 0;
	}

	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
};


//이미지 기본 함수 선언



//캘리브레이션 관련 함수 선언