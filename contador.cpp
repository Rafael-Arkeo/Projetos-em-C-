#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>


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
    if(conte == 9)
	{
		if(conta<9)
		{
			conte = 0;
			conta++;
		}
		if (conta == 9)
		{
			if (cont < 9)
			{
				conta = 0;
				conte = 0;
				cont ++;
			}
		}
	}
}



int main()
{
    Contador contador = Contador(9,9,0);

    int opcao = 1;


    while(opcao != 0)
    {

        contador.mostracontador();
        cout << "Digite [0] para sair ou [1] para adcionar"<< endl;
        cin >> opcao;

        if(opcao != 1 && opcao != 0)
        {

            cout << "Digite uma opção válida [0 ou 1]"<< endl;
            Sleep(300);
            system("cls");

        }
        else if(opcao == 1)
        {

            contador.adicionar();
            system("cls");
        }



    }



    return 0;
}