#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int, char**) {

    string image_path="/Users/liubo/vscodeProjects/cmakequickstart/images/dog.jpg";
    Mat image = imread(image_path,IMREAD_COLOR);
    imshow("img",image);
    waitKey();
}
