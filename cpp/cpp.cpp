#include <iostream>
using namespace std;

struct car{
    string brand;
    string model;
    int year;
    double price;
};

void inserecarro (car &c){
  cout<< "Marca do carro: " <<endl;
  cin >> c.brand;
}
void showcar(car c){
    cout << "A marca do carro é: " << c.brand << endl;
}


int main(){
    car carro1;
    car carro2;
    inserecarro(carro1);
    showcar(carro1);

return 0;
}