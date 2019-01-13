#include "global_functions.h"

int main() {
	string input;
	string key;
	do {
		string output = "";
		cout << "Plaintext: ";
		cin >> input;

		if (input == "exit")
			break;
		
		cout << "Key: ";
		cin >> key;

		int INT_key = stringToInt(key);

		for (unsigned int i = 0; i < input.length(); i++) {
			int INT_input = charToInt(input[i]);
			if (INT_input + INT_key < 26)
				output += (INT_input + INT_key) + 'a';
			else
				output += ((INT_input + INT_key) % 26) + 'a';
		}

		cout << endl << "Ciphertext: " << output << endl;
	} while (true);

	return 0;
}