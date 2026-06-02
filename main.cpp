#include <bits/stdc++.h>
using namespace std;

void wyswietlPlasze(const vector<char>& plansza) {
    cout << "\n";
    cout << "    |     |     " << endl;
    cout << " " << plansza[0] << "  |  " << plansza[1] << "  |  " << plansza[2] << " " <<  endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << plansza[3] << "  |  " << plansza[4] << "  |  " << plansza[5] << " " << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << plansza[6] << "  |  " << plansza[7] << "  |  " << plansza[8] << " " << endl;
    cout << "    |    |    " << endl;
    cout << "\n";
}

bool sprawdzWygrana(const vector<char>& plansza, char znak){
    for (int i=0; i<3;i++){
        if (plansza[i*3] == znak && plansza[i*3+1] == znak && plansza[i*3+2] == znak) return true;

