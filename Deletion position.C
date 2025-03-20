#include <stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    printf("Current array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }
    int delete_index;
    scanf("%d",&delete_index);
    for(i = delete_index; i<n; i++)
    {
        arr[i] = arr[i + 1];
        n--;
    }
    printf("After deletion:");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
