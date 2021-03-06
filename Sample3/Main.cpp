#include <iostream>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace std;
using namespace cv;

int main(int argc, char** argv) {

	cout << "Anh nhi phan voi nguong dong." << endl;
	Mat srcImage = imread("logoGray.png", CV_LOAD_IMAGE_GRAYSCALE);
	Mat binaryImage;

	adaptiveThreshold(srcImage, binaryImage, 255, CV_ADAPTIVE_THRESH_MEAN_C, CV_THRESH_BINARY, 105, 5);


	namedWindow("Anh goc", CV_WINDOW_AUTOSIZE); // Create a window for display.
	namedWindow("Anh nhi phan", CV_WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Anh goc", srcImage);
	imshow("Anh nhi phan", binaryImage);
	imwrite("t105.png", binaryImage);
	waitKey(0);
	return 0;
}
