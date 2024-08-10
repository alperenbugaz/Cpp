// GCC (g++) derleyicisi ile derleme Örneği

1- "https://sourceforge.net/projects/mingw-w64/files/mingw-w64/" linki üzerinden donanım mimarinize (x86_64 veya i686) uygun bir seçeneği, API Uyumluluğu Seçimi (win32 veya posix)'e göre 
birini ve Hata Ayıklama ve İstisna Yönetimi Seçimi (sjlj, seh ve dwarf) birini seçtikten sonra indirme işlemini başlatın. Başlangıç için "x86_64-posix-seh" tercih edilebilir.

2-İndirilen sıkıştırılmış dosyayı uygun bir yere çıkartın ve bin klasörünün path'ini ortam değişkenlerine eklemek için kopyalayın.

3- "ARA-SİSTEM ORTAM DEĞİŞKENLERİNİ DÜZENLEYİN-ORTAM DEĞİŞKENLERİ-PATH-YENİ"  YOLUNU İZLEYEREK "{path}\mingw64\bin" yolunu ekleyin

4- CMD'ye g++ yazarak "g++: fatal error: no input files" çıktısını gördüğünüzden emin olun. Bu çıktıyı gördüyseniz başarılı bir şekilde eklediniz demektir. g++'ın kullanılabilmesi için CMD'yi yeniden başlatın.

5- Kodunuzun (cpp uzantılı dosya) bulunduğu klasöre CMD üzerinden "cd" komutu ile girin.

6- "g++ {your_code_file}.cpp" komutu ile kodunuzu derleyin. Derleme işlemi tamamlandıktan sonra cpp uzantılı kodunuzu içeren dosyanın olduğu dizinde, exe uzantılı bir dosya oluşacaktır.
Bu dosya kodunuzu çalıştırır.

7- Eğer tek bir işlemi gerçkeştiren iki farklı cpp dosyası varsa "g++ -c" komutu sayesinde cpp dosyalarının nesne dosyaları oluşturulur (.o uzantılı dosyalar). 
example: (1-"g++ -c main.cpp" 2-"g++ -c library.cpp 3-"g++ main.exe main.o library.o") komutları ile sırasıyla nesne dosyalarını oluşturup main.exe adında bir dosya ile iki farklı cpp dosyası bağlanmış olur.
