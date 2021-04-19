#include "map.h"

#include <string>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace cv;

void try1(){
    auto map = imread("./source/map.png");
    auto image = imread("./source/example.jpg");

    for (int i = 0; i < image.rows; ++i) {
        for (int j = 0; j < image.cols; ++j) {
            auto &pixel = image.at<Vec3b>(i, j);

            for (int k = 0; k < image.channels(); ++k) {
                auto filtered_pixel = map.at<Vec3b>(abs(image.channels() - (k + 1)), pixel[k]);
                pixel[k] = filtered_pixel[k];
            }
        }
    }

    imwrite("./source/1.png", image);
}

void try2(){
    auto image = imread("./source/example.jpg");

    for (int i = 0; i < image.rows; ++i) {
        for (int j = 0; j < image.cols; ++j) {
            auto &pixel = image.at<Vec3b>(i, j);

            for (int k = 0; k < image.channels(); ++k) {
                auto filtered_pixel = prepared_map[abs(image.channels() - (k + 1))][pixel[k]];
                pixel[k] = filtered_pixel[k];
            }
        }
    }

    imwrite("./source/2.png", image);
}

int main(int argc, char **argv) {

    try1();

    try2();

    return 0;
}
