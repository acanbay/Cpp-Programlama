#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

float determinant(float a[25][25], float k)
{
  	float s = 1, det = 0, b[25][25];
  	int i, j, m, n, c;
  	if (k == 1)
    {
     	return (a[0][0]);
    }
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

void transpoz(float num[25][25], float fak[25][25], float r)
{
  	int i, j;
  	float b[25][25], inverse[25][25], d;

  	for (i = 0;i < r; i++)
    {
    	for (j = 0;j < r; j++)
   		{
       		b[i][j] = fak[j][i];
       	}
   	}
   
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
void kofaktor(float num[25][25], float f)
{
 	float b[25][25], fak[25][25];
 	int p, q, m, n, i, j;
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
 	cout<<k<<"x"<<k<<" Matrisinizin elemanlarini giriniz :"<<endl;
	for (i = 0;i < k; i++)
   	{
    	for (j = 0;j < k; j++)
       	{
       		cout<<i+1<<". satir "<<j+1<<". sutun elemani: ";
        	cin>>a[i][j];
        }
    }
  	d = determinant(a, k);
  	if (d == 0) cout<<"\nBu matrisin tersi alinamaz!\a\n"<<endl;
  	else kofaktor(a, k);
}
 

