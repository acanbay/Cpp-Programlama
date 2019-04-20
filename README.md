# C++ Programlama
Kısa bilgilendirmeler ve örnekleri içermektedir.
 
[C++ ile Yapısal Programlama](#nyp) 
 
[1. Giriş](#1)  
[2. Kontrol Yapıları](#2)  
[3. Döngüler](#3)  
[4. Fonksiyonlar](#4)  
[5. İşaretçiler (Pointers)](#5)  
[6. Diziler](#6)   
[7. Dosya İşlemleri](#7)   


[C++ ile Nesne Yönelimli Programlama](#nyp)   

[8. Temel Kavramlar ve Nesne Yönelimi](#8)  
[9. Kapsülleme (Encapsulation)](#9)  
[10. Kalıtım (Inheritance)](#10)  
[11. Overloading](#11)  
[12. İleri NYP](#12)  
[13. Hata Yakalama](#13)   


<a name="1"/>

## 1. Giriş
*1, 2, 3 ve 4. örnekler bu bölümle ilgilidir.*

C++, 1979 yılında Bjarne Stroustrup tarafından BellLabs'da geliştirilen nesne yönelimli ve yüksek seviyeli bir genel amaçlı programlama dilidir.

**Genel C++ kod yapısı**
```C++
#include <kutuphane.h>
using namespace std;

int main(){
 ...
 return 0;                
}
```
burada
`#include`,
kodumuzda kullandığımız hazır komutların kütüphanelerini çağırmamızı sağlar.
`

`using namespace std`, std fonksiyonlarını kısa bir şekilde kullanmamızı sağlar. Kullanılmadığı durumda ,en basit örnekleme ile, std fonksiyonlarının başına her kullandığımızda `std::` yazmamız gerekir.

int main(){...}
 `
kısmı ana kodumuzu barındıran bölümdür. Program çalıştırıldığında ilk olarak bu bölüm çalışır. 
`
return 0;
 `
ise 0 değeri döndüren bir koddur. Böylelikle programın sonlandığını belirtir.

**Yorumlar**

/* ile başlayıp */ ile biten bölümlere yorum bloğu denir. // ile başlıyan bölümler ise yorum satırlarıdır. Yorum blokları içerisindeki her satır ve paragrafı yorum olarak belirtir, yorum satırı ise sadece satırda tanımlıdır ve alt satıra geçildiğinde kendiliğinden yorum dışına çıkar. Bu bölümlerde yazdıklarınız program tarafından görülmezler. Başkalarının da programı anlayabilmesi için eklenirler.

**Kod derleme ve çalıştırma**

C++ kodlarını terminalden derlemek için:
```
g++ programismi.cpp -o program.exe
```
komutu kullanılır. Burada "program" ve "programismi" sadece göstermek için kullanılmış isimlerdir. .cpp uzantılı dosyanızın adı ve sizin programa vermek istediğiniz ada göre değiştirilebilirler.

Daha sonra derlenen program,
```
./program.exe
```
komutu ile çalıştırılır.

**Değişkenler**

C++ dilinde kullanılan önemli değişkenler aşağıdaki gibidir:

`char`: değişkenin karakter olduğunu belirtir.    
`char`    : 8 bit   
`char16_t`: 16 bit    
`char32_t`: 32 bit    

`integer`: değişkenin tamsayı olduğunu belirtir.    
`int`           : 16 bit    
`short int`     : 16 bit    
`long int`      : 32 bit    
`long long int` : 64 bit    

`float`: ondalık sayı değişkenleridir.      
`float`       : 32 bit    
`double`      : 64 bit    
`long double` : 80 bit    

`boolean`: 1 ve 0 değerleirni alan mantık değişkenidir.
`bool`: 1 bit

`void`: belirli olmayan tipte değişkendir.
`void`: depolama alanı yok

```C
int a=5;
double b=2.4;
float c=7.3;
char d='A';
```

şeklinde tanımlanırlar. Bu tanımlamlardan sonra a, b, c veya d her çağırıldıklarında karşılarındaki değerleri taşıyan değişkenler olarak gelirler.


**Tip Dönüştürme**

Bir değişkenin tipinin başka bir değişken tipine çevrilmesi işlemidir. Örneğin karakter tipli bir değişken tanımlandıktan sonra tamsayı tipine çevrilebilir. Bu durumda içerideki karakter bilgisi kaybolup yerine o karakterin ASCII tablosundaki sayısal değeri işlenecektir. Yine kesirli sayı tipli bir veri tamsayı tipine dönüştürülebilir. Bu durumda ise sayının sadece tamsayı olan kısmı alınıp diğerleri alınmayacaktır.

Kod içerisinde

```C
char c ='A'
double d = 8.987;
int a = (int)c;
int b = (int)d;
```
şeklinde tnaımlanırlar.

**işlemciler ve operatörler**

`+`   : toplama    
`-`	  : çıkarma   
`*`	  : çarpma    
`/`   : bölme   
`%`   : modül alma    
`++`  : bir arttırma    
`--`  : bir azaltma   
`=`   : atama   

`a++` : a'yı 1 arttırır (`a = a + 1` ile aynı anlamdadır)    
`a--`	: a'yı 1 azaltır (`a = a - 1` ile aynı anlamdadır)    
`a += 5`	: a'yı 5 arttırır (`a = a + 5` ile aynı anlamdadır)    
`a -= 6` : a'yı 6 eksiltir (`a = a - 6` ile aynı anlamdadır.)    
`a *= 3` : a'yı 3 ile çarpar (`a = a * 3` ile aynı anlamdadır.)    
`a /= 4` : a'yı 4 e böler (`a = a / 4` ile aynı anlamdadır.)    

`<`	  : küçüktür  
`>`	  : büyüktür  
`<=`	: küçük eşittir  
`>=`	: büyük eşittir    
`==`	: eşittir 
`!=`	: farklıdır    
`||`	: veya    
`&&`	: ve    
`!`	  : değil 

**Temel Girdi Çıktı**

**`printf()`:**

Sadece ekrana yazı bastırılmak istendiğinden `printf` fonksiyonu,
```C++
printf("Yazılmak istenen");
```
şeklinde kullanılabilir. Ancak çoğu zaman ekrana bazı değişkenleri de yazdırmak isteriz. Bunun için ise verileri belirli formatlama yöntemleri ile kullanmamız gerekir. Örnek olarak eğer integer bir a değerini bastırmak istiyorsak:

```C++
printf("a değeri: %d",a);
```
şeklinde tanımlamamız gerekir. Burara `%d` ile gösterilen kısım, `printf()` fonksiyonuna ekrana bastırılacak `a` değişkeninin yerini ve formatını belirtir. Integer değerler için `%d` olarak kullanılır. Diğer formatların kullanımı da aşağıda verilmiştir.

```
int   : %d
double: %lf
float : %f
char  : %c
```

Eğer kesirli bir sayıyı ekrana bastırırken virgülden sonra sadece 2 basamak almak istiyorsak:

```C++
printf("a değeri: %.2f",a);
```
gibi bir kullanım yapabiliriz. Gelecek değişkenin formatını belirttiğimiz bölümde nokta koyup sonra kaçıncı basamağa gitmek istediğimizi belirtebiliriz.

**`scanf()`:**

Bu fonksiyon kullanılırken önce tırnak işareti içerisinde alınacak değişkenin formatı belirtilir. Daha sonra ise `&` kullanılarak değişkenin hangi adreste saklanacağı bilgisayara tanımlanır (Pointers bölümünde ayrıntısı verilecektir).

```C++
scanf("%d",&a);
```
<a name="cout"/>
**`cout`:**

`cout`, ekrana hızlı bir şekilde yazı bastırmaya yarayan bir komuttur.

```C++
cout<< "yazı" << degisken << endl;
```

şeklinde kullanılır. Yazı yazmak için çift tırnak kullanılır. Değişkenler ise direk isimleri yazılarak bastırılabilir. `endl` "satır sonu" (end of the line) anlamına gelir ve o satıra daha fazla bastırma yapılamaz. Yeni basılacaklar alt satırdan başlar.

<a name="cin"/>
**`cin`:**

`cin` komutu kullanıcıdan hızlıca veri almaya yarar.

```C++
cin>>veri;
```
şeklinde kullanılır.

<a name="2"/>     

## 2. Kontrol Yapıları       
*5 ve 6. örnekler bu bölümle ilgilidir.*

**if, if else, else**

`if` yapısı, istediği koşullar sağlandığı sürece içindeki işlemlerin yapıldığı kalıplardan oluşur. Eğer koşul sağlanmıyorsa yapıya girilmez ve o bölüm atlanır.

```C
if(koşul1){
    yapılacak işlemler;
}
else if(koşul2){
    yapılacak işlemler;
}
else if(koşul3){
    yapılacak işlemler;
}
. . .
else(koşulN){
    yapılacak işlemler;
}
```

şeklinde kullanılır.

**switch-case**

`switch-case` yapısı seçenekler üzerinden çalışır. Her seçenek için farklı işlemler atanır ve hangi seçenek gelmişse onun işlemleri yapılır.

```C
switch (secenekler){
    case secenek1: 
        yapılacak işlemler ; 
        break;
    case secenek2: 
        yapılacak işlemler ; 
        break;
	. . .
    default: yapılacak işlemler;
}
```

*`break`*, yapıdan çıkılmasını sağlar. 

*`continue`*, ifade sağlanıyorsa döngünün başına gönderir. 

*`goto`*, önceden tanımlanmış bir noktaya sıçramayı sağlar.

<a name="3"/>   

## 3. Döngüler      
*7, 8 ve 9. örnekler bu bölümle ilgilidir.*

**while**

`while`, parantez içerisindeki ifade sağlanıyorsa içerisindeki işlemleri gerçekleştirir. Daha sonra tekrar başa döner ve işlemlerden sonra da ifadenin sağlanıp sağlanmadığını test eder. Eğer hala sağlanıyorsa tekrar işlemleri yapar. İşlemler ifadeyi bozana kadar döngü bu şekilde devam eder.


```C++
while(ifade){
    yapılacak işlemler;
}
```
**do-while**

`do-while` döngüsünde önce içerisindeki işlemler yapılır ve işlemler bitirdikten sonra while içerisindeki koşul test edilir. Koşul sağlanıyorsa tekrar do’ya döner, aksi halde döngüden çıkar. 

```C++
do{
    yapılacak işlemler;
}while(ifade);
```

**for**

`for` döngüsü de while gibi içindeki şart sağlandığı sürece döngüye devam eder. Şart bozulduğunda döngüden çıkılır.
while’den farklı olarak kesin bir ifadeyi test etmez ve değişken bir ifade kullanır. Kendi içinde işlemler yaparak döngü işlemlerine veri verebilir.


```C++
for(i=0;i<#;i++){
    yapılacak işlemler;
}
```
<a name="4"/>   

## 4. Fonksiyonlar
*8, 9, 10 ve 11. örnekler bu bölümle ilgilidir.*

`main()` dışında tanımlanan ve `main()` içerisinde çağırıldığında bi takım işlemler ve sonuç ile gelen yapılardır.

**void fonksiyonu**

Boş değer döndüren fonksiyonlardır. Fonksiyon sonucu bir değere dönmez ve sadece içindeki işlemler yapılır.

```C++
void fonksiyon(){
   yapılacaklar;
}
```
şeklinde oluşturulur.

**Değer döndüren fonksiyonlar**

Değer döndüren fonksiyonlar dönecek değere bağlı bir tiple tanımlanırlar. 

Örneğin

```C++
int carpma(int x, int y){
   return x*y;
 }
```
fonksiyonu 2 değer ile çağırılır ve çıktı olarak değerlerin çarpımınu döndürür.

**Recursive fonksiyonlar**

İçerisinde kendisini çağıran fonksiyonlardır. 

Örnek:

```C++
int faktoriyel(int sayi){
   if(sayi<=1){
      return 1;
   }
   else{
      return sayi*faktoriyel(sayi-1);
   }
}
```
Burada faktöriyel kendisine gelen sayıyı bir azaltarak tekrar kendi içine göndermektedir. Böylelikle sayı 1 olana kadar her bir azaltılıp çarpılarak sayının faktöriyeline ulaşmaktadır.

**Rastgele Sayı Üreten Fonksiyon**

`random()` fonksiyonunun her çalıştığında farklı bir değer vermesi için öncelikle `time.h` kütüphanesini yükleyip

```C++
srand(time(NULL));
```

fonksiyonunu çağırmamız gerekir. Bu fonksiyon `rand()` fonksiyonunu zamana bağlı hale getirir ve zamana bağlı olduğundan farklı zamanlarda çağırıldığında farklı parametrelerle başlar. Böylelikle her seferinde aynı sonucu vermez.

Rastgele sayı üretmek için
```C++
rand()%#2+#1;
```
şeklinde kullanım yapılır. Burada `#1` değeri alt sınırı başlanacağını, `#2` değeri ise üst sınırı belirleyen parametrelerdir. Örneğin 1 ile 10 arasında rastgele sayılar üretmek için `#1 = 1`, `#2 = 10` olmalıdır.

<a name="5"/>   

## 5. İşaretçiler (Pointers)   

Bir pointer ana bellekte bir adres belirtir ve `*` ile tanımlanır.

Örnek:

```C
int sayi = 5;
int *adres;
adres = sayi;
```

`adres` değişkeni bilgi olarak `sayi` değişkeninin RAM'deki yerini alır bu nedenle `sayi`'nın kendisi gibi 5'e eşit değildir.	
5'e eşit olan RAM'de o adreste saklanan veriyi alan `*adres` ifadesi olur.

**Dinamik bellek yönetimi**

**`malloc`**

RAM'de yer ayırma işlemi yapar (ayrılan yerdeki eski veriyi silmez).

```C++
int *alan = (int *)malloc(miktar*size);
```

şeklinde alınır. `size` içeri girilecek değişkenin RAM'de kaplayacağı alanı (Örneğin int için 4 byte), `miktar` ise o veri tipinden kaç tane alınacağını belirtir.

**`calloc`**

RAM'de yer ayırma işlemi yapar (ayrılan yerdeki eski veriyi siler).

```C++
int *alan = (int *)calloc(miktar*size);
```

**`realloc`**

Ayrılan alanı yeniden boyurlandırır.

```C++
*alan = realloc(*alan,miktar*size);
```

**`free`**

Ayrılan alanı RAM'e geri verir.

```C
free(alan);
```


<a name="6"/>   

## 6. Diziler   
*12 ve 13. örnekler bu bölümle ilgilidir.*

Diziler aslında içerisinde birden fazla değer tutan değişken tipleridir. 

```C++
int dizi[4] = {1,2,3,4};
```
şeklinde tamsayı dizilri oluşturulabilir. Daha sonra içerisindeki değerlere ulaşılmak indislerden yararlanılır. Örneğin bu dizideki 1 değeri dizinin 0. değişkenidir (diziler 0'dan başlar) ve `dizi[0]` şeklinde kullanılır. Yine dizinin bir değerini değiştirmek istersek de benzer şekilde indislerden yararlanırız. örneğin 3. değerini 5 yapmak istersek `dizi[3] = 5` şeklinde değer atarız.

Boş bir dizi oluşturmak için ise `int dizi[];` şeklinde tanım yapılabilir.

Not: `int` ifadesi göstermek için kullanılmıştır. Yerine diğer sayı tipleri de gelebilir.

**Karakter dizileri**

Karakter dizileri de benzer şekilde tanımlanır. Sadece küçük bir farkları vardır.

```C++
char dizi[4] = {'a','l','i'};
```
Görüldüğü gibi karakter dizilerinde içerideki eleman sayısından bir fazla sayıda indis belirlenir. Bunun nedeni RAM'in karakter dizisinin bittiğini anlaması için dizi sonuna `\0` diye bir elemanın atılmasıdır. Bu nedenle dizi bir eleman fazla olur. 

Karakter dizilerinin elemanlarını tanımlamak için,

```C++
char dizi[4]="ali";
```
şeklinde daha kolay bir yol da kullanılabilir. 

Karakter dizileri pointer olarak da tanımlanabilir. Bu durumda çift tırnak oromatik olarak dizi sonuna `\0` koyar ve dizinin boyutunu vermek gerekmez.

```C++
char *dizi = "ali";
```

Karakter dizileri string diye de adlandırılır. Stringleri scanf fonksiyonu ile alabilmek için `%s` formatı kullanılır. Böylelikle eleman eleman değil de bütün olarak alınabilirler.

```C
scanf("%s",(char*)&dizi);
```
Karakter dizilerini kullanıcıdan alırken kullanılacak daha iyi bir yöntem de mevcuttur. Bu yöntem `gets()` fonksiyonudur ve 

```C++
gets(dizi);
```
<a name="puts"/>
şeklinde yine karakter dizisini ekrana basmak için daha kolay bir yol olan `puts()`

```C++
puts(dizi);
```
şeklinde kullanılır.

**Standart string fonksiyonları**

String'ler için işlemleri kolaylaştıran fonksiyonlardır.

**`strlen(string)`:** içindeki string'in boyutunu verir.

**`strcpy(string1,string2)`:** string2'yi string1 içine kopyalar.

**`strncpy(string1,string2,#)`:** string2'yi #. elemandan itibaren string2'ye kopyalar.

**`strcat(string1,string2)`:** string1'in ardına string2'yi ekler.

**`strrev(string)`:** string'in harf sırasına göre tersini alır.

**`strcmp(string1,string2)`:** iki string'i karşılaştırır. eğer eşitlerse `0`, string1 alfabetik olarak string2'den büyükse `<0`, string2 alfabetik olarak string1'den büyükse `>0` değeri verir.

**Çok Boyutlu Diziler**

```C
int dizi[#1][#2]. . .;
```

şeklinde tanımlanan dizilerdir (#'lar yerine sayı gelecektir). #1 dizi içinde kaç bölüm olduğunu (matrislerde sutun sayısını), #2 ise her bölümün elemanını (sayır sayısını) belirtir. Ulaşılmak istenen değer için 2 indis kullanılır. Bir örnekle gösterecek olursak,

```C
int dizi[3][2] = {{1,2},{3,4},{5,6}};
```
Şeklinde tanımlanan dizide 5 sayısı `dizi[2][0]` elemanı olur. 

<a name="7"/>

## 7. Dosya İşlemleri
*14. örnek bu bölümle ilgilidir.*

Dosya işlemleri ile ilgili fonksiyonlar `fstream` isimli kütüphaneden gelmektedir.

**Dosya açma ve kapatma**

Dosya açma ve kapama işlemleri bir örnek olarak

```C++
MOD dosya;
dosya.open("PATH/dosya.txt");

if(dosya.is_open(){
...
}

dosya.close();
```

şeklinde gösterilebilir. `MOD` ile tanımlanan kısım alt paragrafta belirtilen dosya açma modlarından biri olmalıdır. Dosya bu `MOD` ile tanımlandıktan sonra `dosya.open()` komutu ile açılır. İçerideki `PATH` kısmı dosyanın bilgisayardaki yolunu belirtmektedir. Eğer program ve dosya aynı klasördeyse kullanılmasına gerek yoktur. `if(dosya.is_open(){}` bir kontrol yapısıdır ve dosyanın açılıp açılmadığını kontrol eder. Dosya ile yapılacak işlemler de bu kontrol yapısı içerisinde yapılır. Kullanılması şart olmasa da programın daha doğru çalışması için kullanmakta fayda vardır. İşlemler bittikten sonra açılan dosya `dosya.close()` komutu ile kapatılır.

`MOD`   
*`fstream`* : okuma ve yazma modu   
*`ifstream`*: okuma modu    
*`ofstream`*: yazma modu    

**Dosya yazma**

`dosya<<"metin"`
veya
`dosya<<değişken`

şeklinde ([cout](#cout)  kullanımı gibi) dosya yazma işlemleri yapılır. Satır sonlandırılmak istenirse sona `<<endl` konulabilir.

**Dosya okuma**

Tüm satırı almak için

```C++
string satir;
getline(dosya,satir);
```
kullanımı yapılır.

```C++
char karakter;
getline(karakter);
```
kullanımı iste karakter karakter okuma yapar. Kontrol yapıları ile nereden nereye okunacağı da ayarlanabilir.

Dosyada kolon kolon veriler alınmak istenirse

```C++
while(!file.eof()){
  dosya>>A>>B>>...
}
```

şeklinde veriler çekilebilir. A, B,... verileri aynı satır, farklı kolonlardaki verileri alır. `while(!file.eof()){}` dosya sonuna gelinmediği sürece döngünün tekrarlanmasını sağlar böylece döngü başına geri gelindiğinde ise ikinci satıra geçilir.

<a name="nyp"/>  

# C++ ile Nesne Yönelimli Programlama

<a name="8"/>

## 8. Temel Kavramlar ve Nesne Yönelimi  

Nesne yönelimli programlama kavramları nesneler üzerinden ele alır. Bunu yaparken yapısal programlamanın özelliklerini de taşır. nesnelerin kendi özellikleri ve metotları vardır.

`sınıf` kavramı ile genel bir tanım yapılır ve o sınıfın üyeleri `nesne`leri oluşturur.

**`sınıf`**

`int main()` dışarısında

```C++
class sınıf{
  public:
  int ozellik1;
  char ozelik2;
  ...
};
```

şeklinde tanımlanır. Özellikleri her veri tipinden olabilir.

Burada kullanılan `public:` ise sınıf özelliklerinin dışarıya açık olup olmadığını belirler. `public:` içerisindeki özelliklere sınıf dışarısından erişilebilirken `private:` içerisindeki özelliklere sınıf dışarısından erişilemez (ancak erişilmek için `public:` içerisinde metotlar tanımlanabilir). Bunların dışında kalan diğer bir durum ise `protected:` durumudur. Bunun içindeki özellikler `main()` içerisine gizliyken alt sınıflara açık haldedirler ([10. Kalıtım (Inheritance)](#10) bölümünde açıklanacaktır)

**`nesne`**

Bir sınıfın nesneleri `int main()` içerisinde tanımlanır ve tanımlanan nesneslerin özellikleri belirlenebilir.

```C++
int main(){
  sınıf nesne;
  nesne.ozellik1 = ##;
  ...
}
```

**`metot`**

Sınıf içerisinde kullanılan fonksiyon olarak düşünülebilir. Sınıfın özelliklerini kullanarak işlem yapan fonksiyonlardır.

```C++
class sınıf{
  public:
  int metot(){
    ...
  }
  ...
};
```
Şeklinde tanımlanır.

<a name="9"/>

## 9. Kapsülleme (Encapsulation) 

`sınıf` içerisindeki özelliklerin gizli olması durumudur. Bu gizli özellikler de `Set` ve `Get` metotları ile anlam kazanır.

Örnek:

```C++
class sınıf{
  public:
  int sayiSet(int x){
   sayi = x; 
  }
  
  int sayiGet(){
   return sayi; 
  }
  
  private:
  int sayi;
};
```
şeklinde bir sınıf tanımlandığında `sayi` bilgisi `privare` olarak oluşturulur. Bu nedenle `int main()` içerisinde `sayi`'ya direk değer atanamaz. Onun yerine bir Set metotu tanımlanır. Böylece `sayiSet(#)` denildiğinde `#` değeri `sayi`'ya atanır. Aynı şekilde `sayi`'nin değeri direk olarak okunamayacağından bir Get metotu yazılarak `sayiGet()` komutu ile `sayi`'nın değeri okunabilir.

<a name="10"/>

## 10. Kalıtım (Inheritance) 

Bir sınıfın alt sınıflarının oluşması ve ana sınıfın özelliklerini de taşıması durumudur.

Örnek:

```C++
class insan{
  public:
  int boy:
  int kilo
  ...
 
  private:
  int yas;
  ...
};

class calisan : public insan{
  public:
  char departman;
  ...
  
  private:
  int maas;
  ...
};
```

program parçasına baktığımızda insan isimli bir sınıv ve bu sınıfın calisan isimli bir alt sınıfı olduğunu görüyoruz. calisan sınıfı hem insan sınıfının özelliklerini hem de kendi özelliklerini taşımaktadır. Ancak calisan sınıfı insan sınıfına `public` olarak bağlı olduğundan `private` bilgiye direk erişemez. bu bilgiye erişim sağlanabilmesi için insan sınıfı içerisinde `private` bölümünün `protected` şeklinde değişmesi gerekir.

```C++
class insan{
  public:
  int boy:
  int kilo
  ...
 
  protected:
  int yas;
  ...
};

class calisan : public insan{
  public:
  char departman;
  ...
  
  private:
  int maas;
  ...
};
```
Böylelikle calisan sınıfı yas bilgisine erişebilir. Ancak bu bilgi `int main()` için hala gizlidir.

<a name="11"/>

## 11. Overloading

Halihazırda bulunan metotların farklı anlamlar yüklenerek yeniden oluşturulmasıdır.

Örnek:


```C++
class insan{
  public:
  int boy;
  int kilo;
  void set(int a){
    boy = a;
  }
  void set(int a, int b){
    boy = a;
    kilo = b;
  }
};
```
Görüldüğü gibi `set` fonksiyonu iki kere ve farklı bir şekilde tanımlanmıştır. İçerisine tek parametre geldiğinde sadece boyu, iki parametre geldiğinde hem boyu hem de kiloyu belirleyecektir.

**Operator overloading**




<a name="12"/>

## 12. İleri NYP

<a name="13"/>

## 13. Hata Yakalama




____________
