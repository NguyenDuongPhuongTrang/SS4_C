#include<stdio.h>
int main(){
	
	int number;
	printf("Nhap vao so nguyen :");
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("So %d chia het cho ca 3 va 5",number);
	}else if(number%5==0){
			printf("So %d chia het cho 5",number);
		}else if(number%3==0){
				printf("So %d chia het cho 3",number);
			}else{
				printf("So %d khong chia het cho ca 3 va 5",number);
			}
		
	return 0;
	
}
