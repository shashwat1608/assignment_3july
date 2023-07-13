#include <iostream>
#include <string>
#include <algorithm>

std::string reverseStringPart(const std::string& s, int start, int k) {
    std::string reversed = s.substr(start, k);
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string reverseStr(const std::string& s, int k) {
    int n = s.length();
    std::string result = "";

    for (int i = 0; i < n; i += 2 * k) {
        // Reverse the first k characters
        std::string reversed = reverseStringPart(s, i, k);
        result += reversed;

        // Append the remaining characters
        result += s.substr(i + k, k);
    }

    return result;
}

int main() {
    std::string s;
    int k;

    // Read the string and k from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Enter an integer k: ";
    std::cin >> k;

    // Reverse the string based on the given rules
    std::string reversedString = reverseStr(s, k);

    // Print the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
