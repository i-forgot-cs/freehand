#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    Camera camera;
    HandTracker tracker;
    Renderer renderer;

    while (camera.getFrame(frame))
    {
    tracker.process(frame);

    renderer.draw(frame, tracker);

    cv::imshow("FreeHand", frame);
    }
}
