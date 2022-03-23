#include<stdio.h>
#define max 50

int main()
{
    int a[max], n, i, r;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Enter Max Value: ");
    scanf("%d", &r);

    int s[n], c[r+1];

    printf("Input elements: ");
    for( i=0; i<n; i++)
    scanf("%d", &a[i]);

    for(int i=0; i<r+1 ; i++)
    {
        c[i]=0;
    }

    for(int i=0; i<n; i++)
    {
        c[a[i]] = c[a[i]] + 1;
    }

    for(int i=1; i<r+1; i++)
    {
        c[i]=c[i]+c[i-1];
    }

    for(int i=0; i<n; i++)
    {
        c[a[i]] = c[a[i]] - 1;
        s[c[a[i]]] = a[i];
    }

    printf("Sorted array is: ");
    for(int i=0; i<n; i++)
    printf("%d ", s[i]);
}