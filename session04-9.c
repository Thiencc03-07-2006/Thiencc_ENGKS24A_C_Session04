#include <stdio.h>

int main(){
	int day,month,year;
	printf("vui long nhap vao ngay thang nam\n");
	scanf("%d %d %d",&day,&month,&year);
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		if(day>0 && day<32){
			printf("gia tri hop le");
			return 0;
		}
	}else if(month==4||month==6||month==9||month==11){
		if(day>0&&day<31){
			printf("gia tri hop le");
			return 0;
		}
	}else if(month==2){
		if(year%4==0&&year%100!=0||year%400==0){
		    if(day>0&&day<30);{
						printf("gia tri hop le");
						return 0;
			}
     	}else if(day>0&&day<29){
     		printf("gia tri hop le");
     		return 0;
		    }
	}
	printf("gia tri khong hop le");
	return 0;
}
