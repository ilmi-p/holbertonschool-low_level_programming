#include <stdio.h>

int main(void)
{
    int n;

    if (n > 0)
    {
        printf(" is positive\n",n);
    }
    else if (n == 0)
    {
        printf(" is zero\n",n);
    }
    else
    {
        printf(" is negative\n",n);
    }

    return 0;
}
