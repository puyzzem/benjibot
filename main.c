// bit artık korona..


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <setjmp.h>
#include <locale.h>


jmp_buf resume_here;


void asciilogo(char logo [30]){
    FILE *dosya;
       int c;
       dosya=fopen(logo,"r");
       c = fgetc(dosya);
       while (c!=EOF)
       {
           printf("%c",c);
           c = fgetc(dosya);
    }
    
    fclose(dosya);
    
    
}



void ucnokta(saniye){
    
    
    
    for (int i=0; i<3; i++) {
        usleep(saniye*10000);
        printf(".");
    }
    
    
}

void eodeme() {
    
    double telefonkod;
    double kartnum;
    char skt [20];
    int cvv;
    
    
    
    
    
    
    printf("\n\nGaranti BBVA Sanal Pos'a hoşgeldiniz! Lütfen banka/kredi kartı numaranızı boşluk bırakmadan giriniz.\n\n");
    
    scanf("%lf",&kartnum);
    
    printf("\n\nLütfen kartınızın son kullanma tarihini xx/xxxx formatında giriniz.\n\n");
    getchar();
    
    fgets(skt, sizeof(skt), stdin);
    
    printf("\n\nLütfen kartınızın güvenlik kodunu giriniz.\n\n");
    
    scanf("%d",&cvv);
    
    
    printf("\n\n");
    
    ucnokta(75);
    ucnokta(75);
    ucnokta(75);
    ucnokta(75);
    
    printf("\n\nLütfen bankamızda kayıtlı cep telefonunuza gönderilen kodu girin.\n\n");
    scanf("%lf",&telefonkod);
    
    printf("\n\nLütfen bekleyin.");
    
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    ucnokta(30);
    
    usleep(2000000);
    printf("\n\nÖdemeniz onaylandı! Lütfen bekleyin, sizi İBB e-Portal'a aktarıyorum.\n\n");
    
    ucnokta(75);
    ucnokta(75);
    
    usleep(1750000);
    
    
    
    
    
    
}


int baskakonu(){
   
    setlocale(LC_ALL, "Turkish");
    
    char baska;
    
    
    scanf("%s",&baska);
    
    if (baska == 'e' || baska == 'E') {
        printf("\n\nLütfen bekleyin. Sizi ana menüye aktarıyorum.\n\n");
        
        for (int i=0; i<3; i++) {
            usleep(750000);
            printf(".");
        }
        for (int i=0; i<3; i++) {
            usleep(750000);
            printf(".");
        }
        
        usleep(1750000);
        
        longjmp(resume_here, 1);
        
    }
    
    else if (baska == 'h' || baska == 'H') {
        
        
        printf("\n\nİBB e-Portal'ı tercih ettiğiniz için teşekkürler! İyi günler dileriz!\n\n");
        
        
        exit(0);
        
        
        
        
    }
    
    
    else {
        printf("\n\nHatalı bir seçim yaptınız. Lütfen tekrar deneyin.\nSizin için yapabileceğim başka bir işlem var mı? (E/H)\n\n");
        
        return baskakonu();
        
    }

  
    return 1;

}

    
 

