#include<stdio.h>
void hanglonnhat(int a[4][4]){
	int smax=0; int s=0; 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++){{
		s=s+a[i][j];}		 
		if(s>smax){
			smax=s ;}
			if(j==3)
			{
			s=0; 
			}			
		}
}
printf("tong cua hang lon nhat la: %d\n",smax) ;
}
void inmang(int a[4][4]){
	for (int i=0;i<4;i++){
		for(int j =0;j<4;j++){ 
		printf("%d\t",a[i][j]); 
	} printf("\n");
	}
	 
}
int main(){
	int m[4][4]={5,6,888,6,9,8,7,4,11,22,55,65,35,24,0,69} ;
	inmang (m);
	hanglonnhat(m) ;
} 
