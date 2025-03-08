#include <iostream>  // Librería estándar para entrada y salida de datos

using namespace std;

int main() {
    const int DIAS_SEMANA = 7; // Definimos una constante para los 7 días de la semana
    double ventas[DIAS_SEMANA]; // Arreglo para almacenar las ventas de cada día
    double totalVentas = 0; // Variable para almacenar el total de ventas de la semana
    int diaMayorVenta = 0; // Índice del día con mayores ventas
    bool hayDiaSinVentas = false; // Variable booleana para verificar si hubo días sin ventas

    // Pedimos al usuario que ingrese las ventas de cada día
    for (int i = 0; i < DIAS_SEMANA; i++) {
        cout << "Ingrese las ventas del dia " << i + 1 << ": "; // Mensaje al usuario
        cin >> ventas[i]; // Se almacena la entrada del usuario en el arreglo
        totalVentas += ventas[i]; // Se suma la venta del día al total

        // Verificamos si este día tiene la mayor venta registrada hasta ahora
        if (ventas[i] > ventas[diaMayorVenta]) {
            diaMayorVenta = i;
        }

        // Verificamos si hubo algún día sin ventas
        if (ventas[i] == 0) {
            hayDiaSinVentas = true;
        }
    }

    // Mostramos el total de ventas de la semana
    cout << "Total de ventas de la semana: " << totalVentas << endl;

    // Mostramos el día con mayores ventas (sumamos 1 porque los índices comienzan en 0)
    cout << "El dia con mayores ventas fue el dia " << diaMayorVenta + 1 << " con " << ventas[diaMayorVenta] << " ventas." << endl;

    // Indicamos si hubo algún día sin ventas
    if (hayDiaSinVentas) {
        cout << "Hubo al menos un dia sin ventas." << endl;
    }
    else {
        cout << "No hubo dias sin ventas." << endl;
    }

    return 0; // Fin del programa
}
