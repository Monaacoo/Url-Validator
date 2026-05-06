#include <iostream>
#include "validator.h"

int main() {
    std::string url;

    std::cout << "Enter URL: ";
    std::cin >> url;

    if (!isValidURL(url)) {
        std::cout << "Invalid URL format\n";
        return 0;
    }

    if (isSuspicious(url)) {
        std::cout << "⚠️ Suspicious URL detected!\n";
    } else {
        std::cout << "✅ URL seems safe\n";
    }

    return 0;
}