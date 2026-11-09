//16 variant
#include <stdio.h>
#include <ctype.h>

int main()
{   
    char a;
    while((a = getchar()) != EOF)
    {
        if (islower(a))
        {
            putchar(toupper(a));
        }
        else if (isupper(a))
        {
            putchar(tolower(a));
        }
        else
        {
            putchar(a);
        }
        
    }
    return 0;
}