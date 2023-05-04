#include <stdio.h>
#include <stdlib.h>

void linear_search(int arr[] , int num){
for(int i =0 ; i< sizeof(arr) ; i++)
if( arr [i] == num)
    return printf("element found at position %d",i);

return printf("element is not present in the array");
}
int main()
{   int num ;
    int arr []= {4,5,6,3,2,0,7,9};
    printf("enter element : ");
    scanf("%d",&num);
    binear_search(arr,0,sizeof(arr)-1,num);
    return 0;
}
