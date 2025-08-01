#include <iostream>
using namespace std;
int TimeTrials() {
    int opcion;
    int tiempos[4];
    do {        
        cout << "----- Time trials -----" << endl;
        cout << "1. Ingresar tiempos" << endl;
        cout << "2. Tiempos descendentes" << endl;
        cout << "3. Ranking de tiempos" << endl;
        cout << "Ingrese la opcion a la que desea acceder: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                for  (int i = 0; i < 4; i++) {
                    cout << "Ingrese un tiempo: ";
                    cin >> tiempos[i];
                }
                break;
            case 2:
                int descendente[4];
                int mayor = 0;
                for (int a = 0; a < 4; a++) {
                    for (int i = 0; i < 4; i++) {
                        bool valido = true;
                        for (int j = 0; i < 4; j++) {
                            if (descendente[j] == tiempos[i]) {
                                valido = false;
                            }
                        }
                        if (tiempos[i] > mayor && valido) {
                            mayor = tiempos[i];
                        }
                    }
                    descendente[a] = mayor;
                }
                cout << "--- Orden descendente ---" << endl;
                for (int num : descendente) {
                    cout << "[" << num << "]" << endl;
                }
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                cout << "Opcion ingresada no es valida." << endl;
        }
    } while (opcion != 4);
    return 0;
}
int Sumatoria() {
    
    return 0;
}
int main() {
    int opcion;
    do {
        cout << "------- Menu -------" << endl;
        cout << "1. Time trials" << endl;
        cout << "2. Sumatoria" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                TimeTrials();
                break;
            case 2:
                Sumatoria();
                break;
            case 3:
                break;
            default:
                cout << "Opcion ingresada no es valida." << endl;
        }
    } while (opcion != 3);
}
