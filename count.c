#include "header.h"
// 각 숫자의 개수 계산
void count(double m){
	memset(arr, 0, sizeof(double)*10);

	for(double i = 1; i <= m; i++){
		double n = i;
		while(n >= 1){
			arr[(int) n%10] += 1;
			n /= 10;
		}
	}


}




