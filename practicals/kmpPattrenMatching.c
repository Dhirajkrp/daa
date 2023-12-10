#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void computeLPSArray(char *pat,int M,int *lps)
{
    int len=0;
    int i;
    lps[0]=0;
    i=1;
    while(i<M)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}

void KMPSearch(char *pat,char *txt)
{
    int M=strlen(pat);
    int N=strlen(txt);
    int *lps=(int*)malloc(sizeof(int)*M);
    int j=0;
    computeLPSArray(pat,M,lps);
    int i=0;
    while(i<N)
    {
        if(pat[j]==txt[i])
        {
            j++;
            i++;
        }
        if(j==M)
        {
            printf("Pattern found at index %d \n",i-j);
            j=lps[j-1];
        }
        else if(i<N && pat[j]!=txt[i])
        {
            if(j!=0)
            {
                j=lps[j-1];
            }
            else
            {
                i=i+1;
            }
        }
        
    }
     free(lps);
     
}

int main() {
    char txt[20];
    char pat[10];
    
    printf("Enter the text: ");
    scanf(" %[^\n]", txt);  // %[^\n] reads the whole line until newline
    
    printf("Enter the pattern: ");
    scanf(" %[^\n]", pat);

    KMPSearch(pat, txt);
    return 0;
}


