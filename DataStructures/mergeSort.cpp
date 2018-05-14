#include <iostream>

void mergeSort(int *arr, int i, int j);

int main()
{
  int arr[] = {4, 6, 2, 1, 7, 4, 7, 3, 2};
  int size = sizeof(arr) / sizeof(int);

  mergeSort(arr, 0, size - 1);

  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }
  return 0;
}

void mergeSort(int *arr, int i, int j)
{
  if (i < j)
  {
    mergeSort(arr, i, i + ((j - i) / 2));
    mergeSort(arr, i + ((j - i) / 2) + 1, j);
  }
  else if (i == j)
  {
    return;
  }

  int m = 0;
  int arr1Size = ((j - i) / 2) + 1;
  int L[arr1Size];
  for (int k = 0, l = i; l <= i + ((j - i) / 2); k++, l++)
  {
    L[k] = arr[l];
  }

  int n = 0;
  int arr2Size = (j - i) / 2;
  int R[arr2Size];
  for (int k = 0, l = i + ((j - i) / 2) + 1; l <= j; k++, l++)
  {
    R[k] = arr[l];
  }

  int k = i;

  while (m < arr1Size && n < arr2Size)
  {
    if (L[m] <= R[n])
    {
      arr[k] = L[m];
      k += 1;
      m += 1;
    }
    else
    {
      arr[k] = R[n];
      k += 1;
      n += 1;
    }
  }

  if (m < arr1Size - 1)
  {
    while (m < arr1Size)
    {
      arr[k] = L[m];
      k++;
      m++;
    }
  }
  else if (n < arr2Size - 1)
  {
    while (n < arr2Size)
    {
      arr[k] = R[n];
      k++;
      n++;
    }
  }
}
