#include<iostream>
#include<string>
using namespace std;
float CalcularPromedio(float nota1, float nota2, float nota3);
int main()
{
string nombre;
float nota1, nota2, nota3, promedio;

cout << "Ingrese el nombre del alumno: ";
getline (cin, nombre);
cout << "Ingrese la primera nota: " ;
cin >> nota1;
cout << "Ingrese la segunda nota: ";
cin >> nota2;
cout << "Ingrese la tercera nota: ";
cin >> nota3;

promedio=CalcularPromedio(nota1, nota2, nota3);
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
float CalcularPromedio(float nota1, float nota2, float nota3){
float promedio = (nota1 + nota2 + nota3) / 3;
return promedio;

}

