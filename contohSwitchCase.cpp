int main()
{
    int pilihan;
    float panjang, lebar;
    float jejari;

    do
    {
        cout << "Menu" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;

        cout << "Pilihan (1/2/3) = ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Hitung luas persegi panjang" << endl;
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukkan lebar = ";
            cin >> lebar;
            cout << "Luas persegi panjang = " << luasPersegiPanjang(panjang, lebar) break;
        case 2:
            cout << "Hitung luas lingkaran" << endl;
            cout << "Masukkan jari-jari = ";
            cin >> jejari;
            cout << "Luas lingkaran = " << luasLingkaran(jejari) << endl;
            break;
            
        }
    }
}