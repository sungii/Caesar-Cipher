#include "global_functions.h"

int stringToInt(string s) {
	int temp = 0;
	for (int i = 0; i < s.length(); i++)
		temp += (s[i]-'a')*pow(10, s.length() - i-1);
	return temp;
}


int charToInt(char c) {
	if (c >= 'a' && c <= 'z')
		return c - 'a';
	if (c >= 'A' && c <= 'Z')
		return c - 'A';
	return 0;
}
