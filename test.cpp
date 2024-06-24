#include "EdgesSubPix.h"
#include <opencv2/opencv.hpp>

int main()
{
    /* src为原图 */
    if (src.channels() != 1)
    {
        cv::cvtColor(src, src, cv::COLOR_BGR2GRAY);
    }

    std::vector<Contour> contours; // 轮廓点集
    int low = 20;                  // 示意值
    int high = 40;                 // 示意值
    double alpha = 1.0;            // 示意值
    EdgesSubPix(src, alpha, low, high, contours);
}