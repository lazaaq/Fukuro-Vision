//#include "opencv2/opencv.hpp"

//using namespace cv;

//int main(int, char**)
//{
//  Mat img = imread("tree.jpg", IMREAD_COLOR);
//  namedWindow("Image", 1);

//  imshow("Image", img);
//  waitKey(0);
//  return 0;
//}
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
    std::string image_path = "ya.png";
    Mat img = imread(image_path, IMREAD_COLOR);
//    if(img.empty())
//    {
//        std::cout << "Could not read the image: " << image_path << std::endl;
//        return 1;
//    }
    imshow("Display window", img);
    int k = waitKey(0); // Wait for a keystroke in the window
    if(k == 's')
    {
        imwrite("starry_night.png", img);
    }
    return 0;
}
