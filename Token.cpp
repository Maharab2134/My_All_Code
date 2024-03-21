//Compiler Design Lab
//Tokenization of a C++ code
// Input: int main() { int a, int b) { return a+b; }

#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>

using namespace std;

// Function to check if a string is a keyword
bool isKeyword(const string &word) {
    static const unordered_map<string, bool> keywords {
        {"int", true},
        {"float", true},
        {"return", true},

        // Add more keywords as needed
    };
    return keywords.find(word) != keywords.end();
}

// Function to check if a character is an operator or a symbol
bool isOperators(char ch) {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
        ch == '>' || ch == '<' || ch == '=' || ch == '|' || ch == '&')
        return true;
    return false;
}
bool Symbol(char ch) {
    if (ch == '(' || ch == ')' || ch == '{' || ch == '}' ||
        ch == ',' || ch == ';' || ch == ':')
        return true;
    return false;
}
int main() {
    string input;
    cout << "Enter the Code: ";
    getline(cin, input); // Taking input from the user

    int tokenCount = 0;
    int identifierCount = 0;
    int keywordCount = 0;
    int symbolCount = 0;
    int operatorCount = 0;
    int integerCount = 0;
    int floatCount = 0;
    int exponentialCount = 0;

    // vector<string> tokens;
    vector<string> identifiers;
    vector<string> keywords;
    vector<char> symbols;
    vector<char> operators;
    vector<string> integers;
    vector<string> floats;
    vector<string> exponential;
    
    string currentToken;
    
    // Iterate through each character in the input
    for (char ch : input) {
        if (isspace(ch) || isOperators(ch) || Symbol(ch)) {
            // If a whitespace, operator, or symbol is encountered,
            // process the current token
            if (!currentToken.empty()) {
                tokenCount++;

                // Check if the current token is a keyword
                if (isKeyword(currentToken)) {
                    keywordCount++;
                    keywords.push_back(currentToken);
                } else {
                    // If not a keyword, it's an identifier
                    identifierCount++;
                    identifiers.push_back(currentToken);
                }
                currentToken.clear();
            }
            // Count symbols and operators
            if (Symbol(ch)) {
                symbolCount++;
                symbols.push_back(ch);
            }
             if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                    operatorCount++;
                    operators.push_back(ch);
                }
        } else {
            // If not whitespace, add the character to the current token
            currentToken += ch;

            // Check if the token is an integer, float, or exponential
            if (isdigit(ch)) {
                if (currentToken.find('.') != string::npos) {
                    // If the token contains a '.', it's a float
                    floatCount++;
                } else if (currentToken.find('e') != string::npos || currentToken.find('E') != string::npos) {
                    // If the token contains 'e' or 'E', it's an exponential
                    exponentialCount++;
                } else {
                    // Otherwise, it's an integer
                    integerCount++;
                }
            }
        }
    }

    // Output the counts
   
    cout << "Token: " << (identifierCount+keywordCount+symbolCount+operatorCount+integerCount+exponentialCount) << endl;
    cout << "Identifier: " << identifierCount << " = ";
    for (const auto& identifier : identifiers) {
        cout << identifier << " ";
    }
    cout << endl;
    cout << "Keyword: " << keywordCount << " = ";
    for (const auto& keyword : keywords) {
        cout << keyword << " ";
    }

    cout << endl;
    cout << "Symbol: " << symbolCount << " = ";
    for (const auto& symbol : symbols) {
        cout << symbol << " ";
    }

    cout << endl;
    cout << "Operator: " << operatorCount << " = ";
    for (const auto& op : operators) {
        cout << op << " ";
    }

    cout << endl;
    cout << "Integer: " << integerCount << "  ";
    for (const auto& integer : integers) {
        cout << integer << " ";
    }

    cout << endl;
    cout << "Float: " << floatCount << "  ";
    for (const auto& fl : floats) {
        cout << fl << " ";
    }

    cout << endl;
    cout << "Exponential: " << exponentialCount << "  ";
    for (const auto& exp : exponential) {
        cout << exp << " ";
    }

    return 0;
}
