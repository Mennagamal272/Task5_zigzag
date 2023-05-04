#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[]){
    int temp;
    for(int i =0 ; i < sizeof(arr);i++){
        for(int j = 0 ;j < sizeof(arr) ;j++)
           if(arr[i] < arr[j]){
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }}
for(int i =0;i<sizeof(arr);i++){printf("%d ",arr[i]);}
printf("\n");
}
int main()
{   int num ;
    int arr []= {4,5,6,3,2,0,7,9};
    selection_sort(arr);
    return 0;
}
