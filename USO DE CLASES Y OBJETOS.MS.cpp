#include <iostream>
#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anio;
    int edicion;
    int paginas;

public:
   
    Libro(string t, string a, int an, int e, int p) {
        titulo = t;
        autor = a;
        anio = an;
        edicion = e;
        paginas = p;
    }

    void mostrarInfo() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de publicacion: " << anio << endl;
        cout << "Edicion: " << edicion << endl;
        cout << "Cantidad de paginas: " << paginas << endl;
    }
};

int main() {
    int cantidad = 5;
    Libro* listaLibros[5];

    for (int i = 0; i < cantidad; i++) {
        string titulo, autor;
        int anio, edicion, paginas;

        cout << "Ingrese el titulo del libro " << i + 1 << ": ";
        getline(cin, titulo);

        cout << "Ingrese el autor: ";
        getline(cin, autor);

        cout << "Ingrese el año de publicacion: ";
        cin >> anio;

        cout << "Ingrese la edicion: ";
        cin >> edicion;

        cout << "Ingrese la cantidad de paginas: ";
        cin >> paginas;

        cin.ignore();

        listaLibros[i] = new Libro(titulo, autor, anio, edicion, paginas);
        cout << endl;
    }

    cout << "\nLista de Libros Registrados";
    for (int i = 0; i < cantidad; i++) {
        listaLibros[i]->mostrarInfo();
    }
}