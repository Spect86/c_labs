#include <stdio.h>

void fun1(int a, int b) {
    float del1 = a / 10;
    int c = (int) del1;
    int d = a - c*10;
    int sum = c + d;
    
    if (sum > b)
        printf("Summa cifr chisla а = %d\n", sum);
    else if (sum < b)
        printf("Summa cifr а i chisla b = %d\n", sum + b);
    else
        printf("Summa cifr а = b = %d\n", b);
}

void fun2(int a, int b) {
    if (a > b){
        printf("Chislo а = %d\n", a);
    }
    else if (a < b)
        printf("Summa cifr а i chisla b = %d\n", a + b);
    else
        printf("Summa cifr а = b = %d\n", b);
}

int main()
{
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    if (a >= 10 && a <= 99)
        fun1(a, b);
    else if (a <= -10 && a >= -99)
        fun1(a, b);
    else
        fun2(a, b);
    
    return 0;
}