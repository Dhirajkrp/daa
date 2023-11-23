#include <stdio.h> 
#include <stdlib.h>


void merge(int arr[] , int low , int high){

    int mid = (high + low)/2;

    int i , j,k;
    int n = (mid - low) +1;
    int m = high - mid;


    int Left[n], Right[m];

    //copy values in the left and right array.

    for(int i=0 ; i< n ; i++){
        Left[i] = arr[low + i];
    }

    for(int i=0 ; i< n ; i++){
        Right[i] = arr[mid +  1 + i];
    }

    i=0 , j=0, k = low;

    while(i < n && j < m){
        if(Left[i] <= Right[j]){
            arr[k] = Left[i];
            i++;
        } else {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    while(i < n){
        arr[k] = Left[i];
        i++;
        k++;
    }

    while(j < m){
        arr[k] = Right[j];
        j++;
        k++;
    }
    

}


void mergeSort(int arr[]  ,int low, int high ){
    if(low < high){

        int mid = (high+low)/2;

        mergeSort(arr, low , mid);
        mergeSort(arr, mid +1 , high);

        merge(arr, low, high);
    }
}

int main(){

    int arr[] = {4,7,1,12,42,17,5,9};
    printf("\n The  array is \n");
    
    for(int i=0; i < 8 ; i++){
        printf(" %d ", arr[i]);
    }

    mergeSort(arr, 0, 7);

    printf("\n The sorted array is \n");
    for(int i=0; i < 8 ; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}