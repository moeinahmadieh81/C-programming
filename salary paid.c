#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    double salary;
    scanf("%d", &m);
    scanf("%d", &h);
    while(h != -1)
    {
        salary = h * m;
        printf("%.2lf\n", salary);
        scanf("%d", &m);
        scanf("%d", &h);
        if(h == -1)
            break;
    }


    return 0;
}
