#include <stdio.h>

int sum (int a, int b){
    int tong = a + b;
    return tong;
}

int main(){
    int a = 5, b = 10;
    sum(a, b);
    printf("%d", sum(a, b));
}