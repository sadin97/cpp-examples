#include <iostream>

using namespace std;

int main()
{
    double cijena_ugradnje, trenutna_cijena, cijena_plina, dnevna_kilometraza;

    cout << "Unesi cijenu ugradnje plinske instalacije u KM:";
    cin >> cijena_ugradnje;

    cout << "Unesi trenutnu cijenu po kilometru u KM:";
    cin >> trenutna_cijena;

    cout << "Unesi cijenu po kilometru nakon uvodjenja plina u KM:";
    cin >> cijena_plina;

    cout << "Unesi prosjecnu predjenu dnevnu kilometrazu:";
    cin >> dnevna_kilometraza;

    double dan_plina, dan_obicno;
    dan_plina = dnevna_kilometraza * cijena_plina; // dnevno koliko para potroši na plin
    dan_obicno = dnevna_kilometraza * trenutna_cijena; // dnevno koliko para potroši obično

    int dani = 1;

    double ukupno_plin, ukupno_obicno;
    ukupno_plin = cijena_ugradnje + dan_plina;
    ukupno_obicno = dan_obicno;

    while(ukupno_plin >= ukupno_obicno) // sve dok je plin skuplji
    {
        dani += 1;

        ukupno_obicno += dan_obicno;
        ukupno_plin += dan_plina;
    }

    cout << "Broj dana nakon kojih ce se isplatiti uvodjenje plina: " << dani << endl;


    // 1 dan potroši 25km * 0.12KM
    //cout << 25 * 0.12 << endl;


    return 0;
}
