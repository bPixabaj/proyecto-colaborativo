#include <iostream>
#include <vector> // Para poder manerjar los vectores que en el cual manejaremos los estudiantes y sus datos
#include <limits> // Para manejar valores máximos y mínimos

using namespace std;

int main() {
    int N; // Número de estudiantes

    // Pedir al usuario el número de estudiantes
    cout << "ingrese la cantidad de estudiantes: ";
    cin >> N;

    vector<float> calificaciones(N); // vector para almacenar las calificaciones

    // variables para estadísticas
    float suma = 0; // Suma de calificaciones para calcular el promedio
    float maxCalif = numeric_limits<float>::min(); // Calificación más alta (inicializada con el valor mínimo posible)
    float minCalif = numeric_limits<float>::max(); // Calificación más baja (inicializada con el valor máximo posible)
    int aprobados = 0; // Contador de estudiantes aprobados
    int reprobados = 0; // Contador de estudiantes reprobados

    // Leer las calificaciones de los estudiantes
    for (int i = 0; i < N; i++) {
        cout << "Ingrese la calificación del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];

        suma += calificaciones[i]; // Acumular la suma de calificaciones

        // Comparar para encontrar la calificación más alta y más baja
        if (calificaciones[i] > maxCalif) {
            maxCalif = calificaciones[i];
        }
        if (calificaciones[i] < minCalif) {
            minCalif = calificaciones[i];
        }

        // Contar aprobados y reprobados
        if (calificaciones[i] >= 60) {
            aprobados++;
        }
        else {
            reprobados++;
        }
    }

    // Calcular el promedio
    float promedio = suma / N;

    // Mostrar los resultados
    cout << "\nResultados: " << endl;
    cout << "Calificación más alta: " << maxCalif << endl;
    cout << "Calificación más baja: " << minCalif << endl;
    cout << "Promedio de calificaciones: " << promedio << endl;
    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes reprobados: " << reprobados << endl;

    return 0; // Indicar que el programa terminó correctamente
}
