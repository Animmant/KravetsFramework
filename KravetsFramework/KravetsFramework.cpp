#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;


int countDigits(const string& text) {
    int count = 0;
    for (char ch : text) {
        if (isdigit(ch)) {
            count++;
        }
    }
    return count;
}


bool isConsonant(char currentLetter) {
    currentLetter= tolower(currentLetter);

    if (currentLetter >= 'a' && currentLetter <= 'z') {
        switch (currentLetter) {
        case 'a':
        case 'u':
        case 'i':
        case 'o':
        case 'e':
            break;
        default:
            return 1;
            break;
        }
    }
    return 0;
}

double getMaxTopSellersPerMonth(double* arrProductPerMonth, int amountProductPerMonth) {
    double currentMaximum = *arrProductPerMonth;
    for (int i = 1; i < amountProductPerMonth; i++) {
        if (arrProductPerMonth[i] > currentMaximum) {
            currentMaximum = arrProductPerMonth[i];
        }
    }
        return currentMaximum;
}

void printArrMatrix(double* arrTrash, int firstAxis_ForReadingOrder) {
    for (int j = 0; j < firstAxis_ForReadingOrder; j++) {
            cout << j << "x : " << arrTrash[j] << "\t|";
    }
        cout << "\n";
}


void addEnteredInputTextTo_TheStringArray(string arrWords_OfEnteredUsers[], int& amountWords_OfEnteredUsers) {
    do {
        cin >> arrWords_OfEnteredUsers[amountWords_OfEnteredUsers];
        amountWords_OfEnteredUsers++;
    } while (arrWords_OfEnteredUsers[amountWords_OfEnteredUsers - 1] != "/end" && amountWords_OfEnteredUsers < 999);
    amountWords_OfEnteredUsers--;
}


string getLongestWordsArrString(string arrWords_OfEnteredUsers[], int amountWords_OfEnteredUsers) {
    string currentLongestWord = arrWords_OfEnteredUsers[0];
    for (int i = 1; i < amountWords_OfEnteredUsers; i++) {
        if (arrWords_OfEnteredUsers[i].length() > currentLongestWord.length()) {
            currentLongestWord = arrWords_OfEnteredUsers[i];
        }
    }
    return currentLongestWord;
}

string conectArrString(string arrWords[], int amountWords, string startString = "") {
    for (int i = 0; i < amountWords; i++) {
        startString += " " + arrWords[i];
    }
    return startString;
}

int main() {
    setlocale(LC_ALL, "");


    return 0;
}
