#include <iostream>
#include "classifica.h"
using namespace std;
int main(){
    giocatore_t classifica[10];  // Array di massimo 10 giocatori
    int count = 0;  // Numero di giocatori attualmente nella classifica
    int scelta;

do {
// Menu per l'utente
    cout << "\nGestione Classifica Tetris" << endl;
    cout << "1. Visualizza la classifica" << endl;
    cout << "2. Inserisci un nuovo punteggio" << endl;
    cout << "0. Esci" << endl;
    cout << "Scegli un'opzione: ";
    cin >> scelta;

    switch (scelta) {
        case 1:
            visualizzaClassifica(classifica, count);
            break;
        case 2:
            inserisciPunteggio(classifica, count);
            break;
        case 0:
            cout << "Uscita..." << endl;
            break;
        default:
            cout << "Scelta non valida." << endl;
    }
    } while (scelta != 0);
    return 0;
}