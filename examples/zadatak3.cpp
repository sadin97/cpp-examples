#include <iostream>
#include <vector>

using namespace std;

vector<int> Parnocifreni(int a, int b)
{
    vector <int> vektor_brojeva;

    if(a < b) // od a do b
    {
        for(int i = a; i <= b; i++)
        {
            if(i % 2 == 0)
            {
                vektor_brojeva.push_back(i);
            }
        }
    }
    else // ostali slucajevi (od b do a i a==b)
    {
        for(int i = b; i <= a; i++)
        {
            if(i % 2 == 0)
            {
                vektor_brojeva.push_back(i);
            }
        }
    }
    
    /*
    // nisam stigao provjeriti pocetnu cifru :(

    int test_var;
    
    for(int i = 0; i <= testni_vektor.size() - 1; i++)
    {
        test_var = testni_vektor[i];
        
        if(test_var > 0)
        {
            test_var = test_var % 10;
            test_var = test_var / 10;
        }
		
		// testni_vektor.pop_back(testni_vektor[i]); // izbacujemo onaj broj koji nema prvu parnu cifru
    }
    */
        

    return vektor_brojeva;
}

int main()
{
    int prvi, drugi;

    cout << "Unesite prvi broj: ";
    cin >> prvi;
    cout << "Unesite drugi broj: ";
    cin >> drugi;

    vector<int> testni_vektor = Parnocifreni(prvi, drugi);

    for(int i = 0; i <= testni_vektor.size() - 1; i++)
        cout << testni_vektor[i] << endl;
    
    return 0;
}
