#include <iostream>
#include <opencv2/highgui.hpp>

int main()
{
    cv::Mat img = cv::imread("me_putih.png");

    cv::imshow("Window", img);

    cv::waitKey(1000);

}