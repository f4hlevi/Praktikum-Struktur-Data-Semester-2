# Praktikum-Struktur-Data-Semester-2

👨‍🎓 Nama : Fajri Alhidra Fahlevi
📇 NIM : 23343062
📚 Prodi : Informatics
🧑‍🏫️ Dosen : Randi Proska Sandra, M.Sc
📑 Semester : 2

""JobSheet 1 - Pengenalan Struktur Data""

Pemograman dalam struktur data ada beberapa macam. Salah satunya
adalah pemograman C. Dalam pemograman ini biasanya menggunakan variable
Array, Struktur dan Linked List. Membahas tentang 3 variabel tersebut dimana
ketiga variable mempunyai ciri dan umum yang berbeda sesuai dengan tipe file
yang di gunakan pembaca. Seperti array yang menggunakan satu dimensi dan dua
dimensi serta 3 dimensi dimana sangat berbeda dengan struktur yang
menggunakan tingkatan prosedur. Pemograman ini merupakan pemograman yang
berbeda dari pemograman lainnya misalnya VB, Delphi atau Pascal namun
perbedaan juga tidak begitu signifikan pada pemograman pascal.

""Struktur Data""
  Struktur data adalah cara untuk mengorganisir dan menyimpan data dalam sebuah sistem komputer sehingga data tersebut dapat diakses dan dimanipulasi dengan efisien. Struktur data merupakan konsep dasar dalam ilmu komputer dan pemrograman yang memungkinkan pengembang perangkat lunak untuk menyusun data dalam bentuk yang sesuai dengan kebutuhan aplikasi atau algoritma yang digunakan. Dalam teknik pemrograman, struktur data berarti tata letak data yang berisi
kolom-kolom data, baik itu kolom yang tampak oleh pengguna (user) atau pun
kolom yang hanya digunakan untuk keperluan pemrograman yang tidak tampak
oleh pengguna.Setiap baris dari kumpulan kolom-kolom tersebut dinamakan catatan (record). Lebar kolom untuk data dapat berubah dan bervariasi. Ada
kolom yang lebarnya berubah secara dinamis sesuai masukan dari pengguna, dan
juga ada kolom yang lebarnya tetap.


""Tipe Data""
  Tipe data adalah jenis atau macam data di dalam suatu variable dalam bahasa
pemrograman. Jenis jenis tipe data disimpan dalam bentuk kode angka baik berupa kode
ASCII dan kode laiinya contoh variable char dengan nilai ‘A’ disimpan
dalam kode ASCII 65, maka yang dipanggil adalah kode 65 jika ingin
menampilkan char dengan nilai ‘A’. Secara garis besar type data dapat dikategorikan menjadi :
Type data sederhana.
1. Type data sederhana tunggal, misalnya Integer, real, boolean dan karakter.
2. Type data sederhana majemuk, misalnyaString (kumpulan data char)
Struktur Data, meliputi:
a. Struktur data sederhana, misalnya array dan record.
b. Struktur data majemuk, yang terdiri dari:
a) Linier : Stack, Queue, sertaList dan Multilist
b) Non Linier : Pohon Biner dan Graph
Pemakaian struktur data yang tepat didalam proses pemrograman akan
menghasilkan algoritma yang lebih jelas dan tepat, sehingga menjadikan program
secara keseluruhan lebih efisien dan sederhana.

""JobSheet 2 - Array, Pointer, Structure""
  ""Array""
Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing
elemen array diakses menggunakan indeks, dan elemen aarray dapat diakses
langsung (acak)

  ""Pointer""
Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda
dengan variable biasa yang berisi nilai tertentu. Dengan kata lain, pointer berisi
alamat dari variable yang mempunyai nilai tertentu. 

  ""Structure (Struct)""
Dalam bahasa pemograman C sebuah Struct adalah kumpulan variable (berisi
variable yang memiliki tipe-tipe yang berbeda) bernaung dalam satu nama objek
yang serumpun. Sebelum membuat sebuah Struct anda perlu menentukan tipe
tipe data apa saja di dalamnya. Untuk menamai struct kata kunci Struct
digunakan.

  ""ADT (Abstract Data Type) atau Tipe Data Bentukan""
ADT adalah koleksi data dan operasi yang dapat digunakan untuk
memanipulasi data, tipe data tertentu yang didefinisikan oleh pemrogram untuk
kemudahan pemrograman serta untuk mengakomodasi tipe-tipe data yang tidak
secara spesifik diakomodasi oleh bahasa pemrograman yang digunakan.

""JobSheet 3 - Single Linked List""
  ""Simpul/Nodes""
Sebuah simpul/node berisi alamat dan kumpulan data, dalam sebuah
simpul/node keduanya dibungkus menjadi sebuah objek berupa struct seperti
berikut :
 struct node
 {
 int data;
 struct node *next;
 };

   ""Penggunakan Alokasi Memory""
Ketika kita mempelajari tipe data array, nampak kelemahan tipe data ini adalah
sifatnya yang statis. Artinya ketika kita mendeklarasikan sebuah variable dengan
tipe data array maka data yang kita deklarasikan disimpan pada memori harus
dalam kondisi terurut. Selain itu selama program berjalan ukuran dari array
bersifat tetap atau kita tidak dapat merubahnya. Adakalanya dalam
pemrograman ukuran sebuah obyek belum dapat kita tentukan sampai program
kita jalankan.

    ""Single Link List""
Di dalam game Treasure Hunt, anda mulai menjelajahinya dengan mencari clue
pertama. Di saat anda menemukannya, anda tidak menumukan harta karunnya
tapi menemukan clue berikutnya dan begitu seterusnya sampai anda menemukan
harta karun.
Sebuah linked list sama halnya dengan logika di atas, merupakan sebuah data
yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa
menyimpan data yang mana isinya bisa char, int, string atau tipe data lainnya.
