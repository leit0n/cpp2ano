#include <vector>
#include <iostream>
#include <string>

using namespace std;

struct Modelo
{
    string tipo;
    vector <string> nomes;
};

vector <Modelo> modelos = {
        {"elétricas", {"Stratocaster", "Les Paul", "SG"}},
        {"clássicas", {"Yamaha C40", "Cordoba C5", "Alhambra 1C"}},
        {"acústicas", {"Martin D-28", "Taylor 814ce", "Gibson J-45"}},
        {"ukeleles", {"Kala KA-T", "Lanikai LU-21", "Fender Grace VanderWaal"}}};

int main() {
    system("clear");
    cout << "Qual modelo de guitarra gostava de ter?" << endl;
    cout << "1. elétricas" << endl;
    cout << "2. clássicas" << endl;
    cout << "3. acústicas" << endl;
    cout << "4. ukeleles" << endl;

    int opt;
    cin >> opt;
    system("clear");

    switch (opt)
    {
    case 1:
        for (const auto &nome : modelos[0].nomes) {
            cout << nome << endl;
        }
        break;
    case 2:
        for (const auto &nome : modelos[1].nomes) {
            cout << nome << endl;
        }
        break;
    case 3:
        for (const auto &nome : modelos[2].nomes) {
            cout << nome << endl;
        }
        break;
    case 4:
        for (const auto &nome : modelos[3].nomes) {
            cout << nome << endl;
        }
        break;
    default:
        break;
    }


    return 0;
    
}
