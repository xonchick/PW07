//22 variant фу-я обратного числа(ревёрс цифр)
#include <stdio.h>

int func(int a, int s)
{
    if (a==0)
    {
        return s;
    }
    return func(a/10,(s*10)+(a%10));

}


int main()
{
    int a;
    int s=0;
    scanf("%d", &a);

    printf("%d\n", func(a,s));
    

    while(a>0)
    {   
        s=(s*10)+(a%10);
        a=a/10;

    }
    printf("%d\n",s);
}
