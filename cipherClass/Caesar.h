#pragma once
#include "Cipher.h"

class Caesar : public Cipher
{
public:
    Caesar(const char* text) : Cipher(text) {}      //contruct caesar using cipher constructor

    void Encrypt(const char* text);     //encrypt function

};

