#include <stdio.h> 

int toplama(int n)
{
    if (n == 0) {
        return 0;
    }
    int recursiveToplama = n + toplama(n - 1);
    return recursiveToplama;
}

void menu() {
    printf("\n");
    printf("***********************************************************\n");
    printf("* Merhaba! N'den 1'e sayilari toplayan program            *\n");
    printf("* Lutfen yapmak istedigin islemi sec                      *\n");
    printf("***********************************************************\n");
    printf("*                  1. Yeni sayi girisi                    *\n");
    printf("*                  2. Cikis                               *\n");
    printf("***********************************************************\n");
    printf("Secimin nedir: ");
}

int main()
{
    int secim;
    int n;

    while (1) {
        menu();
        scanf_s("%d", &secim);

        if (secim == 1) {
            printf("Dogal sayiyi giriniz: ");
            scanf_s("%d", &n);
            int toplam = toplama(n);
            printf("ilk %d dogal sayiyinin toplami: %d\n", n, toplam);
        }
        else if (secim == 2) {
            printf("Programdan cikiliyor...\n");
            break;
        }
        else {
            printf("Gecersiz secim, lutfen tekrar deneyin.\n");
        }
    }

    return 0;
}
