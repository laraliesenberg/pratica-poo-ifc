//Crie uma classe chamada Quadrado que tenha o atributo lado e os métodos area(), diagonal() e perimetro(). 
//Faça uma classe de teste que permita:
//imprimir o lado do quadrado
//modificar o lado do quadrado
//mostrar a área do quadrado
//mostrar a diagonal do quadrado
//mostrar o perímetro do quadrado

#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

class Quadrado{
private:
    float lado;

public:
    //Método construtor
    Quadrado(float ladoNovo){
        lado = ladoNovo;
    }

    float getLado(){
        return lado;
    }

    void setLado(float lado){
        this -> lado = lado;
    }
    
    //Método para calcular a área do quadrado
    float area(){
        float resultado = lado * lado;
        return resultado;
    }

    //Método para calcular a diagonal do quadrado
    float diagonal(){
        float resultado = lado * sqrt(2);
        return resultado;
    }

    //Método para calcular o perímetro do quadrado
    float perimetro(){
        float resultado = lado * 4;
        return resultado;
    }
};

class TesteQuadrado{
public:
    static void executar(){

        //Imprimindo lado do quadrado
        Quadrado quadrado(2);
        cout << "Lado inicial do quadrado: " << quadrado.getLado() << "\n";

        //Modificando lado do quadrado
        quadrado.setLado(6);
        cout << "Lado alterado do quadrado: " << quadrado.getLado() << "\n";

        //Imprimindo área, diagonal e perímetro
        cout << "Área do quadrado: " << quadrado.area() << "\n";
        cout << "Diagonal do quadrado: " << quadrado.diagonal() << "\n";
        cout << "Perímetro do quadrado: " << quadrado.perimetro() << "\n";
    }
};

int main(){

    //Permite usar acento
    setlocale(LC_ALL, "pt_BR.UTF-8");

    TesteQuadrado::executar();

    return 0;
}