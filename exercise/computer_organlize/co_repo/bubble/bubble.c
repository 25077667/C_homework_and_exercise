void swap(int v[], int k) {
  int tmp = v[k];
  v[k] = v[k + 1];
  v[k + 1] = tmp;
}

void sort(int v[], int n) {
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - 1 - i; j++)
      if (v[j] > v[j + 1])
        swap(v, j);
}

int main() {
  int arr[10] = {61, 17, 29, 22, 34, 60, 72, 21, 50, 1};
  sort(arr, 10);
  return 0;
}
