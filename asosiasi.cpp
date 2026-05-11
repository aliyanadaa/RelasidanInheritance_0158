#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
    public:
        string nama;
        vector<dokter*> daftar_dokter;
};

class dokter {
    public:
        string nama;
        vector<pasien*> daftar_pasien;
};

int main() {

    return 0;
}