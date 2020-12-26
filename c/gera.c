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

    for (i[0]=0 ; i[0]<=127 ; i[0]++) {
       for (i[1]=0 ; i[1]<=127 ; i[1]++) {
          for (i[2]=0 ; i[2]<=127 ; i[2]++) {
             for (i[3]=0 ; i[3]<=127 ; i[3]++) {
                for (i[4]=0 ; i[4]<=127 ; i[4]++) {
                   for (i[5]=0 ; i[5]<=127 ; i[5]++) {
                      for (i[6]=0 ; i[6]<=127 ; i[6]++) {
                         for (i[7]=0 ; i[7]<=127 ; i[7]++) {
                            for (i[8]=0 ; i[8]<=127 ; i[8]++) {
                               for (i[9]=0 ; i[9]<=127 ; i[9]++) {
                                  for (i[10]=0 ; i[10]<=127 ; i[10]++) {
                                     for (i[11]=0 ; i[11]<=127 ; i[11]++) {
                                        for (i[12]=0 ; i[12]<=127 ; i[12]++) {
                                           for (i[13]=0 ; i[13]<=127 ; i[13]++) {
                                              for (i[14]=0 ; i[14]<=127 ; i[14]++) {
                                                 for (i[15]=0 ; i[15]<=127 ; i[15]++) {
                                                    for (i[16]=0 ; i[16]<=127 ; i[16]++) {
                                                       for (i[17]=0 ; i[17]<=127 ; i[17]++) {
                                                          for (i[18]=0 ; i[18]<=127 ; i[18]++) {
                                                             for (i[19]=0 ; i[19]<=127 ; i[19]++) {
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
                                                                  printf("Find!!!\n");
                                                                  for (int j=0 ; j<20 ; j++) {
                                                                     printf(" %02x", teste[j]);
                                                                  }
                                                                  printf("\n");
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
                                               
