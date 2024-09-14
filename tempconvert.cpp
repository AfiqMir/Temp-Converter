#include <iostream>
#include <cmath>  
#include <iomanip>  
#include <fstream> 

using namespace std;

double celciusToFahrenheit(double celcius) {
    return (celcius * 9/5) + 32;
}

double celciusToKelvin(double celcius) {
    return celcius + 273.15;
}

double celciusToReamur(double celcius) {
    return celcius * 4/5;
}

int main() {
    double suhuCelcius;
    int pilihan;

    cout << "Masukkan suhu dalam Celcius: ";
    cin >> suhuCelcius;

    cout << "\nPilih konversi: \n1. Fahrenheit\n2. Kelvin\n3. Reamur\nPilihan: ";
    cin >> pilihan;

    cout << fixed << setprecision(2);
    if (pilihan == 1) {
        double suhuFahrenheit = celciusToFahrenheit(suhuCelcius);
        cout << suhuCelcius << " derajat Celcius = " << suhuFahrenheit << " derajat Fahrenheit\n";

        ofstream fileOutput("konversi_suhu.txt");
        fileOutput << suhuCelcius << " derajat Celcius = " << suhuFahrenheit << " derajat Fahrenheit\n";
        fileOutput.close();

        cout << "Hasil konversi telah disimpan ke file 'konversi_suhu.txt'.\n";
    } else if (pilihan == 2) {
        double suhuKelvin = celciusToKelvin(suhuCelcius);
        cout << suhuCelcius << " derajat Celcius = " << suhuKelvin << " Kelvin\n";

        ofstream fileOutput("konversi_suhu.txt");
        fileOutput << suhuCelcius << " derajat Celcius = " << suhuKelvin << " Kelvin\n";
        fileOutput.close();

        cout << "Hasil konversi telah disimpan ke file 'konversi_suhu.txt'.\n";
    } else if (pilihan == 3) {
        double suhuReamur = celciusToReamur(suhuCelcius);
        cout << suhuCelcius << " derajat Celcius = " << suhuReamur << " derajat Reamur\n";

        ofstream fileOutput("konversi_suhu.txt");
        fileOutput << suhuCelcius << " derajat Celcius = " << suhuReamur << " derajat Reamur\n";
        fileOutput.close();

        cout << "Hasil konversi telah disimpan ke file 'konversi_suhu.txt'.\n";
    } else {
        cout << "Pilihan tidak valid.\n";
    }

    return 0;
}
