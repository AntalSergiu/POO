#include "pch.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int nume_persoana;

    cout << "Numar persoane: ";
    cin >> nume_persoana;

    vector<pair<string, int>> memorie;
    for (int i = 0; i < nume_persoana; i++) {
        string nume;
        int varsta;

        cout << "Nume: ";
        cin >> nume;

        cout << "Varsta: ";
        cin >> varsta;

        memorie.push_back(make_pair(nume, varsta));
    }

    cout << "Afisare rezultate:" << endl;
    for (int i = 0; i < nume_persoana; i++) {
        cout << memorie[i].first << " are " << memorie[i].second << " ani." << endl;
    }

    return 0;
}