#include "../class.h"

void proses(){
    for(int i = 0; i<n; i++){
      for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){
          km[k][l] = kmr[i];
          i++;
        }
      }
    }
    cout<<"\nSetelah di konversi ke 2d: "<<endl;
    for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){
          cout<<km[k][l].Jenis   <<"    ";
          cout<<km[k][l].Judul   <<"    ";
          cout<<km[k][l].Penulis <<"    ";
          cout<<endl;
        }
      }
  }