#include<stdio.h>
void main()
{
    int n,i,a[10];
    printf("Enter number of element you want in array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    }

    printf("array elements are:");
    for(i=0; i<n; i++){
    printf("%d\n", a[i]);
    }

     for(i=0; i<n-1; i++){
        a[i]=a[i+1];
    }

    printf("array after delete the element:");
    for(i=0; i<n-1; i++){
        printf("%d\n", a[i]);
    }
}

