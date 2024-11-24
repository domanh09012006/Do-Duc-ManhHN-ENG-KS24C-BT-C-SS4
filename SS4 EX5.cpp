#include<stdio.h>
int main(){
	int Num1, Num2, Num3;
	printf("Nhap so thu nhat: ");
	scanf("%d", &Num1);
	printf("Nhap so thu hai: ");
	scanf("%d", &Num2);
	printf("Nhap so thu ba: ");
	scanf("%d", &Num3);
	if(Num3 > Num1 && Num3 < Num2){
		printf("So thu ba nam giua so thu nhat va so thu hai");
	}else{
		printf("So thu ba khong nam giua so thu nhat va so thu hai");
	}
	return 0;
}
