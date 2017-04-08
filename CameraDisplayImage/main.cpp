#include<opencv2/core/core.hpp>
#include<opencv2/opencv.hpp>  
#include<iostream>  
 
using namespace std;  
using namespace cv;  
  
int main(int argc,char **argv)  
{  
    VideoCapture capture(0);  
    namedWindow("opencv_image",CV_WINDOW_AUTOSIZE);  
  while(1)
    {     
        Mat frame;  
        capture>>frame;

		if(! frame.data )                            
		{

		cout <<  "没有数据" << std::endl ;

		return -1;

		}  


        imshow("opencv_image",frame);  
        waitKey(30);  
    }  
    return 0;  
}  
