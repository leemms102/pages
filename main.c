#include "header.h"
//메인함수
void main(){
	scanf("%d", &T);

	for(int i = 0; i < T; i++){
		scanf("%lf", &page);
		
		count(page);		

		printArr();
	}

}
