#include <iostream>
#include <vector> // Para poder manerjar los vectores que en el cual manejaremos los estudiantes y sus datos
#include <limits> // Para manejar valores m�ximos y m�nimos

using namespace std;

int main() {
    int N; // N�mero de estudiantes

    // Pedir al usuario el n�mero de estudiantes
    cout << "ingrese la cantidad de estudiantes: ";
    cin >> N;

    vector<float> calificaciones(N); // vector para almacenar las calificaciones

    // variables para estad�sticas
    float suma = 0; // Suma de calificaciones para calcular el promedio
    float maxCalif = numeric_limits<float>::min(); // Calificaci�n m�s alta (inicializada con el valor m�nimo posible)
    float minCalif = numeric_limits<float>::max(); // Calificaci�n m�s baja (inicializada con el valor m�ximo posible)
    int aprobados = 0; // Contador de estudiantes aprobados
    int reprobados = 0; // Contador de estudiantes reprobados

    // Leer las calificaciones de los estudiantes
    for (int i = 0; i < N; i++) {
        cout << "Ingrese la calificaci�n del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];

        suma += calificaciones[i]; // Acumular la suma de calificaciones

        // Comparar para encontrar la calificaci�n m�s alta y m�s baja
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
    cout << "Calificaci�n m�s alta: " << maxCalif << endl;
    cout << "Calificaci�n m�s baja: " << minCalif << endl;
    cout << "Promedio de calificaciones: " << promedio << endl;
    cout << "Estudiantes aprobados: " << aprobados << endl;
    cout << "Estudiantes reprobados: " << reprobados << endl;

    return 0; // Indicar que el programa termin� correctamente
}
