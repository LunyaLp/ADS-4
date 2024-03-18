// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int a = 0;
  for (int k = 0; k < len; k++) {
    for (int l = 0; l < len; l++) {
      if (arr[k] + arr[l] == value) {
        a++;
      }
    }
  }
  return a;
}
int countPairs2(int *arr, int len, int value) {
  int counter = 0;
  int leftgran = 0;
  int rightgran = len - 1;
  while (leftgran <= rightgran) {
    if ((arr[leftgran] + arr[rightgran]) == value) {
      counter++;
      leftgran++;
      rightgran--;
    } else if ((arr[leftgran] + arr[rightgran]) < value) {
      leftgran++;
    } else {
      rightgran--;
    }
  }
  return counter;
}
int countPairs3(int *arr, int len, int value) {
  int a = 0;
  for (int i = 0; i < len; i++) {
    int left = i + 1;
    int right = len - 1;
    int perem = value - arr[i];
    while (left <= right) {
      int middle = left + (right - left) / 2;
      if (arr[middle] == perem) {
        a++;
        break;
      } else if (arr[middle] < perem) {
        left = middle + 1;
      } else {
        right = middle - 1;
      }
    }
  }
  return a;
}
