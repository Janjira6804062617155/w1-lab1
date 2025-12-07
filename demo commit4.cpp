#include <stdio.h>
#include <math.h>
int main() {
	int mid,final,q1,q2,lab,sit;
	double m,f,qq1,qq2,l,s,sum;
	
	char mi[100]="mid";
	char fina[100]="final";
	char q11[100]="q1";
	char q22[100]="q2";
	char la[100]="lab";
	char si[100]="sit";	
//	mid=75;final=85;q1=40;q2=45;lab=16;sit=15;
	
	scanf("%d %d %d %d %d %d",&mid,&final,&q1,&q2,&lab,&sit);
	
	m=floor((mid/100.0)*30);
	f=floor((final/120.0)*35);
	qq1=floor((q1/60.0)*12);
	qq2=floor((q2/60.0)*13);
	l=floor((lab/16.0)*5);
	s=floor((sit/16.0)*5);
	
	sum=m+f+qq1+qq2+l+s;
	
	
	
	printf("%10s=\t %d => %5.2f \n",mi,mid,m);
	printf("%10s=\t %d => %5.2f \n",fina,final,f);
	printf("%10s=\t %d => %5.2f \n",q11,q1,qq1);
	printf("%10s=\t %d => %5.2f \n",q22,q2,qq2);
	printf("%10s=\t %d => %5.2f \n",la,lab,l);
	printf("%10s=\t %d => %5.2f \n",si,sit,s);
	printf("*****%.2f*****",sum);
	
	
	
	
	
	
}
