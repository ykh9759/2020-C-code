#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[] = "JAVA 2017 go c#";
	printf("%d\n", strlen("java")); //java�� ����: 4
	printf("%s, ", _strlwr(str));	//��� �ҹ��ڷ� ��ȯ
	printf("%s\n", _strupr(str));	//��� ����ڷ� ��ȯ

	//���ڿ� VA�� ���۵Ǵ� ������ ��ȯ: VA 2013 GO C#
	printf("%s, ", strstr(str, "VA"));
	//���� A�� ó�� ��Ÿ���� ������ ��ȯ: AVA 2013 GO C#
	printf("%s\n", strstr(str, "V"));

	return 0;
}