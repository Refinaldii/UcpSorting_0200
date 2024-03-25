// Type 2
//  Jawaban Nomor 1 adalah 
// Algoritma Bubble Sort membandingkan elemen-elemen berdekatan dan secara berulang menukar posisi mereka jika tidak terurut, sehingga secara bertahap mengurutkan seluruh array.
// Jawaban Nomor 2 adalah 
//Algoritma Shell Sort membandingkan dan menukar elemen-elemen dengan membagi array menjadi subgrup yang lebih kecil
//Jawaban Nomor 3 Adalah
//Insertionsort adalah cara terefesien buat jika data sudah ada beberapa yang berurutan 

#include <iostream>
using namespace std;




int a[20];  // Deklarasi array a dengan ukuran 20 
int n;      // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {      // Procedure untuk input
    while (true) {  // Looping
        cout << "Masukan Banyaknya elemen pada Refinaldi : "; // Output ke layar
        cin >> n;       // Input dari pengguna
        if (n <= 20)    // Jika n kurang dari atau sama dengan 20
            break;      // Keluar dari loop
        else {          // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";    // Output ke layar
        }
    }
    cout << endl;                           // Output baris kosong
    cout << "====================" << endl; // Output ke layar
    cout << "Masukan Elemen Array" << endl; // Output ke layar
    cout << "====================" << endl; // Output ke layar

    for (int i = 0; i < n; i++) {               // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke- " << (i + 1) << ": "; // Output ke layar
        cin >> a[i];                            // Input dari pengguna
    }
}

void selectionsort(int arr[], int n) {
    for (int j = 0; j < n - 1; ++j) {
        int min_index = j;
        for (int i = j + 1; i < n; ++i) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        int temp = arr[j];
        arr[j] = arr[min_index];
        arr[min_index] = temp;
    }

}
void display() {
    cout << endl;
    cout << "================================" << endl; // Output ke layar
    cout << "Elemen Array yang telah tersusun" << endl; // Output ke layar
    cout << "================================" << endl; // Output ke layar
    for (int min_index = 0; min_index < n; min_index++) {                       // Looping dengan j dimulai dari 0 hingga n-1 
        cout << "Data ke- " << (min_index + 1) << ": ";                           // Output ke layar
        cout << a[min_index] << endl;                          // Ouput ke Layar

    }
    cout << endl;                                       // Output baris kosong
}
void bubbleSortArray() {                    // Procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {           // Looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - 1; j++) {   // Looping dengan j dimulai dari 0 hingga n-1
            if (a[j] > a[j + 1]) {          // Jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];            // Simpan nilai a[j] ke variabel sementara temp
                a[j] = a[j + 1];            // Assign nilai a[j+1] ke a[j]
                a[j + 1] = temp;            // Assign nilai temp ke a[j+1]
            }
        }
    }
}
int main() {
    input();            // Memanggil read()
    bubbleSortArray();  // Memanggil bubbleSortArray()
    display();  // Memanggil display()
    selectionsort;
    return 0;

}