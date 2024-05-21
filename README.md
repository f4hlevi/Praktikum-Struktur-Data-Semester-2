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
  <li><a href="#js8">Job Sheet 8 - Bubble and Insertion Sort</a></li>
  <li><a href="#js9">Job Sheet 9 - Selection and Merge Sort</a></li>
  <li><a href="#js10">Job Sheet 10 - Shell and Quick Sort</a></li>
  <li><a href="#js11">Job Sheet 11 - Linear and Binary Search</a></li>
  
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

  <h2 id="js8">JobSheet 8 - Bubble and Insertion Sort</h2>

  <b>Sorting (Pengurutan)</b> 

<p>Sorting merupakan proses pengurutan data yang sebelumnya disusun secara acak sehingga tersusun secara teratur menurut aturan tertentu.</p>
<p>Teknik Sorting yang umum digunakan : buble sort, insertion sort, selection sort, quicksort, mergesort, heapsort, dan binary sort</p>

  <b>Buble Sort</b>
  
<p>Buble Sort yaitu metode/algoritma pengurutan dengan dengan cara melakukan penukaran data dengan tepat disebelahnya secara terus menerus sampai bisa dipastikan dalam satu iterasi tertentu tidak ada lagi perubahan. Jika tidak ada perubahan berarti data sudah terurut. Disebut pengurutan gelembung karena masing-masing kunci akan dengan lambat menggelembung ke posisinya yang tepat.</p>

  <b>Insertion Sort</b>
  
<p>Insertion Sort merupakan sebuah teknik pengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. Algoritma insertion sort seperti proses pengurutan kartu yang berada di tangan kita .</p>

  <h2 id="js9">JobSheet 9 - Selection and Merge Sort</h2>

  <b>Selection Sort</b> 

<p>Selection Sort merupakan sebuah algoritma yang digunakan untuk mencari dna memilih element/data terkecil dalam sebuah list yang belum tersusun dalam setiap iterasi dan menempatkan elemen terkecil di urutan paling depan dari urutan list data.</p>

<b>Cara kerja Slecetion Sort:</b>

<ul>
<li>1.Tentukan elemen pertama dari urutan menjadi elemen terkecil masukkan sebagai elemen “minimum”.</li>
<li>2.Bandingkan mnimum dengan urutan elemen kedua. Jika elemen kedua lebih kcil dibandingkan minimum, jadikan elemen kedua sebagai minimum. Bandingkan kembali minimum dengan elemen ketiga. Lakukan secara terus menerus samapai dengan elemen yang terakhir.</li>
<li>3.Setelah setiap perulangan, minimum ditempatkan di paling depan urutan list data.</li>
<li>4.Pada setiap pengulangan, indeksasi (pemberian alamat) dimulai dari elemen pertama dari list. langkah 1-3 dilakukan berulang kali samapi keseluruhan elemen digantikan pada posisi yang terurut.</li>
</ul>

  <b>Merge Sort</b> 

<p>Merge Sort merupakan pengurutan gabungan terus-menerus memotong daftar menjadi beberapa subdaftar hingga masing-masing hanya memiliki satu item, lalu menggabungkan subdaftar tersebut ke dalam daftar yang diurutkan.</p>

<p>Divide-and-conquer memecahkan sub-masalah secara rekursif; setiap submasalah harus lebih kecil dari masalah aslinya, dan masing-masing harus mempunyai kasus dasar. Algoritma bagi-dan-taklukkan memiliki tiga bagian:</p>

<ul>
<li>1.Bagilah masalah menjadi beberapa bagian kecil dari masalah yang sama.</li>
<li>2.Taklukkan submasalah dengan menyelesaikannya secara rekursif. Selesaikan submasalah sebagai kasus dasar jika submasalah tersebut cukup kecil.</li>
<li>3.Untuk menemukan solusi dari masalah awal, gabungkan solusi dari submasalah.</li>
</ul>

  <h2 id="js10">JobSheet 10 - Shell and Quick Sort</h2>

  <b>Shell Sort</b>
