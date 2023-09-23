#include <iostream>
#include <string>
#include <vector>

int main(int argc, const char** argv) {
    int daftarTugasSize = 10;
    std::string tugas_baru;
    std::vector<std::string> daftar_tugas(daftarTugasSize), daftar_tugas_mengerjakan, daftar_tugas_selesai;
    char pilihan;
    char ulang;
    
    system("cls");
    // Daftar tugas
    daftar_tugas[0] = "1) Tugas matematika";
    daftar_tugas[1] = "2) Tugas Fisika dasar";
    daftar_tugas[2] = "3) Tugas logika pemrograman"; 
    daftar_tugas[3] = "4) Tugas bahasa indonesia";
    daftar_tugas[4] = "5) Tugas Basic english";
    daftar_tugas[5] = "6) Tugas PJOK";
    daftar_tugas[6] = "7) Tugas Pendidikan pancasila";
    daftar_tugas[7] = "8) Tugas agama";
    daftar_tugas[8] = "9) Tugas project kelompok";
    daftar_tugas[9] = "10) Tugas english TOEFL";


    std::cout<<"\t\t\t***********************************************************************" << std::endl;
	std::cout<<"\t\t\t                       Pengelolaan Daftar Tugas                        " << std::endl;
    std::cout<<"\t\t\t***********************************************************************\n\n" << std::endl;
    do
    {
        std::cout << "Menu Utama\n" << std::endl;
        std::cout << "Apa yang mau anda lakukan: " << std::endl;
        std::cout << "1) Mau membuat list tugas baru\n";
        std::cout << "2) Mau menampilkan tugas sekarang\n";
        std::cout << "3) Mau menandai tugas\n";
        std::cout << "4) Keluar dari program\n\n";
        std::cout << "Pilih menu yang mau anda lakukan(1-4): ";
        std::cin >> pilihan;

        switch (pilihan) {
            case '1':
                std::cout << "Anda memilih: Tambah tugas" << std::endl;
                // Logika untuk menambah tugas

                break;
            case '2': 
                std::cout << "Anda memilih: Tampilkan tugas" << std::endl;
                // Logika untuk menampilkan tugas
                for (int i = 0; i < daftarTugasSize; i++)
                {
                    std::cout << daftar_tugas[i] << std::endl;
                }
                std::cout << "\nTugas baru: " << tugas_baru << std::endl;
                break;
            case '3':
                std::cout << "Anda memilih: Tandai tugas selesai" << std::endl;
                // Logika untuk menandai tugas selesai
                break;
            case '4':
                std::cout << "Anda memilih: Keluar" << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan coba lagi." << std::endl;
                break;
            }
            std::cout << std::endl;

            std::cout << "Ingin memilih menu lain(y/n)? ";
            std::cin >> ulang;
    
    } while (ulang != 'n');
    std::cout << "\nterima kasih sudah menggunakan program ini";
    return 0;
    
}


