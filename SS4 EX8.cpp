#include<stdio.h>
int main(){
	int Canh1, Canh2, Canh3;
	printf("Nhap canh thu nhat: ");
	scanf("%d", &Canh1);
	printf("Nhap canh thu hai: ");
	scanf("%d", &Canh2);
	printf("Nhap canh thu ba: ");
	scanf("%d", &Canh3);
	if(Canh1+Canh2>Canh3 && Canh1+Canh3>Canh2 && Canh3+Canh2>Canh1){
		printf("Dung roi la canh cua tam giac!");
	}else{
		printf("Khong phai 3 canh tam giac!");
	}
	return 0;

}
