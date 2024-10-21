#include "Vigenere.h"

void Vigenere::Encrypt(const char* pText) {
	std::string eText;
	std::cout << "Enter encrypted text: ";
	std::cin >> eText;
	const char* encrypted = eText.c_str();

	int shift = encrypted[0] - pText[0];
	std::cout << "\nShift value: " << shift << "\n";

	std::string newInput;
	std::cout << "Would you like to enter some text to encrypt? - ";
	std::cin >> newInput;

	for (char c : newInput) {

		if ((shift + c) > 122) {
			shift -= 26;
		}
		else if (c + shift < 97) {
			shift += 26;
		}

		std::cout << char(c + shift);

	}
}
