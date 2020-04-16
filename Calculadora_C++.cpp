#include<bits/stdc++.h>
using namespace std;

void DividirResiduo(int val1, int val2) //Esta es la funcion que sirve para optener los reciduos de los valores dados
{
    int x,y,w; //La variables creadas para manejar los datos 
    x= val1;  //La aignacion de las variables recibidas a una de la funcion
    y= val2; //La aignacion de las variables recibidas a una de la funcion

    w= y%x; //La operacion aritmetica a la que tiene que hacer la funcion

    cout<<"El residuo es: "<<w<<endl; //La imprecion del resultado optenido 


}
void DividirCosiente(int val1, int val2) //Esta es la funcion que sirve para optener el cociente de los valores dados
{
    int x,y,w;//La variables creadas para manejar los datos 
    x= val1;//La aignacion de las variables recibidas a una de la funcion
    y= val2;//La aignacion de las variables recibidas a una de la funcion

    w= y/x;//La operacion aritmetica a la que tiene que hacer la funcion

    cout<<"El cocuente es: "<<w<<endl;//La imprecion del resultado optenido 



}

void Multiplicacion(int val1, int val2)//Esta es la funcion que sirve para optener la multiplicacion de los valores dados
{
    int x,y,w;//La variables creadas para manejar los datos 
    x= val1;//La aignacion de las variables recibidas a una de la funcion
    y= val2;//La aignacion de las variables recibidas a una de la funcion

    w=x*y;//La operacion aritmetica a la que tiene que hacer la funcion
    cout<<"La multiplicacion es: "<<w<<endl;//La imprecion del resultado optenido 


}
void Resta(int val1, int val2)//Esta es la funcion que sirve para optener la resta de los valores dados
{
    int x,y,w;//La variables creadas para manejar los datos 
    x= val1;;//La aignacion de las variables recibidas a una de la funcion
    y= val2;;//La aignacion de las variables recibidas a una de la funcion

    w= x-y;//La operacion aritmetica a la que tiene que hacer la funcion

    cout<<"La resta es: "<<w<<endl;//La imprecion del resultado optenido 


}

void Suma(int val1, int val2)//Esta es la funcion que sirve para optener la suma de los valores dados
{
    int x,y,w;//La variables creadas para manejar los datos 
    x= val1;;//La aignacion de las variables recibidas a una de la funcion
    y= val2;;//La aignacion de las variables recibidas a una de la funcion
    
    w= x+y;//La operacion aritmetica a la que tiene que hacer la funcion

    cout<<"La suma es: "<<w<<endl;//La imprecion del resultado optenido 


}
void IntroduccionDatos()//Esta funcion es para que ususario pueda introducir los datos 
{
    char can1[5], can2[5]; //Creamos unos arreglso para poder limitar la cantidad de dijitos a 4
    int tam1 ,tam2,valor1,valor2; //Aqui son los enteros que creamos para poder guardar los valores enteros que vendran despues 
    do{ //Para crear un ciclo 
        cout<<"Introduce el primer valorno no mayor a 4 dijitos: "<<endl; // Imprimir en pantalla 
        cin>>can1; //Guardara los valores en un arreglo de caracteres 
        tam1 = strlen(can1); //Leera la longitud de la cadena para poder ver si son solo 4 dijitos

        cout<<"Introduce el segundo valorno no mayor a 4 dijitos: "<<endl;// Imprimir en pantalla 
        cin>>can2;//Guardara los valores en un arreglo de caracteres 
        tam2 = strlen(can2);//Leera la longitud de la cadena para poder ver si son solo 4 dijitos

        if (tam1>4 && tam2>4) //Entra en la condicional para saber si las 2 cadenas de caracteres son 4 dijitos
        {
        cout<<"\n\tIntrocude solo 4 dijitos\n\t"<<endl; //imprime solo si fue introducido mas de 4 caracteres
        }
    }
    while(tam1>4 && tam2>4);
    Suma(valor1,valor2); //Declaramos la funcion Suma 
    Resta(valor1,valor2);//Declaramos la funcion Resta
    Multiplicacion(valor1,valor2);//Declaramos la funcion Multiplicacion
    DividirCosiente(valor1,valor2);//Declaramos la funcion DividirCociente
    DividirResiduo(valor1,valor2);//Declaramos la funcion DividirResiduo



}
int main()// La funcion principal
{
    char respuesta; // Declaramos un char para ver la respuesta del usuario
    IntroduccionDatos(); //Declaramos la funcion IntroduccionDatos
    cout<<"\n\t¿Quieres volver a calcular?\n\t"; //imprime una pregunta 
    cout<<"[y/n] -- ";//Imprime las opciones 
    cin>>respuesta;//Capturar el valor del resultado 
    switch (respuesta)
    {
    case 'y': //si el usuario pone y
        IntroduccionDatos(); // Decalracion de la funcino 
    case 'n': // si el usuario pone n
        cout<<"Gracion por venir..."; //Imprime en pantalla 
        break; // Se sale de switch
    return 0;

}