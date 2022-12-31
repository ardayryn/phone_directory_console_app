# Telefon rehberi uygulamasi (ENF1190)

## Odev icerigi

Aşağıdaki işlemleri yapan C kodunu aynı c dosyası içinde yazınız. 
* Ödevi yaparken derste görmediğimiz ve sunumlarda olmayan, hiçbir kısayol, fonksiyon, tanımlama ya da yapıyı kullanmayınız. Aksi halde ödeviniz geçersiz sayılacaktır.
* Kodlarınızın yanında o kodun ne işe yaradığına dair kendi cümlelerinizle açıklamalar yazınız.
* Yazdığınız kodları içeren c uzantılı dosyayı ve programı çalıştırdığınıza her aşamayı sırayla görebileceğim ekran görüntülerini bir klasöre atınız. Klasörün adı “Öğrenci numaranız adınız soyadınız ENF1190” şeklinde olmalıdır. Klasörü .rar ya da .zip uzantılı bir dosya olarak *****@gmail.com adresine eposta olarak gönderiniz. Gönderdiğiniz epostanın konu kısmına “İsim Soyisim Numara ENF1190 ödevi” bilgilerini ekleyiniz.
* Ödevi yazarken main fonksiyonunun altına ilk olarak aşağıdaki kodu ekleyiniz ve kod içerisinde hiçbir yerde *yildiz ve yld değişkenlerini değiştirmeyiniz ve kullanmayınız.

```c
int main(void)
{
    int *yildiz, yld;
    yildiz=&yld;
    printf("%d\n",yildiz);
    yildiz=yildiz+1;
    printf("%d\n",yildiz);
}
```

* Ödevin son gönderim tarihi 31.12.2022 saat 00.00 ’dir. 1 güne kadar geciken ödevler 60 puan, 2 güne kadar geciken ödevler 50 puan, 3 güne kadar geciken ödevler 40 puan üzerinden değerlendirilecektir. Daha fazla geciken ödevler değerlendirilmeye alınmayacaktır.

## Isterler

**Basit telefon rehberi uygulaması**

1. Program kullanıcıdan en fazla 25 kişi için ad, soyad, ve telefon numarası girişi isteyecek. (Kullanıcı isterse 25 kişiden az veri girişi yapabilir.)

2. Kullanıcı istediği kadar (en fazla 25) kişi kaydı yaptıktan sonra program kullanıcıya hangi kategoriye göre sıralama yapmak istediğini soracak. Kullanıcının cevabına göre ada, soyada ya da telefon numarasına göre kabarcık sıralama, hızlı sıralama ya da birleştirme sıralama algoritmalarından birini kullanarak, sıralama yapılacak ve listeyi ekranda aşağıdaki şekilde gösterecektir.
Listedeki sıra numarası    İsim     Soyisim    Telefon

3. Programın devamında kullanıcı aşağıdaki işlemleri yapabilecek.
    * Eğer kayıt sayısı 25’ten küçükse yeni kayıt ekleyebilecek, 25 ise “yeni kayıt ekleyecek yer yoktur.” uyarısı verecek.
    * Kullanıcı ada, soyada ya da telefon numarasına göre arama yapıp eğer kayda ulaşırsa ekranda o kayda ya da kayıtlara ait bütün bilgileri gösterecek.
    * Kullanıcı ulaştığı kaydı değiştirmek isterse ilgili kaydın verileri kullanıcının istediği şekilde değiştirilecek.
    * Kullanıcı arama sonucunda ulaştığı kaydı listeden silebilecek. Silinen kayıttan sonraki kayıtlar sıranın bozulmaması için bir yukarı kaydırılacak.
    * Yukarıdaki a, b, c, d şıklarındaki işlemler kullanıcı programdan çıkmak isteyene kadar çalışacak. 