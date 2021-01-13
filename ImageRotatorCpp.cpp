#include<opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("./20201218_202517.webp", IMREAD_UNCHANGED);
	double angle;
	cin >> angle;
	Point2f center((img.cols -1) / 2.0, (img.rows -1) / 2.0);
	Mat rot = getRotationMatrix2D(center, angle, 1.0);
	Rect2f bbox = RotatedRect(Point2f(), img.size(), angle).boundingRect2f();
	imwrite("rotated_image.png", M);
	string windowName = "Rotated Image is:- ";
	namedWindow(windowName, WINDOW_NORMAL);
	imshow(windowName, M);
	waitKey(0);
	destroyWindow(windowName);
	return 0;
}