#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i<n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    
    int a;
    scanf("%d",&a);
    arr[n] = a;
    n++;
    printf("Inserting at end:\n");
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int b;
    scanf("%d",&b);
    printf("\nInserting at beginning:\n");
    for(i = n; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = b;
    n++;
    for(i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
