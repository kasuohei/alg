#ifndef ARRAY_H
#define ARRAY_H
#include <stdbool.h>
struct Array
{
	int *pBase; //指向数组的指针
	int len;    //数组中能存放的最大元素个数
	int cnt;    //当前数组中元素的个数
};

/* 初始化，分配内存 */
void Init_arr(struct Array *pArr, int len); 

/* 追加一个元素 */
bool append_arr(struct Array *pArr, int val);

/* 在pos位置插入一个值为val的元素 */
bool Insert_arr(struct Array *pArr, int pos, int val);

/* 删除元素 */
bool Delete_arr(struct Array *pArr, int pos, int *val);

/* 判断数组是否已满 */
bool IsFull_arr(struct Array *pArr);

/* 判断数组是否为空 */
bool IsEmpty_arr(struct Array *pArr);

/* 打印显示当前数组的元素 */
void show_arr(struct Array *pArr);

/* 逆序 */
void Inversion_arr(struct Array *pArr);

/* 选择排序  */
void SelectSort_arr(struct Array *pArr);

/* 冒泡排序 */
void BubbleSort_arr(struct Array *pArr);





#endif
