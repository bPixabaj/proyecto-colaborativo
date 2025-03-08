#include <iostream>  // Librer�a est�ndar para entrada y salida de datos

using namespace std;

int main() {
    const int DIAS_SEMANA = 7; // Definimos una constante para los 7 d�as de la semana
    double ventas[DIAS_SEMANA]; // Arreglo para almacenar las ventas de cada d�a
    double totalVentas = 0; // Variable para almacenar el total de ventas de la semana
    int diaMayorVenta = 0; // �ndice del d�a con mayores ventas
    bool hayDiaSinVentas = false; // Variable booleana para verificar si hubo d�as sin ventas

    // Pedimos al usuario que ingrese las ventas de cada d�a
    for (int i = 0; i < DIAS_SEMANA; i++) {
        cout << "Ingrese las ventas del dia " << i + 1 << ": "; // Mensaje al usuario
        cin >> ventas[i]; // Se almacena la entrada del usuario en el arreglo
        totalVentas += ventas[i]; // Se suma la venta del d�a al total

        // Verificamos si este d�a tiene la mayor venta registrada hasta ahora
        if (ventas[i] > ventas[diaMayorVenta]) {
            diaMayorVenta = i;
        }

        // Verificamos si hubo alg�n d�a sin ventas
        if (ventas[i] == 0) {
            hayDiaSinVentas = true;
        }
    }

    // Mostramos el total de ventas de la semana
    cout << "Total de ventas de la semana: " << totalVentas << endl;

    // Mostramos el d�a con mayores ventas (sumamos 1 porque los �ndices comienzan en 0)
    cout << "El dia con mayores ventas fue el dia " << diaMayorVenta + 1 << " con " << ventas[diaMayorVenta] << " ventas." << endl;

    // Indicamos si hubo alg�n d�a sin ventas
    if (hayDiaSinVentas) {
        cout << "Hubo al menos un dia sin ventas." << endl;
    }
    else {
        cout << "No hubo dias sin ventas." << endl;
    }

    return 0; // Fin del programa
}
