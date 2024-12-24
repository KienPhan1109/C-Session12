// * Xây dựng hàm có tham số là một số nguyên bất kỳ, kết quả trả về là giai thừa của đối số truyền vào
#include <stdio.h>

int giaiThua(int n){
    int kq = 1, i = 1;
    while (i <= n) {
        kq *= i;
        i++;
    }
    return kq;
}

int main(){
    int n = 5;
    giaiThua(n);
    printf("%d", giaiThua(n)); 
}