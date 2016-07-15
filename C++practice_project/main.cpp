#include "C++test.h"

int main(void)
{
	
	Mat img_color = imread("20160714_174016.jpg");
	Mat img_gray = imread("20160714_174016.jpg",0);

	namedWindow("출력결과_칼라", WINDOW_AUTOSIZE);
	imshow("출력결과_칼라", img_color);

	namedWindow("출력결과_흑백", WINDOW_AUTOSIZE);
	imshow("출력결과_흑백", img_gray);
	waitKey(0);
	
	




}