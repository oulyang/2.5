#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<ctype.h>

////size_t strlen(const char* str) 3�ַ���ʵ�� 1.������ 2.�ݹ� 3.ָ��-ָ��
////!!!��'\0',
////size_t==unsigned int
//int my_strlen1(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//char* my_strcpy(char* s1, const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	char* ret = s1;
//	//����s2ָ����ַ�����s1������\0,
//	
//	//while (*s2!='\0')
//	//{
//	//	*s1 = *s2;
//	//	s1++;
//	//	s2++;
//	//}
//	//*s1 = *s2;
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return ret;
//}

//strcpy(arr1, arr2);
//Դ�ַ���������\0���һὫ\0������ȥ
//Ŀ�Ŀռ�����㹻�󣬱���ɱ�
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat�ַ���׷��
//Ŀ�Ŀռ�����㹻��,�ҿ��޸ġ�Դͷ������\0,Ŀ�ĵ�ҲҪ��\0,��\0��ʼ
//void my_strcat(char* s1,const char* s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	char* ret = s1;
//	//�ҵ�\0
//	while (*s1 != '\0')
//	{
//		s1++;
//	}
//	//׷��
//	while(*s1++ == *s2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp �Ƚϵ�һ���ַ���ASCII��ֵ���������Ƚ���һ����ֱ��\0
//int my_strcmp(const char*s1,const char*s2)
//{
//	//assert(s1 != NULL);
//	//assert(s2 != NULL);
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	//if (*s1 > *s2)
//	//	return 1;
//	//else
//	//	return -1;
//	return (*s1 - *s2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwer";
//	int ret = my_strcmp(p1, p2);
//	//int ret = strcmp(p1, p2);
//	//if (ret > 0)
//	//{
//	//	printf("p1>p2\n");
//	//}
//	//else if (ret < 0)
//	//{
//	//	printf("p1<p2");
//	//}
//	//else
//	//{
//	//	printf("p1=p2");
//	//}
//	printf("%d\n", ret);
//	return 0;
//}

//strncpy(char *dest,char *src,size_t count)
//����count���ֽڵ�Ŀ�Ŀռ䣬���Դ�ַ����ĳ���С��count�����ڿ�����Դ�ַ����󲹼�\0

//strncat(char *dest,char *src,size_t count)
//��׷���ֽ���̫�٣�׷�Ӷ�Ӧ�ֽ������������\0,
//��׷���ֽ���̫��ֻ���Դ�ַ���׷�ӣ�Ȼ���\0
//int main()
//{
//	char arr1[200] = "abcdefg\0****";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 5);
//	strncpy(arr1,arr2,2)//abcdefgbi\0**
//	return 0;
//}


//char* strstr(const char*s1,const char*s2)
//�����ַ���
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1);
//	assert(p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* s3 = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*s3)
//	{
//		s1 = s3;
//		s2 = (char*)p2;
//		while ((*s1!='\0')&&(*s2!='\0')&&(*s1 == *p2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return s3;
//		}
//		s3++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abc";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("û��");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//char* strtok(char*str,const char*sep)
//sep�Ǹ��ַ��������ݰ�������Ҫ�ķָ���
//���޸�Դ�ַ�����
//int main()
//{
//	//192.168.1.1-strtok
//	char arr[] = "192.168.1.1";
//	char* p = ".";
//	char arr1[200] = { 0 };
//	strcpy(arr1, arr);
//
//	//char*s1=strtok(arr, p);//arr=192\0168.1.1
//	//char*s2 = strtok(NULL, p);//arr=192\0168\01.1
//	//char* s3 = strtok(NULL, p);//arr=192 \0 168 \0 1 \0 1
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror-������Ϣ���������ش������Ӧ�Ĵ�����Ϣ
//char* strerror(int errnum)
//������
//	0		-		No error
//	1		-		Operation not permitted
//	2		-		No such file or directory
// ...
//int main()
//{
//	//errno��һ��ȫ�ֵĴ�����ı�������C�Ŀ⺯��ִ�д���ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//	FILE*pf=fopen("1.9.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	return 0;
//}


//int main()
//{
//	//char ch = 'w';
//	//int a=islower(ch);
//	//printf("%d\n", a);
//
//	char ch = tolower('r');
//	char sh = toupper('r');
//	putchar(ch);
//	putchar(sh);
//	return 0;
//}


//memcpy
//struct s
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, int num)
//{
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//C���Ա�׼memcpyֻ�����ص��ģ�memmove���Դ����ص�

//void* my_memmove(void* dest, void* src, size_t num)
//{
////dest<src,��ǰ��󿽱�
////dest>src,ǰ��˳�򲻹̶��������Կ���
////dest>src&&dest<src+num �Ӻ���ǰ����
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//����ǰ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[20] = { 0 };
//	//memcmp(arr2, arr1, sizeof(arr1));
//	//my_memcmp(arr2, arr1, sizeof(arr1));
//	//memcpy(arr1 + 2, arr1, 20);
//	//memmove-����ڴ��ص�
//	//memmove(arr1 + 2, arr1, 20);
//	my_memmove(arr1 + 2, arr1, 20);
//	//struct s a1[] = { {"wang",20},{"li",10} };
//	//struct s a2[6] = { 0 };
//	//memcpy(a2, a1, sizeof(a1));
//	//my_memcpy(a2, a1, sizeof(a1));
//	//return 0;
//}


//memcmp
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret=memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}


//memset-�ڴ�����
//int main()
//{
//	char arr[100] = "";
//	memset(arr, '*', 10);
//	
//	int arr1[10] = { 0 };
//	memset(arr1, 1, 10);
//	return 0;
//}