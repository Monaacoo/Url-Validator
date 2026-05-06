#include "validator.h"
#include <regex>

bool isValidURL(const std::string& url) {
    std::regex pattern(R"(https?:\/\/(www\.)?[a-zA-Z0-9\-]+\.[a-zA-Z]{2,}.*)");
    return std::regex_match(url, pattern);
}

bool isSuspicious(const std::string& url) {
    return url.find("login") != std::string::npos ||
           url.find("verify") != std::string::npos ||
           url.find("@") != std::string::npos;
}