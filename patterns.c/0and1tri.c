#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the row: ");
    scanf("%d",&n);
    int a=1;int b=0;
    for(i=1;i<=n;i++){
        
      for(j=1;j<=i;j++){
        if((i+j)%2==0)
        printf("%d ", a );
        
        else printf("%d ",b);
      
    }
        
      printf("\n");
    }
    
        
        
    return 0;
}