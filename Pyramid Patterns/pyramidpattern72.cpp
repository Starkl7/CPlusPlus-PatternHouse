#include <iostream>
using namespace std;

char alphabet;

void printPattern (int);
void printWhitespaces (int);

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

    int whiteSpace, printStar, itr = 1, counter;

    for (int i = totalLines; i >= 1; i--) {

        whiteSpace = (totalLines - i);
        printWhitespaces (whiteSpace);

        printStar = ((2 * i) - 1);
        counter = 1;
        alphabet = 'A';

        for (int j = 1; j <= printStar; j++) {

            if (itr & 1) {

                cout.width(2);
                (j & 1) ? cout << alphabet++ << " " : cout << "   ";
            } else {

                cout.width(2);
                (j & 1) ? cout << counter++ << " " : cout << "   ";
            }
        }
        
        itr++;
        cout << "\n";
    }
}

void printWhitespaces (int total) {

    for (int i = 1; i <= total; i++) {

        cout << "   ";
    }
}