<p>Shell Sort merupakan sebuah algoritma dengan pengurutan elemen pertama memiliki jarak interval dengan elemen yang akan dibandingkan. Pada prinsipnya sama dengan Insertion sort.</p>

<p>Dalam pengurutan Shell Sort, elemen/data diurutkan dengan interval yang terukur. Jarak interval diantara elemen semakin lama semakin mengecil berdasarkan berapa kali pengulangan pengurutan dilakukan.</p>

<b>Cara kerja Shell Sort:</b>

<p>Urutkan array yang ada</p>
<ul>
<li>1.Pada fase pertama, jika besar array N=8 maka jarak interval elemen menggunakan rumus N/2 = 4, akan dibandingkan dan ditukar jika belum sesuai urutan.</li>
<li>2.Pada pengulangan kedua rumus formula interval yang digunakan N/4 = 8/4 = 2, Elemen ke 2 dan ke 4 dibandingkan sesuai rumus interval = 2, elemen ke 0 dan 2 juga dibandingkan.</li>
<li>3.Proses yang sama berlaku untuk elemen yang tersisa.</li>
<li>4.Pada akhirnya samapai pada fase akhir di saat interval N/8 = 8/8 = 1, elemen dengan interval 1 diurutkan.</li>
</ul>

  <b>Quick Sort</b>
<p>Algoritma ini mengambil sebuah elemen sebagai pivot dan memisahkan array yang ada disekitar pivot.</p>

<p>Proses utama dalam quickSort adalah partisi() . Target dari partisi adalah untuk menempatkan pivot (elemen apa pun dapat dipilih menjadi pivot) pada posisi yang benar dalam susunan yang diurutkan dan meletakkan semua elemen yang lebih kecil di sebelah kiri pivot, dan semua elemen yang lebih besar di sebelah kanan pivot.</p>

<p>Partisi dilakukan secara rekursif pada setiap sisi pivot setelah pivot ditempatkan pada posisi yang benar dan akhirnya mengurutkan array.</p>
  

  <h2 id="js11">JobSheet 11 - Linear and Binary Search</h2>

  <b>Algoritma pencarian (searching algorithm)</b> 
<p>Adalah algoritma yang menerima sebuah argumen kunci dan dengan langkah-langkah tertentu akan mencari rekaman dengan kunci tersebut. Setelah proses pencarian dilaksanakan, akan diperoleh salah satu dari dua kemungkinan, yaitu data yang dicari ditemukan (successful) atau tidak ditemukan (unsuccessful).</p>

<b>Linear Search</b>

<p>Linear Search merupakan algoritma pencarian berurutan yang dimulai dari satu ujung dan menelusuri setiap elemen daftar hingga elemen yang diinginkan ditemukan, jika tidak, pencarian akan berlanjut hingga akhir kumpulan data.</p>

<p>Search Linear dilakukan dengan mengulangi semua elemen array dan memeriksa apakah elemen saat ini sama dengan elemen target. Jika ditemukan elemen apa pun yang sama dengan elemen target, kembalikan indeks elemen saat ini. Sebaliknya, jika tidak ada elemen yang sama dengan elemen target, kembalikan -1 karena elemen tersebut tidak ditemukan.</p>

<b>Binary Search</b>

<p>Algoritma pencarian yang digunakan untuk menemukan posisi nilai target dalam array yang diurutkan . Ia bekerja dengan membagi interval pencarian menjadi dua berulang kali hingga nilai target ditemukan atau interval tersebut kosong.</p>

<b>Berikut Langkah-langkahnya:<b/>
<ul>
<li>1.Data diambil dari posisi 1 sampai posisi akhir N</li>
<li>2.Cari posisi data tengah dengan rumus: (posisi awal + posisi akhir) / 2</li>
<li>3.Kemudian data yang dicari dibandingkan dengan data yang di tengah, apakah sama atau lebih kecil, atau lebih besar</li>
<li>4.Jika lebih besar, maka proses pencarian dicari dengan posisi awal adalah posisi tengah + 1</li>
<li>5.Jika lebih kecil, maka proses pencarian dicari dengan posisi akhir adalah posisi tengah – 1</li>
<li>6.Jika data sama, berarti ketemu.</li>
</ul>

