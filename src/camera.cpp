class Camera {
public:
    Camera(int index = 0);

    bool open();

    bool getFrame(cv::Mat& frame);

private:
    cv::VideoCapture cap;
};