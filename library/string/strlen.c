#include <string.h>

// returns the length of str
size_t strlen(const char* str)
{
	size_t length = 0;
	for(; str[length] != 0; length++);
	return length;
}
