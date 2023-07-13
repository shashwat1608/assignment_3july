#include <iostream>
#include <unordered_map>

bool isIsomorphic(const std::string& s, const std::string& t) {
    if (s.length() != t.length())
        return false;

    std::unordered_map<char, char> sMap;
    std::unordered_map<char, char> tMap;

    for (int i = 0; i < s.length(); i++) {
        char sChar = s[i];
        char tChar = t[i];

        if (sMap.find(sChar) == sMap.end() && tMap.find(tChar) == tMap.end()) {
            sMap[sChar] = tChar;
            tMap[tChar] = sChar;
        } else {
            if (sMap[sChar] != tChar || tMap[tChar] != sChar)
                return false;
        }
    }

    return true;
}

int main() {
    std::string s, t;
    std::cout << "Enter string s: ";
    std::cin >> s;
    std::cout << "Enter string t: ";
    std::cin >> t;

    bool isomorphic = isIsomorphic(s, t);
    if (isomorphic)
        std::cout << "The strings are isomorphic." << std::endl;
    else
        std::cout << "The strings are not isomorphic." << std::endl;

    return 0;
}
