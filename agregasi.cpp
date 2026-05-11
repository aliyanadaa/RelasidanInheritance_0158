#include <iostream>
using namespace std;

#include "ibu.h"
#include "anak.h"

int main() {
    ibu* varIbu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varAnak1 = new anak("Tono");
    anak* varAnak2 = new anak("Rini");
    anak* varAnak3 = new anak("Dewi");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varibu2->cetakAnak();

    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
    delete varIbu;
    delete varibu2;

    system("pause");

    return 0;
}