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

  ""JobSheet 4 - Doubly Linked List""

Doubly Linked List (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama
dengan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal. Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly
link list memiliki 2 arah data yani next dan previous.
Kelebihan Doubly link list dibandingkan dengan Single link list
1. DLL bisa berjalan dalam 2 arah ke depan dan kebelakang
2. Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang
menunjuk ke simpul yang akan dihapus
3. Dapat melakukan proses insert() simpul lebih efisien
Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan dan untuk
mendapatkannya terkadang list data diulang dari awal. Berbeda dengan doubly link list kita langsung
dapat pointer simpul data sebelumnya menggunakan pointer previous.
Kelemahan Dobly link list
1. Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer
2. Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.
Jenis proses Insertion()
1. Penambahan simpul di depan
2. Penambahan setelah simpul yang ditentukan
3. Di simpul yang paling akhir
4. Penambahan sebelum simpul yang ditentukan


    ""JobSheet 5 - Double Linked List & Circular Linked List""

    ""Double Linked List""
   
  Double linked list Elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev) atau (back).Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertamamenunjuk NULL. Untuk menunjukkan tail dari double linked list tersebut, maka pointer next dari elementerakhir menunjuk NULL.  
Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang
berurutan pada arah tail ke head. Double linked list mempunyai fleksibilitas yang lebih tinggi daripada
single linked list dalam perpindahan pada list. 

  ""Circular Linked List""

  Circular list adalah bentuk lain dari linked list yang memberikan fleksibilitas dalam melewatkan elemen.
Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. Pada circular
list, pointer next dari elemen terakhir menunjuk ke elemen pertama dan bukan menunjuk NULL. Pada
double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

    ""JobSheet 6 - Stack""

    ""Stack""

  Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan
demikian stack adalah struktur data yang menggunakan konsep LIFO. Dengan demikian, elemen
terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi,
untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push. Dan untuk memindahkan
dari tempat yang atas tersebut, disebut pop.


  ""Stack dengan Array""

Ada beberapa cara untuk menyajikan sebuah stack tergantung pada permasalahan yang akan
diselesaikan. Bentuk penyajian stack bisa menggunakan tipe data array, tetapi sebenarnya penyajian
stack menggunakan array adalah kurang tepat karena banyaknya elemen dalam array adalah statis,
sedangkan dalam stack banyaknya elemen sangat bervariasi atau dinamis. Meskipun demikian, array
bisa digunakan untuk penyajian stack, tetapi dengan anggapan bahwa banyaknya elemen maksimal
dari suatu stack tidak melebihi batas maksimum banyaknya elemen array. Pada suatu saat, ukuran
stack akan sama dengan ukuran array. Bila diteruskan menambah data, maka akan terjadi overflow.
Oleh karena itu, perlu ditambahkan data untuk mencatat posisi ujung stack. Ada dua macam penyajian
stack menggunakan array, yaitu Single stack dan Double stack.

   ""JobSheet 7 - Queue/Antrian""

    ""Konsep Queue""

Sebuah antrian sangat berguna pada pemograman struktur data. Hal ini sama dengan membeli
tiket pergi nonton ke bioskop. Dimana orang pertama yang memasuki antrian adalah yang pertama
mendapat tiket masuk. Antrian menggunakan prinsip FIFO First in First Out. Item yang mendapatkan
giliran pertama adalah item yang pertama keluar.

  ""Spesifikasi Queue""
  
  Sebuah antrian dinamakan juga dengan sebuah objek atau lebih spesifiknya ADT yang memiliki operasi
sebgai berikut :
• Enqueue: Add element to end of queue
• Dequeue: Remove element from front of queue
• IsEmpty: Check if queue is empty
• IsFull: Check if queue is full
• Peek: Get the value of the front of queue without removing it

  ""Cara kerja Queue""
  
Sebuah antrian memiliki proses sebagai berikut :
1. Dua pointer yang disebut FRONT dan REAR digunakan untuk melacak elemen pertama dan
terakhir dalam antrian.
2. Saat menginisialisasi antrian, kami menetapkan nilai FRONT dan REAR ke -1.
3. Pada enqueing elemen, kita meningkatkan nilai indeks REAR dan menempatkan elemen baru di
posisi yang ditunjuk oleh REAR.
4. Pada dequeueing suatu elemen, kita mengembalikan nilai yang ditunjuk oleh FRONT dan
meningkatkan indeks FRONT.
5. Sebelum enqueing, kami memeriksa apakah antrian sudah penuh.
6. Sebelum dequeuing, kami memeriksa apakah antrian sudah kosong.
7. Saat membuat elemen pertama, kami menetapkan nilai FRONT ke 0.
8. Saat mendekor elemen terakhir, kita mereset nilai FRONT dan REAR ke -1.






  


