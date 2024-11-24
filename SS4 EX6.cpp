#include<stdio.h>
int main(){
	int SoMoi, SoCu, TienDien, TongSoDien;
	printf("Nhap so dien cu: ");
	scanf("%d", &SoCu);
	printf("Nhap so dien moi: ");
	scanf("%d", &SoMoi);
	if(SoMoi<SoCu){
		printf("So dien khong hop le!");
		return 1;
	}
	TongSoDien = SoMoi - SoCu;
	if(TongSoDien>0 && TongSoDien<50){
		TienDien = TongSoDien*10000;
		printf("Tong tien dien thang nay la: %d VND", TienDien);
		}else if(TongSoDien>=50 && TongSoDien<100){
		TienDien = TongSoDien*15000;
		printf("Tong tien dien thang nay la: %d VND", TienDien);
		}else if(TongSoDien>=100 && TongSoDien<150){
		TienDien = TongSoDien*20000;
		printf("Tong tien dien thang nay la: %d VND", TienDien);
		}else if(TongSoDien>=150 && TongSoDien<200){
		TienDien = TongSoDien*25000;
		printf("Tong tien dien thang nay la: %d VND", TienDien);
		}else if(TongSoDien>=200){
		TienDien = TongSoDien*30000;
		printf("Tong tien dien thang nay la: %d VND", TienDien);
	}
	return 0;
}
