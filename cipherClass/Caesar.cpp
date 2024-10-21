#include "Caesar.h"
#include <stdlib.h>
#include <time.h>

void Caesar::Encrypt(const char* text)
{
	int length = strlen(text);
	char* newText = new char[length];

	srand(time(NULL));
	int shift = (rand() % 25) + 1;

	std::cout << "\nEncrypted text: ";

	for (int i = 0; i < length; i++) {

		if ((text[i] + shift) > 122) {
			newText[i] = text[i] + shift - 26;

		}
		else if (text[i] + shift < 97) {
			newText[i] = text[i] + shift + 26;
		}

		std::cout << char(newText[i]);
	}
}
