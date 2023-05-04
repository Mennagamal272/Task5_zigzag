#include <stdio.h>
#include <stdlib.h>

void binary_search(int arr[],int left , int right,int num){
    int temp;
    for(int i =0 ; i < sizeof(arr);i++){
        for(int j = 0 ;j < sizeof(arr) ;j++)
           if(arr[i] < arr[j]){
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }}
     while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num)
            return printf("element found at position after sort %d",mid);
        else if (arr[mid] < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
return printf("element is not present in the array");
}
int main()
{   int num ;
    int arr []= {4,5,6,3,2,0,7,9};
    printf("enter element : ");
    scanf("%d",&num);
    binary_search(arr,0,sizeof(arr)-1,num);
    return 0;
}
