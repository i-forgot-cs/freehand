#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Unable to open the webcam.\n";
        return 1;
    }

    cv::namedWindow("Hand Tracking", cv::WINDOW_NORMAL);

    while (true) {
        cv::Mat frame;
        if (!cap.read(frame)) {
            break;
        }

        cv::flip(frame, frame, 1);
        cv::Mat rgb;
        cv::cvtColor(frame, rgb, cv::COLOR_BGR2RGB);

        // This is the C++ equivalent of the camera loop from the Python version.
        // Replace this section with MediaPipe C++ hand-landmark processing when the SDK is available.
        cv::imshow("Hand Tracking", frame);

        if (cv::waitKey(1) == 'q') {
            break;
        }
    }

    cap.release();
    cv::destroyAllWindows();
    return 0;
}
