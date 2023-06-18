#include<iostream>
#include<string>
using namespace std;

int main()
{
string nombre;
float notal, nota2, nota3, promedio;

cout << "Ingrese el nombre del alumno: ";
getline (cin, nombre);
cout << "Ingrese la primera nota: " ;
cin >> notal;
cout << "Ingrese la segunda nota: ";
cin >> nota2;
cout << "Ingrese la tercera nota: ";
cin >> nota3;

promedio = (notal + nota2 + nota3) / 3;
if (promedio < 6)
{
cout << "El alumno" << nombre << " desaprobo con un promedio de " << promedio << endl;
} else if (promedio < 8){
cout << "El alumno" << nombre << " aprobo con un promedio de " << promedio << endl;
}else
{
  cout << "El alumno " << nombre << " obtuvo un excelente con un promedio de " << promedio << endl;
}
}


