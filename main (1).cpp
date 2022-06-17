#include <iostream>
using namespace std;

struct Kamar{     // tipe data
  string Jenis ;  // fungsi
  string Judul ;
  string Penulis; 
};

class data{           // tipe data 
  private :
    Kamar kmr[15];		 // deklarasi array 1 dimensi (input)
    Kamar km[15][15];	// deklarasi array 2 dimensi (output)

    int n, k, l; // deklarasi  jumlah data yang ingin kita masukkan , 

  public :
    void inputoutput(){
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\t\t\t                STUDI KASUS 9                      "<<endl;
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\nMasukkan jumlah data : "; cin>>n;	 // input jml data
      for(int i = 0; i < n; i++){					        // dimasukkan ke perulangan 
        cout<<"\nMasukkan Jenis Buku : ";         // input jenis buku
        cin>>kmr[i].Jenis;
        cout<<"\nMasukkan Judul      : ";        // input judul buku
	    cin>>kmr[i].Judul;
        cout<<"\nMasukkan Penulis    : "; cin>>kmr[i].Penulis;
      };
      cout<<"\nSebelum di konversi : "<<endl;
      cout<<endl;
      for (int i=0;i<n;i++){
        cout<<kmr[i].Jenis<<"   "<<kmr[i].Judul<<"   "<<kmr[i].Penulis<<"  ";    // deklarasi array dimensi 1
      } 
       cout<<" "<<endl;
    }
  void proses(){                    // kondisi dimana arrray 1d diubah menjadi array 2d
    for(int i = 0; i<n; i++){
      for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){
          km[k][l] = kmr[i];  
          i++;
        }
      }
    }
    cout<<"\nSetelah di konversi : "<<endl;       // hasil setelah dikonversi menjadi array 2d
    cout<<endl;
    for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){            
          cout<<km[k][l].Jenis   <<"    ";
          cout<<km[k][l].Judul   <<"    ";
          cout<<km[k][l].Penulis <<"    ";
          cout<<endl; 
        }
      }
  }
};

// fungsi untuk memanggil perintah data 
int main() {
  data i;
  i.inputoutput();
  i.proses();

  return 0;
  }
