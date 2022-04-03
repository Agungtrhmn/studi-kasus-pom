#include <iostream>
#include <string>

using namespace std;

struct data_BBM{
    string kode_BBM;
    string nama_BBM;
    int harga;
};

// syntax program yang akan menjalankan program
int main()
{
    string  jenis, code, nama;
    data_BBM BBM;
    string kode_BBM[4]={"1", "2",};
    string nama_BBM[4]={"Premium","Pertamax"};
    int jml_uang, kembali, total=0;
    float liter, harga, uang;

    cout << "======================================="<<endl;
    cout << "     Selamat Datang di SPBU 44.531.26  "<<endl;
    cout << "======================================="<<endl;
    cout << "List Harga BBM : "<<endl;
    cout << "Kode        Jenis BBM        Harga "<<endl;
    cout << " 1           Premium       Rp. 9.500,00"<<endl;
    cout << " 2           Pertamax      Rp. 11.300,00"<<endl;
    cout << "---------------------------------------"<<endl;

    cout << "Kode BBM : "; cin >> BBM.kode_BBM;
    if (BBM.kode_BBM == "1"){
        cout << "Jenis BBM : "<<nama_BBM[0]<<endl;
        cout << "Rp. 8.500/liter";
        jenis = "Premium";
        harga = 8500;
   
    }

    else if (BBM.kode_BBM == "2"){
        cout << "Jenis BBM : "<<nama_BBM[3]<<endl;
        cout << "Rp. 10.300/liter";
        jenis = "Pertamax";
        harga = 10300;
    }
    else {
        cout << "Maaf anda salah memasukkan kode BBM";
    }
        cout << endl;
        cout << "nama pelanggan : "; cin >> nama;
        cout << "Beli       : "; cin >> uang;
        cout << "Bayar      : "; cin >> jml_uang;
        total = total + uang;
        liter = uang / harga;
        kembali = jml_uang - uang;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "                   -PERTAMINA-                        "<<endl;
    cout << "                 -SPBU 44.531.26-                     "<<endl;
 
    cout << "------------------------------------------------------"<<endl;

    cout << "Nama Pelanggan : "<<nama<<endl;
    cout << "Jenis BBM      : "<<jenis<<endl;
    cout << "Liter          : "<<liter<<endl;
    cout << "Harga/liter    : Rp. "<<harga<<",00"<<endl;
    cout << "Total          : Rp. "<<total<<",00"<<endl;
    cout << "Bayar          : Rp. "<<jml_uang<<",00"<<endl;
    cout << "Kembali        : Rp. "<<kembali<<",00"<<endl;
    cout <<"======================================================"<<endl;
    

  cout << "           TERIMA KASIH DAN SELAMAT JALAN         ";

    return 0;
}



