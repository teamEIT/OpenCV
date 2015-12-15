#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/objdetect/objdetect.hpp"

#include <iostream>
#include <string>

using namespace std;
using namespace cv;

/** Function Headers*/
void detectAndDisplay(Mat frame);

int main(int argc, char** argv)	{

	cout << "Chuong trinh dieu khien do sang va do tuong phan." << endl;
	string imageName("bw.jpg");
	string windowName("Original image");

	waitKey(0);
	return 0;
}
