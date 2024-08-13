# 1-wxWingets Kullanıcı Arayüzü Kütüphaeni
1- "https://www.wxwidgets.org/downloads/" adresinden kullandığınız işletim sistemine göre .zip uzantılı kaynak kod dosyasını indirin ve dosyayı uygun bir yere çıkartın.

2- Çıkarttığınız klasörün içerisinde önceden derlenmiş dosyalar bulunmaktadır. Build klasörü içerisinde hazır CMakelists ve bundan türetilmiş Makefile dosyaları mevcuttur. build/msw dizinin içerisinde bizim tekrardan derleme işlemi yapmamız gerekli. CMD üzerinden build/msw dizinine gelin ve "mingw32-make.exe -f makefile.gcc SHARED=0 UNICODE=1 BUILD=release" komutun çalıştırın. "makefile.gcc" kullanılarak derleme işleminin bitmesini bekleyin.

3- 2.adım tamamlandıktan sonra örnek bir "Hello World" yazan pencere açmak için "https://docs.wxwidgets.org/latest/overview_helloworld.html" adresindeki kodları main.cpp dosyanız içinde kullanarak deneyebilirsiniz.

