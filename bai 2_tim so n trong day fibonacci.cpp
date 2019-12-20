#include<stdio.h>
int  timsofibonacci(int n){
	if(n<=0){
	printf("khong kiem duoc \n");
}else if (n<3){
	printf("so thu %d = %d\n",n,1) ;
}else if (n<4){
	printf("so thu %d = %d\n",n,2) ;
} else{
	int x1=1,x2=1,x3=2;
	for (int i=4;i<=n;++i) {
		x1=x2;
		x2=x3;
		x3=x2+x1;}
	printf("so thu %d = %d",n,x3) ;} 
}
int main(){
	int k; 
	printf("nhap k:\n");
	scanf("%d",&k);
	int m=timsofibonacci(k);
	return 0; 
} 
