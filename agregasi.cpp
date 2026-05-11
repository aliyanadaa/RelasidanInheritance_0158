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

    return 0;
}