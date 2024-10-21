#include "Cipher.h"

Cipher::Cipher(const char* t) {
	text = t;
}
Cipher::Cipher(const char* t, const char* s) {
	text = t;
	encrypted = s;
}

