#include <stdio.h>

int main()
{
    int a=111260355;
    int k=14;
    printf("VAR 7.1: %d\n", ((a%30) +1));
    printf("VAR 7.2: %d\n", (((a + (k+6))%30) +1));
    printf("VAR 7.3: %d\n", (((a + (k+12))%30) +1));
    printf("VAR 7.4: %d\n", (((a + (k+18))%30) +1));
    printf("VAR 7.5: %d\n", (((a + (k+22))%30) +1));
    return 0;

}