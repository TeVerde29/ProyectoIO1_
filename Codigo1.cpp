#include <iostream>
#include <limits>

using namespace std;

namespace Colores {
    const char* RESET = "\033[0m";
    const char* ROJO = "\033[31m";
    const char* VERDE = "\033[32m";
    const char* AZUL = "\033[34m";
    const char* AMARILLO = "\033[33m";
    const char* CYAN = "\033[36m";
}

// Para limpiar la entrada
void limpiarEntrada() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Función para mostrar el menu
void mostrarMenu() {
    using namespace Colores;
    cout << AZUL << "===== Menu Principal =====" << RESET << "\n";
    cout << VERDE << "1. Opcion 1" << RESET << "\n";
    cout << AMARILLO << "2. Opcion 2" << RESET << "\n";
    cout << CYAN << "3. Salir" << RESET << "\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    using namespace Colores;
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        if (cin.fail()) {
            cout << ROJO << "Entrada no valida. Por favor, ingrese un numero." << RESET << "\n";
            cin.clear();
            limpiarEntrada();
            continue;
        }

        switch (opcion) {
            case 1:
                cout << VERDE << "Has seleccionado la opcion 1." << RESET << "\n";
                break;
            case 2:
                cout << AMARILLO << "Has seleccionado la opcion 2." << RESET << "\n";
                break;
            case 3:
                cout << CYAN << "Saliendo..." << RESET << "\n";
                break;
            default:
                cout << ROJO << "Opcion invalida. Intente nuevamente." << RESET << "\n";
        }
    } while (opcion != 3);

    return 0;
}