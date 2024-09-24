#ifndef CLASSIFICA_CLASSIFICA_H
#define CLASSIFICA_CLASSIFICA_H
#include <string>

typedef struct{
    std::string nome;
    int punteggio;
} giocatore_t;

// Funzione per stampare la classifica
void visualizzaClassifica(giocatore_t classifica[], int count);

// Funzione per inserire un nuovo giocatore nella classifica
void inserisciPunteggio(giocatore_t classifica[], int &count);


#endif
