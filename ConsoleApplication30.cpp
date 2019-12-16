#include<iostream>
using namespace std;



class soru_1 {
public:
	char a, b, c, d, cevap;


	void soru1() {
		cout << " Turkiye'nin asagidaki ulkelerin hangisine siniri yoktur?" << endl;

		cout << "A)Iran     B)Bulgaristan      C)Gürcistan       D)Azerbaycan" << endl;
		cin >> cevap;
		switch (cevap) {
		case'd':
			cout << "tebrikler dogru cevap 500 tl kazandiniz " << endl;
			break;


		default:
			cout << "yanlis cevap verdiniz yarismayi kaybettiniz" << endl;
			exit(0);


		}

	}
};




class soru_2 {
public:

	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru2() {
		cout << "isvicrenin baskenti neresidir ?" << endl;
		cout << "A)londra   B)Amsterdam    C)Bern      D)Zurih" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz?  e veya h seklinde belırtınız,eger joker hakkinizi onceden kullandiysaniz oyundan atilirsiniz..........." << endl;
		cin >> cevapj;
		switch (cevapj) {
		case'e':
			cout << "C" << endl;
			jokerhak = 1;

			break;
		default:
			cout << "yanitiniz bekleniyor" << endl;


			break;


		}

		cin >> cevap;
		switch (cevap) {
		case'c':
			cout << "tebrikler doğru cevap verdiniz 1000 tl kazandiniz" << endl;
			break;
		default:
			cout << "yanliş cevap verdiniz" << endl;
			exit(0);


		}
	}





};
class soru_3 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;
	void soru3() {
		cout << "Bir isin uygun veya kolay oldugunu belirtmek için hangisi kullanilir" << endl;

		cout << "A)Burnuma gore     B)Bıyıgıma gore      C)Kasıma gore     D)Disime gore" << endl;
		cout << "joker hakkınızı kullanmak ıstıyormusunuz ?" << endl;
		cin >> cevapj;
		switch (cevapj) {
		case'e':
			cout << "D" << endl;
			jokerhak = 1;

			break;
		default:

			cout << "yanitiniz bekleniyor..." << endl;
			break;



		}

		cin >> cevap;
		switch (cevap) {
		case 'd':
			cout << "tebrikler doğru cevap 2000 tl kazandınız" << endl;
			break;

		default:
			cout << "yanlış cevap verdiniz yarışmayı kaybettiniz" << endl;
			exit(0);


		}

	}



};
class soru_4 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru4() {
		cout << "çizgi filmlerdeki karakterler genellİkle hangisinin üzerine basip düserler ?" << endl;
		cout << "A) Armut sapinin     B)Üzüm çopunun         C)Muz kabugunun             D)Avakado çekirdeginin" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		cin >> cevapj;
		switch (cevapj) {
		case'e':
			cout << "D" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanitiniz bekleniyor......" << endl;
			break;



		}


		cin >> cevap;
		switch (cevap) {
		case'c':
			cout << "tebrikler dogru cevap  3000 tl kazandınız ?" << endl;
			break;
		default:
			cout << "yanlis cevap yarismayı kaybettiniz";
			exit(0);


		}


	}

};
class soru_5 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru5() {
		cout << "izlediginiz videoda çıpet pet pet,cibili cibili sak sak,altili yedili diyen birisi varsa muhtemelen hangisini taklid ediyordur ?" << endl;
		cout << "A) kedileri    B)köpekleri           C)kuslari              D)atlari" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "C" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanıtınız beklenıyor......" << endl;
			break;


		}
		cin >> cevap;
		switch (cevap) {
		case'c':
			cout << "tebrikler dogru cevap  5000 tl kazandiniz ?" << endl;
			break;
		default:
			cout << "yanlis cevap yarismayı kaybettiniz";
			exit(0);


		}



	}




};
class soru_6 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru6() {
		cout << "Sozluk tanimina gore sosyete pazarinda ne tip urunler satilir ?" << endl;
		cout << "A)Pahalİ ve orjinal     B)Demode ve ikinci el       C)Defolu ve taklit             D)Son moda ve luks" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "C" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanıtınız beklenıyor......" << endl;
			break;






		}
		cin >> cevap;
		switch (cevap) {
		case'c':
			cout << "tebrikler dogru cevap  7500 tl kazandiniz ?" << endl;
			break;
		default:
			cout << "yanlis cevap yarismayı kaybettiniz";
			exit(0);



		}


	}


};
class soru_7 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru7() {
		cout << "hangisi baklagillerden degildir ?" << endl;
		cout << "A)Bakla      B)Fasulye         C)Keciboynuzu           D)cavdar" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "C" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanıtınız beklenıyor......" << endl;
			break;

		}

		cin >> cevap;
		switch (cevap) {
		case'd':
			cout << "tebrikler doğru cevap  15000 tl kazandiniz ?" << endl;
			break;
		default:
			cout << "yanlis cevap yarismayi kaybettiniz";
			exit(0);

		}


	}


};
class soru_8 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru8() {
		cout << "dunyadaki kahve uretiminin en cok yapildigi ulke hangisidir ? " << endl;
		cout << "A)Etiyopya      B)Vietnam         C)Kolombiya             D)Brezilya      " << endl;

		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "D" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanitiniz bekleniyor......" << endl;
			break;


		}
		cin >> cevap;
		switch (cevap) {
		case'd':
			cout << "tebrikler doğru cevap  30000 tl kazandınız ?" << endl;
			break;
		default:
			cout << "yanlis cevap yarismayi kaybettiniz";
			exit(0);


		}


	}

};
class soru_9 {
public:
	char a, b, c, d, cevap, cevapj;
	int jokerhak;

