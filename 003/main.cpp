#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void admin(){
	string username,pilih,ganti;
	int pass;
	const int jumlah_maks = 100;
	string matkul[jumlah_maks];
	string dosen[100];
	string waktu[100];
	string jumlah[100];
	int data[jumlah_maks];
	char lanjut;

	do{
	cout<<"=================================="<<endl;
	cin.ignore();
	cout<<"Masukkan username: ";cin>>username;
	cout<<"Masukkan password: ";cin>>pass;
	cout<<"=================================="<<endl;
	cout<<"Keperluan: ";cin>>pilih;	
		if(pilih == "tambah"){
			cin.ignore();
			cout<<"Masukkan mata kuliah: ";getline(cin, matkul[jumlah_maks]);
			cout<<"Masukkan dosen: ";getline(cin,dosen[jumlah_maks]);
			cout<<"Masukkan waktu: ";getline(cin,waktu[jumlah_maks]);
			cout<<"=================================="<<endl;
		}
		if(pilih == "hapus"){
			cout<<"Ruangan telah dihapus"<<endl;
			cout<<"=================================="<<endl;
		}
		if(pilih == "ganti"){
			cout<<"Ganti apa?(waktu/jumlah): ";cin>>ganti;
			if(ganti == "waktu"){
				cin.ignore();
				cout<<"Ubah menjadi: ";cin>>waktu[jumlah_maks];
				cout<<"=================================="<<endl;
			}
			if(ganti == "jumlah"){
				cout<<"Ubah menjadi: ";cin>>jumlah[jumlah_maks];
				cout<<"=================================="<<endl;
			}
		}
		cout<<"Log out?: ";cin>>lanjut;
	} while(lanjut == 'N' || lanjut == 'n');
}

void mhs(){
	string username,pilih,ganti,role;
	int pass;
	const int jumlah_maks = 100;
	string matkul[jumlah_maks];
	string dosen[100];
	string waktu[100];
	string jumlah[100];
	int data[jumlah_maks];
	char lanjut;
	
	do{
	cout<<"==============================="<<endl;
	cout<<"Masukkan username: ";cin>>username;
	cout<<"Masukkan password: ";cin>>pass;
	cout<<"Keperluan: ";cin>>pilih;
	cout<<"==============================="<<endl;
		if(pilih == "cek"){
			cout<<"==============================="<<endl;
			cout<<"Matkul: "<<matkul[jumlah_maks]<<endl;
			cout<<"Dosen: "<<dosen[jumlah_maks]<<endl;
			cout<<"Waktu: "<<waktu[jumlah_maks]<<endl;
			cout<<"==============================="<<endl;
		}
		if(pilih == "unduh"){
			cout<<"Jadwal telah diunduh"<<endl;
			cout<<"==============================="<<endl;
		}
		cout<<"\nLog out?: ";cin>>lanjut;
	} while(lanjut == 'N' || lanjut == 'n');
}


int main(){
	string role;
	cout<<"=========================================\n";
	cout<<"=    SIMERU UNIVERSITAS AHMAD DAHLAN	=\n";
	cout<<"=========================================\n";
	cout<<"Masuk sebagai: ";cin>>role;
	if(role == "admin"){
		admin();
	}
	if(role == "mahasiswa"){
		mhs();	
	}
	return 0;
}
