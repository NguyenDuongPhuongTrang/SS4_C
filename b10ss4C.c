#include<stdio.h>
int main(){
	
	int a,b,c,max;
	printf("Nhap 3 so nguyen :");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && b<c){
		printf("%d %d %d",a,b,c);
	}
	if(a<c && c<b){
		printf("%d %d %d",a,c,b);
	}
	if(b<a && a<c){
		printf("%d %d %d",b,a,c);
	}
	if(b<c && c<a){
		printf("%d %d %d",b,c,a);
	}
	if(c<a && a<b){
		printf("%d %d %d",c,a,b);
	}
	if(c<b && b<a){
		printf("%d %d %d",c,b,a);
	}
	
	return 0;
}
