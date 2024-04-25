//
// Created by lining on 2024/4/25.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


const string basePath = "data/chapter1/";

int main(int argc, char **argv) {
    Mat img = imread(basePath + "lena.png");
    if (!img.data) {
        cout << "read image error" << endl;
        return -1;
    }
    //打印下图片信息
    cout << "image info: " << endl;
    cout << "image channels: " << img.channels() << endl;
    cout << "image depth: " << img.depth() << endl;
    cout << "image rows: " << img.rows << endl;
    cout << "image cols: " << img.cols << endl;

    //显示图片
    imshow("lena", img);

    waitKey(0);

    return 0;
}