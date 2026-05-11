#include <iostream>
#include <vector>

using namespace std;

class user {
    protected:
        static int globalId;

    public:
        int id;
        string nama;
        string email;

        user(string pNama, string pEmail) {

            id = generateId();
            nama = pNama;
            email = pEmail;

            cout << "User dibuat\n";
        }

        ~user() {
            cout << "User dihapus\n";
        }

        int generateId() {
            return ++globalId;
        }
};

int user::globalId = 0;

class member : public user {
    public:
        bool status;

        member(string pNama, string pEmail)
            : user(pNama, pEmail) {

            status = true;

            cout << "Member dibuat\n";
        }

        ~member() {
            cout << "Member dihapus\n";
        }

        void showProfile() {

            cout << "\n===== PROFILE MEMBER =====\n";

            cout << "ID     : " << id << endl;
            cout << "Nama   : " << nama << endl;
            cout << "Email  : " << email << endl;

            if(status == true) {
                cout << "Status : Aktif\n";
            } else {
                cout << "Status : Nonaktif\n";
            }

            cout << endl;
        }
};

class admin : public user {
    public:

        admin(string pNama, string pEmail)
            : user(pNama, pEmail) {

            cout << "Admin dibuat\n";
        }

        ~admin() {
            cout << "Admin dihapus\n";
        }

        void showAllMember(vector<member*> daftarMember) {

            cout << "\n===== DAFTAR MEMBER =====\n";

            for(int i = 0; i < daftarMember.size(); i++) {

                cout << "ID     : "
                     << daftarMember[i]->id
                     << endl;

                cout << "Nama   : "
                     << daftarMember[i]->nama
                     << endl;

                cout << "Email  : "
                     << daftarMember[i]->email
                     << endl;

                if(daftarMember[i]->status == true) {
                    cout << "Status : Aktif\n";
                } else {
                    cout << "Status : Nonaktif\n";
                }

                cout << endl;
            }
        }

        void toggleActivationMember(member* pMember) {

            if(pMember->status == true) {
                pMember->status = false;
            } else {
                pMember->status = true;
            }

            cout << "Status member berhasil diubah\n";
        }
};

int main() {

    admin admin1(
        "Aliya",
        "aliya@gmail.com"
    );

    member member1(
        "Andi",
        "andi@gmail.com"
    );

    member member2(
        "Budi",
        "budi@gmail.com"
    );

    vector<member*> daftarMember;

    daftarMember.push_back(&member1);
    daftarMember.push_back(&member2);

    admin1.showAllMember(daftarMember);

    member1.showProfile();

    admin1.toggleActivationMember(&member1);

    member1.showProfile();

    return 0;
}