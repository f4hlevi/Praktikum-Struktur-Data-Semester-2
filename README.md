# Praktikum-Struktur-Data-Semester-2

👨‍🎓 Nama : Fajri Alhidra Fahlevi

📇 NIM : 23343062

📚 Prodi : Informatics

🧑‍🏫️ Dosen : Randi Proska Sandra, M.Sc

📑 Semester : 2

<li><a href="#js1">Job Sheet 1 - Pengenalan Struktur Data</a></li>
  <li><a href="#js2">Job Sheet 2 - Array, Pointer, Structure</a></li>
  <li><a href="#js3">Job Sheet 3 - Single Linked List</a></li>
  <li><a href="#js4">Job Sheet 4 - Doubly Linked List</a></li>
  <li><a href="#js5">Job Sheet 5 -  Double Linked List & Circular Linked List</a></li>
  <li><a href="#js6">Job Sheet 6 - Stack</a></li>
  <li><a href="#js7">Job Sheet 7 - Queue/Antrian</a></li>
  <li><a href="#js8">Job Sheet 8 - </a></li>
  <li><a href="#js9">Job Sheet 9 - </a></li>
  <li><a href="#js10">Job Sheet 10 - </a></li>
  <li><a href="#js11">Job Sheet 11 - </a></li>
  
<h2 id="js1">JobSheet 1 - Pengenalan Struktur Data</h2>

<p>Pemograman dalam struktur data ada beberapa macam. Salah satunya
adalah pemograman C. Dalam pemograman ini biasanya menggunakan variable
Array, Struktur dan Linked List. Membahas tentang 3 variabel tersebut dimana
ketiga variable mempunyai ciri dan umum yang berbeda sesuai dengan tipe file
yang di gunakan pembaca. Seperti array yang menggunakan satu dimensi dan dua
dimensi serta 3 dimensi dimana sangat berbeda dengan struktur yang
menggunakan tingkatan prosedur. Pemograman ini merupakan pemograman yang
berbeda dari pemograman lainnya misalnya VB, Delphi atau Pascal namun
perbedaan juga tidak begitu signifikan pada pemograman pascal.</p>

<b>Struktur Data</b>

<p>Struktur data adalah cara untuk mengorganisir dan menyimpan data dalam sebuah sistem komputer sehingga data tersebut dapat diakses dan dimanipulasi dengan efisien. Struktur data merupakan konsep dasar dalam ilmu komputer dan pemrograman yang memungkinkan pengembang perangkat lunak untuk menyusun data dalam bentuk yang sesuai dengan kebutuhan aplikasi atau algoritma yang digunakan. Dalam teknik pemrograman, struktur data berarti tata letak data yang berisikolom-kolom data, baik itu kolom yang tampak oleh pengguna (user) atau punkolom yang hanya digunakan untuk keperluan pemrograman yang tidak tampakoleh pengguna.</p>
  
<p>Setiap baris dari kumpulan kolom-kolom tersebut dinamakan catatan (record). Lebar kolom untuk data dapat berubah dan bervariasi. Ada
kolom yang lebarnya berubah secara dinamis sesuai masukan dari pengguna, dan
juga ada kolom yang lebarnya tetap.</p>


<b>Tipe Data</b>

<p>Tipe data adalah jenis atau macam data di dalam suatu variable dalam bahasa
pemrograman. Jenis jenis tipe data disimpan dalam bentuk kode angka baik berupa kode
ASCII dan kode laiinya contoh variable char dengan nilai ‘A’ disimpan
dalam kode ASCII 65, maka yang dipanggil adalah kode 65 jika ingin
menampilkan char dengan nilai ‘A’. Secara garis besar type data dapat dikategorikan menjadi :</p>
<p>Type data sederhana.</p>
<ul>
<li>1. Type data sederhana tunggal, misalnya Integer, real, boolean dan karakter.</li>
<li>2. Type data sederhana majemuk, misalnyaString (kumpulan data char)</li>
</ul>
<p>Struktur Data, meliputi:</p>
<ul>
<li>a. Struktur data sederhana, misalnya array dan record.</li>
<li>b. Struktur data majemuk, yang terdiri dari:
a) Linier : Stack, Queue, sertaList dan Multilist
b) Non Linier : Pohon Biner dan Graph</li>
</ul>
<p>Pemakaian struktur data yang tepat didalam proses pemrograman akan
menghasilkan algoritma yang lebih jelas dan tepat, sehingga menjadikan program
secara keseluruhan lebih efisien dan sederhana.</p>

<h2 id="js2">JobSheet 2 - Array, Pointer, Structure</h2>

  <b>Array</b>
<p>Array adalah suatu kumpulan nilai yang bertipe data sama. Masing-masing
elemen array diakses menggunakan indeks, dan elemen aarray dapat diakses
langsung (acak)</p>

  <b>Pointer</b>
  
