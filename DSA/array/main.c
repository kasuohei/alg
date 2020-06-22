#include <stdio.h>

#include "array.h"


int main()
{
	struct Array arr;
	int delete_num;
	Init_arr(&arr, 10);
	append_arr(&arr, 1);
	append_arr(&arr, 89);
	append_arr(&arr, 54);
	append_arr(&arr, 21);
	printf("初始化并添加4个元素\n");
	show_arr(&arr);
	Insert_arr(&arr, 3, 1000);
	printf("在位置3处插入数字1000\n");
	show_arr(&arr);
	Delete_arr(&arr, 5, &delete_num);
	printf("删除位置5的数字，删除的书为：%d\n",delete_num);
	show_arr(&arr);
	SelectSort_arr(&arr);
	printf("选择排序\n");
	show_arr(&arr);
	Inversion_arr(&arr);
	printf("逆序\n");
	show_arr(&arr);
	BubbleSort_arr(&arr);
	printf("冒泡排序\n");
	show_arr(&arr);

	return 0;

}


