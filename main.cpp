#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;


#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv)
{
VideoCapture cap;
if (argc > 1)
cap.open(argv[1]);
else
cap.open(0);

if (!cap.isOpened())
{
	std::cerr << "Cannot read video. Try moving video file to sample directory." << std::endl;
	return -1;
}

namedWindow("FG Segmentation", WINDOW_NORMAL);

Mat frame,segm;
for (;;)
{
	cap >> frame;
	if (frame.empty())
		break;
	frame.copyTo(segm);

	imshow("FG Segmentation", segm);


	int c = waitKey(30);
	if (c == 'q' || c == 'Q' || (c & 255) == 27)
		break;
}


return 0;
}
