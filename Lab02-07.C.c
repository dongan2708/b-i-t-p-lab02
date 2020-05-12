#include<stdio.h>
#include<stdlib.h> 
int main(int argc, char *argv[]) 
{
	float c,s,r,a,dai,rong;
	printf("nhap ban kinh:");
	scanf("%f", &r);
	c = 3,14*2*r;
	s = 3,14*r*r;
	printf("chu vi hinh tron: %f\n", c);
	printf("dien tich hinh tron: %f\n", s);
	
	printf("nhap canh hinh vuong:");
	scanf("%f", &a);
	c = 4*a;
	s = a*a;
	printf("chu vi hinh vuong: %f\n", c);
	printf("dien tich hinh vuong: %f\n", s);
	
	printf("nhap chieu dai:");
	scanf("%f", &dai);
	printf("nhap chieu rong:");
	scanf("%f", &rong);
	c = (dai+rong)*2;
	s = (dai*rong);
	printf("chu vi hinh chu nhat: %f\n", c);
	printf("dien tich hinh chu nhat: %f\n", s);
	
	return 0;
}
