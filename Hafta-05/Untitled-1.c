 #include <stdio.h>
    void main()
    {
 
        int i, j, a, n, sayi[100];
        printf(" N sayi girin lütfen \n");
        scanf("%d", &n);
 
        printf(" N dizi elemanlari atabilirsiniz \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &sayi[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (sayi[i] < sayi[j]) 
                {
 
                    a =  sayi[i];
                    sayi[i] = sayi[j];
                    sayi[j] = a;
 
                }
 
            }
 
        }
 
        printf(" Büyükten küçüğe dögru siralama \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", sayi[i]);
 
    }