/*
NxN matrisin tersi alinirken oncelikle determinanti bulunmalidir. Cunku bir matrisin tersinin olmasi icin determinantinin sifirdan
farkli olmasi gerekir.
Cok boyutlu matrislerde determinant bulunurken minor matrislerden yararlanilir. Minor matris ilgili matris elemaninin bulundugu
satir ve sutunun kapatilmasi durumunda geriye kalan matristir. Bu minor matrisin determinanti ilgili elemanin kofaktorudur.

Matris determinanti bulunurken:
* elemanlar kendi kofaktoru ile carpilir,
* sonuc bulundugu satir ve sutunun numaralarinin toplaminin tek veya cift olmasina gore (tekse + ciftse -) isaretlenir,
* tum elemanlar icin bu islemler tekrarlanip hepsinin sonucu toplanir.

Buyuk matrisler icin bu yontem ic ice tekrarlanir, yani her minor matrisind eterminanti icin kendi minor matrislerine de bakilacaktir.

Bir matrisin tersi alinirken:
* her elemanin kendisine ait kofaktorlerden bir matris olustururlur,
* bu matrisin transpozu alinir,
* elde edilen matrisin her bir elemani determinanta bolunur.

Bu islemlerin sonucunda elde edilen matris, ilk matrisin tersi olur.

ALGORITMA:

Oncelikle ilgili fonksiyonlar yazilir.

A. Determinant fonksiyonu: bir matris ve matrisin boyut bilgisi ile cagrilir
1. Matrisin boyutu 1 ise determinanti kendisine esittir degilse 2. asamaya gecilir.
2. Bu asamada matrisin determinanti hesaplanir
   Bunu minor matrislerin determinantlarini toplayarak yapar.

B. Transpoz fonksiyonu: iki matris ve matrislerin boyut bilgisi ile cagrilir.
1. Verilen matrisin satir ve sutunlarinin yerini degistirir (m[i][j]->m[j][i]) alir.

Burada transpoz alma islemi tamamlanir. Daha sonraki kisim matris tersi islemine gore eklenmistir.

2. Transpozunu aldigi matrisin elemanlarini kullanicidan alinan matrisin determinanti ile carpar.
Bu yapilirken kullanicidan alinan amtris ve boyutu ile determinant fonksiyonu cagirilir.
3. Son durumda elde edilen matrisi yazdirir (basta verilen matrisin tersi).
	
C. Kofaktor fonksiyonu: bir matris ve o matrisin boyut bilgisi ile cagirilir.
1. Girdi olarak alinan amtrisin herbir eleman kendi minor determinantlarinin toplami olur. Boylelikle ters alma islemine gecilebilir
   Bu yapilirken her elemanin minor matrisleri icin determinant fonksiyonu cagirilir.
   Determinant fonksiyonu cagirilirken ilk girdi minor matris, ikincisi ile minor matrisin boyutu olur.
.
2. Islem bittikten sonra sirasiyla ilk matris, elde edilen matris ve matrisin boyutu transpoz fonksiyonuna gonderilir.

Sonrasinda main fonksiyonu yazilir.

1. Kullanicidan matrisinin boyutu istenir.
2. Matris elemanlari kullanicidan alinir.
3. Alinan matris ve matris boyutu ile determinant fonksiyonu cagirilarak matrisin determinanti bulunur.
4. Eger matris determinanti sifir ise matrisin determinantinin alinamayacagi bastirilir.
5. matris determinanti sifirdan farkli ise matris ve matrisin boyutu ile kofaktor fonksiyonu cagirilir.
*/
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
//A
float determinant(float a[25][25], float k)
{
  	float s = 1, det = 0, b[25][25];
  	int i, j, m, n, c;
//1
  	if (k == 1)
    {
     	return (a[0][0]);
    }
//2
  	else
    {
     	det = 0;
     	for (c = 0; c < k; c++)
       	{
        	m = 0;
        	n = 0;
        	for (i = 0;i < k; i++)
          	{
            	for (j = 0 ;j < k; j++)
              	{
                	b[i][j] = 0;
                	if (i != 0 && j != c)
                 	{
                   		b[m][n] = a[i][j];
                   		if (n < (k - 2)) n++;
                   	else
                    {
                     	n = 0;
                     	m++;
                    }
                   	}
               	}
            }
          	det = det + s * (a[0][c] * determinant(b, k - 1));
          	s = -1 * s;
        }
    }
    return (det);
}
//B
void transpoz(float num[25][25], float fak[25][25], float r)
{
  	int i, j;
  	float b[25][25], inverse[25][25], d;
//1
  	for (i = 0;i < r; i++)
    {
    	for (j = 0;j < r; j++)
   		{
       		b[i][j] = fak[j][i];
       	}
   	}
//2
  	d = determinant(num, r);
  	cout<<endl;
  	cout<<endl;
  	cout<<"Matrisin determinanti: "<<d<<endl;
  	for (i = 0;i < r; i++)
   	{
   		for (j = 0;j < r; j++)
   		{
      		inverse[i][j] = b[i][j] / d;
       	}
   	}
//3
	cout<<endl;
   	cout<<"Matrisinizin Tersi : "<<endl;
   	cout<<endl;
 
   for (i = 0;i < r; i++)
   	{
     	for (j = 0;j < r; j++)
       	{
       		if (inverse[i][j]==0){
       			inverse[i][j]=abs(inverse[i][j]);
			   }
         	cout<<"\t"<<std::setprecision(2)<<inverse[i][j];
        }
    	cout<<"\n";
    }
}

//C
void kofaktor(float num[25][25], float f)
{
 	float b[25][25], fak[25][25];
 	int p, q, m, n, i, j;
//1
 	for (q = 0;q < f; q++)
 	{
   		for (p = 0;p < f; p++)
    	{
    		m = 0;
     		n = 0;
     		for (i = 0;i < f; i++)
     		{
       			for (j = 0;j < f; j++)
       			{
          			if (i != q && j != p)
          			{
            			b[m][n] = num[i][j];
            			if (n < (f - 2)) n++;
            		else
             		{
               			n = 0;
               			m++;
               		}
           			}
        		}
      		}
      		fak[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    	}
  	}
//2
 	transpoz(num, fak, f);
}

int main()
{
  	float a[25][25], k, d;
 	int i, j;
 //1
 	cout<<"Matrisin boyutunu giriniz: "<<endl;
 	cin>>k;
 	cout<<endl;
//2
 	cout<<k<<"x"<<k<<" Matrisinizin elemanlarini giriniz :"<<endl;
	for (i = 0;i < k; i++)
   	{
    	for (j = 0;j < k; j++)
       	{
       		cout<<i+1<<". satir "<<j+1<<". sutun elemani: ";
        	cin>>a[i][j];
        }
    }
//3
  	d = determinant(a, k);
//4
  	if (d == 0) cout<<"\nBu matrisin tersi alinamaz!\a\n"<<endl;
//5
  	else kofaktor(a, k);
}
 

