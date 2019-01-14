#pragma once
#include<iostream>
#include<string>

using namespace std;

int stringToInt(string s);
int charToInt(char c);
string encrypt(string plaintext, string key);
string decrypt(string ciphertext, string key);