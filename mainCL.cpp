#include <iostream>
#include <string>
#include "hash-library/sha256.h"
#include "hash-library/sha256.cpp"

using namespace std;

int main()
{
    SHA256 sha256;
    std::cout << sha256("Hello World") << std::endl;
}