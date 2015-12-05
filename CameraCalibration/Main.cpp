#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include < vector>

#ifdef _DEBUG
#pragma comment(lib, "opencv_core300d.lib")
#pragma comment(lib, "opencv_imgproc300d.lib")   //MAT processing
//#pragma comment(lib, "opencv_objdetect246d.lib") //HOG
//#pragma comment(lib, "opencv_gpu246d.lib")
//#pragma comment(lib, "opencv_features2d246d.lib")
#pragma comment(lib, "opencv_highgui300d.lib")
//#pragma comment(lib, "opencv_ml246d.lib")
//#pragma comment(lib, "opencv_stitching246d.lib")
//#pragma comment(lib, "opencv_superres246d.lib")
#pragma comment(lib, "opencv_calib3d300d.lib")
//#pragma comment(lib, "opencv_nonfree246d.lib")
//#pragma comment(lib, "opencv_flann246d.lib")

#else
#pragma comment(lib, "opencv_core300.lib")
#pragma comment(lib, "opencv_imgproc300.lib")
//#pragma comment(lib, "opencv_objdetect246.lib")
//#pragma comment(lib, "opencv_gpu246.lib")
//#pragma comment(lib, "opencv_features2d246.lib")
#pragma comment(lib, "opencv_highgui300.lib")
//#pragma comment(lib, "opencv_ml246.lib")
//#pragma comment(lib, "opencv_stitching246.lib")
//#pragma comment(lib, "opencv_superres246.lib")
#pragma comment(lib, "opencv_calib3d300.lib")
//#pragma comment(lib, "opencv_nonfree246.lib")
//#pragma comment(lib, "opencv_flann246.lib")

#endif

#include <iostream>
#include <string>

using namespace std;
using namespace cv;

struct cornerInfomation {
	float x;
	float y;
	float x3;
	float y3;
	float z3;
};

void printMatrix(Mat matrix, string name) {
	FILE* file;
	file = fopen(name.c_str(), "w");

	int i, j;
	printf("%s size %d %d \n", name.c_str(), matrix.cols, matrix.rows);

	for(i = 0; i < matrix.rows; i++) {
		for(j = 0; j < matrix.cols; j++) {
			fprintf(file, "%lf", matrix.at<double>(i, j)); // Returns a reference to the specified array element
		}
		fprintf(file, "\n");
	}
	fclose(file);
}

int main(int argc, char** argv)	{


	cout << "The Camera calibration program." << endl;
	cvFindChessboardCorners()

	waitKey(0);
	return 0;
}
