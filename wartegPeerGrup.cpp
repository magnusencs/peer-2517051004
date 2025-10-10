#include <iostream> 
#include <vector>
using namespace std;

	void warteg (){
		int prices[7] = {23,23,12,34,12,34,12}; // array yang menyimpan harga makanan, untuk array ke i adalah harga makanan ke i
		vector <string> pesanan; // vector yang menyimpan pesanan user
		int hargatotal=0; // variabel yang menyimpan total harga pesanan user
		string makanan[7] = {"mie ayam boyolali", "bakso fuad", "sate ambabull", "nasi padang", "nasi goreng mas narji", "es teh simanis", "kopi hitam jawa"}; // array yang menyimpan nama makanan
//Sampe sini bagian Wenno

char y; // variabel untuk menampung jawaban user apakah ingin memesan lagi atau tidak
		do {
		
		for (int i = 0; i<sizeof(prices)/sizeof(prices[0]); ++i) // loop untuk menampilkan menu makanan dan harga
        {
			cout<<i+1<<". "<<makanan[i]<<", HARGA: "<<prices[i]<<"000"<<endl; // i+1 karena index array dimulai dari 0
		}
		cout<<"mau pesan nomor berapa? (pakai nomor): ";
		int ask;
		cin>>ask; // variabel untuk menampung nomor makanan yang dipilih user
		if (ask>7 || ask<1) // validasi input user
		{
		cout<<"nomor diluar menu. ";}
		else {
		
		cout<<"anda memesan: "<<makanan[ask-1]<<'\n'; //mencetak makanan yang dipilih user, ask-1 karena index array dimulai dari 0
		hargatotal+=prices[ask-1]; // menambahkan harga makanan yang dipilih user ke total harga
		pesanan.push_back(makanan[ask-1]); // menambahkan makanan yang dipilih user ke vector pesanan
	
	} //SAMPE SINI BAGIAN HABIB
	 cout<<" ingin memesan lagi? (y/n): "; // menanyakan user apakah ingin memesan lagi
	
		cin>>y;
			
		} while (y=='y' || y == 'Y');
			cout<<"ANDA MEMESAN: \n"; //jika user tidak ingin memesan lagi, mencetak pesanan dan total harga
		for (int m = 0; m<pesanan.size(); ++m)
		{
			cout<<pesanan[m];
			if (m !=pesanan.size()-1 )cout<<", "<<endl;
		}
		cout<<" dengan total harga: "<<hargatotal<<"000"<<endl;
	}
	//SAMPE SINI BAGIAN FAJRI

		
