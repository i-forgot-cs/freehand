# freehand C++ version

This project provides a C++ starting point for a webcam-based hand-tracking app.

## Build on Windows

1. Install CMake and a C++ compiler (MSVC, MinGW, or Clang).
2. Install OpenCV.
3. From the project root, run:

```powershell
cmake -S . -B build
cmake --build build --config Release
```

4. Run the executable:

```powershell
./build/Release/freehand.exe
```

## Notes

The current version mirrors the webcam capture loop from the original Python script. To add full hand-landmark detection, you would integrate the MediaPipe C++ SDK or swap in another C++ detector.
