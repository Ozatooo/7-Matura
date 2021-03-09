#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class scalanie7
{
				vector <int> t1;
				vector <int> t2;
                vector <int> scal;
       			
        public:
                void wprowadz();
                void wypisz();
                int scalenie();
                int obliczanie();        
};

void scalanie7::wprowadz()
{
		double k,k2;
		fstream plik;  
        int wprowadzany;
        plik.open("a.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                  	plik >> wprowadzany;
                	t1.push_back(wprowadzany);
                	k++;
                   }
                   plik.close();   
                   
                   
        plik.open("b.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                  	plik >> wprowadzany;
                	t2.push_back(wprowadzany);
                	k++;
                   }
                   plik.close();  
                   
        for (int i = 0; i < k; i++)
        {
        	if (i < (k/2))
        	{
        		scal.push_back(t1[i]);
			}
			else
			{
				for (int i = 0; i <= 6; i++)
        		{
				scal.push_back(t2[i]);
				}
			}
		}
}


void scalanie7::wypisz()
{
		for (int i = 0; i < t1.size(); i++)
		{
			cout << t1[i] << "\n";
		}
		cout << endl;
		
		for (int i = 0; i < t2.size(); i++)
		{
			cout << t2[i] << "\n";
		}
		
		cout << endl;
		int licznik = 1;
		for (int i = 0; i < scal.size(); i++)
		{
			cout << licznik << ". " << scal[i] << "\n";
			licznik++;
		}
}


int scalanie7::obliczanie()
{
	int n,k;
	if (n == 1)
	{
		return scal[n];
	}
	k = n/2;
	t1[1];
	t2[1];
	return scalenie();
}

int scalanie7::scalenie()
{
	
}


int main()
{
	scalanie7 x;
    x.wprowadz();
    x.wypisz();

    return 0;
}
