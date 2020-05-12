int main()
{

	float x,y,z,t,tb;
	

	printf("\nNhap diem mon toan:");
	scanf("%f",&x);
	printf("\nNhap diem mon hoa:");
	scanf("%f",&y);
    printf("\nNhap diem mon ly:");
    scanf("%f",&z);
    
    t = x+y+z;
    tb = (x+y+z) / 3;
    printf("diem tong: %f=%f+%f+%f\n",x,y,z,t);
    printf("diem trung binh: %f=(%f+%f+%f)/3", tb,x,y,z);
    return 0;
}
