// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);\
  int l=0;
  int r=n-1;
  int x;
  printf("Enter the Number you want to search:");
  scanf("%d",&x);
  int result = binarySearch(array, x, l,r);
  if (result == -1)
    printf("Not found\n");
  else
    printf("Element is found at index %d\n", result);
  return 0;
}

