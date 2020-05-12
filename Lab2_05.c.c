//chuong trinh tinh dien tich hinh thang
#include<stdio.h>
int main()
{
	int a,b,c,t;    //top,bottom,height
	printf("nhap vao a\n");
	scanf("%d",&a);
	printf("nhap vao b\n");
	scanf("%d",&b);
	printf("nhap vao c\n");
	scanf("%d",&c);
    t = ((a + b) * c)/2;
	printf("dien tich hinh thang la: %d = (%d + %d) * %d)/2\n",a,b,c,t);
	return 0;
}
