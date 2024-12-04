#include <iostream>
#include <cstdlib>
using namespace std;

void penurunan_berat(){
    system("cls");
    float bbsekarang, bbtujuan, paling_cepat, paling_lambat;
    
    cout << "Masukan berat badan sekarang (kg): ";
    cin >> bbsekarang;
    cout << "Masukan tujuan berat badan yang diinginkan (kg): ";
    cin >> bbtujuan;
    cout << endl;

    if (bbtujuan >= bbsekarang) {
        cout << "Target berat badan harus lebih rendah dari berat badan saat ini" << endl;
        return;
    }

    float selisih_berat = bbsekarang - bbtujuan;

    paling_lambat = selisih_berat / 0.5;  
    paling_cepat = selisih_berat / 1;    

    if (paling_lambat - (int)paling_lambat > 0) {
        paling_lambat = (int)paling_lambat + 1;
    }
    if (paling_cepat - (int)paling_cepat > 0) {
        paling_cepat = (int)paling_cepat + 1;
    }
    
    cin.ignore();
    
    cout << "Untuk mencapai target " << bbtujuan << " kg:" << endl;
    cout << "Anda membutuhkan waktu " << paling_cepat << " - " << paling_lambat << " minggu" << endl;
    cout << endl;

    cout << "Note : penurunan badan terlalu cepat itu tidak sehat yaa, disarankan hanya menurunkan 0,5 - 1 kg per minggu " << endl;
    cout << "Sumber : Alodokter";
    
    cin.get();
}

void TPG(){
	system("cls");
	
	float tinggi_ayah, tinggi_ibu, tpg_max, tpg_min;
    char gender;

    cout << "Tinggi badan ayah (cm): ";
    cin >> tinggi_ayah;
    cout << "Tinggi badan ibu (cm): ";
    cin >> tinggi_ibu;

    cout << "Jenis kelamin anda (L/P): ";
    cin >> gender;
    
    cin.ignore();

    
    if (gender == 'L' || gender == 'l') {
        tpg_max = ((tinggi_ibu + 13) + tinggi_ayah) / 2 + 8.5;
        tpg_min = ((tinggi_ibu + 13) + tinggi_ayah) / 2 - 8.5;
        cout << "Potensi tinggi badan anda adalah: " << tpg_min << " -  cm " << tpg_max << endl;
    } else if (gender == 'P' || gender == 'p') {
        tpg_max = ((tinggi_ayah - 13) + tinggi_ibu) / 2 + 8.5;
        tpg_min = ((tinggi_ayah - 13) + tinggi_ibu) / 2 - 8.5;
        cout << "Potensi tinggi badan anda adalah: " << tpg_min << " -  cm " << tpg_max << endl;
    } else {
        cout << "Yang dimasukan salah";
    }
    
    cout<< "Note : rumus didapatkan dari IDAI (Ikatan Dokter Anak Indonesia)";
    cin.get();
}



int main(){
	int pilihan;
	bool keluar = false;
	while (true){
		system("cls");
		cout << "masukan 1 untuk mengetahui imt serta kategorinya" << endl;
		cout << "masukan 2 untuk mengetahui target penurunan berat badan (minggu)" << endl;
		cout << "masukan 3 untuk mengetahui TPG (Tinggi Potensi Genetik)" << endl;
		cout << "masukan 4 untuk mengetahui kebutuhan air dalam sehari" << endl;
		cout << "masukan 5 untuk keluar";
		cout << endl;
		cin >> pilihan;
		
		switch (pilihan){
			case 1 : {
				IMT();
				break;
			}
			case 3 : {
				TPG();
				break;
			}
			case 2 : {
				penurunan_berat();
				break;
			}
			case 4 : {
				kebutuhanAir();
				break;
			}
			case 5 : {
				keluar = true;
				break;
			}
		} 
		if (keluar){
			break;
		}
	}
	return 0;
}
