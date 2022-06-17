#include "../class.h"
public :
    void inputoutput(){
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\t\t\t                STUDI KASUS 9                      "<<endl;
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\nMasukkan jumlah data : "; cin>>n;	 // input jml data 
      for(int i = 0; i < n; i++){					        // dimasukkan ke perulangan 
        cout<<"\nMasukkan Jenis Buku : ";     
        cin>>kmr[i].Jenis;
        cout<<"\nMasukkan Judul      : ";
	    cin>>kmr[i].Judul;
        cout<<"\nMasukkan Penulis    : "; cin>>kmr[i].Penulis;
      };
      cout<<"\nSebelum di konversi : "<<endl;
      for (int i=0;i<n;i++){
        cout<<kmr[i].Jenis<<"   "<<kmr[i].Judul<<"   "<<kmr[i].Penulis<<"  ";
      } 
       cout<<" "<<endl;
    }