#include <stdio.h> 
int main(){
	int i, j, n;
	j=0;
	scanf("%d", &n);
	for(i=2;i<n;i++){
		if(n%i==0){
			j++;
		}
		
	}
	if(j==0){
		printf("%d������",n); 
	}
	else{
		printf("%d��������",n);
	}
	return 0;
}
