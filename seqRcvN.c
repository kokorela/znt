
/* program to count base sequence length in fasta files */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int, char *[]);

FILE *fInputp;

main (int argc, char *argv[])
{

        int hstrLen;
        long int n;
        char base, contig[500];

        n = 0;
        hstrLen = 0; 

        fInputp = fopen(argv[1],"r");
                if (fInputp == NULL)
                {
                printf("Infile argv[1] test command failed.\n");
                exit(0);
                }

        if(argc != 2)
                {
                printf("argc = %d; remember to specify chr(no) to be searched\n");
                exit(0);
                }

        do
                {
                if (base == '>')
                        {
                        fscanf(fInputp," %400[^\n]\n",contig);
                        hstrLen = strlen(contig);
                        if(hstrLen >= 400)
                                {
                                printf("\nhstrLen %d\n",hstrLen);
                                printf("header array length exceeded; contig base count may be inaccurate\n");
                                printf("%s\n",contig);
                                exit(0);
                                }
                        }

                base = toupper(getc(fInputp));
                if (base == 'A' || base == 'G' || base == 'C' || base == 'T' || base == 'N')
                        {
                        n++;
                        }
                }while(!feof(fInputp));

        if (feof(fInputp))
                {
                printf("%ld\n",n);
                }

        fclose(fInputp);

        return 0;
}
