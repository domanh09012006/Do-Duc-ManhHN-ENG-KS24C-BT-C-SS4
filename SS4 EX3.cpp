#include<stdio.h>
int main(){
	int number;
	printf("Moi nhap so nguyen: ");
	scanf("%d", &number);
	if(number % 5 == 0 && number % 3 == 0){
		printf("So nay chia het cho 3 va 5");
	}else if(number % 5 == 0){
		printf("So nay chia het cho 5");
	}else if(number % 3 == 0){
		printf("So nay chia het cho 3");
	}else{
		printf("So nay khong chia het cho 3 va 5");
	}

	return 0;
}
