#include<stdio.h>
int main(){
    int q1,q2,q3,a;
    float b,c;
	
	printf("input price 1 :");
	scanf("%d",&q1);
	a=q1-(q1*5)/100;
	printf("total pay1: %d \n",a);
	
	printf("input price 2 :");
	scanf("%d",&q2);
	b=(q2*2)-(q2*2*15.0)/100.0;
	printf("total pay2: %.2f \n",b);
	
	printf("input price 3 :");
	scanf("%d",&q3);
	c=(q3*3)-(q3*3*30.0)/100.0;
	printf("total pay3 : %.2f",c);
	
}
