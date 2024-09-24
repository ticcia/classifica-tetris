#include "iostream"
#include "classifica.h"
using namespace std;

// Funzione per stampare la classifica
void visualizzaClassifica(giocatore_t classifica[], int count){
    if (count == 0) {
        cout << "La classifica è vuota." << endl;
        return;
    }

    cout << "Classifica Tetris:" << endl;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << classifica[i].nome << " - " << classifica[i].punteggio << " punti" << endl;
    }
}

// Funzione per inserire un nuovo giocatore nella classifica
void inserisciPunteggio(giocatore_t classifica[], int &count) {
    if (count == 10) {
        cout << "La classifica è già piena, aggiungi solo giocatori con punteggi più alti." << endl;
    }

    string nome;
    int punteggio;

    // Input per nome e punteggio
    cout << "Inserisci il nome del giocatore: ";
    cin >> nome;
    cout << "Inserisci il punteggio del giocatore: ";
    cin >> punteggio;

    // Se la classifica ha meno di 10 giocatori, si aggiunge il nuovo giocatore
    if (count < 10) {
        classifica[count].nome = nome;
        classifica[count].punteggio = punteggio;
        count++;
    }
        // Se la classifica è piena, controlla se il nuovo punteggio è abbastanza alto
    else if (punteggio > classifica[count - 1].punteggio) {
        classifica[count - 1].nome = nome;
        classifica[count - 1].punteggio = punteggio;
    }
        // Se il punteggio non è abbastanza alto, mostra un messaggio
    else {
        cout << "Il punteggio non è abbastanza alto per entrare in classifica." << endl;
        return;  // Esci dalla funzione senza riordinare
    }

    // Riordina la classifica in ordine decrescente di punteggio
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (classifica[j].punteggio < classifica[j + 1].punteggio) {
                giocatore_t temp = classifica[j];
                classifica[j] = classifica[j + 1];
                classifica[j + 1] = temp;
            }
        }
    }
}



