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
	printf("��ʼ�������4��Ԫ��\n");
	show_arr(&arr);
	Insert_arr(&arr, 3, 1000);
	printf("��λ��3����������1000\n");
	show_arr(&arr);
	Delete_arr(&arr, 5, &delete_num);
	printf("ɾ��λ��5�����֣�ɾ������Ϊ��%d\n",delete_num);
	show_arr(&arr);
	SelectSort_arr(&arr);
	printf("ѡ������\n");
	show_arr(&arr);
	Inversion_arr(&arr);
	printf("����\n");
	show_arr(&arr);
	BubbleSort_arr(&arr);
	printf("ð������\n");
	show_arr(&arr);

	return 0;

}


