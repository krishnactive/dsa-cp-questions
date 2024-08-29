#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    // Load the image
    Mat image = imread("input.jpg", IMREAD_COLOR);

    // Check if the image is loaded successfully
    if (image.empty())
    {
        std::cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    // Set the JPEG compression parameters
    std::vector<int> compression_params;
    compression_params.push_back(IMWRITE_JPEG_QUALITY);
    compression_params.push_back(80); // JPEG quality (0-100)

    // Compress the image to a JPEG file
    imwrite("output.jpg", image, compression_params);

    std::cout << "Image compressed successfully" << std::endl;

    return 0;
}
