#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <string>

bool isValidURL(const std::string& url);
bool isSuspicious(const std::string& url);

#endif