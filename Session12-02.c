#include <stdio.h>

void mang(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);
    mang(a, n);
}