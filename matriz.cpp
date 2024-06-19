#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];
    int fila, columna;
    for (fila= 0 ; fila <= 2; fila++){
        for (columna = 0; columna <= 2; columna ++){
            cout << "Ingrese valor en posicion " << fila << " " << columna << ": ";
            cin >> matriz[fila][columna];
            cout << endl;
        }
    }
    for (fila= 0 ; fila <= 2; fila++){
        for (columna = 0; columna <= 2; columna ++){
            cout << matriz[fila][columna] << "   ";
        }
        cout << endl;
    }
    for (fila= 0 ; fila <= 2; fila++){
        for (columna = 0; columna <= 2; columna ++){
                if (fila == columna){
                    cout << matriz[fila][columna];
                    cout << endl;
                }
            cout << endl;
        }
    }
    return 0;
}
