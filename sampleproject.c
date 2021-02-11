#include<stdio.h>
#include<math.h>
int main(){

    int n,i,j,x,y,z,a,b;
printf("number of calucaltions\n");
scanf("%d",&n);
while(n>0){

    printf("1.add\n 2.sub\n 3.multiply\n 4.divide\n");
    printf("5.sin\n 6.cos\n 7.floor\n 8.ceil");
    scanf("%d",&x);
    switch (x)
    {
    case (1):
    scanf("%d%d",&a,&b);
    i=a+b;
    printf("%d",i);
        break;

    case(2):
    scanf("%d%d",&a,&b);
    i=a-b;
    printf("%d",i);
        break;

    case(3):
    scanf("%d%d",&a,&b);
    i=a*b;
    printf("%d",i);
        break;

    case(4):
    scanf("%d%d",&a,&b);
    i=a/b;
    printf("%d",i);
        break;

    case(5):
    scanf("%d",&a);
    i=sin(a);
    printf("%d",i);
        break;

    case(6):
    scanf("%d",&a);
    i=cos(a);
    printf("%d",i);
        break;

    case(7):
    scanf("%d",&a);
    i=floor(a);
    printf("%d",i);
        break;

    case(8):
    scanf("%d",&a);
    i=ceil(a);
    printf("%d",i);
        break;
    
    
    default:
        break;
    }
    n--;

}
return 0;
}
