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