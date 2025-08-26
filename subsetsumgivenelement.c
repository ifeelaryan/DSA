// wap to find the subset whose sum is equal to the given element
// find the sum of all subsets of the array...

#include<stdio.h>
#include<math.h>
int main(){
    int n, target= 6;
    double allsum;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr [n];
    printf("Enter the elements of the array: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of the array are : ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    allsum = pow(2,n);
    for(int j = 0;j<allsum;j++){
    printf("The subsets of the given array are : %lf ",allsum);
    }

    return 0;
}