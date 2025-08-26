// find the sum of all subsets of the array...

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double sum = 0,allsum;
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
    for(int i =0;i<n;i++){
        sum += arr[i];
    }
     allsum = sum*pow(2,n-1);// sum*(2^n-1)
    printf("\nSum of all subset of an array is: %lf ",allsum);

    

    return 0;
}