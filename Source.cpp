#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
Mat rotate(Mat img, double angle)
{
	Mat after;
	Point2f pt(img.cols / 2., img.rows / 2.);
	Mat r = getRotationMatrix2D(pt, angle, 1.0);
	warpAffine(img, after, r, Size(img.cols, img.rows));
	return after;
}
int main()
{
	int a;
	Mat img = imread("coding.jpg");
	Mat after;
	if (img.empty())
	{
		cout << "Error!!";
		cin.get();
		return -1;
	}
	cout << "Enter Angle by which the image should be rotated:"<<endl;
	cin >> a;
	after = rotate(img, a);
	namedWindow("Image", WINDOW_NORMAL);
	imshow("Image", img);
	namedWindow("Image After Rotation", WINDOW_NORMAL);
	imshow("Image After Rotation", after);
	waitKey(0);
	destroyWindow("Image");
	destroyWindow("Image After Rotation");
	return 0;
}
