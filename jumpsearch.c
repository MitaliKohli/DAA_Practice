#include<stdio.h>
#include<math.h>
#define max 50

int jumpsearch(int *a, int n, int key)
{
    int k=sqrt(n), m=0, i=0;

    while(m<=n)
    {
        m=i*k;

        if(a[m]==key)
        return m;

        if(a[m]>key)
        {
            for(int j=((i-1)*k); j<(i*k); j++)
            {
                if(j<0)
                return -1;

                if(a[j]==key)
                return j;
            }
            return -1;
        }
        i++;
    }
    return -1;
}

int main()
{
    int a[max], n, key, jump;

    printf("Input n: ");
    scanf("%d", &n);

    printf("Input element: ");
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("Input key: ");
    scanf("%d", &key);

    jump=jumpsearch(a, n, key);

    if(jump!=-1)
    printf("Element found at %d.", jump);

    else
    printf("Not found");
}