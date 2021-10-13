#include <stdio.h>

int main()
{
    int a, b, even;
    printf("Enter the First Number and Second number \n");
    scanf("%d%d", &a, &b);
    while(a < b)
    {
        even=0;
        if(a<=0)
        {
            ++a;
            continue;
        }
    
        for (int i = 2; i < a / 2; i++)
        {
            if (a % i == 0)
            {
                even = 1;
                break;
            }
        }
        if (even== 0)
        {
            printf("%d  ", a);
        }
      a++;
    }
}
