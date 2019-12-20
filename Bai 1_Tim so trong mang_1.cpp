#include<stdio.h>
bool timso(int a[],int h,unsigned n){
	for(int i=0;i<n;i++)
	{
		if(a[i]==h)
		{
			return true;
			}	
	}
	return false;
} 
int main(){
	int k;
	printf("nhap so luong so trong mang:\n");
	scanf("%d",&k);
	int b[k];
	for(int i=0;i<k;i++){
		scanf("%d",&b[i]);
	}
	int m;
	printf("nhap so can tim:\n");
	scanf("%d",&m);
	if(timso(b,m,k)){
		printf("%d nam trong mang!",m);
	}else{
		printf("%d ko nam trong mang!",m);
	}
	return 0; 
}
