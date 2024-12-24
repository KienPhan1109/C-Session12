// * Xây dựng hàm kiểm tra số nguyên tố có 1 tham số, kết quả trả về là true nếu đối số truyền vào là số nguyên tố, là false nếu không phải. Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên từ bàn phím và gọi hàm với từng số để kiểm tra và in ra kết quả.
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

int main(){
    int a, b;
    printf("Nhập vào số thứ 1: ");
    scanf("%d", &a);
    printf("Nhập vào số thứ 2: ");
    scanf("%d", &b);
    if (isPrime(a))
    {
        printf("%d là số nguyên tố", a);
    }
    else
    {
        printf("%d không phải là số nguyên tố", a);
    }
    if (isPrime(b))
    {
        printf("\n%d là số nguyên tố", b);
    }
    else
    {
        printf("\n%d không phải là số nguyên tố", b);
    }
}