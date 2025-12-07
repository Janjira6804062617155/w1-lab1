#include<stdio.h>
int main(){
    int q1,q2,q3;
    float b,c,a,a1,b1,c1;
    
   
	printf("input price 1 :");
	scanf("%d",&q1);
	a=q1-(q1*5.0)/100;
	a1=((a*7.0)/100)+a;
	printf("total pay1 include vat: %.2f \n",a1);
	
	
	printf("input price 2 :");
	scanf("%d",&q2);
	b=(q2*2)-(q2*2*15.0)/100.0;
	b1=((b*7.0)/100)+b;
	printf("total pay2 include vat : %.2f \n",b1);
	
	printf("input price 3 :");
	scanf("%d",&q3);
	c=(q3*3)-(q3*3*30.0)/100.0;
	c1=((c*7.0)/100)+c;
	printf("total pay3 include vat : %.2f",c1);
	
	return 0;	
	
}
