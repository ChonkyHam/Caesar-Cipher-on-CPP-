#include <iostream>
#include <string>

using namespace std;

string enkripsiCaesar(const string teks, int ubah) {
    string ciphertext = "";
    for (char c : teks) {
        if (isalpha(c)) {
            char ubahlah = (tolower(c) - 'a' + ubah) % 26 + 'a';
            ciphertext += isupper(c) ? toupper(ubahlah) : ubahlah;
        }
        else {
            ciphertext += c;
        }
    }
    return ciphertext;
}

string deskripsiCaesar(const string ciphertext, int ubah) {
    return enkripsiCaesar(ciphertext, 26 - ubah);
}

int main() {
    int ubah = 3;
    string kata;
    cout<< "Masukan Teks Yang Ingin Dienkripsi :";cin>>kata;
    string dekripsiKata = kata, enkripsi, dekripsi;
    cout << "Kata Yang Di Enkripsi : " << dekripsiKata;
    
    enkripsi = enkripsiCaesar(dekripsiKata, ubah);
    cout <<"\nTeks Enkripsi : " << enkripsi;
    
    dekripsi = deskripsiCaesar(enkripsi, ubah); // Corrected the function name and passed ciphertext
    cout <<"\nTeks Dekripsi : " << dekripsi;
    
    return 0;
}
