#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int arr[]){
   int i, j, temp;
   for (i = 0; i < sizeof(arr)-1; i++) {       
       for (j = 0; j < sizeof(arr)-i-1; j++) {
           if (arr[j] > arr[j+1]) {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;}}
   }
for(int i =0;i<sizeof(arr);i++){printf("%d ",arr[i]);}
printf("\n");
}
int main()
{   int num ;
    int arr []= {4,5,6,3,2,0,9,7};
    bubble_sort(arr);
    return 0;
}
