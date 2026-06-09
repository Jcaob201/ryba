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
        if (plansza[i] == znak && plansza[i+3] == znak && plansza[i+6] == znak) return true;
    }
    if (plansza[0] == znak && plansza[4] == znak && plansza[8] == znak) return true;
    if (plansza[2] == znak && plansza[4] == znak && plansza[6] == znak) return true;

    return false;

}

bool sprawdzRemis(const vector<chra>& plansza){
for (char pole : plansza){
        if (pole != 'X' && pole != 'O') return false;
}
return true;
}

int main()
{
vector<char> plansza = {'1','2','3','4','5','6','7','8','9'};
char aktualnyGracz = 'X';
int wybor;

cout << "Gra w Kolko i Krzyzyk dla dwoch graczy!" << endl;

while (true) {
        wyswietlPlansze(plansza);
        cout << "Gracz " << aktuqalnyGracz << ", wybierz numer pola (1-9): ";
        cin >> wybor;

        if(wybor < 1 || wybor > 9 || plansza[wybor-1] == 'X' || plansza[wybor-1] == 'O'){
                cout << "Nieprwidlowy ruch! Sprobuj ponownie.\n";
                continue;
        }
        plansza[wybor-1] = aktualnyGracz;

        if(sprawdzRemis(plansza, aktualnyGracz)) {
                wyswietlPlansze(plansza);
        cout << "Gratulacje! Gracz " << aktualnyGracz << " wygrywa gre!" << endl;


}


