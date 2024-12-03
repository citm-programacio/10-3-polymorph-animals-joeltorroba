// Polymorph Animals.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

// Clase Animal
class Animal {
public:
    // Método virtual puro (abstracto)
    virtual void speak() const = 0;

    // Destructor virtual
    virtual ~Animal() {
        cout << "Destructor de Animal llamado" << endl;
    }
};

// Clase Dog
class Dog : public Animal {
public:
    // Sobrescribimos el método "speak" para que el perro diga "Woof!"
    void speak() const override {
        cout << "Woof!" << endl;
    }

    // Destructor
    ~Dog() override {
        cout << "Destructor de Dog llamado" << endl;
    }
};

// Clase Cat
class Cat : public Animal {
public:
    // Sobrescribimos el método "speak" para que el gato diga "Meow!"
    void speak() const override {
        cout << "Meow! " << endl;
    }

    // Destructor
    ~Cat() override {
        cout << "Destructor de Cat llamado" << endl;
    }
};

int main() {
    // Creamos un puntero a la clase base que apunta a un objeto derivado
    Animal* animal1 = new Dog(); // Asignamos un objeto de tipo Dog
    Animal* animal2 = new Cat(); // Asignamos un objeto de tipo Cat

    // Llamamos al método "speak"
    cout << "El perro dice: ";
    animal1->speak(); // Llama a la implementación en Dog

    cout << "El gato dice: ";
    animal2->speak(); // Llama a la implementación en Cat

    // Liberamos memoria y garantizamos que se llamen los destructores correctos
    delete animal1; // Llama al destructor de Dog y luego al de Animal
    delete animal2; // Llama al destructor de Cat y luego al de Animal

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
