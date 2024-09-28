//Crie uma classe chamada Retângulo que tenha os atributos altura e largura. Faça uma classe de teste para:
//modificar os atributos
//imprimir a área do retângulo
//imprimir o perímetro do retângulo

#include <iostream>
#include <locale.h>
using namespace std;

class Retangulo{
private:
    int altura;
    int largura;

public:
    //Método construtor
    Retangulo(int alturaNova, int larguraNova){
        altura = alturaNova;
        largura = larguraNova;
    }

    int getAltura(){
        return altura;
    }

    int getLargura(){
        return largura;
    }

    void setAltura(int altura){
        this -> altura = altura;
    }

    void setLargura(int largura){
        this -> largura = largura;
    }

    //Método para calcular a área do retângulo
    int area(){
        int resultado = altura * largura;
        return resultado;
    }

    //Método para calcular o perímetro do retângulo
    int perimetro(){
        int resultado = (altura * 2) + (largura * 2);
        return resultado;
    }
};

class TesteRetangulo{
public:
    static void executar(){
        Retangulo retangulo(2, 4);

        //Modificando os atributos
        retangulo.setAltura(4);
        retangulo.setLargura(8);

        //Imprimindo a área 
        cout << "Área do retângulo: " << retangulo.area() << "\n";

        //Imprimindo o perímetro
        cout << "Perímetro do retângulo: " << retangulo.perimetro() << "\n";
    }
};

int main(){

    //Permite usar acento
    setlocale(LC_ALL, "pt_BR.UTF-8");

    TesteRetangulo::executar();

    return 0;
}