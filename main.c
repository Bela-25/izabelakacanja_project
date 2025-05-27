#include <stdio.h>
#include <stdlib.h>

char Bigletter(){
        char pass;
        pass=65+(rand()%26);
        return pass;
}

char Smallletter(){
        char pass;
        pass=97+(rand()%26);
        return pass;
    }

char Number(){
        char pass;
        pass=48+(rand()%10);
        return pass;
}

int main()
{
    srand(time(0));

    int nr,i,j;
    char pass[9];
    printf ("Enter number of passwords");
    scanf("%d",&nr);
    for (j=0;j<nr;j++){
        for (i=0;i<8;i++){
        if (i<3)
            pass[i]=Bigletter(pass);
        else if (i<6)
            pass[i]=Smallletter(pass);
        else
            pass[i]=Number(pass);
        }
        printf ("%s\n",pass);
        }

    return 0;
}
