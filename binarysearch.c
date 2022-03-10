#include<stdio.h>
#define max 50

int binarysearch(int *a, int l, int r, int x)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;

        if(a[mid]==x)
        return mid;

        else if(a[mid]>x)
        r=mid-1;

        else
        l=mid+1;
    }

    return -1;
}

int main()
{
    int a[max], n, f=-1, x, l, r;

    printf("Input n: ");
    scanf("%d", &n);

    l=0; r=n-1;

    printf("Input elements: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("Input element to search: ");
    scanf("%d", &x);

    f=binarysearch(a, l, r, x);

    if(f==-1)
    printf("Element not found.");

    else
    printf("Element found at %d position.", f);

}