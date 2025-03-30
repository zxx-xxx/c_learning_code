#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

typedef unsigned int uint;


//uint my_strlen1(const char* str)
//{
//    assert(str);
//    uint count = 0;
//
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//
//    return count;
//}
//
//uint my_strlen2(const char* str)
//{
//    assert(str);
//    const char* temp = str;
//    while (*temp != '\0')
//    {
//        temp++;
//
//    }
//    return (uint)(temp - str);
//
//}
//
//uint my_strlen3(const char* str)
//{
//    assert(str);
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    else
//    {
//        return 1 + my_strlen3(str + 1);
//    }
//
//}
//
//int main()
//{
//    //size_t
//    char arr[] = "abcdef";
//    printf("%u\n", strlen(arr));
//    printf("%u\n", my_strlen1(arr));
//    printf("%u\n", my_strlen2(arr));
//    printf("%u\n", my_strlen3(arr));
//    printf("%%\n");
//    return 0;
//}

//char* my_strcpy(char* d, const char* s)
//{
//	assert(d && s);
//	char* destination = d;
//
//	while (*d++ = *s++)
//	{
//		;
//	}
//
//	return destination;
//}
//
//int main()
//{
//	char name[20] = "xxxxxxxxxxxxxxxxxxx";
//	//name = "zhangsan";
//	//name[20] = "zhangsan";
//	//strcpy(name, "zhangsan");
//	//printf("%s\n", strcpy(name, "zhangsan"));
//	printf("%s\n", my_strcpy(name, "zhangsan"));
//
//	return 0;
//}

//char* my_strcat(char* d, const char* s)
//{
//	assert(d && s);
//	char* destination = d;
//
//	while (*d)
//	{
//		d++;
//	}
//
//	while (*d++ = *s++)
//	{
//		;
//	}
//
//	return destination;
//}
//
//
//int main()
//{
//	char arr[20] = "hello ";
//	//printf("%s\n", strcat(arr, "world"));
//	//printf("%s\n", my_strcat(arr, "world"));
//	printf("%s\n", my_strcat(arr, arr));
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			break;
//		str1++; str2++;
//	}
//	if (*str1 == *str2)
//		return 0;
//	else if (*str1 < *str2)
//		return -1;
//	else
//		return 1;
//}
//
//
//int main()
//{
//	char arr1[] = "hello xbit";
//	char arr2[] = "hello world";
//	printf("%d\n", strcmp(arr1, arr2));
//	printf("%d\n", my_strcmp(arr1, arr2));
//
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* temp2 = str2;
//	while (*str1 != '\0')
//	{
//		while (*str1 != *str2)
//		{
//			if (*str1 == '\0')
//				break;
//			str1++;
//		}
//		if (*str1 == '\0')
//			return NULL;
//		else
//		{
//			const char* temp1 = str1;
//			str1++; str2++;
//			while (*str1 == *str2)
//			{
//				if (*str2 == '\0' || *str1 == '\0')
//					break;
//				str1++; str2++;
//
//			}
//			if (*str2 == '\0')
//				return (char*)temp1;
//			else
//			{
//				str2 = temp2;
//				str1 = temp1 + 1;
//			}
//		}
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char email[] = "abcdef";
//    char substr[] = "def";
//	//char email[] = "zxx@qq.com";
//	//char substr[] = "@qq";
//	//char* temp = strstr(email, substr);
//	char* temp = my_strstr(email, substr);
//
//
//	if (temp == NULL)
//		printf("×Ó´®²»´æÔÚ\n");
//	else
//	{
//		printf("%s\n", temp);
//	}
//	return 0;
//}

