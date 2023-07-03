#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return; }
	virtual void input() { return; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	//isi disini
};

class Pemrograman : public MataKuliah { //isi disini
	private:
		float presensi;
		float activity;
		float exercise;
		float tugasAkhir;
	public:
		Pemrograman() {
			presensi = 0;
			activity = 0;
			exercise = 0;
			tugasAkhir = 0;
		}

		float hitungNilaiAkhir() {
			float nilaiAkhir = presensi * 0.1 + activity * 0.2 + exercise * 0.3 + tugasAkhir * 0.4;
			return nilaiAkhir;
		}

		void cekKelulusan() {
			float nilaiAkhir = hitungNilaiAkhir();
			if (nilaiAkhir >= 75) {
				cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir : " << nilaiAkhir << endl;
			}
			else {
				cout << "Maaf, Anda tidak lulus mata kuliah Pemrograman, Nilai akhir anda : " << nilaiAkhir << endl;
			}
		}

		void input() {
			float p, a, e, ua;
			cout << "Masukkan nilai presensi (0-100) : ";
			cin >> p;
			cout << "Masukkan nilai activity (0-100) : ";
			cin >> a;
			cout << "Masukkan nilai exercise (0-100) : ";
			cin >> e;
			cout << "Masukkan nilai ujian akhir (0-100) : ";
			cin >> ua;

			setPresensi(p);
			activity = a;
			exercise = e;
			tugasAkhir = ua;
		}
};

int main() { //isi disini
	Pemrograman pemrograman;

	cout << "Program dibuat" << endl;

	pemrograman.input();
	pemrograman.cekKelulusan();

	return 0;
}