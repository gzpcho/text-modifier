#include "modifier.h"

std::string Modifier::palindrome(std::string& str) {
    return str + reverse(str);
}

std::string Modifier::reverse(std::string& str) {
    for (size_t i = 0; i < str.size() / 2; i++) {
        std::swap(str[i], str[str.length() - i - 1]);
    return str;
}

