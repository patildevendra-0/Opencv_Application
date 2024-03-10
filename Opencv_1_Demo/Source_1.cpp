#include<iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main()
{
	Mat Original_Image = imread("D:\\Bappa.jpg");


	if (Original_Image.empty())
	{
		cout << "ERROR WHILE LOADING IMG.......";
		return -1;
	}

	imshow("SHREE GANESH", Original_Image);

	waitKey(0);

	return 0;
}
