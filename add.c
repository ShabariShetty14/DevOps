#include<stdio.h>
int main()

{
    int x,y;
    int arr[20];
    printf("enter the number x & y ");
    scanf("%d%d",&x,&y);
    int sum =x+y;
    printf("%d",sum);
    printf("Enter the array elements: ");
    for(int i =0;i<5;i++)
        {
    scanf("%d",arr[i]);
        }
    printf("%d",arr);

    
    return 0;
}
