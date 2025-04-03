#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>


typedef unsigned int uint;

//void* my_memcpy(void* d, const void* s, uint n)
//{
//	assert(d && s);
//	void* destination = d;
//
//	for (int i = 0; i < n; i++)
//	{
//		*(char*)d = *(char*)s;
//		((char*)d)++;
//		((char*)s)++;
//
//	}
//
//	return destination;
//
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	//int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr1 + 1, arr1, 8);
//
//	//float arr3[] = { 1.0,2.0,3.0,4.0,5.0 };
//	//float arr4[10] = { 0.0 };
//	////memcpy(arr4, arr3, sizeof(arr3));
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}


//void* my_memmove(void* d,const void* s, uint n)
//{
//	assert(d && s);
//	void* destination = d;
//	
//	if (d > s)
//	{
//		s = (char*)s + (n - 1);
//		d = (char*)d + (n - 1);
//
//		while (n--)
//		{
//			*(char*)d = *(char*)s;
//			d = (char*)d - 1;
//			s = (char*)s - 1;
//
//		}
//	}
//	else
//	{
//		while (n--)
//		{
//			*(char*)d = *(char*)s;
//			d = (char*)d + 1;
//			s = (char*)s + 1;
//		}
//	}
//
//	return destination;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memmove(arr + 2, arr, 20);
//	//my_memmove(arr + 2, arr, 20);
//	my_memmove(arr, arr+2, 20);
//
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//char arr[] = "hello world";
//	//memset(arr, 'x', 5);
//	//memset(arr+6, 'x', 5);
//
//	//printf("%s\n", arr);
//	return 0;
//}