int anketfonks(){
    
    setlocale(LC_ALL, "Turkish");
    
    char anket;
    int anketsoru;
    
    
    
    scanf("%s",&anket);
    
    if (anket == 'e' ||  anket == 'E') {
        
        printf("\n\nSizi anket sayfasına aktarıyorum. Lütfen bekleyin.\n\n");
        
        ucnokta(75);
        ucnokta(75);
        usleep(1750000);
        
        printf("\n\nİBB e-Portal'ı bir tanıdığınıza tavsiye etme ihtimaliniz nedir? 1-10\n\n");
        
        scanf("%d",&anketsoru);
        
        printf("\n");
        
        ucnokta(75);
        
        usleep(500000);
        
        printf("\n\nİBB e-Portal'ın tasarımını nasıl buldunuz? 1-10\n\n");
        
        scanf("%d",&anketsoru);
        
        printf("\n");
        
        ucnokta(75);
        
        usleep(500000);
        
        printf("\n\nİBB e-Portal'ı gelecekte tercih edecek misiniz? 1-10\n\n");
        
        scanf("%d",&anketsoru);
        
        printf("\n");
        
        ucnokta(75);
        ucnokta(75);
        
        usleep(8900000);
        
        printf("\n\nAnketimize katıldığınız için teşekkürler! İBB e-Portal'ı sizin için daha kullanışlı hale getirmek için her gün çalışıyoruz. Size yardımcı olabileceğim başka bir konu var mı? (E/H)\n\n");
        
     
        return baskakonu();
        
    }
    else if (anket == 'h' || anket == 'H'){
        
        printf("\n\nTeşekkürler. Size yardımcı olabileceğim başka bir konu var mı? (E/H)\n\n");
        
        return baskakonu();
    
        
    }

    else {
        
        printf("\nHatalı bir seçim yaptınız. İBB e-Portal'ı sizin içib daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
        
        return anketfonks();
        
    }
    
    
    
    
    
    
    return 2;
    
}


    




void rastgele(int alt, int ust) { setlocale(LC_ALL, "Turkish");
   int i;
   for (i = 0; i < 1; i++) {
      int rand_num = (rand() % (ust - alt + 1)) + alt;
      printf("\nTeşekkürler! Size özel işlem kodunuz: %d. Az sonra temsilcimiz tarafından aranacaksınız. Temsilcimize işlem kodunuzu söylemeniz işleminize devam edebilmeniz için yeterli olacaktır. ", rand_num);
   }
}





//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

//----------//----------//----------//----------//----------//----------//----------MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN MAIN----------//----------//----------//----------//----------//----------//----------//----------//----------

int main(){
    
    
    
    setlocale(LC_ALL, "Turkish");
    

    char ibblogo [20] = "ibblogo.txt";
    char iskilogo [20] = "iskilogo.txt";
    char igdaslogo [20] = "igdaslogo.txt";
    char bedaslogo [20] = "bedaslogo.txt";
    char iettlogo [20] = "iettlogo.txt";
    char ibbvetlogo [20] = "ibbvetlogo.txt";

        
        
    
    
    
    
        
    
    
    
    char isim_soyisim[50];
    
    int secim;

    char ozet[150];

    char cevap;
    


    
    double bosdeger;
    
    char chatsorun;
    
    
       srand( (unsigned int) time(NULL) );
   
    
    
    

    
    printf("İstanbul Büyükşehir Belediyesi Beyaz Masa e-Portal'a hoşgeldiniz! Ben sanal asistanınız Benji! Hitap etmek açısından isminizi ve soyisminizi öğrenebilir miyim?\n\n");

   
    
    fgets(isim_soyisim, sizeof(isim_soyisim), stdin);
    
    char *p = strchr(isim_soyisim, '\n');
    
    if (p) *p =0;
    
    printf("\n\nSayın %s, sizi ana menüye aktarıyorum.\n\n",isim_soyisim);

    char var[strlen(isim_soyisim)+1];
    
    ucnokta(75);
    ucnokta(75);
    usleep(1750000);
    
anamenu:
    
    
    
    setjmp(resume_here);
    
    
    asciilogo(ibblogo);

    
    
    printf("\n\nLütfen işlem yapmak istediğiniz kurumun numarasını girin.\n\n\n1: İstanbul Su ve Kanalizasyon İşleri (İSKİ)\n2: İstanbul Gaz Dağıtım Anonim Şirketi (İGDAŞ)\n3: Boğaziçi Elektrik Dağıtım Anonim Şirketi (BEDAŞ)\n4: İstanbul Elektrik Tramvay ve Tünel İşletmeleri (İETT)\n5: Veterinerlik Hizmetleri\n6: Canlı Destek\n7: Sonraki Sayfa\n8: Geliştiriciler\n9: Çıkış\n\n");
       
    
    scanf("%d",&secim);
    

    
    printf("\n\nLütfen bekleyin. Aktarımınızı gerçekleştiriyorum");
           
           ucnokta(75);
           ucnokta(75);
           usleep(1650000);
    
 //-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//---- Switch ----//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//-//
    
    switch (secim) {
           
            char ilce [26], mahalle [26];
            double tarihay;
            double tarihgun;
            
            double telefon;
          
            int iskisecim;
            int igdassecim;
            int bedassecim;
            
            
            
        case 1:
            
           
                   
                   
            
            
            
        iski:
            
            
            
            printf("\n\n\n\n\n");
            
        
            asciilogo(iskilogo);
            
            printf("\n\n\n");

            
            
            printf("\n\nTemiz ve sağlıklı suyun güvencesi İSKİ'ye hoşgeldiniz! Lütfen yapmak istediğiniz işlemi seçiniz.\n\n1: Su kesintisi öğrenmek veya bildirmek istiyorum.\n2: Borç durumumu öğrenmek istiyorum.\n3: Aboneliğimle ilgili işlem yapmak veya yeni abonelik başlatmak istiyorum.\n4: Müşteri temsilciniz tarafından aranmak istiyorum.\n5: İstek, öneri veya şikayette bulunmak istiyorum.\n6: Ana menüye dönmek istiyorum.\n\n");
            
            scanf("%d",&iskisecim);
            
            switch (iskisecim) {
               
                    
                    
                    
                    
                    
                case 1:
                    
                    printf("\n\nLütfen su kesintisi sorgulaması yapmak veya bildirmek istediğiniz ilçeyi giriniz.\n\n");

                    scanf("%s",ilce);
                    
                    printf("\n\n%s ilçesinin hangi mahallesi için sorgulama/bildirme yapmak istiyorsunuz?\n\n",ilce);
                    
                    scanf("%s",mahalle);
                    
                    printf("\n\n%s ilçesinin %s mahallesi için herhangi bir kesinti bilgisine ulaşamadım. Su kesintisi yaşıyorsanız 1'e, ana menüye dönmek istiyorsanız 2'ye basın.\n\n" ,ilce,mahalle);
                    
                    scanf("%d",&secim);
                    
                               switch (secim) {
                                   case 1:
                                       
                                       printf("\n\nBildiriminizi oluşturuyorum");
                                       
                                       ucnokta(75);
                                       ucnokta(75);
                                       
                                       usleep(2250000);
                                       
                                       printf("\n\nKesinti bildiriminizi ilgili birimlere ilettim. İlginiz için teşekkürler! İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                       
                                       return anketfonks();
                                       
                            break;
                            
                                    case 2:
                            
                                       goto iski;
                            
                            break;
                    }
                    
                    double abonenum;
                    int odemesecim;
                case 2:
                    
                    printf("\n\nLütfen abone numaranızı giriniz.\n\n");
                    
                
                    
                    scanf("%lf",&abonenum);
                    
                    int i;
                    int alt = 49;
                    int ust = 298;
                    for (i = 0; i < 1; i++) {
                        int rand_num;
                        rand_num = (rand() % (ust - alt + 1)) + alt;
                    
                    
                    iskiodeme:
                    
                        printf("\n\n%.lf abonelik numarası için yaptığım sorgulamada %d₺'lik ödenmeyi bekleyen borç olduğu bilgisine ulaştım. Ödemek istiyorsanız 1'i, sonra ödeyecekseniz 2'yi tuşlayınız.\n\n",abonenum,rand_num);
                        
                        scanf("%d",&odemesecim);
                        
                        switch (odemesecim) {
                            case 1:
                                
                                printf("\n\nSizi e-Ödeme sayfasına aktarıyorum. Lütfen bekleyin.\n\n");
                                
                                ucnokta(75);
                                ucnokta(75);
                                usleep(1500000);
                                
                                eodeme();
                                
                                printf("\n\nFatura ödeme işleminiz tamamlandı! İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                
                                anketfonks();
                                
                                
                            case 2:
                                
                                printf("\n\n%d₺'lik borcunuzu sonra ödeyeceğinizi belirttiğiniz için teşekkürler. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n",rand_num);
                                
                                anketfonks();
                                
                                
                                break;
                        }
                    
                        if (odemesecim != 1 || odemesecim != 2) {
                            printf("\n\nHatalı bir seçim yaptınız. Lütfen tekrar deneyiniz.");
                        
                            goto iskiodeme;
                        
                        }
                    
    
                    
            }
            
            
                case 3:
                    
                iskinumara:
                    
                    printf("\n\nLütfen abone numaranızı giriniz. Abonemiz değilseniz lütfen 1'i tuşlayınız.\n\n");
                    
                    scanf("%lf",&bosdeger);
                    
                    printf("\n\nLütfen telefon numaranızı başında '0' olmadan giriniz.\n\n");
                    
                    scanf("%lf",&telefon);
                    
                    printf("\nTelefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                    
                iskicevap:
                    
                    scanf("%s",&cevap);
                    
                    if (cevap == 'e' || cevap == 'E') {
                       
                     
                        
                        rastgele(1000, 9999);
                        printf("İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                        
                        anketfonks();
                        
                    }
            
                    else if (cevap == 'H' || cevap == 'h'){
                    
                        goto iskinumara;
                        
                    }
           
                    else{
                        
                        printf("\n\nHatalı bir seçim yaptınız. Telefon numaranız %.lf\nDoğru mu? (E/H)\n\n",telefon);
                        
                        goto iskicevap;
                        
                        
                        
                        
                    }
            
                case 4:
                    
                    printf("\n\nİSKİ temsilcileri her an desteğe hazır! Lütfen temsilcilerimiz tarafından aranmak istediğiniz telefon numarasını başında '0' olmadan giriniz.\n\n");
                    
                    scanf("%lf",&telefon);
                    
                    printf("\nTelefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                    
                    scanf("%s",&cevap);
                    
                    if (cevap == 'e' || cevap == 'E') {
                       
                    aranmatarihi:
                        
                        printf("\n\nLütfen aranmak istediğiniz günü girin. (1-31)\n\n");
                        
                        scanf("%lf",&tarihgun);
                        
                        printf("\n\nLütfen aranmak istediğiniz ayı girin. (1-12)\n\n");
                        
                        scanf("%lf",&tarihay);
                    
                        printf("\n\nAranmak istediğiniz tarih %.lf.%.lf.2021.\nDoğru mu?\n\n",tarihgun,tarihay);
                        
                    tarihdogrulama:
                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            
                            
                            printf("Belirttiğiniz tarihte İSKİ temsilcilerimiz tarafından aranacaksınız. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                            
                            anketfonks();
                            
                        }
                        
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            goto aranmatarihi;
                            
                            
                        }
                        
                        else{
                            
                            printf("\n\nHatalı bir seçim yaptınız. Aranmak istediğiniz tarih %.lf.%.lf.2021.\nDoğru mu? (E/H)\n\n",tarihgun,tarihay);
                            
                            goto tarihdogrulama;
                            
                            
                        }
                        
                    }
            
                case 5:
                    
                    printf("\n\nLütfen bekleyin. İşleminize devam edebilmeniz açısından sizi canlı desteğe aktarıyorum.\n\n");
                                        
                                        ucnokta(65);
                                        ucnokta(65);
                                        usleep(1200000);
                    
                    goto canlidestek;
                    
                    break;
                    
                case 6:
                    
                    printf("\n\nLütfen bekleyin. Sizi ana menüye yönlendiriyorum.\n\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    goto anamenu;
            }
         
         
            
               
            
    
    
    
        case 2:
            
        igdas:
           
            
            printf("\n\n\n\n\n");
            
            asciilogo(igdaslogo);
            
            
            printf("\n\n\n");

            
            
            
            printf("\n\nİGDAŞ'a hoşgeldiniz! Lütfen yapmak istediğiniz işlemi seçiniz.\n\n1: Gaz kesintisi bildirimi yapmak istiyorum.\n2: Ödenmemiş fatura sorgulamak istiyorum.\n3: Gaz kaçağı bildirimi yapmak istiyorum.\n4: Müşteri temsilciniz tarafından aranmak istiyorum.\n5: İstek, öneri veya şikayette bulunmak istiyorum.\n6: Ana menüye dönmek istiyorum.\n\n");
            
            scanf("%d",&igdassecim);
            
            switch (igdassecim) {
                    
                    
                    double sayacnum;
                    int odemesecim;
                    
                    
                case 1:
                    
                sayacnumara:
                    
                    printf("\n\nLütfen gaz kesintisi bildirimi oluşturmak istediğiniz dairenin sayaç numarasını giriniz.\n\n");
                    
                    scanf("%lf",&sayacnum);
                    
                sayacdogrulama:
                    
                    printf("\n\nSayaç numaranız: %.lf\nDoğru mu? (E/H)\n\n",sayacnum);
                    
                    if (sayacnum == 'e' || sayacnum == 'E' || sayacnum == 'h' || sayacnum =='H' ) {
                        
                        if (sayacnum == 'e' || sayacnum == 'E' ) {
                           
                            printf("\n\n%.lf sayaç numarası için yaptığım sorgulamada herhangi bir kesinti bilgisine ulaşamadım. Bildirim oluşturmak istiyor musunuz? (E/H)\n\n",sayacnum);
                            
                        kesintibildirimi:
                            
                            scanf("%s",&cevap);
                            
                            if (cevap == 'e' || cevap == 'E') {
                                
                                printf("\n\nBildiriminizi oluşturuyorum");
                                
                                ucnokta(75);ucnokta(75);
                            
                                usleep(1750000);
                                
                                printf("\n\nKesinti bildiriminizi oluşturdum! İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                
                                anketfonks();
                            }
                            
                            else if (cevap == 'h' || cevap == 'H'){
                                
                                printf("Bildirim işleminizi iptal ettim. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                
                                anketfonks();
                                
                                
                            }
                            
                            else {
                                
                                printf("\n\nHatalı bir seçim yaptınız. %.lf sayaç numarası için kesinti bildirimi oluşturmak istiyor musunuz? (E/H)\n\n",sayacnum);
                                
                                goto kesintibildirimi;
                                
                            }
                            
                        }
                        
                        else{
                            
                            goto sayacnumara;
                            
                            
                        }
                        
                    } else {
                        printf("Yanlış bir seçim yaptınız.");
                        
                        goto sayacdogrulama;
                    }
                 
                    
                    
                
                    
                    
                case 2:
                    
                    printf("\n\nLütfen sayaç numaranızı giriniz.\n\n");
                    
                
                    
                    scanf("%lf",&sayacnum);
                    
                    int i;
                    int alt = 49;
                    int ust = 298;
                    for (i = 0; i < 1; i++) {
                       int rand_num = (rand() % (ust - alt + 1)) + alt;
                    
                    
                    igdasodeme:
                    
                        printf("\n\n%.lf sayaç numarası için yaptığım sorgulamada %d₺'lik ödenmeyi bekleyen borç olduğu bilgisine ulaştım. Ödemek istiyorsanız 1'i, sonra ödeyecekseniz 2'yi tuşlayınız.\n\n",sayacnum,rand_num);
                        
                        scanf("%d",&odemesecim);
                        
                        switch (odemesecim) {
                            case 1:
                                
                                printf("\n\nSizi e-Ödeme sayfasına aktarıyorum. Lütfen bekleyin.\n\n");
                                
                                ucnokta(75);
                                ucnokta(75);
                                usleep(1500000);
                                
                                eodeme();
                                
                                printf("\n\nFatura ödeme işleminiz tamamlandı! İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                
                                anketfonks();
                                
                                
                                
                                
                            case 2:
                                
                                printf("\n\n%d₺'lik borcunuzu sonra ödeyeceğinizi belirttiğiniz için teşekkürler. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n",rand_num);
                                
                                anketfonks();
                                
                                
                                break;
                        }
                    
                        if (odemesecim != 1 || odemesecim != 2) {
                            printf("\n\nHatalı bir seçim yaptınız. Lütfen tekrar deneyiniz.");
                        
                            goto igdasodeme;
                        
                        }
                    
                    
                    
               
            }
            
            
    
    
                case 3:
                    
                    
                    printf("\n\nLütfen gaz kaçağı bildirimi yapmak ilçeyi giriniz.\n\n");

                    scanf("%s",ilce);
                    
                    printf("\n\n%s ilçesinin hangi mahallesi için gaz kaçağı bildirimi yapmak istiyorsunuz?\n\n",ilce);
                    
                    scanf("%s",mahalle);
                    
                gazkacagi:
                    
                    printf("\n\n%s ilçesinin %s mahallesi için gaz kaçağı bildirimi yapacağım. Onaylıyorsanız 1'e, ana menüye dönmek istiyorsanız 2'ye basın.\n\n" ,ilce,mahalle);
                    
                    scanf("%d",&secim);
                    
                               switch (secim) {
                                   case 1:
                                       
                                       printf("\n\nBildiriminizi oluşturuyorum");
                                       
                                       ucnokta(75);
                                       ucnokta(75);
                                       
                                       usleep(2250000);
                                       
                                       printf("\n\nGaz kaçağı bildiriminizi ilgili birimlere ilettim. İlginiz için teşekkürler! İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                       
                                       return anketfonks();
                                       
                            break;
                            
                                    case 2:
                            
                                       goto igdas;
                            
                            break;
                    }
    
                    if (secim != 1 || secim != 2) {
                        printf("\n\nHatalı bir seçim yaptınız. Lütfen tekrar deneyiniz.");
              
                        goto gazkacagi;
                    
                    }
                
    
    return 0;
  

                    
                    
                    
                case 4:
                    
                    
                    printf("\n\nİGDAŞ temsilcileri bir alo uzağınızda! Lütfen temsilcilerimiz tarafından aranmak istediğiniz telefon numarasını başında '0' olmadan giriniz.\n\n");
                    
                    scanf("%lf",&telefon);
                    
                    printf("\n\nTelefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                    
                    scanf("%s",&cevap);
                    
                    if (cevap == 'e' || cevap == 'E') {
                       
                    aranmatarihiigdas:
                        
                        printf("\n\nLütfen aranmak istediğiniz günü girin. (1-31)\n\n");
                        
                        scanf("%lf",&tarihgun);
                        
                        printf("\n\nLütfen aranmak istediğiniz ayı girin. (1-12)\n\n");
                        
                        scanf("%lf",&tarihay);
                    
                        printf("\n\nAranmak istediğiniz tarih %.lf.%.lf.2021.\nDoğru mu?\n\n",tarihgun,tarihay);
                        
                    tarihdogrulamaigdas:
                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            
                            
                            printf("\n\nBelirttiğiniz tarihte İSKİ temsilcilerimiz tarafından aranacaksınız. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                            
                            anketfonks();
                            
                        }
                        
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            goto aranmatarihiigdas;
                            
                            
                        }
                        
                        else{
                            
                            printf("\n\nHatalı bir seçim yaptınız. Aranmak istediğiniz tarih %.lf.%.lf.2021.\nDoğru mu? (E/H)\n\n",tarihgun,tarihay);
                            
                            goto tarihdogrulamaigdas;
                            
                            
                        }
                        
                    }
                    
                case 5:
                    
                    printf("\n\nLütfen bekleyin. İşleminize devam edebilmeniz açısından sizi canlı desteğe aktarıyorum.\n\n");
                                        
                                        ucnokta(65);
                                        ucnokta(65);
                                        usleep(1200000);
                    
                    goto canlidestek;
                    
                    break;
                    
                case 6:
                    
                    printf("\n\nLütfen bekleyin. Sizi ana menüye yönlendiriyorum.\n\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    goto anamenu;
                    
}
      
    return 0;
    
      
            
        
            
        case 3:
        
            
            
            
           
        bedas:
            
    
            printf("\n\n\n\n\n");
            
        
            asciilogo(bedaslogo);
            
            printf("\n\n\n");
           
            
            
            printf("\n\n\nBEDAŞ'a hoşgeldiniz! Lütfen yapmak istediğiniz işlemi seçiniz.\n\n1: Elektrik arızası ve çalışma bildirimlerini öğrenmek istiyorum.\n2: Kesilen elektriğimi açtırmak istiyorum.\n3: Sayaç ve teknik konularla iglili işlem yapmak istiyorum.\n4: Kaçak kullanım bildirmek istiyorum.\n5: İstek, öneri veya şikayette bulunmak istiyorum.\n6: Müşteri temsilciniz tarafından aranmak istiyorum.\n7: Ana menüye dönmek istiyorum.\n\n");
            
            
            
            scanf("%d",&bedassecim);
            switch (bedassecim) {
            
                
                    
                    int elektriksayac;
                
                
                case 1:
                   
                    printf("\n\nLütfen elektrik kesinti sorgulaması yapmak veya bildirmek istediğiniz ilçeyi giriniz.\n\n");

                    scanf("%s",ilce);
                    
                    printf("\n\n%s ilçesinin hangi mahallesi için sorgulama/bildirme yapmak istiyorsunuz?\n\n",ilce);
                    
                    scanf("%s",mahalle);
                    
                    printf("\n\nLütfen sayaç numaranızı giriniz\n\n");
                    
                    scanf("%d",&elektriksayac);
                    
                    printf("\n\n%s ilçesinin %s mahallesi için, ya da \"%d\" sayaç numarası için herhangi bir kesinti bilgisine ulaşamadım. Elektrik kesintisi yaşıyorsanız 1'e, ana menüye dönmek istiyorsanız 2'ye basın.\n\n" ,ilce,mahalle,elektriksayac);
                    
                    scanf("%d",&secim);
                    
                               switch (secim) {
                                   case 1:
                                       
                                       printf("\n\nBildiriminizi oluşturuyorum");
                                       
                                       ucnokta(75);
                                       ucnokta(75);
                                       
                                       usleep(2250000);
                                       
                                       printf("\n\nKesinti bildiriminizi ilgili birimlere ilettim. İlginiz için teşekkürler! İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                       
                                       return anketfonks();
                                       
                            break;
                            
                                    case 2:
                            
                                       goto bedas;
                                   
            
                            
                            break;
                    }
                    
              
                case 2:
                    
                    printf("\n\nİşlem yapmak istediğiniz sayaç numarasını öğrenebilir miyim?\n\n");
                    scanf("%d",&elektriksayac);
                    
                   
                    int i;
                    int alt = 70;
                    int ust = 1090;
                    for (i = 0; i < 1; i++) {
                       int rand_num = (rand() % (ust - alt + 1)) + alt;
                    
                        printf("\n\n");
                    odemedogrulamabedas:
                        printf("%d sayaç numarası için %d₺'lik ödeme yaptınız mı? (E/H)\n\n",elektriksayac,rand_num);
                        
                        
                    
                
                    
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            
                            
                            printf("\n\nLütfen ödeme yaptığınız banka/gişenin size verdiği dekont numarasını girer misiniz?\n\n");
                            
                            scanf("%lf",&bosdeger);
                            
                            printf("\n\nKontrol ediyorum. Lütfen bekleyin.\n\n");
                            
                            ucnokta(75);
                            ucnokta(75);
                            usleep(1250000);
                            
                            printf("\n\nÖdemenizi doğruladım! Elektrik hattınızın tekrar kullanıma açılması için işlem başlattım. Lütfen hanenizdeki tüm şalterleri kapatın ve ~30 dakika sonra tekrar açın. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                            
                            anketfonks();
                        }
                            
                            
                            else if (cevap == 'h' || cevap == 'H') {
                                
                            odemedogrulamabedas2:
                                
                                printf("\n\nŞimdi ödeme yapmak ister misiniz?\n\n");
                                
                                
                                scanf("%s",&cevap);
                                
                                if (cevap == 'e' || cevap == 'E') {
                                    
                                    printf("\n\nSizi e-Ödeme sayfasına aktarıyorum. Lütfen bekleyin.\n\n");
                                    
                                    ucnokta(75);
                                    ucnokta(75);
                                    usleep(1500000);
                                    
                                    eodeme();
                                    
                                    printf("\n\nFatura ödeme işleminiz tamamlandı! İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                    
                                    anketfonks();
                                    
                                    
                                }
                                
                                else if (cevap == 'h' || cevap == 'H') {
                                 
                                    printf("\n\n%d₺'lik borcunuzu sonra ödeyeceğinizi belirttiğiniz için teşekkürler. İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n",rand_num);
                                    
                                    anketfonks();
                                    
                                }
                                
                                else {
                                    
                                    printf("\n\nHatalı bir seçim yaptınız. Lütfen tekrar deneyiniz. ");
                                    
                                    goto odemedogrulamabedas2;
                                    
                                }
                                
                                
                            }
                            
                    
                            else {
                                
                                printf("\n\nHatalı bir seçim yaptınız. ");
                                
                                goto odemedogrulamabedas;
                                
                            }
                                
                            }
                    
                    
                    
                case 3:
                    
                    printf("\n\nSayın %s,müşterimizseniz 1'i, değilseniz 2'yi tuşlayınız.\n\n",isim_soyisim);
                    
                    scanf("%d",&secim);
                    
                    switch (secim) {
                     
                        
                        
                        case 1:
                            
                        
                            
                            printf("\n\nSayaç numaranızı alabilir miyim?\n\n");
                            
                            scanf("%d",&elektriksayac);
                            
                            getchar();
                            
                        
                            
                            printf("\n\n%d sayaç numarası ile ilgili gerçekleştirmek istediğiniz işlemi kısaca özetler misiniz?\n\n",elektriksayac);
                            
                        bedasislem:
                            
                            getchar();

                            fgets(ozet, sizeof(ozet), stdin);
                            
                        yanlisislembedas:
                            
                            printf("\n\nYapmak istediğiniz işlem: %s",ozet);
                            
                            printf("Doğru mu? (E/H)\n\n");
                            
                            scanf("%s",&cevap);
                            
                            if (cevap == 'e' ||  cevap == 'E' ) {
                               
                            telefonnumarasibedas:
                                
                                printf("\nLütfen telefon numaranızı başında \"0\" olmadan giriniz\n\n");
                                
                                double telefon;
                            
                                scanf("%lf",&telefon);
                                
                                printf("\nTelefon numaranız: \"%.lf\" \nDoğru mu? (E/H)\n\n",telefon);
                                
                            telefoncevapbedas:
                                
                                scanf("%s",&cevap);
                                
                                if (cevap == 'e' ||  cevap == 'E') {
                                    
                                   
                                    
                                    rastgele(1000, 9999);
                                        
                    
                                    
                                    
                                    
                                   
                                    
                                    printf("İBB e-Portal'ı geliştirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                  
                                    return anketfonks();
                                
                                
                                
                                }
                                
                        
                                
                                else if (cevap == 'h' || cevap == 'H'){
                                    
                                    goto telefonnumarasibedas;
                                    
                                }
                                
                                
                                
                                    else {
                                        
                                        printf("\n\nHatalı bir seçim yaptınız. Telefon numaranız \"%.lf\". Doğru mu? (E/H)\n\n",telefon);
                                        
                                        goto telefoncevapbedas;
                                        
                                    }
                                
                                
                                
                                
                              
                            }
                        
                            else if (cevap == 'h' || cevap == 'H') {
                            
                            printf("Lütfen yapmak istediğiniz işlemi kısaca özetler misiniz?\n\n");
                                
                                goto bedasislem;
                            
                        }
                            
                            else {
                            
                                printf("\n\nHatalı bir seçim yaptınız. Yapmak istediğiniz işlem: %s \nDoğru mu? (E/H)\n\n",ozet);
                                
                                goto yanlisislembedas;
                                
                            }
                            
                            
                            
                        case 2:
                            
                            printf("\n\nSayın %s, gerçekleştirmek istediğiniz işlemi kısaca özetler misiniz?\n\n",isim_soyisim);
                            
                            goto bedasislem;
                            
                           
                            
                            
                            
                           
                    }
                    
                    
                case 4:
                    
               
                    
                
                    
                   
                    printf("\n\nSayın %s, lütfen kaçak kullanım gerçekleştirdiğinden şüphelendiğiniz hanenin sayaç numarasını girin. Numarayı bilmiyorsanız 1'i tuşlayın.\n\n",isim_soyisim);
                bedaskacakdogrulama:
                    
                    
                    scanf("%d",&elektriksayac);
                    
                    if (elektriksayac != 1) {
                        printf("\n\nGirdiğiniz sayaç numarası: %d\nDoğru mu?(E/H)\n\n",elektriksayac);
                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            printf("\n\n%d sayaç numarasıyla ilgili kaçak kullanım kaydı oluşturuyorum.\n\n",elektriksayac);
                            
                            ucnokta(75);
                            ucnokta(75);
                            usleep(1250000);
                            
                            printf("\n\n%d Sayaç numarasıyla ilgili kaçak kullanım kaydınızı oluşturdum! Birimlerimiz gerekli incelemeleri yapacaktır. Konuyla ilgili tarafınıza ikinci bir bilgilendirme yapılmayacaktır. İlginiz için teşekkürler! İBB e-Portal'ı sizin için geliştirebilmemiz adına 3 soruluk kısa anketimize katılmak ister misiniz?\n\n",elektriksayac);
                            
                            anketfonks();
                        }
                      
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            printf("\n\nSayın %s, lütfen kaçak kullanım gerçekleştirdiğinden şüphelendiğiniz hanenin sayaç numarasını girin. Numarayı bilmiyorsanız 1'i tuşlayın.\n\n",isim_soyisim);
                            
                            goto bedaskacakdogrulama;
                            
                            
                        }
                        
                        
                        else {
                            printf("\n\nHatalı bir seçim yaptınız. Lütfen kaçak kullanım gerçekleştirdiğinden şüphelendiğiniz hanenin sayaç numarasını girin. Numarayı bilmiyorsanız 1'i tuşlayın.\n\n");
                            
                            goto bedaskacakdogrulama;
                        
                        }
                        
       
                        
                        
                    }
                    
                    
                    
                    
                    
                    else if (elektriksayac == 1){
                    
                        printf("Lütfen işlem yapmak istediğiniz hanenin adresini girin. ");
                        
                        getchar();
                        
                    kacakadres:
                        
                        fgets(ozet, sizeof(ozet), stdin);
                        
                    bedasadres:
                        
                        printf("Girdiğiniz adres: %s\nDoğru mu?(E/H)\n\n",ozet);

                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            printf("\n\nBildiriminizi oluşturuyorum.\n");
                            ucnokta(75);
                            ucnokta(75);
                            usleep(1750000);
                            
                            printf("\n\nBelirttiğiniz adreste kaçak kullanım yapıldığına dair bildiriminizi ilgili birimlere ilettim. İlginiz için teşekkürler! İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz?\n\n");
                            
                            anketfonks();
                            
                        }
                        
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            printf("\n\nLütfen kaçak kullanım gerçekleştirildiğinden şüphelendiğiniz hanenin adresini girin.\n\n");
                            
                            goto kacakadres;
                            
                            

                                
                            }
                        
                        else {
                            
                            printf("\n\nHatalı bir seçim yaptınız. Lütfen tekrar deneyin.\n\n");
                            
                            goto bedasadres;
                            
                            
                           }
                            
                            
                      }
                    
                    
                    else {
                        
                        
                        
                        printf("\n\nHatalı bir seçim yaptınız. Lütfen kaçak kullanım gerçekleştirildiğinden şüphelendiğiniz hanenin sayaç numarasını girin. Numarayı bilmiyorsanız 1'i tuşlayın.\n\n");
                        
                        goto bedaskacakdogrulama;
                        
                        
                    
                        
                    }
                            
             
                case 5:
                    
                   
                    
                    printf("\n\nLütfen bekleyin. İşleminize devam edebilmeniz açısından sizi canlı desteğe aktarıyorum.\n\n");
                                        
                                        ucnokta(65);
                                        ucnokta(65);
                                        usleep(1200000);
                    
                    goto canlidestek;
                    
                    break;
                    
                    
                case 6:
                    
          
                    
                    printf("\n\nBEDAŞ temsilcileri size hizmet etmek için 7 gün 24 saat iş başında! Müşteri temsilcimizle tam olarak hangi konu hakkında konuşmak istiyorsunuz? Kısaca özetleyebilir misiniz?\n\n");
                    
                
                    
                    fgets(ozet, sizeof(ozet), stdin);
                    
                bedastemsilcikonudogrulama:
                    
                    printf("\n\nMüşteri temsilcimizle konuşmak istediğiniz konu: %sDoğru mu? (E/H)\n\n",ozet);
                    
                bedastemsilcikonuhata:
                    
                    scanf("%s",&cevap);
                    
                    if (cevap ==  'e' || cevap == 'E') {
                        
                    
                        
                        printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                                   
                        
            bedastemsilcinumara:
                                            
                        scanf("%lf",&telefon);
                    
                        printf("\n\nTelefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                    
                    bedastemsilcidogrulama:
                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            rastgele(1000, 9999);
                            
                            printf("\n\nİBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz?\n\n");
                            
                            anketfonks();
                            
                        }
                        
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                            
                            goto bedastemsilcinumara;
                            
                        }
                        
                        else {
                            printf("Hatalı bir seçim yaptınız. Telefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                            
                            goto bedastemsilcidogrulama;
                            
                            
                        }
                        
                        
                        
                    }
                    
                    else if (cevap == 'h' || cevap == 'H'){
                        
                        
                        printf("\n\nBEDAŞ temsilcileri size hizmet etmek için 7 gün 24 saat iş başında! Müşteri temsilcimizle tam olarak hangi konu hakkında konuşmak istiyorsunuz? Kısaca özetleyebilir misiniz?\n\n");
                        
                        getchar();
                        
                        fgets(ozet, sizeof(ozet), stdin);
                        
                        goto bedastemsilcikonudogrulama;
                        
                        
                    }
                    
                    else {
                        
                        printf("\n\nHatalı bir seçim yaptınız. Müşteri temsilcimizle konuşmak istediğiniz konu: %s\nDoğru mu? (E/H)\n\n",ozet);
                        
                        goto bedastemsilcikonuhata;
                        
                        
                        
                    }
                    
                  
                    
                case 7:
                    
                    printf("\n\nLütfen bekleyin. Sizi ana menüye yönlendiriyorum.\n\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    goto anamenu;
            
            }
                        
            
            
        
        case 4:
            
            

            
            
            
           
        iett:
       
      
            printf("\n\n\n\n\n");
            
        
            asciilogo(iettlogo);
            
            printf("\n\n\n");
   
            
            printf("");
            
            char tasitkodu [10];
            int kartbakiye = 0;
            int i;
            int alt = 2;
            int ust = 198;
            for (i = 0; i < 1; i++) {
               int rand_num = (rand() % (ust - alt + 1)) + alt;
            
             kartbakiye = rand_num;
                
            }
            
            double yukleme;
            
            
            printf("\n\n");
            printf("\n\n\nİETT'ye hoşgeldiniz! Size nasıl yardımcı olabilirim?\n\n");
            printf("1: İstanbulkart'ımla ilgili işlem yapmak istiyorum.\n");
            printf("2: Toplu taşıma araçlarının sefer saatlerini öğrenmek istiyorum.\n");
            printf("3: Trafik durumunu öğrenmek istiyorum.\n");
            printf("4: İstek, öneri veya şikayette bulunmak istiyorum.\n");
            printf("5: Müşteri temsilciniz tarafından aranmak istiyorum.\n\n");
            printf("6: Ana menüye dönmek istiyorum.\n\n");
            
            
            
            scanf("%d",&secim);
            
            switch (secim) {
                case 1:
                    
                    printf("\n\nLütfen İstanbulkart numaranızı girin.\n\n");
                    scanf("%lf",&bosdeger);
                    printf("\nLütfen bekleyin.\n\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    usleep(850000);
                    printf("\n\nİstanbulkart'ınızla ilgili hangi işlemi yapmak istiyorsunuz?\n\n");
                    printf("1: Bakiye öğrenmek ya da dolum yapmak istiyorum.\n");
                    printf("2: Abonman yenilemek istiyorum.\n");
                    printf("3: Kayıp kart bildirimi yapmak istiyorum.\n\n");
                    
                    scanf("%d",&secim);
                    
                    switch (secim) {
                        case 1:
                            
                            printf("\n\nKontrol ediyorum.");
                            
                            ucnokta(75);
                            usleep(750000);
                            
                        istanbulkartdolum1:
                            
                            printf("\n\n%.lf numaralı İstanbulkart'ınızın güncel bakiyesi: %d₺'dir. Dolum yapmak istiyor musunuz? (E/H)\n\n",bosdeger,kartbakiye);
                            
                        istanbulkartdolum:
                            
                            scanf("%s",&cevap);
                     
                            if (cevap == 'e' || cevap == 'E') {
                                
                                printf("\n\nLütfen yüklemek istediğiniz tutarı girin.\n\n");
                                scanf("%lf",&yukleme);
                                
                             
                                
                                printf("\n\nSizi e-Ödeme sayfasına aktarıyorum. Lütfen bekleyin.\n\n");
                                
                                
                                ucnokta(75);
                                ucnokta(75);
                                usleep(1500000);
                                
                                eodeme();
                                
                                
                                kartbakiye = kartbakiye + yukleme;
                                
                                printf("\n\nBakiye yükleme işleminiz başarıyla gerçekleşti! %.lf numaralı İstanbulkart'ınızın yeni bakiyesi: %d₺. İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n",bosdeger,kartbakiye);
                                
                                anketfonks();
                               
                                
                                
                                
                            }
                            
                            else if (cevap == 'h' || cevap == 'H'){
                                
                                
                                printf("\n\nSizi ana menüye aktarıyorum. Lütfen bekleyin.\n\n");
                                
                                ucnokta(75);
                                ucnokta(75);
                                usleep(1650000);
                                
                                goto iett;
                                
                                
                                
                        
                            }
                          
                            else {
                                
                                printf("\n\nHatalı bir seçim yaptınız. %.lf numaralı İstanbulkart'ınızın güncel bakiyesi: %d₺'dir. Dolum yapmak istiyor musunuz? (E/H)\n\n",bosdeger,kartbakiye);
                                
                                goto istanbulkartdolum;
                                
                            }
                            
                            
                            break;
                         
                            
                            
                            
                        case 2:
                            
                           
                            if (kartbakiye >= 40) {
                               
                                printf("\n\n");
                                
                            abonmanonay:
                                
                                printf("%.lf numaralı İstanbulkart'ınızın bakiyesi: %d₺'dir. Abonman yenileme işleminizi 40₺ karşılığında gerçekleştireceğim. Onaylıyor musunuz? (E/H)\n\n",bosdeger,kartbakiye);
                                
                                scanf("%s",&cevap);
                                
                                if (cevap == 'e' || cevap == 'E') {
                                    printf("\n\nİşleminizi gerçekleştiriyorum.\n\n");
                                    ucnokta(75);
                                    ucnokta(75);
                                    usleep(1000000);
                                    
                                    kartbakiye = kartbakiye-40;
                                    
                                    printf("\n\nAbonman yenileme işleminizi gerçekleştirdim! İstanbulkart'ınızın yeni bakiyesi: %d₺. İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n",kartbakiye);
                                    
                                    anketfonks();
                                
                                }
                                
                                else if (cevap == 'h' || cevap == 'H'){
                                    
                                    printf("\n\nİsteğiniz üzerine işleminizi iptal ettim. Sizi ana menüye aktarıyorum.\n\n");
                                    
                                    ucnokta(75);
                                    ucnokta(75);
                                    usleep(675000);
                                    
                                    goto iett;
                                    
                                    
                                }
                                
                                else {
                                    
                                    printf("\n\nHatalı bir seçim yaptınız. ");
                                    
                                    
                                    
                                    goto abonmanonay;
                                    
                                  
                                    
                                }
                                
                            }
                            
                            else {
                                
                                printf("\n\n%.lf numaralı istanbulkart'ınızın bakiyesi yetersiz olduğundan işleminizi gerçekleştiremedim. Lütfen dolum yapıp tekrar deneyin.\n\n",bosdeger);
                                
                                
                                goto istanbulkartdolum1;
                                
                                
                            }
                            
                            break;
                            
                      
                       
                        case 3:
                            
                            printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                                       
                            
                iettkayipnumara:
                                                
                            scanf("%lf",&telefon);
                            
                            printf("Telefon numaranız: %.lf\nDoğru mu? (E/H)",telefon);
                            
                            scanf("%s",&cevap);
                            
                            if (cevap == 'e' || cevap == 'E') {
                                rastgele(1000, 9999);
                            }
                            
                            else if (cevap == 'h' || cevap == 'H'){
                                
                                printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                                
                                goto iettkayipnumara;
                                
                            }
                            
                            else {
                                printf("\n\nHatalı bir seçim yaptınız. Lütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                                
                                goto iettkayipnumara;
                                
                                
                            }
                            
                            
                            break;
                            
                            
                            
                            
                            
                    }
                
                    
                    
                    
                case 2:
                    
                    printf("\n\nLütfen sefer saatlerini öğrenmek istediğiniz taşıtın kodunu girin.\n\n");
                    
                    scanf("%s",ozet);
                    
                    printf("\n\nLütfen telefon numaranızı girin.\n\n");
                    
                    scanf("%lf",&telefon);
                    
                    printf("\n\n%s kodlu taşıtın sefer saatleri %.lf numaralı telefona SMS olarak gönderilmiştir. İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimizer katılmak ister misiniz? (E/H)\n\n",ozet,telefon);
                    
                    anketfonks();
                    
                    
                    
                    break;

                    
                    
                case 3:
                    
                ietttrafik:
                    
                    printf("\n\nLütfen trafik durumunu öğrenmek istediğiniz ilçeyi girin.\n\n");
                    
                    scanf("%s",ilce);
                    
                    printf("\n\nTrafik durumunu öğrenmek istediğiniz ilçe: %s\nDoğru mu? (E/H)\n\n",ilce);
                    
                ietttrafikdogrulama:
                    
                    scanf("%s",&cevap);
                    
                    if (cevap == 'e' || cevap == 'E') {
                        printf("Kontrol ediyorum. Lütfen bekleyin.\n\n");
                        
                        ucnokta(75);
                        ucnokta(75);
                        ucnokta(75);
                        
                        usleep(2000000);
                        
                        
                        
                         int i;
                         int alt = 19;
                         int ust = 95;
                         for (i = 0; i < 1; i++) {
                            int rand_num = (rand() % (ust - alt + 1)) + alt;
                         
                             printf("\n\nUlaşmış olduğum verilere göre %s ilçesinin trafik doluluk oranı %%%d. Başka bir sorgulama yapmak ister misiniz? (E/H)\n\n",ilce,rand_num);
                             
                         baskaislemdogrulamaiett:
                             
                             scanf("%s",&cevap);
                             
                             if (secim == 'e' || secim == 'E') {
                                
                                 goto ietttrafik;
                                 
                             }
                             
                             else if (secim == 'h' || secim == 'H') {
                                 
                                 printf("\n\nİBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                                 
                                 anketfonks();
                                
                                 
                                 
                             }
                        
                             else {
                                 
                                 printf("\n\nHatalı bir seçim yaptınız. Başka bir sorgulama yapmak ister misiniz? (E/H)\n\n");
                                 
                                 goto baskaislemdogrulamaiett;
                                 
                                 
                             }
                             
                         }
                    }
                    
                    
                    else if (cevap == 'h' || cevap == 'H'){
                        
                        goto ietttrafik;
                        
                        
                    }
                   
                    else {
                        
                        printf("\n\nHatalı bir seçim yaptınız. Trafik durumunu öğrenmek istediğiniz ilçe: %s\nDoğru mu? (E/H)\n\n",ilce);
                        
                        goto ietttrafikdogrulama;
                        
                        
                        
                        
                        
                    }
                    
                    break;
                    
                    
                    
                case 4:
                    
                    
                    printf("\n\nLütfen bekleyin. İşleminize devam edebilmeniz açısından sizi canlı desteğe aktarıyorum.\n\n");
                                        
                                        ucnokta(65);
                                        ucnokta(65);
                                        usleep(1200000);
                    
                    goto canlidestek;
                    
                    break;
                    
                    
                case 5:
                    
                iettkonudogrulama:
                    
                    printf("\n\nİETT temsilcileri her daim yardıma hazır! Müşteri temsilcimizle tam olarak hangi konu hakkında konuşmak istiyorsunuz? Kısaca özetleyebilir misiniz?\n\n");
                    
                    getchar();
                    
                    fgets(ozet, sizeof(ozet), stdin);
                    
                
                    
                    printf("\n\nMüşteri temsilcimizle görüşmek istediğiniz konu: %sDoğru mu? (E/H)\n\n",ozet);
                    
                iettkonuhata:
                    
                    scanf("%s",&cevap);
                    
                    if (cevap ==  'e' || cevap == 'E') {
                        
                    
                        
                        printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                                   
                        
                    ietttelefon:
                                            
                        scanf("%lf",&telefon);
                        
                   
                        
                        printf("\n\nTelefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                        
                    ietttelefondogrulama:
                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            rastgele(1000, 9999);
                        
                            usleep(2500000);
                            
                            printf("\n\nİBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz? (E/H)\n\n");
                            
                            anketfonks();
                            
                        }
                        
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                            
                            goto ietttelefon;
                            
                        }
                        
                        else {
                            printf("\n\nHatalı bir seçim yaptınız. Telefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                            
                            goto ietttelefondogrulama;
                            
                            
                        }
                        
                        
                        
                    }
                    
                    else if (cevap == 'h' || cevap == 'H'){
                        
                        goto iettkonudogrulama;
                        
                        
                    }
                    
                    else {
                        
                        printf("\n\nHatalı bir seçim yaptınız. Müşteri temsilcimizle görüşmek istediğiniz konu: %s\nDoğru mu? (E/H)\n\n",ozet);
                        
                        goto iettkonuhata;
                        
                        
                        
                    }
                    
                case 6:
                    
                    printf("\n\nLütfen bekleyin. Sizi ana menüye yönlendiriyorum.\n\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    goto anamenu;
                    
                    
                    
            }
            
       
            
        case 5:
            
            printf("\n\n\n\n\n");
            
        
            asciilogo(ibbvetlogo);
            
            printf("\n\n\n");
            
            printf("\n\nİBB Veteriner Hizmetleri'ne hoşgeldiniz! Lütfen yapmak istediğiniz işlemin numarasını girin.\n\n");
            printf("1: En yakın veterineri öğrenmek istiyorum.\n");
            printf("2: Sokak hayvanı tarafından saldırıya uğradım.\n");
            printf("3: İstek, öneri ya da şikayette bulunmak istiyorum.\n");
            printf("4: Müşteri temsilciniz tarafından aranmak istiyorum.\n\n");
            printf("5: Ana menüye dönmek istiyorum.\n\n");
            
            scanf("%d",&secim);
            
            switch (secim) {
                case 1:
                    printf("\n\nLütfen bulunduğunuz ilçeyi girin.\n\n");
                    
                    scanf("%s",ilce);
                    
                    printf("\n\n%s ilçesi için sorgulama yapıyorum. Lütfen bekleyin.\n",ilce);
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    int i;
                    int alt = 310000000;
                    int ust = 550000000;
                    for (i = 0; i < 1; i++) {
                        int rand_num;
                        rand_num = (rand() % (ust - alt + 1)) + alt;
                    
                    printf("\n\n%s ilçesi için yaptığım sorgulamada aşağıdaki veterinerlere ulaştım\n\nMelek Veterinerlik -- +905%d. İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz?\n\n",ilce,rand_num);
                    
                        anketfonks();
                       
                        
                    break;
                        
                    
      
                    
            }
                    
                    
                    
            
            
                case 2:
                    
                    printf("\n\nSaldırıya uğradığınız hayvanın aşı küpesi var mıydı? (E/H)\n\n");
                    
                vetasi:
                    
                    scanf("%s",&cevap);
                    
                    if (cevap == 'e' || cevap == 'E' || cevap == 'h' || cevap == 'H') {
                        printf("\n\nLütfen telefon numaranızı girin.\n\n");
                        scanf("%lf",&telefon);
                        
                        printf("\n\nLütfen bekleyin");
                        ucnokta(75);
                        ucnokta(75);
                        usleep(1500000);
                        
                        
                        printf("\n\nTemsilcimiz konuyla alakalı olarak %.lf numaralı telefonunuza ulaşacaktır. İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz?\n\n",telefon);
                        
                        
                        anketfonks();
                        
                        
                    }
                
                    
                    else {
                        
                        printf("\n\nHatalı bir seçim yaptınız. Saldırıya uğradığınız hayvanın aşı küpesi var mıydı? (E/H)\n\n");
                        
                        goto vetasi;
                    }
                 
                case 3:
                
                    
           
                    
                    printf("\n\nLütfen bekleyin. İşleminize devam edebilmeniz açısından sizi canlı desteğe aktarıyorum.\n\n");
                    
                    ucnokta(65);
                    ucnokta(65);
                    usleep(1200000);
        
                    goto canlidestek;
                    
                    break;
                
                    
                case 4:
                    
                    
                    
                    printf("\n\nİBB Veterinerlik Hizmetleri temsilcileri size hizmet etmek için her daim telefon başında! Müşteri temsilcimizle tam olarak hangi konu hakkında konuşmak istiyorsunuz? Kısaca özetleyebilir misiniz?\n\n");
                    
                
                    
                    fgets(ozet, sizeof(ozet), stdin);
                    
               ibbvettemsilcikonudogrulama:
                    
                    printf("\n\nMüşteri temsilcimizle konuşmak istediğiniz konu: %sDoğru mu? (E/H)\n\n",ozet);
                    
                ibbvettemsilcikonuhata:
                    
                    scanf("%s",&cevap);
                    
                    if (cevap ==  'e' || cevap == 'E') {
                        
                    
                        
                        printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                                   
                        
            ibbvettemsilcinumara:
                                            
                        scanf("%lf",&telefon);
                    
                        printf("\n\nTelefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                    
                    ibbvettemsilcidogrulama:
                        
                        scanf("%s",&cevap);
                        
                        if (cevap == 'e' || cevap == 'E') {
                            rastgele(1000, 9999);
                            
                            printf("\n\nİBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz?\n\n");
                            
                            anketfonks();
                            
                        }
                        
                        else if (cevap == 'h' || cevap == 'H'){
                            
                            printf("\n\nLütfen telefon numaranızı, başında 0 olmadan giriniz.\n\n");
                            
                            goto ibbvettemsilcinumara;
                            
                        }
                        
                        else {
                            printf("Hatalı bir seçim yaptınız. Telefon numaranız: %.lf\nDoğru mu? (E/H)\n\n",telefon);
                            
                            goto ibbvettemsilcidogrulama;
                            
                            
                        }
                        
                        
                        
                    }
                    
                    else if (cevap == 'h' || cevap == 'H'){
                        
                        
                        printf("\n\nBEDAŞ temsilcileri size hizmet etmek için 7 gün 24 saat iş başında! Müşteri temsilcimizle tam olarak hangi konu hakkında konuşmak istiyorsunuz? Kısaca özetleyebilir misiniz?\n\n");
                        
                        getchar();
                        
                        fgets(ozet, sizeof(ozet), stdin);
                        
                        goto ibbvettemsilcikonudogrulama;
                        
                        
                    }
                    
                    else {
                        
                        printf("\n\nHatalı bir seçim yaptınız. Müşteri temsilcimizle konuşmak istediğiniz konu: %s\nDoğru mu? (E/H)\n\n",ozet);
                        
                        goto ibbvettemsilcikonuhata;
                        
                        
                        
                    }
            
                case 5:
                    
                    printf("\n\nLütfen bekleyin. Sizi ana menüye yönlendiriyorum.\n\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    goto anamenu;
            
                                    }
 
            
            

        case 6:
            
        canlidestek:
            
            printf("\n\nİBB e-Portal canlı destek hattına hoşgeldiniz! Sizi operatörümüze bağlamadan önce yapmak istediğiniz işlemi öğrenmem gerekiyor. Lütfen sorununuzu kısaca özetler misiniz?\n\n");
            
            getchar();
            
                fgets(ozet, sizeof(ozet), stdin);
                
            chatkonudogrulama:
                
                printf("\n\nSorununuz: %sDoğru mu? (E/H)\n\n",ozet);
                
            chatkonuhata:
                
                scanf("%s",&cevap);
                
                if (cevap ==  'e' || cevap == 'E') {
                    
                
                    printf("\n\nLütfen bekleyin. Sizi operatörümüze bağlıyorum.\n");
                    
                    ucnokta(75);
                    ucnokta(75);
                    ucnokta(75);
                    
                    usleep(150000);
                    
                    printf("\n\n(Betty sohbete katıldı)\n\n");
                    
                    usleep(1000000);
                    
                    printf("Betty yazıyor");
                    
                    ucnokta(75);
                    ucnokta(75);
                    
                    printf("\n\nBetty: İBB e-Portal canlı destek hattına hoşgeldiniz! Ben Betty, bugün size nasıl yardımcı olabilirim?\n\n");
                    
                    
                    printf("Siz: ");
                    
                    scanf("%s",&chatsorun);
                    
                    usleep(500000);
                    
                    printf("✓");
                    
                    usleep(4000000);
                    
                    printf("\r");
                    
                    printf("✓✓");
                    
                    usleep(10000000);
                    
                    
                    
                    printf("\n\nBetty yazıyor");
                    usleep(750000);
                    ucnokta(75);

                    ucnokta(75);
                  
                    
                    printf("\n\nBetty: Sorununuzu anladım. Yardımcı olabilmek adına araştırma yapmam için sizi kısa bir süre bekleteceğim. Anlayışınız için teşekkürler.");
                    
                    usleep(750000);
                    
                    usleep(10000000);
                    
                    printf("\n\nSorununuzun çözümü için gerekli birimlere bildirimde bulundum. Son olarak telefon numaranızı alabilir miyim?\n\n");
                    
                    printf("Siz: ");
                    
                    scanf("%lf",&bosdeger);
                    
                    usleep(532000);
                    
                    printf("✓");
                    
                    usleep(1000000);
                    
                    printf("\r");
                    
                    printf("✓✓");
                    
                    usleep(5000000);
                    
                    printf("\n\nBetty yazıyor");
                    usleep(750000);
                    ucnokta(75);

                    ucnokta(75);
                  
                    printf("\n\nBetty: Teşekkürler. Sorununuzun çözümü için en kısa zamanda girmiş olduğunuz telefon numarasından sizinle iletişime geçeceğiz. İBB e-Portal'ı sizin için daha kullanışlı hale getirebilmemiz adına hazırladığımız 3 soruluk kısa anketimize katılmak ister misiniz?");
                    
                    anketfonks();
                    
                }
                
                else if (cevap == 'h' || cevap == 'H'){
                    
                    
                    printf("\n\nİBB e-Portal canlı destek hattına hoşgeldiniz! Sizi operatörümüze bağlamadan önce yapmak istediğiniz işlemi öğrenmem gerekiyor. Lütfen sorununuzu kısaca özetler misiniz?\n\n");
                    
                    getchar();
                    
                    fgets(ozet, sizeof(ozet), stdin);
                    
                    goto chatkonudogrulama;
                    
                    
                }
                
                else {
                    
                    printf("\n\nHatalı bir seçim yaptınız. Sorununuz: %s\nDoğru mu? (E/H)\n\n",ozet);
                    
                    goto chatkonuhata;
                    
                    
                    
                }
   
            
            
        case 7:
            
            printf("\n\nW");
            usleep(225000);
            printf("o");
            usleep(225000);
            printf("r");
            usleep(225000);
            printf("k ");
            usleep(225000);
            printf("i");
            usleep(225000);
            printf("n ");
            usleep(225000);
            printf("p");
            usleep(225000);
            printf("r");
            usleep(225000);
            printf("o");
            usleep(225000);
            printf("g");
            usleep(225000);
            printf("r");
            usleep(225000);
            printf("e");
            usleep(225000);
            printf("s");
            usleep(225000);
            printf("s");
            usleep(325000);
            printf(".");
            usleep(325000);
            printf(".");
            usleep(325000);
            printf(".");
            
            
            usleep(3000000);
            
            
            goto anamenu;
            
            
            break;
                  
            
            
            
            
        case 8:
            
            printf("\n\n\nGeliştiriciler:\n\n\n1: Utku Aydın\n\n2: Tuğçe Çırak\n\n");

            usleep(3000000);
            
            goto anamenu;
            
            
        case 9:
            
            printf("\n\nİBB e-Portal'ı tercih ettiğiniz için teşekkürler. İyi günler dileriz!\n\n");
            
            return 0;
            
            
            }
            
            
    

    
    }
