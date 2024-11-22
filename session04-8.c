#include <stdio.h>

int main(){
	float a,b,c;
	printf("vui long nhap vao 3 canh cua tam giac:\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b&&a>=c){
		if(a<b+c){
			printf("do la ba canh cua tam giac");
			return 0;
		}
	}else if(b>=a&&b>=c){
		if(b<a+c){
			printf("do la ba canh cua tam giac");
			return 0;
		}
	}else if(c>=a&&c>=b){
		if(c<a+b){
			printf("do la ba canh cua tam giac");
			return 0;
		}
	}
	printf("do khong phai ba canh cua mot tam giac");
	return 0;
}
