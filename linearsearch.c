#include<stdio.h>
#define max 50

int linearsearch(int *a, int x, int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, a[max], x, f=-1;

    printf("Input no. of elements: ");
    scanf("%d", &n);

    printf("Input elements: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("Input element to search: ");
    scanf("%d", &x);

    f= linearsearch(a, x, n);

    if(f==-1)
    printf("Element not found.");

    else
    printf("Element found at %d position.", f);

    return 0;
}