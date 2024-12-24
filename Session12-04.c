// * Xây dựng hàm có tham số là một mảng số nguyên bất kỳ, kết quả trả về là số lớn nhất trong mảng truyền vào.
#include <stdio.h>

int maxNumber(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={1, 2, 3, 4, 5};
}