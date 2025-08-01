#include <iostream>
using namespace std;
void printArray(float array[]) {
    for (int i = 0; i < 4; i ++) {
        cout << "[" << array[i] << "]" << endl;
    }
}

void descendente(float array[], int size) {
    float mayor = 0;
    float descendente[4] = {0, 0, 0, 0};
    for (int a = 0; a < 4; a++) {
        mayor = 0;
        for (int i = 0; i < 4; i++) {
            bool valido = true;
            for (int j = 0; j < 4; j++) {
                if (descendente[j] == array[i]) {
                    valido = false;
                }
            }
            if (array[i] > mayor && valido) {
                mayor = array[i];
            }
        }
        descendente[a] = mayor;
    }
    cout << "--- Orden descendente ---" << endl;
    printArray(descendente);
    cout << endl;
}

void ranking(float array[], int size) {
    float mayor = 0;
    float descendente[4] = { 0, 0, 0, 0 };
    for (int a = 0; a < 4; a++) {
        mayor = 0;
        for (int i = 0; i < 4; i++) {
            bool valido = true;
            for (int j = 0; j < 4; j++) {
                if (descendente[j] == array[i]) {
                    valido = false;
                }
            }
            if (array[i] > mayor && valido) {
                mayor = array[i];
            }
        }
        descendente[a] = mayor;
    }
    cout << "--- Rankings ---" << endl;
    for (int i = 3; i >= 0; i--) {
        cout << "#" << (4 - i) << ".  [" << descendente[i] << "]" << endl;
    }
    cout << endl;
}

int TimeTrials() {
    int opcion;
    float tiempos[4] = {0, 0, 0, 0};  
    do {        
        cout << "----- Time trials -----" << endl;
        cout << "1. Ingresar tiempos" << endl;
        cout << "2. Tiempos descendentes" << endl;
        cout << "3. Ranking de tiempos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese la opcion a la que desea acceder: ";
        cin >> opcion;
        cout << endl;
        switch (opcion) {
            case 1:
                for  (int i = 0; i < 4; i++) {
                    cout << "Ingrese un tiempo: ";
                    cin >> tiempos[i];
                }
                cout << endl;
                break;
            case 2:
                descendente(tiempos, 4);
                break;
            case 3:
                ranking(tiempos, 4);
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
        cout << endl;
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
