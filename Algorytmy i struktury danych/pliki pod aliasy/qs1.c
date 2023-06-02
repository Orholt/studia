int* quickSort(int* array, int low, int high) {
  
  if (low < high) {
    int pi = partition(array, low, high);