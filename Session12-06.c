// * Xây dựng hàm kiểm tra số hoàn hảo có 1 tham số, kết quả trả về là true nếu đối số truyền vào là số hoàn hảo, là false nếu không phải. Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên từ bàn phím và gọi hàm với từng số để kiểm tra và in ra kết quả.
#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int a, b;
    printf("Nhập vào số thứ 1: ");
    scanf("%d", &a);
    printf("Nhập vào số thứ 2: ");
    scanf("%d", &b);
    if (isPerfectNumber(a))
    {
        printf("%d là số hoàn hảo", a);
    }
    else
    {
        printf("%d không phải là số hoàn hảo", a);
    }
    if (isPerfectNumber(b))
    {
        printf("\n%d là số hoàn hảo", b);
    }
    else
    {
        printf("\n%d không phải là số hoàn hảo", b);
    }
}