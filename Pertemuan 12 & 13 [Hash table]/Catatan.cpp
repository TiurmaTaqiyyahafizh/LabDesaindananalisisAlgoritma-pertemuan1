/*
catatan

oprasi yang di gunakan = insert,find,remove,getlterator

hastabel = hanya bisa menyimpan 1 data

apabila dalam 1 array tedapat 2 data / collision (tabrakan) maka bisa mengguanakan beberapa cara yaitu :
- closied gashing(open addresing) = 

- linear probing(metode pembagian) = lompatannya di tambah 1 semua data nya itu di tambah satu ; RUMUS -> [ (h+1)mod m + 1 ]    
*note : bisa menggunakan perhitungaN(KALKULATOR) modulus/ modulo
*note : untuk menentukan m nya itu adalah bilangan prima

-Quadratic Probing(metode midsquare(nilai tengah)) = lompatannya itu kuadrat 
Contoh :
If the slot hash(x) % m is full, then we try (hash(x) + 1*1) % S.
If (hash(x) + 1*1) % m is also full, then we try (hash(x) + 2*2) % m.
If (hash(x) + 2*2) % m is also full, then we try (hash(x) + 3*3) % m.

*note : angka di pisah masing masing memiliki 2 pasangan dan apabila di bagian depan tidak memiliki pasangan maka di tambahkan 0
Contoh :
k      10347^2       ||      87492^2           = di pangkatkan 2
k2 [0]1 07 06 04 09  ||  76 54 85 00 64        = di bagi masing" 2 angka|| [] di tambahkan 0 karena kurang angka
H(k)       06        ||        85              = di ambil nilai tengah

- double hasing (metode penjumlahan digit) = hanya menerima 2 digit angka
contoh :
[0]1 03 47 = 01 + 03 + 47 = 51 
[0]8 74 92 = 08 + 74 + 92 = 174 -> memiliki 3 digit maka akan menjadi : [0]1 74 = 01+ 74 = 75


- open hasing(separate chaining) =


*/
