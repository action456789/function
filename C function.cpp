#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* ȥ��һ��C�����ַ����е�ĳ���ַ�
   ������
     source��Դ�ַ���
     clipedChar����Ҫȥ�����ַ�
   ����ֵ��
     ����ȥ����clipedChar֮����ַ���
*/
char* stringWithClipAChar(char* source, char clipedChar)
{
	char *s = source;
	char *dest = (char *)malloc(strlen(s)+1);
	char *d = dest;
	while(*s != '\0'){
		if(*s++ == clipedChar) continue;
		*d++ = *(s-1);
	}
	*d = '\0';
	return dest;
}



