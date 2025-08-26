// print the element of an array in reverse order

#include<stdio.h>
int main(){
    int arr[5] = {1,4,8,2,6};
    int i , j, temp;
    for(i =0,j=4;i<j;i++,j--){
        ( temp  = arr [i]);
        (arr[i] = arr [j] );
        (arr[j] = temp);
    }

    printf("Reverse of the array is : ");
    for(i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }


    
    return 0;
}