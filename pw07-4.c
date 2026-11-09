//18 variant
#include <stdio.h>

void func(int *a, int *b) //благодаря * переменные изменятся прям в основной функции, тк функция приняла указатели на переменные
{
    if (*a==0 || *b==0)
    {
        *a=0;
        *b=0;
    }
    if (*a>*b)
    {   

        *a = *a%*b;
        *b = *a;
    }

    if (*a<*b)
    {   

        *a = *b%*a;
        *b = *a;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Исходные значения: %d %d\n", a, b);
    func(&a, &b);
    printf("Изменённые значения: %d %d\n", a, b);

    return 0;
}