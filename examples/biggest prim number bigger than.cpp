#include <iostream>
#include <cctype>

using namespace std;

int najveciProstiManjiOd(int n)
{

    if(n == 0)
    {
        cout << "Hvala, dovidjenja!" << endl;
        return 1;
    }
    else if(n <= 2)
    {
        cout << "Nemojte se zezati, unesite cijeli broj veci od 2: ";
        n = 0;
        cin >> n;
        najveciProstiManjiOd(n);

    }
    else
    {
        int temp = n-1;
        int brojac = 0;

        bool found = false;

        while(temp > 0 && found == false)
        {
            for(int i = temp; i > 0; i--) // od temp varijable do 0
            {
                if(temp % i == 0)
                {
                    brojac += 1; // povecavamo brojac
                }
            }

            if(brojac == 2)
            {
                //broj je prost
                cout << "Najveci prost broj manji od " << n << " je " << temp << endl;
                found = true;

                int novi_br;
                cout << "Unesite neki cijeli broj veci od 2 (0 za kraj unosa): ";
                cin >> novi_br;

                najveciProstiManjiOd(novi_br);

            }

            temp -= 1;
            brojac = 0;


        }
    }

    return 1;
}

int main()
{
    int broj;
    cout << "Unesite neki cijeli broj veci od 2 (0 za kraj unosa): ";
    cin >> broj;

    najveciProstiManjiOd(broj);

    return 0;
}
