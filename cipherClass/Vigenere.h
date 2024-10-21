#pragma once
#include "Cipher.h"

class Vigenere : public Cipher
{
public:
    Vigenere(const char* text) : Cipher(text) {}    //contruct vigenere using cipher constructor
    
    void Encrypt(const char* t);
};
