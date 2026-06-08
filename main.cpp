#include <iostream>
using namespace std;

int main() {
    int correct_pin = 1234;
    int entered_pin;
    int attempts = 0;

    do {
        cout << "Apna 4-digit ATM Pin enter karein: "<<endl;
        cin >> entered_pin;

        attempts++;

        if (entered_pin != correct_pin && attempts < 3) {
            cout << "Ghalat Pin! Dobara koshish karein. "<<endl;
        }

    } while (entered_pin != correct_pin && attempts < 3);
    if (entered_pin == correct_pin) {
        cout << "Welcome! Aap ka Pin sahi hai. Access Granted." << endl;
    } else {
        cout << "Card Blocked! Aap ne 3 baar ghalat Pin enter ki hai." << endl;
    }


    return 0;
}
