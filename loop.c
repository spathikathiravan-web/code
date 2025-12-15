#include<stdio.h>
int main(){
  int a,b,i;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
    for(i=a;i<=b;i++){
       if ((i>=0)&&(i<=9)){
        switch(i){
    case 0:
        printf("zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    default:

        printf("nine");
        break;

       }

    }
    else if(i%2==0){
        printf("even\n");
    }
    else {
        printf("odd");
    }
        }

}
