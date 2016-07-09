#include <stdio.h>
int main()
{
    int n1, n2, i, flag=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    while (n1 < n2)
    {
         for(i=2; i<=n1/2; ++i)
        {
            if(n1%i == 0)
            {
                flag=1;
                break;
            }
        }
            if (flag == 0)
            printf("%d ",n1);
            ++n1;
    }
}
