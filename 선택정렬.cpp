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

########## ���� �����ǽð����⵵ ##########
 
# ���������� �ð����⵵ -> 10 * (10 + 1) / 2 = 55
# N * (N + 1) / 2
# O(N * N) => N^2��ŭ�� ������ �ؾ��Ѵ�. 
# ������ ���� �������� ������ 10000����� 10000 * 10000 = 1�ﰳ�� ������ �����ؾ��ϹǷ� ��ȿ�����̴�. 

