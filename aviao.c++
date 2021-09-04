#include <iostream>
using namespace std;

int main(){
    struct aviao
    {
        char nomePassageiro[21], origem[15], destino[15], numeroPassagem[15], identidade[15], telefone[15]
    }passageiro1=("Mr Lopes, João", "Brasil", "Londres", "Gol 1234", "IFF22222222", "2123333322"),
    passageiro2=("Mrs Lopes, Tereza", "Brasil", "Paris", "Gol 1234", "IFF77777777", "2123344444"),
    passageiro3=("Mr Ferreira, Marcelo", "Brasil", "Lisboa", "Gol 1239", "IFF23704567", "2234567890");
    
    // Limpando a tela
    system("cis"); // system("clear"); no linux
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"\nNome: "<<passageiro1.nomePassageiro;
    cout<<"\nOrigem: "<<passageiro1.origem<<"\nDestino: "<<passageiro1.destino;
    cout<<"\nNumero da passagem: "<<passageiro1.numeroPassagem<<"\tIdentidade: "<<passageiro1.identidade<<"\tTelefone: "<<passageiro1.telefone;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++\n";
}