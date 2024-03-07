#include<stdio.h>
void main(){
    int i,j,mar[10],sar[10],n,k,bool=0;
    printf("\n enter number of elements in main array:");
    scanf(" %d",&n);
    printf("\n Enter elements of main array:");
    for(i=0;i<n;i++){
        scanf(" %d",&mar[i]);
    }
    printf("\n Enter number of elements in sub array:");
    scanf(" %d",&j);
    printf("\n Enter sub array elements:");
    for(i=0;i<j;i++){
        scanf(" %d",&sar[i]);
    }
    if(n>j){
    
    for(i=0;i<n;i++){
      for(k=0;k<j;k++){
     if(sar[k]==mar[i])
     bool++;
    }
    }
    if(bool==j) printf("\n Is a sub array");
    else printf("\n Is not a sub array");
}
return 0;
}