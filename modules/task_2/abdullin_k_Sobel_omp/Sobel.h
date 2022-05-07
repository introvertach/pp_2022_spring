// Copyright 2022 Abdullin Konstantin
#ifndef MODULES_TASK_2_ABDULLIN_K_SOBEL_OMP_SOBEL_H_
#define MODULES_TASK_2_ABDULLIN_K_SOBEL_OMP_SOBEL_H_

#include <vector>
#include <random>
#include <ctime>

std::vector<int> InitRandMatrix(int height, int width);
template <class T>
T clamp(T value, T max, T min) {
  if (value > max)
    return max;
  if (value < min)
    return min;
  return value;
}
int Index(int x, int y, int height);
int CalculatePixelValue(std::vector<int> source,
  int height, int width, int x, int y);
std::vector<int> SequentialSobelFilter(std::vector<int> source,
  int height, int width);
std::vector<int> ParallelSobelFilter(std::vector<int> source,
  int height, int width, int num_threads);

#endif  // MODULES_TASK_2_ABDULLIN_K_SOBEL_OMP_SOBEL_H_