#include<stdio.h>
int main(){
    int n,i;
    float h,b,l,volume;
    printf("enter the number of box");
    scanf("%d",&n);
    printf("enter the length,height,breath");
    scanf("%d %d %d",&h,&b,&l);
    for(i=1;i<=n;i++){
    if(h<41){
        volume=l*b*h;
        printf("volume:%f,volume");
    }
    else{
        printf("box cannot be transported");
    }
}
return 0;
}
