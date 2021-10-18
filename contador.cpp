#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

class Contador{

    protected:
        int cont;
        int conta;
        int conte;



    public:
        void mostracontador();
        void adicionar();
        void subtrair();
        void encerar(int num);

        Contador(int _cont, int _conta, int _conte);

};

Contador::Contador(int _cont, int _conta, int _conte)
{
    cont = _cont;
    conta = _conta;
    conte = _conte;
}


void Contador::mostracontador()
{
    cout<<"#CONTADOR#"<< endl;
    cout<<"["<<cont<<"]";
    cout<<"["<<conta<<"]";
    cout<<"["<<conte<<"]"<< endl;
}


void Contador::adicionar()
{
    if(conte<9)
    {
        conte++;
    }
    else
    {

       if(conta<9)
       {
            conta++;
            conte = conte -9;
       }
       else
       {
            if(cont<9)
            {
                cont++;
                conta = conta -9;
            }
       }
    }
}



int main()
{
    Contador contador = Contador(0,0,0);

    int opcao = 1;


    while(opcao != 0)
    {

        contador.mostracontador();
        printf("[0]->sair\n[1]->adcionar:");
        scanf("%d",&opcao);

        if(opcao != 1 && opcao != 0)
        {

            printf("Digite uma opção válida![0 ou 1]\n");
            sleep(3);
            system("clear");

        }
        else if(opcao == 1)
        {

             contador.adicionar();
            system("clear");
        }



    }



    return 0;
}