	void soru9() {
		cout << "Türk ceza kanununa gore gece vakti gunes battikdan kac saat  sonra baslar ?" << endl;
		cout << "A) 1    B)2        C)3             D)4" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "A" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanitiniz bekleniyor......" << endl;
			break;

		}
		cin >> cevap;
		switch (cevap) {
		case'a':
			cout << "tebrikler doğru cevap  60000 tl kazandınız ?" << endl;
			break;
		default:
			cout << "yanlis cevap yarismayi kaybettiniz";
			exit(0);
		}

	}

};
class soru_10 {
public:

	char a, b, c, d, cevap, cevapj;
	int jokerhak;
	void soru10() {
		cout << "hangisi bilirkisi anlamina gelir ?" << endl;
		cout << "A)Kurator     B)Aranjor      C)Eksper          D)Gurme" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "C" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanitiniz bekleniyor......" << endl;
			break;

		}
		cin >> cevap;
		switch (cevap) {
		case'c':
			cout << "tebrikler 125000 tl kazandiniz" << endl;
			break;
		default:
			cout << "yarışmayı kaybettiniz" << endl;
			exit(0);

		}

	}
};


class soru_11 {
public:

	char a, b, c, d, cevap, cevapj;
	int jokerhak;
	void soru11() {
		cout << "canakkale il sinirlari icersinde bulunan Assosta  3 yilini geciren ve burada  dersler veren, ayni zamanda antik kentin girisinde heykeli bulunan filazof kimdir" << endl;
		cout << "A)Platon     B)Aristoteles      C)Sokrates          D)Arsiment" << endl;
		cout << "joker hakkinizi kullanmak istermisiniz e veya h seklinde belirtiniz onceden joker hakkinizi kullandiyseniz oyundan atilirsiniz......" << endl;
		switch (cevapj) {
		case'e':
			cout << "B" << endl;
			jokerhak = 1;
			break;
		default:
			cout << "soruya yanitiniz bekleniyor......" << endl;
			break;






		}
		cin >> cevap;
		switch (cevap) {
		case'b':
			cout << "tebrikler 500000 tl kazandiniz" << endl;
			break;
		default:
			cout << "yarışmayı kaybettiniz" << endl;
			exit(0);

		}

	}

};

class soru_12 {
public:

	char a, b, c, d, cevap;
	void soru12() {
		cout << "turkiyede hangi adda bir ilce vardir ?" << endl;
		cout << "A)Sac      B)Biyik      C)Kas          D)Kirpik" << endl;
		cin >> cevap;
		switch (cevap) {
		case'c':
			cout << "tebrikler 1000000 tl kazandınız" << endl;
			cout << "oyunu bitirdiniz" << endl;
			break;
		default:
			cout << "yarismayı kaybettiniz" << endl;
			exit(0);

		}
	}

};


class bittimi {
public:
	char   cevap;
	void sor() {
		cout << "devam etmek istiyormusunuz ?" << endl;
		cout << "e veya h şeklinde belirtiniz" << endl;
		cin >> cevap;
		switch (cevap) {
		case'e':
			cout << "yarissmaya devam ediliyor" << endl;
			break;






		default:
			cout << "yarismadan cekildiniz" << endl;
			exit(0);


		}

	}

};



int main() {

	cout << "Kim Milyoner Olmak ister Yarismasina hosgeldiniz...}" << endl;
	int yas;
	int* p = &yas;
	cout << "yasinizi giriniz" << endl;
	cin >> yas;
	while (yas < 19) {
		cout << "yasiniz   " << *p << endl;
		cout << "yasiniz kucuk oldugu icin yarismaya katilamazsiniz" << endl;

		exit(0);
	}










	soru_1 s1;
	soru_2 s2;
	soru_3 s3;
	soru_4 s4;
	soru_5 s5;
	soru_6 s6;
	soru_7 s7;
	soru_8 s8;
	soru_9 s9;
	soru_10 s10;
	soru_11 s11;
	soru_12 s12;
	bittimi b1;
	s1.soru1();
	b1.sor();

	s2.soru2();

	b1.sor();

	switch (s2.jokerhak) {
	case 1:
		cout << "joker hakkınızı kullandınız " << endl;
	default:
		break;

	}
	s3.soru3();
	switch (s3.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;



	}
	b1.sor();

	s4.soru4();
	switch (s4.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}
	b1.sor();

	s5.soru5();

	switch (s5.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}

	b1.sor();

	s6.soru6();
	switch (s6.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}

	b1.sor();

	s7.soru7();
	switch (s7.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}
	b1.sor();

	s8.soru8();
	switch (s8.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}
	b1.sor();

	s9.soru9();
	switch (s9.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}
	b1.sor();

	s10.soru10();
	switch (s10.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}
	b1.sor();

	s11.soru11();
	switch (s11.jokerhak) {
	case 1:
		cout << "fazladan joker kullanıp kural ıhlalı yaptınız oyundan cıkılıyor......" << endl;
		exit(0);
	default:
		break;








	}

	b1.sor();

	s12.soru12();

	cout << "oyun bitti" << endl;






	return 0;
}