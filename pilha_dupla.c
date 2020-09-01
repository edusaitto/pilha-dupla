#include <iostream>
#include <string>

using namespace std;

const int TAM = 10;
int pilha[TAM];
int topo = -1;

void pilha_vazia() {
    if (topo == -1) {
        cout << "Pilha vazia!" << endl;
    } else {
        cout << "A pilha contém elementos!" << endl;
    }
}

void pilha_cheia() {
    if (topo >= TAM-1) {
        cout << "Pilha cheia!" << endl;
    } else {
        cout << "A pilha ainda tem espaço" << endl;
    }
}

void push_dupla(int valor1, int valor2) {
    if (topo >= TAM-1) {
        cout << "Pilha cheia!" << endl;
    } else {
    topo++;
    pilha[topo] = valor1;
    topo++;
    pilha[topo] = valor2;
    cout << "Elementos INSERIDOS com sucesso!" << endl;
    }
}

void pop_dupla() {
    if (topo == -1) {
        cout << "Pilha vazia!" << endl;
    } else {
        topo--;
        topo--;
        cout << "Elementos REMOVIDOS com sucesso!" << endl;
    }
}

void mostrar_topo() {
    if (topo == -1) {
        cout << "Pilha vazia!" << endl;
    } else {
        cout << "O topo da pilha é: " << pilha[topo-1] << "," << pilha[topo] << endl;
    }
}

void imprime() {
    if (topo == -1) {
        cout << "Pilha vazia!" << endl;
    } else {
        int i;
        for (i=0; i<=topo; i++) {
            if (i==topo) {
            cout << pilha[i];
            } else {
            cout << pilha[i] << ",";
            }
        }
        cout << endl;
    }
}

int main () {
    pilha_vazia();
    pop_dupla();
    push_dupla(1, 2);
    push_dupla(3, 4);
    push_dupla(5, 6);
    push_dupla(7, 8);
    push_dupla(9, 10);
    push_dupla(11, 12);
    imprime();
    pilha_cheia();
    pop_dupla();
    pilha_vazia();
    mostrar_topo();
    pilha_cheia();
    pop_dupla();
    push_dupla(15, 16);
    imprime();
}
