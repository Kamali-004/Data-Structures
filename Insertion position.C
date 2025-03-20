#include<stdio.h>
int main()
{
    int n , i;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("Existing array:\n");
    for(i = 0; i<n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    int a;
    printf("Enter new element:");
    scanf("%d ",&a);
    int pos;
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1)
    {
        printf("Invalid position");
        return 1;
    }
    for(i = n; i>= pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = a;
    n++;
    printf("After inserting elements:");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
