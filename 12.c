#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter three sides of triangle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if((side1 + side2 > side3 )&&( side1+side3 >side2)&&( side1 + side2 >side3)){
        printf("triangle is valid.\n");
    }else {
    printf("triangle is not valid.\n");
    }
return 0;
}
