#include "func.h" 
void strcat(char* dest, int len, const char* first, const char* second)
{
	strcpy(dest, len, first);
	unsigned firstLen = strlen(first);
	strcpy(dest + firstLen, len - firstLen, second);
}
