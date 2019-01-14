#include "global_functions.h"

//Encryption function
string encrypt(string plaintext, string key) {
	string output = "";
	int INT_key = stringToInt(key);

	for (unsigned int i = 0; i < plaintext.length(); i++) {
		int INT_input = charToInt(plaintext[i]);
		if (INT_input + INT_key < 26)
			output += (INT_input + INT_key) + 'a';
		else
			output += ((INT_input + INT_key) % 26) + 'a';
	}
	return output;
}

//Decryption function
string decrypt(string ciphertext, string key) {
	string output = "";
	int INT_key = stringToInt(key);

	for (unsigned int i = 0; i < ciphertext.length(); i++) {
		int INT_input = charToInt(ciphertext[i]);
		if (INT_input - INT_key >= 0)
			output += (INT_input - INT_key) + 'a';
		else
			output += ( 26 + ((INT_input - INT_key) % 26)) + 'a';
	}
	return output;
}


//Converting string to number e.g. str "158" to int 158
int stringToInt(string s) {
	int temp = 0;
	for (unsigned int i = 0; i < s.length(); i++)
		temp += (s[i]-'0')*pow(10, s.length() - i-1);
	return temp;
}

////Converting char to number e.g. char 'a' to int 0
int charToInt(char c) {
	if (c >= 'a' && c <= 'z')
		return c - 'a';
	if (c >= 'A' && c <= 'Z')
		return c - 'A';
	return 0;
}
