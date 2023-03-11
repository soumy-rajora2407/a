#include<stdio.h>

int main(){

    int a[5]={1,2,2,3,3};
    for(int i=0;i<=4;i++){
        int m=1;
    for(int j=0;j<=4;j++){
        if(a[i]==a[j] && i!=j ){
            m=2;
        }  
    }
        if(m==1){
        printf("unique element is %d \n",a[i]);
        }
    }
    
    
    return 0;
}