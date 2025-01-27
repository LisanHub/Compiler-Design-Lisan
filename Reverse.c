#include <stdio.h>
void main() {
    int arr[100],n,temp;
    printf("Number of inputs:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");

    for(int j=0; j<n; j++){
    for(int i=0;i<n-1;i++){
    if (arr[i]<arr[i+1]){
        temp= arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }

    }

    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    getch();
}

