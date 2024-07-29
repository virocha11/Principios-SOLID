#include <iostream>
#include <string>
//sistema hipotético de Recursos Humanos de uma empresa 
using namespace std;

// class ContratoClt{
//     private: 
//     string funcionario;
    
//     public:
//     ContratoClt(string funcionario){
//         this->funcionario = funcionario;
//     }

//     double salario(){
//         // double valor;
//         // return valor;
//     }
// };

// class ContratoEstagio{
//     private:
//     string funcionario;
    
//     public:
//     double bolsaAuxilio();
// };

// class FolhaDePagamento{
//     protected:
//     double saldo;

//     public:

//     void calcular(ContratoClt* contrato){
//         this->saldo = contrato->salario();  
//     }

//     void calcular(ContratoEstagio* contrato){
//         this->saldo = contrato->bolsaAuxilio();
//     }

// };

// ------------

class Interface{
    public:
    virtual double remuneracao() = 0;
};

class ContratoClt:public Interface{
    public:
    double remuneracao(){};
};

class ContratoEstagio:public Interface{
    public:
    double remuneracao(){};
};

class NovoContrato:public Interface{
    public:
    double remuneracao(){};
};

class FolhaDePagamento{
    protected:
    double saldo;

    public:
    void calcular( Interface* contrato){
        this->saldo = contrato->remuneracao();
    }
}; 