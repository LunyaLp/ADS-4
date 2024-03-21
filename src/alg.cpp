// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int counter = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        counter++;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  int counter = 0;
  for (int i = 0; i < len; ++i) {
    for (int j = i + 1; j < len; --j) {
      if (value == (arr[i] + arr[j])) {
        counter++;
      }
    }
  }
  return count;
}
int countPairs3(int *arr, int len, int value) {
  int i, j, temp;
  for (i = 1; i < len; i++) {
    j = i;
    temp = arr[i];
    while (j > 0 && temp < arr[j - 1]) {
      arr[j] = arr[j - 1];
      j--;
    }
    arr[j] = temp;
  }
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
    }
  }
  return count;
}
