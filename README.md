# URL Validator (C++)

A simple CLI tool built in C++ to validate and analyze URLs using regex and basic security heuristics.

## Features
- URL format validation using std::regex
- Detection of suspicious patterns (e.g. phishing keywords)
- Lightweight and fast CLI execution

## Concepts
- C++ Standard Library (regex, string)
- Input validation
- Basic security logic

## How to Run  in VsCode

```bash
g++ main.cpp validator.cpp -o url-validator
./url-validator
