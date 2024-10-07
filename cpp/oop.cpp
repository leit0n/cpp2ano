#include <iostream>
#include <string>

using namespace std;


class fatura{
    private:
    int id = rand() % 100000000;
    string nome;
    int cc;
    double valor = rand() % 1000001;

    public:
    void criarfatura(){
        cout << "Nome: " << nome;
        cin >> nome;
        cout << "Número de Cartão de Crédito: ";
        cin >> cc;
        system("clear");
    }

    void imprimirfatura(){
        cout << "ID: " << id << endl;
        cout << "Nome: " << nome << endl;
        cout << "Número de Cartão de Crédito: " << cc << endl;
        cout << "Valor a pagar: " << valor << "€" << endl;
    }
};

int main(){
    fatura f1;
    f1.criarfatura();
    f1.imprimirfatura();  

    return 0;
}