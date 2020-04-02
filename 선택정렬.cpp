#include <stdio.h>

int main (void){
	int i, j, index, temp, min;
	int array[10] = {1,10,5,4,8,7,2,9,3,6};
	for(i = 0; i < 10; i++)
	{
		min = 9999;
		for (j = i; j<10;j++)
		{
			if(min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0; i < 10 ; i++)
	{
		printf("[%d] ",array[i]);
	}
	return 0;
}

########## 선택 정렬의시간복잡도 ##########
 
# 선택정렬의 시간복잡도 -> 10 * (10 + 1) / 2 = 55
# N * (N + 1) / 2
# O(N * N) => N^2만큼의 연산을 해야한다. 
# 하지만 만일 데이터의 개수가 10000개라면 10000 * 10000 = 1억개의 연산을 수행해야하므로 비효율적이다. 

