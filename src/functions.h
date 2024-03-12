#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include "includes.h"

/* Mengembalikan nilai number pangkat power
 */
int power(int number, int power);

/* Membandingkan string1 dengan string2
 * Mengeluarkan 1 bila string1 = string2
 * Mengeluarkan 2 bila string1 != string2
 */
boolean compareString(char *string1, char *string2);

/* Mengubah type int menjadi type string
 */
char* int_to_string(int num);

/* Menggabungkan string1 dengan string2
 * Hasil penggabungan menjadi string3
 */
void concat(char *string1, char *string2, char *string3);

/* Mengembalikan panjang dari sebuah string
 */
int stringLen(char *string);

/* Mengembalikan string yang telah diubah setiap karakter menjadi huruf kapital
 */
char* upper(char *string);

/* Mengembalikan string yang telah diubah setiap karakter menjadi huruf kecil
 */
char* lower(char *string);

/* Menambahkan spasi(-spasi) diakhir string
 * Digunakan dalam fungsi SCOREBOARD
 */
void addspace(char *string, int space);

/* Mengubah type Word menjadi type char
 * Mengisi string dengan isi currentWord.TabWord
 */
void wordToString(Word currentWord, char *string);

/* Mengubah type Word menjadi type int
 *
 * Contoh pemakaian:
 * int value;
 * value = wordToString(currentWord)
 */
int wordToInteger(Word currentWord);

/* Mengubah type string menjadi type integer
 */
int stringToInteger(char *string);

/* Memisahkan string yang memiliki dua kata terdiri dari
 * nama dan angka menjadi string dan integer terpisah.
 * Digunakan dalam fungsi LOAD
 */
char* splitStringInt(char *string, int *number);

/* Menerima input stdin yang kemudian diubah menjadi string
 * type = 0 -> Menggunakan mesinkata type 0 (Memisahkan setiap word dengan blank)
 * type = 1 -> Menggunakan mesinkata type 1 (Memisahkan setiap word dengan newline)
 *
 * Contoh pemakaian:
 * char *string;
 * string = (char *) malloc (n * sizeof(char));
 * inputString(0, string);
 */
void inputString(int type, char* value);

/* Menerima input stdin yang kemudian diubah menjadi integer
 *
 * Contoh pemakaian:
 * int value;
 * inputInteger(&value);
 */
void inputInteger(int *value);

/* Menerima input berupa dua buah integer, yaitu batas bawah dan batas atas dari angka 
 * yang ingin dikembalikan. Mengembalikan integer yang berada di batas bawah dan batas atas.
 */
int randomNumber(int lowerlimit, int upperlimit);

/* Menerima input berupa sebuah Word dan mengembalikan pointer to char dari Word.TabWord sesuai dengan Word.Length
 */
char* getCurrentWord(Word string);

/* Menerima input berupa string yang kemudian dipakai menjadi nama untuk
 * diletakkan dalam Scoreboard. Jika nama sudah ada akan mengeluarkan pesan
 * Nama sudah dipakai dalam Scoreboard <nama game> dan meminta input ulang.
 */
void inputNamaScoreboard(ArrayDin *Games, Queue *GamesQueue, ArrayDin_SB *Scoreboard, int Skor);

#endif
