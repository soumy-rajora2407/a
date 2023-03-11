#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter the row: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
      for(j=1;j<=n-i;j++){
      
        printf(" ");}
    {int a=1;
       for(k=1;k<=i;k++){ 
       
       int d=a+64;
       char ch=(char)d;
        printf("%c",ch);
       a++;}
       }
      
    
        
      printf("\n");
    }
    
        
        
    return 0;
}