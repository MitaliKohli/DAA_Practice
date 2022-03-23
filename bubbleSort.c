#include<stdio.h>
#define max 50

void bubbleSort(int a[], int n)
{
    int temp;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n-i-1); j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[max], n;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Input elements: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    bubbleSort(a, n);

    printf("Sorted array: ");
    for(int i=0; i<n; i++)
    printf("%d ", a[i]);
}