#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <zbar.h>

using namespace cv;
using namespace std;

const string basePath = "data/chapter7/";

int main(int argc, char **argv) {
    Mat img = imread(basePath + "qrcode2.png");

    Mat gray, qrcode_bin;
    cvtColor(img, gray, COLOR_BGR2GRAY);
    zbar::ImageScanner scanner;
    scanner.set_config(zbar::ZBAR_NONE, zbar::ZBAR_CFG_ENABLE, 1);
    zbar::Image imageZbar(gray.cols, gray.rows, "Y800", gray.data, gray.cols * gray.rows);
    scanner.scan(imageZbar);//扫描条码
    zbar::Image::SymbolIterator symbol = imageZbar.symbol_begin();
    if (symbol == imageZbar.symbol_end()) {
        cout << "no barcode detected" << endl;
    }

    for (; symbol != imageZbar.symbol_end(); ++symbol) {
        cout << "decoded " << symbol->get_type_name() << " symbol \"" << symbol->get_data() << '"' << endl;
    }
    imshow("img", img);

    waitKey(0);

    return 0;
}
