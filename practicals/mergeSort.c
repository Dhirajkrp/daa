#include <stdio.h>
#include <conio.h>
#include <time.h>
#include<stdlib.h>

void Merge(int a[],int low, int mid, int high){
    int i,j,k,b[20];
    i=low, j=mid+1, k = low;
    
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++]= a[j++];
        }
    }
        while(i<=mid){
            b[k++] = a[i++];
    }      
        while(j<=high){
            b[k++]=a[j++];
    } 
        for(k=low;k<=high;k++){
            a[k]=b[k];
        }
}

void MergeSort(int a[],int low, int high){
    int mid;
    if(low>=high){
        return;
    }
    
    mid=(low+high)/2;
    MergeSort(a, low, mid);
    MergeSort(a, mid+1, high);
    Merge(a, low, mid, high);
}

int main(){
    int n, a[2000], k;
    clock_t st, et;
    double ts;
    
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nThe Random Numbers are: \n");
    for(k=1;k<=n;k++){
        a[k]=rand();
        printf("%d\t", a[k]);
    }
    
    st = clock();
    MergeSort(a, 1 , n);
    et = clock();
    ts= (double)(et-st)/CLOCKS_PER_SEC;
    
    printf("\n\nThe Sorted Numbers are: \n");
    for(k=1;k<=n;k++){
        printf("%d\t", a[k]);
    }
    printf("\n\nThe time taken is: %e", ts);
    getch();
    return 0;
    
}
