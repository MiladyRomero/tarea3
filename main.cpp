#include <iostream>

using namespace std;
//Primero creamos la clase animal que es la que sera el padre
class Animal
{
public:
    //le asignamos las variables que vamos a poner de parametro
    //en este caso puse la edad y el tipo, para saber que tipo de animal sera
    int edad;
    string tipo;
    //creamos el constructor vacio para evitar  errores de compilacion
    Animal()
    {
    }
    //aqui ya creamos la funcion de el tipo que devolvera un string
    string getTipo()
    {
        //la variable anteriormente creada
        return tipo;
    }
    //aqui creamos la funcion de la edad que nos va a devolver un entero
    int getEdad()
    {
        return edad;
    }
    //el set recive como parametro "perrogatopato" que sera equivalente a el tipo
    void setTipo(string perrogatopato)
    {
        tipo = perrogatopato;
    }
    //aqui el set recive como parametro "num_edad" que sera el equivalente a la edad
    void setEdad(int num_edad)
    {
        edad = num_edad;
    }
};
//AQUI YA CREAMOS LAS CLASES, COMENTARE UNA PERO ES EL MISMO PROCEDIMIENTO PARA TODAS
//en este caso es la clase gato que hacemos que herede de Animal
class Gato : public Animal
{
public:
//aqui ponemos de parametro los tipos que declaramos en animal el int edad y el string tipo
    Gato(int edad, string tipo)
    {
        //hacemos un set de la edad y de el tipo
        setEdad(edad);
        setTipo(tipo);
    }
    //aqui creamos la funcion que nos dira que sonido emite el animal mediante un string, en este caso miau por que es un gato
    string maullar()
    {
        //devolvemos el string
        return "Miauuu";
    }
};


//HACEMOS LO MISMO QUE EN LA CLASE ANETIOR SOLO QUE AQUI APLICA PARA EL PERRO
class Perro : public Animal
{
public:

    Perro(int edad, string tipo)
    {
        setEdad(edad);
        setTipo(tipo);
    }
    string ladrar()
    {
        return "Guaauu";
    }

};


//CREE UNA CLASE ADICIONAL PARA TENER 3 ANIMALES :) EN ESTE CASO UN PATO
class Pato : public Animal
{
public:

    Pato(int edad, string tipo)
    {
        setEdad(edad);
        setTipo(tipo);
    }
    //no se como se le llama a lo que hacen los patos
    string loquehacenlospatos()
    {
        return "Cuak";
    }

};

int main()

//ya en el main
{
    //aqui le damos a perro los parametros el int que es la edad y el string que es el tipo
    //pero ya aqui le asignamos el valor que queremos en la edad y el nombre que queremos en el tipo ya sea gato perro o pato
    Perro p1 = Perro(2, "PERRO");
    //todo lo demas lo hacemos con cout, imprimimos de la manera que querramos cada funcion
    cout<<"Su animal es un: "<< p1.getTipo()<<endl;
    cout<<"La edad del "<<p1.getTipo() <<" es: "<<p1.getEdad()<<" años."<<endl;
    cout<<"El "<<p1.getTipo() <<" dice: "<<p1.ladrar()<<endl;
    //y asi hacemos con todos los que querramos agregar, podemos hcarlo con un copy paste incluso
    //solo cambiando los pequeños detalles
    // el nombre que les asignamos en este caso yo opte por las iniciales y un numero como p1 para el perro
    //g1 para el gato y pa1 para el pato pero podemos asignarle lo que querramos
    //el get.ladrar para el perro
    //el get.maullar para el gato
    //el get.loquehacenlospatos para el pato

    Gato g1 = Gato(4, "GATO");
    cout<<"Su animal es un: "<<g1.getTipo()<<endl;
    cout<<"La edad del "<<g1.getTipo() <<" es : "<<g1.getEdad()<<" años."<<endl;
    cout<<"El "<<g1.getTipo()<<" dice: "<<g1.maullar()<<endl;

    Pato pa1 = Pato(1, "PATO");
    cout<<"Su animal es un: "<<pa1.getTipo()<<endl;
    cout<<"La edad del "<<pa1.getTipo() <<" es : "<<pa1.getEdad()<<" años."<<endl;
    cout<<"El "<<pa1.getTipo()<<" dice: "<<pa1.loquehacenlospatos()<<endl;

    return 0;
}
