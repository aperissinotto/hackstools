#include <stdio.h>
#include <string.h>

unsigned long hashcode = 0x21DD09EC;

unsigned long check_password(const char* p) {
    int* ip = (int*)p;
    int i;
    int res=0;

    for (i=0 ; i<5 ; i++) {
       res += ip[i];
    }

    return res;
}

int main(int argc, char* argv[]) {
    char teste[21];
    int i[20];

    for (i[0]=0 ; i[0]<=255 ; i[0]++) {
       for (i[1]=0 ; i[1]<=255 ; i[1]++) {
          for (i[2]=0 ; i[2]<=255 ; i[2]++) {
             for (i[3]=0 ; i[3]<=255 ; i[3]++) {
                for (i[4]=0 ; i[4]<=255 ; i[4]++) {
                   for (i[5]=0 ; i[5]<=255 ; i[5]++) {
                      for (i[6]=0 ; i[6]<=255 ; i[6]++) {
                         for (i[7]=0 ; i[7]<=255 ; i[7]++) {
                            for (i[8]=0 ; i[8]<=255 ; i[8]++) {
                               for (i[9]=0 ; i[9]<=255 ; i[9]++) {
                                  for (i[10]=0 ; i[10]<=255 ; i[10]++) {
                                     for (i[11]=0 ; i[11]<=255 ; i[11]++) {
                                        for (i[12]=0 ; i[12]<=255 ; i[12]++) {
                                           for (i[13]=0 ; i[13]<=255 ; i[13]++) {
                                              for (i[14]=0 ; i[14]<=255 ; i[14]++) {
                                                 for (i[15]=0 ; i[15]<=255 ; i[15]++) {
                                                    for (i[16]=0 ; i[16]<=255 ; i[16]++) {
                                                       for (i[17]=0 ; i[17]<=255 ; i[17]++) {
                                                          for (i[18]=0 ; i[18]<=255 ; i[18]++) {
                                                             for (i[19]=0 ; i[19]<=255 ; i[19]++) {
                                                                teste[0] = (char) i[0];
                                                                teste[1] = (char) i[1];
                                                                teste[2] = (char) i[2];
                                                                teste[3] = (char) i[3];
                                                                teste[4] = (char) i[4];
                                                                teste[5] = (char) i[5];
                                                                teste[6] = (char) i[6];
                                                                teste[7] = (char) i[7];
                                                                teste[8] = (char) i[8];
                                                                teste[9] = (char) i[9];
                                                                teste[10] = (char) i[10];
                                                                teste[11] = (char) i[11];
                                                                teste[12] = (char) i[12];
                                                                teste[13] = (char) i[13];
                                                                teste[14] = (char) i[14];
                                                                teste[15] = (char) i[15];
                                                                teste[16] = (char) i[16];
                                                                teste[17] = (char) i[17];
                                                                teste[18] = (char) i[18];
                                                                teste[19] = (char) i[19];
                                                                if (hashcode == check_password(teste)) {
                                                                  printf("Find - %s\n",teste);
                                                                }
                                                             }
                                                          }
                                                       }
                                                    }
                                                 }
                                              }
                                           }
                                        }
                                     }
                                  }
                               }
                            }
                         }
                      }
                   }
                }
             }
          }
       }
    }
}
                                                    
