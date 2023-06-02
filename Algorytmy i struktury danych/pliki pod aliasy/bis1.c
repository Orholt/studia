int binarySearch(int * array, int l, int r, int needle) {
    
    while (l <= r) {
        int m = l + (r - l) / 2;