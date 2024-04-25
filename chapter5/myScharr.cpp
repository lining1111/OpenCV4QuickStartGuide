#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

const string basePath = "data/chapter5/";

int main() {
    //读取图像，黑白图像边缘检测结果较为明显
    Mat img = imread(basePath + "equalLena.png", IMREAD_ANYDEPTH);
    if (img.empty()) {
        cout << "请确认图像文件名称是否正确" << endl;
        return -1;
    }
    Mat resultX, resultY, resultXY;

    //X方向一阶边缘
    Scharr(img, resultX, CV_16S, 1, 0);
    convertScaleAbs(resultX, resultX);

    //Y方向一阶边缘
    Scharr(img, resultY, CV_16S, 0, 1);
    convertScaleAbs(resultY, resultY);

    //整幅图像的一阶边缘
    resultXY = resultX + resultY;

    //显示图像
    imshow("resultX", resultX);
    imshow("resultY", resultY);
    imshow("resultXY", resultXY);
    waitKey(0);
    return 0;
}