<p>Pointer adalah variable yang berisi alamat memory sebagai nilainya dan berbeda
dengan variable biasa yang berisi nilai tertentu. Dengan kata lain, pointer berisi
alamat dari variable yang mempunyai nilai tertentu.</p>

  <b>Structure (Struct)</b>
  
<p>Dalam bahasa pemograman C sebuah Struct adalah kumpulan variable (berisi
variable yang memiliki tipe-tipe yang berbeda) bernaung dalam satu nama objek
yang serumpun. Sebelum membuat sebuah Struct anda perlu menentukan tipe
tipe data apa saja di dalamnya. Untuk menamai struct kata kunci Struct
digunakan.</p>

  <b>ADT (Abstract Data Type) atau Tipe Data Bentukan</b>
  
<p>ADT adalah koleksi data dan operasi yang dapat digunakan untuk
memanipulasi data, tipe data tertentu yang didefinisikan oleh pemrogram untuk
kemudahan pemrograman serta untuk mengakomodasi tipe-tipe data yang tidak
secara spesifik diakomodasi oleh bahasa pemrograman yang digunakan.</p>

<h2 id="js3">JobSheet 3 - Single Linked List</h2>

  <b>Simpul/Nodes</b>
  
<p>Sebuah simpul/node berisi alamat dan kumpulan data, dalam sebuah
simpul/node keduanya dibungkus menjadi sebuah objek berupa struct seperti
berikut :
 struct node
 {
 int data;
 struct node *next;
 };</p>

   <b>Penggunakan Alokasi Memory</b>
   
<p>Ketika kita mempelajari tipe data array, nampak kelemahan tipe data ini adalah
sifatnya yang statis. Artinya ketika kita mendeklarasikan sebuah variable dengan
tipe data array maka data yang kita deklarasikan disimpan pada memori harus
dalam kondisi terurut. Selain itu selama program berjalan ukuran dari array
bersifat tetap atau kita tidak dapat merubahnya. Adakalanya dalam
pemrograman ukuran sebuah obyek belum dapat kita tentukan sampai program
kita jalankan.</p>

  <b>Single Link List</b>
    
<p>Di dalam game Treasure Hunt, anda mulai menjelajahinya dengan mencari clue
pertama. Di saat anda menemukannya, anda tidak menumukan harta karunnya
tapi menemukan clue berikutnya dan begitu seterusnya sampai anda menemukan
harta karun.</p>

<p>Sebuah linked list sama halnya dengan logika di atas, merupakan sebuah data
yang berupa simpul atau node beralamat yang saling bertaut. Setiap simpul bisa
menyimpan data yang mana isinya bisa char, int, string atau tipe data lainnya.</p>

  <h2 id="js4">JobSheet 4 - Doubly Linked List</h2>

<p>Doubly Linked List (DLL) berisi pointer tambahan, biasanya disebut pointer sebelumnya, bersama
dengan pointer berikutnya dan data yang ada dalam daftar tertaut tunggal. Sama halnya dengan single linked list sebuah dobly link list memiliki head dan tail, perbedaannya doubly
link list memiliki 2 arah data yani next dan previous.</p>
<p>Kelebihan Doubly link list dibandingkan dengan Single link list</p>
<ul>
<li>1. DLL bisa berjalan dalam 2 arah ke depan dan kebelakang</li>
<li>2. Operasi penghapusan atau deletion() lebih efisien dan simple menggunakan pointer yang
menunjuk ke simpul yang akan dihapus</li>
<li>3. Dapat melakukan proses insert() simpul lebih efisien</li>
</ul>
<p>Dalam single link list penghapusan simpul, pointer simpul data sebelumnya diperlukan dan untuk
mendapatkannya terkadang list data diulang dari awal. Berbeda dengan doubly link list kita langsung
dapat pointer simpul data sebelumnya menggunakan pointer previous.</p>
<p>Kelemahan Dobly link list</p>
<ul>
1. Setiap simpul DLL membutuhkan ruang memory tambahan untuk pointer 2 pointer
2. Setiap operasi yang dilakukan harus mencantumkan pointer simpul sebelumnya.
</ul>

<p>Jenis proses Insertion()</p>
<ul>
<li>1. Penambahan simpul di depan</li>
<li>2. Penambahan setelah simpul yang ditentukan</li>
<li>3. Di simpul yang paling akhir</li>
<li>4. Penambahan sebelum simpul yang ditentukan</li>
</ul>

  <h2 id="js5">JobSheet 5 - Double Linked List & Circular Linked List</h2>

  <b>Double Linked List</b>
   
