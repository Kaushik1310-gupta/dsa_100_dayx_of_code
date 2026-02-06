#include <stdio.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
}

int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};

    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }

    return 0;
}