#include<stdio.h>
int main () {
	
	int vize1,vize2,final;
	float dersnot;
	
	printf("1.vize notunuzu giriniz");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz");
	scanf("%d",&vize2);
	printf("final notunuzu giriniz");
	scanf("%d",&final);
	
	dersnot = (vize1 + vize2 + final) /3.0;
	
	if (dersnot > 60 ){
		printf("dersten gectiniz");
	
	}
	else if (dersnot > 50) {
		printf("dersten bute kaldiniz");
		
	}
	
	else {
		printf("dersten kaldiniz");
	}
	
	return 0;
}
