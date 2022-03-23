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
        void zerar();
        void instanciar_num();

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
        conte+=1;
    }
    else
	{
		if(conta<9)
		{
			conte = 0;
			conta+=1;
		}
		else
		{
			if (cont < 9)
			{
				conta = 0;
				conte = 0;
				cont +=1;
			}
		}
	}
}


void Contador:: subtrair()
{ 
	if(conte == 0)
	{
		if(conta > 0)
		{
			conta -= 1;
			conte = 9;
		}
		else
		{
			if(cont > 0)
			{
				cont -= 1;
				conta = 9;
				conte = 9;
			}
		}
		
	}
	else
	{
		conte -= 1;
	}
	
}

void Contador:: zerar()
{
	cont = conta = conte = 0;
}

void Contador::instanciar_num()
{
	 cout << "Escolha o número da primeira casa" << endl;
     do
	 {
	  	 cout << "Digite um número entre 1 e 9:" << endl;
	  	 cin >> cont;
	  	 if(cont < 1 || cont > 9)
		   {
		   	cout << "Digite uma entrada válida!" << endl;
		   	Sleep(3000);
		   	system("cls");
		   }
	 } while(cont < 1 || cont > 9);
     cout << "Escolha o número da segunda casa" << endl;
     do
	 {
	  	 cout << "Digite um número entre 1 e 9:" << endl;
	  	 cin >> conta;
	  	 if(conta < 1 || conta > 9)
		   {
		   	cout << "Digite uma entrada válida!" << endl;
		   	Sleep(3000);
		   	system("cls");
		   }
	 } while(conta < 1 || conta > 9);
     cout << "Escolha o número da terceira casa" << endl;
     do
	 {
	  	 cout << "Digite um número entre 1 e 9:" << endl;
	  	 cin >> conte;
	  	 if(conte < 1 || conte > 9)
		   {
		   	cout << "Digite uma entrada válida!" << endl;
		   	Sleep(3000);
		   	system("cls");
		   }
	 } while(conte < 1 || conte > 9);
}
int main()
{
    Contador contador = Contador(0,9,0);

    int opcao = 1;


    while(opcao != 0)
    {

        contador.mostracontador(); 
        cout<<"Digite [0] para sair [1] para adcionar [2] para subtrair"<< endl;
        cout <<" [3] para zerar o contador ou [4] para escolher um número"<< endl;
        cin >> opcao;

        switch(opcao)
		{
		case 0:
			break;
		case 1:
			contador.adicionar();
			system("cls");
			break;
		case 2:
			contador.subtrair();
			system("cls");
			break;
		case 3:
			contador.zerar();
			system("cls");
			break;
		case 4:
			contador.instanciar_num();
			system("cls");
			break;	

		default:
			cout << "Digite uma opção válida!" << endl;
			Sleep(3000);
			system("cls");
		}



    }



    return 0;
}