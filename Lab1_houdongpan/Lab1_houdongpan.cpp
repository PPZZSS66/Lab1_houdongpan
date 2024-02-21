
#include <iostream>
#include <vector>
#include <string>
using namespace std;

char encode(char inputChr,vector<char>& cipher) {
    if (inputChr >= 65 && inputChr <= 90) {
        return cipher[inputChr - 65];
    }
    else if (inputChr >= 97 && inputChr <= 122) { 
        char upperLetter = inputChr - 32; 
        char upperCode = cipher[upperLetter - 65]; 
        return upperCode + 32; 
    }
    else { 
        return inputChr;
    }
}

string encodeString( string& input, vector<char>& cipher) {
    string encoded = "";
    for (char ch : input) {
        encoded += encode(ch, cipher);
    }
    return encoded;
}

int main() {
    vector<char> cipher = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };

    string text;
    cout << "Input text to cypher: ";
    getline(cin, text);

 
    if (text.length() > 128) {
        cout << "Input is too long." << endl;
        return 1;
    }

    string encodedString = encodeString(text, cipher);

    cout << "Encoded Message: " << encodedString<< endl;

    return 0;
}
