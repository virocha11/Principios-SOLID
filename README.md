# Princípios de Projeto de Software
<div>
<h3>Documentação sobre a utilização dos Princípios de Projeto de Software, como o SOLID.</h3>

<b>Segue abaixo os 7 Princípios de Projeto de Software:</b>

- S -> Single Responsiblity Principle (Princípio da responsabilidade única)
- O -> Open-Closed Principle (Princípio Aberto-Fechado)
- L -> Liskov Substitution Principle (Princípio da substituição de Liskov)
- I -> Interface Segregation Principle (Princípio da Segregação da Interface)
- D -> Dependency Inversion Principle (Princípio da inversão da dependência)
- Prefira Composição a Herança
- Demeter 

<b>Abordaremos 4 desses princípios para explicar a importância de sua utilização, sendo eles</b> 

1. Open-Closed Principle (Princípio Aberto-Fechado)
2. Liskov Substitution Principle (Princípio da Substituição de Liskov)
3. Dependency Inversion Principle (Princípio da inversão da dependência)
4. Prefira Composição a Herança
</div>

<div>
<h4>Exemplo Open-Closed Principle</h4>
[<br color:green>Ir para o código</br>] (/open_close.cpp)

```cpp
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
```
Observe que em ambos os métodos `calcular` da classe `FolhaDePagamento`, é preciso passar por parâmetro o tipo do contrato, o qual queremos realizar o cálculo do saldo, para então chamar o método correspondente à esse tipo, CLT ou Estágio. Esse tipo de código, além do forte acolamento da classe, não é extensível. Sendo que, caso queira acrescentar um novo tipo de contrato, será preciso <br>modificar</br> a classe `FolhaDePagamento`. Fato este que viola o príncipio de Aberto-Fechado, que diz que uma classe deve estar Aberta para Extensão e Fechada para Modificação. 
</div>

<!-- Enunciado
2. Vocês deve commitar e documentar o código no seu repositório no GitHub. Utilize o Readme do projeto para linkar os códigos e documentar a explicação do exemplo.

- O que é? Para que serve?

- Exemplo que ilustre a sua importância (escolha a linguagem que desejar). Explique o código detalhadamente e onde o princípio esta sendo usado e qual pooblema ele tem resolvido.

3. Você deve enviar o link do seu repositório nesta Tarefa

COLOCAR NO README
Descrição do seu projeto;
Funcionalidades;
Como os usuários podem utilizá-lo;
Onde os usuários podem encontrar ajuda sobre seu projeto;
Autores do projeto --> 
