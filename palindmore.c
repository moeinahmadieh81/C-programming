#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, reversedN = 0, originalN, reminder;
    scanf("%d", &n);
    originalN = n;

    while(n != 0)
    {
        reminder = n % 10;
        reversedN = reversedN * 10 + reminder;
        n /= 10;
    }
    if(reversedN == originalN)
        printf("%d is paldimore", originalN);
    else
        printf("%d is not paldimore", originalN);
}
