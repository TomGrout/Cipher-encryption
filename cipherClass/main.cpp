#include <iostream>
#include "Cipher.h"
#include "Caesar.h"
#include "Vigenere.h"

using namespace std;

int main() {

	string text; // a string is just an array of characters

	// read in the next word - this will only read upto the next whitespace
	cout << "Enter some text: ";
	cin >> text;

	// get the array of characters that make up the text that was read in
	// this memory is read-only
	const char* plaintext = text.c_str();

	// get the length of the text
	int length = text.length();

	// print the text back to the user, character by character
	//cout << "You typed: ";
	//for (int i = 0; i < length; i++){
	//	cout << characters[i];
	//}

	int cipherChoice;
	cout << "Enter 1 for caesar cipher/ 2 for vigenere cipher: ";
	cin >> cipherChoice;

	if (cipherChoice == 1) {
		Caesar csr(plaintext);
		csr.Encrypt(plaintext);
	}
	else {
		Vigenere vig(plaintext);
		vig.Encrypt(plaintext);
	}
}