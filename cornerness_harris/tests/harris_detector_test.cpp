#include <iostream>
#include <gtest/gtest.h>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
float rawPixels[9] = {0, 100, 0,
                                 0, 100, 0,
                                 0, 0, 0};

class HarrisTest: public testing::Test{
    protected:
    shared_ptr<cv::Mat> getTestImage(){
        shared_ptr<cv::Mat> testImage = make_shared<cv::Mat>(cv::Size(3, 3),CV_32F,rawPixels);
        return testImage;
    }

    void showImage(cv::Mat image, string windowName){
        cv::namedWindow(windowName, cv::WINDOW_NORMAL); // create window
        cv::imshow(windowName, image);
        cv::waitKey(0); // wait for keyboard input before continuing
    }

    void printImage(cv::Mat image){
        cout <<image <<endl;
    }
};

TEST_F(HarrisTest,VerticalLine){
    //::Mat I(cv::Size(3, 3),CV_8U,cv::Scalar::all(0));
    auto I = getTestImage();
            printImage(*I);
    showImage(*I,"hello");
    EXPECT_EQ(1,1);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}