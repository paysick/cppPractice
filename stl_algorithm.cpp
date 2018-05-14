#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <numeric>

void PrintArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << "\t";
  }
  std::cout << "\n\n";
}

int main()
{
  int arr[] = {2, 4, 6, 2, 1, 7, 5, 3};
  int arrSize = sizeof(arr) / sizeof(arr[0]);

  PrintArr(arr, arrSize);

  // std::sort(arr, arr + arrSize);
  // PrintArr(arr, arrSize);

  // std::string searchTerm;
  // std::cin >> searchTerm;
  // std::stringstream ss(searchTerm);
  // int searchInt;
  // ss >> searchInt;
  // if (std::binary_search(arr, arr + arrSize, searchInt))
  // {
  //   std::cout << "Element in the array" << std::endl;
  // }
  // else
  // {
  //   std::cout << "Element not in the array" << std::endl;
  // }

  int *maxEl = std::max_element(arr, arr + arrSize);
  std::cout << "Max Element: " << *maxEl << std::endl;

  int *minEl = std::min_element(arr, arr + arrSize);
  std::cout << "Min Element: " << *minEl << std::endl;

  int sum = std::accumulate(arr, arr + arrSize, 0);
  std::cout << "Total: " << sum << std::endl;

  int countOf2 = std::count(arr, arr + arrSize, 2);
  std::cout << "Count of 2: " << countOf2 << std::endl;

  int *find_6 = std::find(arr, arr + arrSize, 6);
  std::cout << "Found: " << *find_6 << std::endl;

  return 0;
}