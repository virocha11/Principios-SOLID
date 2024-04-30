#include <iostream>
#include <string>
//parte de um sistema de Recursos Humanos de uma empresa 
using namespace std;

class ContratoClt{
    private: 
    string funcionario;
    
    public:
    ContratoClt(string funcionario){
        this->funcionario = funcionario;
    }

    double salario(){
        // double valor;
        // return valor;
    }
};

class ContratoEstagio{
    private:
    string funcionario;
    
    public:
    double bolsaAuxilio();
};

class FolhaDePagamento{
    protected:
    double saldo;

    public:

    void calcular(ContratoClt* contrato){
        this->saldo = contrato->salario();  
    }

    void calcular(ContratoEstagio* contrato){
        this->saldo = contrato->bolsaAuxilio();
    }

};