#include "global_functions.h"

int main() {
	string input;
	string key;
	do {
		string output;
		int option;

		//Main Dialog
		cout << "----------Caesar Cipher----------" << endl
			 << "(1) Encrypt a text" << endl
			 << "(2) Decrypt a text" << endl
			 << "(0) Exit " << endl << endl;
		cout << "Option: ";
		cin >> option;

		//Exit Dialog
		if (option != 1 && option != 2)
			break;
		
		if(option == 1)
			cout << "Plaintext: ";
		else
			cout << "Ciphertext: ";

		cin >> input;
		cout << "Key: ";
		cin >> key;

		switch (option) {
		case 1: output = encrypt(input, key); break;
		case 2: output = decrypt(input, key); break;
		default: break;
		}

		//Output
		cout << endl << "Ciphertext: " << output << endl
			 << "---------------------------------" << endl << endl;
	} while (true);

	return 0;
}