<p>Double linked list Elemen-elemen dihubungkan dengan dua pointer dalam satu node. Struktur ini menyebabkan list melintas baik ke depan (next) maupun ke belakang (prev) atau (back).Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data (info) dan pointer next, masing-masing elemen dilengkapi dengan pointer prev atau back yang menunjuk ke elemen sebelumnya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertamamenunjuk NULL. Untuk menunjukkan tail dari double linked list tersebut, maka pointer next dari elementerakhir menunjuk NULL.</p>

<p>Untuk melintas kembali melalui double linked list, dapat digunakan pointer prev dari elemen yang
berurutan pada arah tail ke head. Double linked list mempunyai fleksibilitas yang lebih tinggi daripada
single linked list dalam perpindahan pada list.</p>

  <b>Circular Linked List</b>

<p>Circular list adalah bentuk lain dari linked list yang memberikan fleksibilitas dalam melewatkan elemen.
Circular list bisa berupa single linked list atau double linked list, tetapi tidak mempunyai tail. Pada circular
list, pointer next dari elemen terakhir menunjuk ke elemen pertama dan bukan menunjuk NULL. Pada
double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.</p>

  <h2 id="js6">JobSheet 6 - Stack</h2>

  <b>Stack</b>

<p>Stack adalah sebuah kumpulan data dimana data yang diletakkan di atas data yang lain. Dengan
demikian stack adalah struktur data yang menggunakan konsep LIFO. Dengan demikian, elemen
terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil. Dalam proses komputasi,
untuk meletakkan sebuah elemen pada bagian atas dari stack, disebut push. Dan untuk memindahkan
dari tempat yang atas tersebut, disebut pop.</p>


  <b>Stack dengan Array</b>

<p>Ada beberapa cara untuk menyajikan sebuah stack tergantung pada permasalahan yang akan
diselesaikan. Bentuk penyajian stack bisa menggunakan tipe data array, tetapi sebenarnya penyajian
stack menggunakan array adalah kurang tepat karena banyaknya elemen dalam array adalah statis,
sedangkan dalam stack banyaknya elemen sangat bervariasi atau dinamis. Meskipun demikian, array
bisa digunakan untuk penyajian stack, tetapi dengan anggapan bahwa banyaknya elemen maksimal
dari suatu stack tidak melebihi batas maksimum banyaknya elemen array.</p>

<p>Pada suatu saat, ukuranstack akan sama dengan ukuran array. Bila diteruskan menambah data, maka akan terjadi overflow.
Oleh karena itu, perlu ditambahkan data untuk mencatat posisi ujung stack. Ada dua macam penyajian
stack menggunakan array, yaitu Single stack dan Double stack.</p>

   <h2 id="js7">JobSheet 7 - Queue/Antrian</h2>

  <b>Konsep Queue</b>

<p>Sebuah antrian sangat berguna pada pemograman struktur data. Hal ini sama dengan membeli
tiket pergi nonton ke bioskop. Dimana orang pertama yang memasuki antrian adalah yang pertama
mendapat tiket masuk. Antrian menggunakan prinsip FIFO First in First Out. Item yang mendapatkan
giliran pertama adalah item yang pertama keluar.</p>

  <b>Spesifikasi Queue</b>
  
<p>Sebuah antrian dinamakan juga dengan sebuah objek atau lebih spesifiknya ADT yang memiliki operasi
sebgai berikut :</p>
<ul>
<li>• Enqueue: Add element to end of queue</li>
<li>• Dequeue: Remove element from front of queue</li>
<li>• IsEmpty: Check if queue is empty</li>
<li>• IsFull: Check if queue is full</li>
<li>• Peek: Get the value of the front of queue without removing it</li>
</ul>

  <b>Cara kerja Queue</b>
  
<p>Sebuah antrian memiliki proses sebagai berikut :</p>
<ul>
<li>1. Dua pointer yang disebut FRONT dan REAR digunakan untuk melacak elemen pertama danterakhir dalam antrian.</li>
<li>2. Saat menginisialisasi antrian, kami menetapkan nilai FRONT dan REAR ke -1.</li>
<li>3. Pada enqueing elemen, kita meningkatkan nilai indeks REAR dan menempatkan elemen baru diposisi yang ditunjuk oleh REAR.</li>
<li>4. Pada dequeueing suatu elemen, kita mengembalikan nilai yang ditunjuk oleh FRONT danmeningkatkan indeks FRONT.</li>
<li>5. Sebelum enqueing, kami memeriksa apakah antrian sudah penuh.</li>
<li>6. Sebelum dequeuing, kami memeriksa apakah antrian sudah kosong.</li>
<li>7. Saat membuat elemen pertama, kami menetapkan nilai FRONT ke 0.</li>
<li>8. Saat mendekor elemen terakhir, kita mereset nilai FRONT dan REAR ke -1.</li>
</ul>






  


