#include<stdio.h>
int main(){
	int Month;
	printf("Moi nhap thang: ");
	scanf("%d", &Month);
	if(Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12) {
		printf("Thang nay co 31 ngay");
		} else if(Month == 4 || Month == 6 || Month == 9 || Month == 11){
		printf("Thang nay co 30 ngay");
		} else if(Month == 2 ){
		printf("Thang nay co 28 hoac 29 ngay");
	}else{
		printf("Thang ko hop le!");
	}
return 0;
	 
}
