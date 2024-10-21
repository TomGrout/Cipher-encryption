#pragma once
#include <iostream>
#include <string.h>

class Cipher
{
public:
	Cipher(const char* t);
	Cipher(const char* t, const char* s);

protected:
	virtual void Encrypt(const char* t) = 0;

private: 
	const char* text;
	const char* encrypted;
};

