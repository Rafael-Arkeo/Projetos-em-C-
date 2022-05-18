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



    public:
        void adicionar();
      
        

        Contador(int _cont, int _conta, int _conte);

};

Contador::Contador(int _cont, int _conta, int _conte)
{
    cont = _cont;
    conta = _conta;
    conte = _conte;
}




void Contador::adicionar()
{
    if(conte < 9)
    {
        conte+=1;
    }
    else
	{
		if(conta< 9)
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







int main()
{
    Contador contador = Contador(3,9,9);

    
    int numint = 399;
    
    int i = 0;
    int n = 0;
    int vetor[100];
    
    
    while(numint <= 993)
    {

        
        /*if(contador.cont + contador.conta + contador.conte == 21)
		{
			vetor[i] = numint;
			cout <<vetor[i]<<endl;
		}*/
		
		if(contador.cont + contador.conta + contador.conte == 21)
		{
			cout << numint << endl;
		}
		contador.adicionar();
		numint ++;
		i++;
        n++;
	}

	return 0;
}

