#include <stdio.h>

int main(){
	int num;
	printf("vui long nhap vao mot so nguyen: ");
	scanf("%d",&num);
	if (num%2==0){
		printf("\ndo la so chan");
	}
	else {
	printf("\ndo la so le");
    }
	return 0;
}
