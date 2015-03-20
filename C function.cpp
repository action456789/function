#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/* 去除一个C语言字符串中的某个字符
   参数：
     source：源字符串
     clipedChar：需要去除的字符
   返回值：
     返回去除了clipedChar之后的字符串
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



