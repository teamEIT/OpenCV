#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"


#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main(int argc, char** argv)	{

	cout << "Chuong trinh dieu khien do sang va do tuong phan." << endl;
	string imageName("bw.jpg");
	string windowName("Original image");

	if(argc > 1) {
		imageName = argv[1];
	}

	Mat image = imread(imageName.c_str(), CV_LOAD_IMAGE_COLOR); // IMREAD_COLOR: Read the image.
	if(image.empty()) { // Check for invalid input
		cout << "Could not open or find the image" << endl;
		return -1;
	}
	namedWindow(windowName.c_str(), CV_WINDOW_AUTOSIZE); // Create a window for display.
	imshow(windowName.c_str(), image); // Show our image inside it.

	Mat editedImage = image.clone();
	double alpha = 2.0;
	int beta = 20;

	for(int i = 0; i < image.rows; i++) {
		for(int j = 0; j < image.cols; j++) {
			for(int k = 0; k < 3; k++) {
				editedImage.at<Vec3b>(i, j)[k] = saturate_cast<uchar>(alpha * (image.at<Vec3b>(i, j)[k]) + beta);
			}
		}
	}
	string editedImageName("bwEdited.jpg");
	imwrite(editedImageName.c_str(), editedImage); // Save the gray image
	string windowName2("Edited image");
	namedWindow(windowName2.c_str(), CV_WINDOW_AUTOSIZE);
	imshow(windowName2, editedImage);

	waitKey(0);
	return 0;
}
