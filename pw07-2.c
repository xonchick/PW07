//6 вариант
#include <stdio.h>


int main()
{
    int pre = 0;
    int obrabot =0;
    char a;
    while((a = getchar()) != EOF)
    {
        obrabot++;
        if (a == '.' || a == '!' || a == '?')
        {
            pre++;
        }

    } 
    printf("Кол-во предложений: %d\n", pre);
    printf("Обзее кол-во обработанных символов: %d\n", obrabot);



}