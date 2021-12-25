#include <iostream>
using namespace std;

int counter = 1;
char alphabet = 'A';

void printPattern (int);
void printWhitespaces (int);
void printLeftHalf (int);
void printRightHalf (int);

int main () {

    int totalLines;

    cout << "How many lines to be printed? -- ";
    fflush(stdout);
    cin >> totalLines;

    cout << "\nYour pattern looks like this:\n";
    cout << "\n";

    printPattern (totalLines);

    cout << "\n";
    return 0;
}

void printPattern (int totalLines) {

    int whiteSpace;

    for (int i = 1; i <= totalLines; i++) {

        whiteSpace = (totalLines - i);

        printWhitespaces (whiteSpace);
        printLeftHalf (i);
        printRightHalf (i);

        cout << endl;
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "   ";
    }
}

void printLeftHalf (int total) {

    for (int j = 1; j <= total; j++) {

        cout << " " << alphabet << " ";
    }

    alphabet++;
}

void printRightHalf (int total) {

    for (int j = 1; j <= total; j++) {

        cout.width (2);
        cout << counter << " ";
    }

    counter++;
}