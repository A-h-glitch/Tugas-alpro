#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data zodiak
struct Zodiac {
    string name;
    int startDay, startMonth;
    int endDay, endMonth;
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
string getZodiac(int day, int month, const Zodiac zodiacs[], int size) {
    for (int i = 0; i < size; i++) {
        if ((month == zodiacs[i].startMonth && day >= zodiacs[i].startDay) ||
            (month == zodiacs[i].endMonth && day <= zodiacs[i].endDay)) {
            return zodiacs[i].name;
        }
    }
    return "Unknown";
}

int main() {
    // Data zodiak
    Zodiac zodiacs[] = {
        {"CAPRICORN", 22, 12, 19, 1},
        {"AQUARIUS", 20, 1, 18, 2},
        {"PISCES", 19, 2, 20, 3},
        {"ARIES", 21, 3, 19, 4},
        {"TAURUS", 20, 4, 20, 5},
        {"GEMINI", 21, 5, 20, 6},
        {"CANCER", 21, 6, 22, 7},
        {"LEO", 23, 7, 22, 8},
        {"VIRGO", 23, 8, 22, 9},
        {"LIBRA", 23, 9, 22, 10},
        {"SCORPIO", 23, 10, 21, 11},
        {"SAGITTARIUS", 22, 11, 21, 12}
    };

    int day, month, year;
    cout << "Masukkan Tanggal Lahir Anda [tgl-bln-tahun]: ";
    scanf("%d-%d-%d", &day, &month, &year);

    // Tentukan zodiak
    string zodiac = getZodiac(day, month, zodiacs, 12);

    // Output
    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: " << day << "-" << month << "-" << year << endl;
    cout << "Zodiak Anda adalah: " << zodiac << endl;

    return 0;
}
