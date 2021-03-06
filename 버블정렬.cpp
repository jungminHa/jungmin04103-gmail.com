#include <stdio.h>

int main (void){
	int i, j, temp;
	int array[10] = {1,10,9,3,4,7,2,6,8,5};
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

########## 버블 정렬 ##########
# N * (N + 1) / 2
# O(N * N) => N^2의 시간복잡도를 갖는다.
# 하지만 실제 작동을 시키면 선택정렬보다 오래 걸린다.
# 선택정렬은 모두 검사하고 마지막에 한번씩만 자리를 
# 바꾸는 반면 버블정렬은 지속해서 자리를 바꾸는 작업을 수행하기 때문 
 
