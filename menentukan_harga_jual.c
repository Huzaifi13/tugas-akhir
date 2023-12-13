#include <stdio.h>
#include <stdlib.h>

int main() {
	int roticoklat,rotispecial,roticoklatkeju,roticoklatmatcha;
	int uang,kembalian,total;
	
	printf("\nPricelist Roksu Jay");
	printf("\n1. roticoklat  Rp10000");
	printf("\n2. rotispecial Rp15000");
	printf("\n3. roticoklat+keju Rp12000");
	printf("\n4. roticoklat+matcha 12000");
	
	printf("\n Masukkan jumlah beli roticoklat : ");
	scanf("%d", &roticoklat);
	printf(" Masukkan jumlah beli rotispecial : ");
	scanf("%d", &rotispecial);
	printf(" Masukkan jumlah beli roticoklat+keju : ");
	scanf("%d", & roticoklatkeju);
	printf(" Masukkan jumlah beli roticoklat+matcha : ");
	scanf("%d", &roticoklatmatcha);
	
	printf("Masukkan Uang Tunai :Rp");
	scanf("%d", &uang);
	 total= (roticoklat*10000) + (rotispecial*15000) +(roticoklatkeju*12000) + (roticoklatmatcha*12000);
	 kembalian= uang-total;
	
	printf("\n====STRUK=====");
	printf("\nUang         : Rp%d\n", uang);
	printf("Total        : Rp%d\n", total);
	printf("kembalian    : Rp%d\n", kembalian); 
	printf("=============================");
	
	
 	return 0;
	
}
