#include "mongocxx/instance.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

#include "processes.h" 
#include "credentials.h"

int main(int argc, const char** argv) {
    mongocxx::instance inst{};

    std::vector<std::string> data, doWork, dataFinish;
    
    // Membuat objek UserPass dan SourceData
    SourceData s(&data, &dataFinish, &doWork);
    
    // Memanggil metode ProcessRegister untuk proses pendaftaran
    ProcessRegister();

    int pilihan;
    char ulang;

    std::cout << "\033[2J\033[1;1H";
    std::cout << "\t\t\t***********************************************************************" << std::endl;
    std::cout << "\t\t\t                       Pengelolaan Daftar Tugas                        " << std::endl;
    std::cout << "\t\t\t***********************************************************************\n\n" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));

    do {
        std::cout << "\033[2J\033[1;1H"; // clear console

        std::cout << "Menu Utama\n\n";
        std::cout << "Apa yang mau anda lakukan\n";
        std::cout << "1) Mau membuat list tugas baru?\n";
        std::cout << "2) Mau menandai tugas yang mau dikerjakan?\n";
        std::cout << "3) Mau menandai tugas selesai?\n";
        std::cout << "4) Menampilkan tugas sekarang\n";
        std::cout << "5) Menampilkan tugas yang sedang dikerjakan\n";
        std::cout << "6) Menampilkan tugas yang sudah selesai\n";
        std::cout << "7) Mau menghapus tugas sekarang?\n";
        std::cout << "8) Mau menghapus tugas yang sedang dikerjakan?\n";
        std::cout << "9) Mau menghapus tugas yang sudah selesai?\n";
        std::cout << "10) Mau mengedit tugas\n";
        std::cout << "11) Mau mengedit tugas yang sedang dikerjakan?\n";
        std::cout << "12) Mau mengedit tugas yang sudah selesai?\n";
        std::cout << "13) Mau logout dari program?\n";
        std::cout << "14) Mau registrasi akun baru?\n";
        std::cout << "15) Keluar dari program\n";
        std::cout << "Pilih menu yang mau anda lakukan(1-15): ";
        std::cin >> pilihan;

        switch (pilihan) {
        case 1:
            std::cout << "\033[2J\033[1;1H";
            s.AddTask(&data);
            break;
        case 2:
            std::cout << "\033[2J\033[1;1H";
            s.TasktoDo(&doWork);
            break;
        case 3:
            std::cout << "\033[2J\033[1;1H";
            s.CompletedTask(&dataFinish);
            break;
        case 4:
            std::cout << "\033[2J\033[1;1H";
            s.DisplayTask(&data);
            break;
        case 5:
            std::cout << "\033[2J\033[1;1H";
            s.DisplayTaskToDo(&doWork);
            break;
        case 6:
            std::cout << "\033[2J\033[1;1H";
            s.DisplayCompletedTask(&dataFinish);
            break;
        case 7:
            std::cout << "\033[2J\033[1;1H";
            s.RemoveTask(&data);
            break;
        case 8:
            std::cout << "\033[2J\033[1;1H";
            s.RemoveTaskToDo(&doWork);
            break;
        case 9:
            std::cout << "\033[2J\033[1;1H";
            s.RemoveFinishTask(&dataFinish);
            break;
        case 10:
            std::cout << "\033[2J\033[1;1H";
            s.EditTask(&data);
            break;
        case 11:
            std::cout << "\033[2J\033[1;1H";
            s.EditTaskTodo(&doWork);
            break;
        case 12:
            std::cout << "\033[2J\033[1;1H";
            s.EditFinishTask(&dataFinish);
            break;
        case 13:
            std::cout << "\033[2J\033[1;1H";
            LoginProgram();
            break;
        case 14:
            std::cout << "\033[2J\033[1;1H";
            ProcessRegister();
            break;
        case 15:
            std::cout << "Anda memilih keluar...";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            return 0;
        default:
            std::cout << "Pilihan anda tidak ada";
        }
        std::cout << std::endl;
        std::cout << "1) Lanjut\n" << "2) Keluar\n";
        std::cout << "Ingin lanjut ke program atau keluar? ";
        std::cin >> ulang;
    } while (ulang != '2');
    return 0;
}
