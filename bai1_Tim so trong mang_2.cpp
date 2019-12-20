#include<stdio.h>
int timso(int a[],unsigned n,int h){
	for(int i=0;i<n;i++)
	{
		if(a[i]==h){
			return true;
		}
	}
	return false;
} 
int main(){
	int b[5]={5,6,9,8,12};
	int k;
	printf("nhap so can tim: \n");
	scanf("%d",&k) ;
	if(timso(b,5,k)){
			printf("%d nam trong mang!",k);
	}else{
		printf("%d ko nam trong mang!",k);
	}
}
