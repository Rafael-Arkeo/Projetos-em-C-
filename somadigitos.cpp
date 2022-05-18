#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>




using namespace std;

class Contador{

    public:
		int cont;
        int conta;
        int conte;
        int conto;
        int digito;
        



    public:
        void adicionar();
       
        void mostracontador();
        void set_digito(int _digito);
      
        

        Contador(int _cont, int _conta, int _conte, int _conto);

};

Contador::Contador(int _cont, int _conta, int _conte, int _conto)
{
    cont = _cont;
    conta = _conta;
    conte = _conte;
    conto = _conto;
    
}




void Contador::adicionar()
{
    if(conto<digito)
	{
		conto += 1;
		
	}
	else
	{
		if(conte<digito)
		{
			conto = 0;
			conte += 1;
		}
		else
		{
			if(conta < digito)
			{
				conte = 0;
				conta += 1;
			}
			else
			{
				if(cont < digito)
				{
					conta = 0;
					cont += 1;
				}
			}
		}
	}
}

void Contador::mostracontador()
{
	cout << cont ;
	cout << conta ;
	cout << conte ;
	cout << conto<< endl;
}

void Contador::set_digito(int _digito)
{
	digito = _digito;
}








int main()
{
    int max = 0; // vlaor inicial da maior conbinação de digitos == 21
    int min = 0;// valor inicial da menor combinçao de digitos == 21
    int digito, digito1, digito2, digito3, digito4; // valor maximo do digito
    
    cout << "Entre com o valor maximo do digito:";
    cin >> digito; // entrada do usuario
    
    
    
    if(digito < 6) // se digito e menor que 6 não retorna nenhum valor
	{
		cout << "Null" << endl;
	}
	
	
	else
	{
		switch(digito) // valor de min max dependendo da entrada do usuario
		{
		case 6:
			min = 3666;
			max = 6663;
			digito1 = 3;
			digito2 = 6;
			digito3 = 6;
			digito4 = 6;
			break;
		case 7:
			min = 1677;
			max = 7770;
			digito1 = 1;
			digito2 = 6;
			digito3 = 7;
			digito4 = 7;
			break;
		case 8:
			min = 1578;
			max = 8850;
			digito1 = 1;
			digito2 = 5;
			digito3 = 7;
			digito4 = 8;
			break;
		case 9:
			min = 1389;
			max = 9930;
			digito1 = 1;
			digito2 = 3;
			digito3 = 8;
			digito4 = 9;
			break;
		default:
			cout << "Invalid value" << endl;
			break;
		}
		
		
		Contador contador = Contador(digito1,digito2,digito3,digito4);
		contador.set_digito(digito);
		
		int numint = min; /* primeira conbinação de numeros
							que a ssoma é igual a 21*/
    	while(numint <= max)
    	{
			if(contador.cont + contador.conta +
					 contador.conte + contador.conto == 21)
			{
				contador.mostracontador(); /*se a soma de todos os
											 digitos for igual a 21*/
			}
			contador.adicionar();
			numint ++;
	
		}
	}

    
    
    
    
	

	return 0;
}

