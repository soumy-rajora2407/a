#include<stdio.h>
int main(){
    int n,i,j,m;
    printf("enter the row: ");
    scanf("%d",&n);
    printf("number of coloums:");
    scanf("%d",&m);
    for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
       if((i+j)/2==1) 
        printf("* ");
        else printf(" ");
    }
        
      printf("\n");
    }
    
        
        
    return 0;
}