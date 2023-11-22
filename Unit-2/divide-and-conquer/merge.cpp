//function to merge two sorted arrays.

#include <stdio.h>
#include <stdlib.h>

void merge(int arr1[], int arr2[] , int size_of_arr1 , int size_of_arr2 ){

    int i=0 , j=0, k=0;
    int arr3[size_of_arr1 + size_of_arr2];

    while(i < size_of_arr1 && j < size_of_arr2) {
        
        if( arr1[i] <= arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];

            j++;
        }
        k++;
    }

    while(i< size_of_arr1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j< size_of_arr2) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    printf("\nThe merged array is :\n");

    for(int i=0 ; i <k ;i++) {
        printf("%d " , arr3[i]);
    }

}



int main(){

    int arr1[] = {2,4,8,21};
    int arr2[] = {3,5,6,41};

    merge(arr1 , arr2 , 4,4);
 
    return 0;
}