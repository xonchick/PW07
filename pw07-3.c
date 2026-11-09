//12 variant
#include <stdio.h>

double func(double a, double b)
{   
    double suma, z;
    suma = a+b;
    if (a>b)
    {
        z = a-b;
    }
    else
    {
        z = b-a;
    }
    return (z/suma);
}

int main()
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
    printf("Модуль разности делённый на сумму: %.4lf\n", func(a,b));
    }
}
