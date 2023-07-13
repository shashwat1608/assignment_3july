#include <iostream>
#include <string>

bool canShiftToGoal(const std::string& s, const std::string& goal) {
    if (s.length() != goal.length()) {
        return false;
    }
    std::string shifted = s + s;
    return shifted.find(goal) != std::string::npos;
}

int main() {
    std::string s, goal;
    std::cout << "Enter the first string: ";
    std::cin >> s;
    std::cout << "Enter the second string: ";
    std::cin >> goal;
    if (canShiftToGoal(s, goal)) {
        std::cout << "Yes, " << s << " can be transformed into " << goal << " through shifts.\n";
    } else {
        std::cout << "No, " << s << " cannot be transformed into " << goal << " through shifts.\n";
    }
    return 0;
}
