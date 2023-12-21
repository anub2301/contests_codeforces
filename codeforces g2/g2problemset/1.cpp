#include <iostream>
#include <string>

bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool canReachCODETOWN(const std::string& town) {
    for (int i = 0; i < 7; ++i) {
        char currentChar = town[i];
        char nextChar = town[i + 1];
        if ((isVowel(currentChar) && isVowel(nextChar)) || (!isVowel(currentChar) && !isVowel(nextChar))) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        std::string town;
        std::cin >> town;

        if (canReachCODETOWN(town)) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
