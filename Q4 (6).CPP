#include <iostream>
#include <string>
#include <sstream>

std::string reverseWords(const std::string& s) {
    std::stringstream ss(s);
    std::string word, result;
    
    while (ss >> word) {
        std::reverse(word.begin(), word.end());
        result += word + " ";
    }
    
    // Remove the trailing space
    if (!result.empty())
        result.pop_back();
    
    return result;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);
    
    std::string reversed = reverseWords(sentence);
    
    std::cout << "Reversed sentence: " << reversed << std::endl;
    
    return 0;
}
