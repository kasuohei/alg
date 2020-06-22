#include "array.h"
#include <stdio.h>

/*********************************************************************************
  *
**********************************************************************************/
void Init_arr(struct Array *pArr,int len)
{
	pArr->pBase=(int *)malloc(len*sizeof(int));
	if(pArr->pBase==NULL)
	{
		printf("内存分配失败！");
		exit(-1);
	}
	pArr->len = len;
	pArr->cnt = 0;

	return;
}


/*********************************************************************************
  *
**********************************************************************************/
bool Insert_arr(struct Array *pArr,int pos,int val)
{
	if(IsFull_arr(pArr))
		return false;
	if(pos<1 || pos>pArr->cnt+1)
		return false;
	for(int i=pArr->cnt; i>pos; i--)
	{
		pArr->pBase[i] = pArr->pBase[i-1];
	}
	pArr->pBase[pos-1] = val;
	pArr->cnt++;
	return true;
}

bool Delete_arr(struct Array *pArr, int pos, int *val)
{
	if(IsEmpty_arr(pArr))
		return false;
	if(pos<1 || pos>pArr->cnt)
		return false;

	*val = pArr->pBase[pos-1];
	for(int i=pos; i<pArr->cnt; i++)
	{
		pArr->pBase[i-1] = pArr->pBase[i];
	}
	pArr->cnt--;
	return true;
	
}

void SelectSort_arr(struct Array *pArr)
{
	int i, j, temp;
	for(int i=0; i<pArr->cnt-1; i++)
	{
		for(int j=i+1; j<pArr->cnt; j++)
		{
			if(pArr->pBase[i] > pArr->pBase[j])
			{
				temp = pArr->pBase[i];
				pArr->pBase[i] = pArr->pBase[j];
				pArr->pBase[j] = temp;
			}
		}
	}
}

void BubbleSort_arr(struct Array *pArr)
{
	int i, j, temp;
	for(int i=0; i<pArr->cnt-1; i++)
	{
		for(int j=pArr->cnt-1; j>i; j--)
		{
			if(pArr->pBase[j] < pArr->pBase[j-1])
			{
				temp = pArr->pBase[j];
				pArr->pBase[j] = pArr->pBase[j-1];
				pArr->pBase[j-1] = temp;
			}
		}
	}
}

void show_arr(struct Array *pArr)
{
	printf("最大元素个数为:%d\n",pArr->len);
	printf("当前元素个数为:%d\n",pArr->cnt);
	for(int i=0; i<pArr->cnt; i++)
	{
		printf("pArr->pBase[%d]=%d    ", i, pArr->pBase[i]);
	}
	printf("\n");
}

bool append_arr(struct Array *pArr, int val)
{
	int length = pArr->cnt;
	if(IsFull_arr(pArr))
		return false;
	pArr->pBase[length] = val;
	pArr->cnt++;
	return true;
}

bool IsEmpty_arr(struct Array *pArr)
{
	if(pArr->cnt == 0)
		return true;
	else
		return false;
}

bool IsFull_arr(struct Array *pArr)
{
	if(pArr->cnt == pArr->len)
		return true;
	else
		return false;
}

void Inversion_arr(struct Array *pArr)
{
	if(IsEmpty_arr(pArr))
	{
		printf("空数组！\n");
		
	}
	for(int i=0, j=pArr->cnt-1; i<j; i++, j--)
	{
		int temp = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = temp;
	}
	return;
}
