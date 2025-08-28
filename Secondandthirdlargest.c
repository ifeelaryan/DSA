#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Second largest: %d\n", arr[1]);
    printf("Third largest: %d\n", arr[2]);

    return 0;
}
