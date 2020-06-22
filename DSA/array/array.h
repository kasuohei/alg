#ifndef ARRAY_H
#define ARRAY_H
#include <stdbool.h>
struct Array
{
	int *pBase; //ָ�������ָ��
	int len;    //�������ܴ�ŵ����Ԫ�ظ���
	int cnt;    //��ǰ������Ԫ�صĸ���
};

/* ��ʼ���������ڴ� */
void Init_arr(struct Array *pArr, int len); 

/* ׷��һ��Ԫ�� */
bool append_arr(struct Array *pArr, int val);

/* ��posλ�ò���һ��ֵΪval��Ԫ�� */
bool Insert_arr(struct Array *pArr, int pos, int val);

/* ɾ��Ԫ�� */
bool Delete_arr(struct Array *pArr, int pos, int *val);

/* �ж������Ƿ����� */
bool IsFull_arr(struct Array *pArr);

/* �ж������Ƿ�Ϊ�� */
bool IsEmpty_arr(struct Array *pArr);

/* ��ӡ��ʾ��ǰ�����Ԫ�� */
void show_arr(struct Array *pArr);

/* ���� */
void Inversion_arr(struct Array *pArr);

/* ѡ������  */
void SelectSort_arr(struct Array *pArr);

/* ð������ */
void BubbleSort_arr(struct Array *pArr);





#endif
