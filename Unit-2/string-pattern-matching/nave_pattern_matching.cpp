#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void search(char* pat , char* txt){
    int m = strlen(pat);
    int n = strlen(txt);

    printf("the length of pattern is: %d \n" , m);
    printf("the length of text is: %d \n" , n);


    for(int i= 0; i <=n-m ; i++){
        int j;
        for( j = 0; j < m; j++){
            if(txt[i+j] != pat[j]) 
                break;
        }

        if(j==m){
            printf("pattern found at index %d \n" , i);
        }
    }
}

int main(){

    char pat[] = "ab";
    char txt[] = "ababacb";


    search(pat, txt);

    return 0;
}