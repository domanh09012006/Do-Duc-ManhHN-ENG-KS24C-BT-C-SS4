#include<stdio.h>
int main(){
	int Year;
	printf("Moi nhap nam: ");
	scanf("%d", &Year);
	if(Year % 4 == 0 && Year % 100 !=0 || Year % 400 == 0){
		printf("Day la nam nhuan");
	}else{
		printf("Day khong phai nam nhuan");
	}
	return 0;
	
}
