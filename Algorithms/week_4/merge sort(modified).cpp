#include <bits/stdc++.h>
using namespace std;

long long get_inversions(int a[], int b[], int left, int mid, int right) {
    int  i = left, j = mid, k = left;
    long long inv_count = 0;
    while (i <=mid-1 && j <= right) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            inv_count += mid - i;
            j++;
        }
        k++;
    }
    while (i <= mid - 1) {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= right) {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = left; i <= right; i++) {
        a[i] = b[i];
    }
    return inv_count;
}

long long merge_sort(int a[],int b[], int  left, int right) {
    long long inv_count = 0;
    if (right <= left) return inv_count;
    int  ave = left + (right - left) / 2;
    inv_count += merge_sort(a, b, left, ave);
    inv_count += merge_sort(a, b, ave + 1, right);
    inv_count += get_inversions(a, b, left, ave + 1, right);
    return inv_count;
}

int main() {
    int n;
    cin >> n;
    int a[n+1],b[n+1];
    for (int i = 0; i <n; i++) {
    cin >> a[i];
    }

    cout << merge_sort(a, b, 0,n- 1) << '\n';
}
