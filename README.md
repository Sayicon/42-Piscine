<img src="https://capsule-render.vercel.app/api?type=waving&color=0:00BABC,100:00599C&height=180&section=header&text=42%20Piscine&fontSize=50&fontColor=fff&animation=fadeIn&fontAlignY=36" width="100%"/>

<div align="center">

[![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![School](https://img.shields.io/badge/42-Kocaeli-00BABC?style=for-the-badge)](https://42kocaeli.com.tr/)
[![Norm](https://img.shields.io/badge/norminette-passing-brightgreen?style=for-the-badge)](https://github.com/42School/norminette)
![Visitor](https://visitor-badge.laobi.icu/badge?page_id=Sayicon.42-Piscine)

</div>

---

## Piscine Nedir?

**Piscine** (Fransızca: yüzme havuzu), 42 okullarının yeni öğrenci seçim sürecidir. Yaklaşık 4 hafta boyunca, programlama deneyimi olmadan katılan adaylar yoğun bir C programlama eğitiminden geçer. Sabahtan geceye kadar süren çalışma temposu, problem çözme becerisini ve öz-öğrenme kapasitesini ölçer.

Bu repoda Piscine sürecinde tamamlanan tüm modüller yer almaktadır.

---

## Modüller

| Modül | Konu | Egzersiz Sayısı |
|:-----:|------|:---:|
| [C02](#c02) | String işleme ve karakter fonksiyonları | **12** |
| [C03](#c03) | String karşılaştırma ve birleştirme | **6** |
| [C04](#c04) | Sayı-string dönüşümleri | **6** |
| [C05](#c05) | Özyineleme (Recursion) | **8** |
| [C06](#c06) | argc / argv | **4** |
| [C07](#c07) | Dinamik bellek tahsisi | **4** |
| [C08](#c08) | Header dosyaları ve makrolar | **6** |
| **Toplam** | | **46** |

---

## Modül Detayları

### C02
**String Manipülasyonu** — 12 egzersiz

String kopyalama, dönüştürme ve karakter sınıflandırma egzersizleri:
- Dizileri büyük/küçük harfe çevirme
- String'i n karakter kadar kopyalama
- Karakter sınıflandırma fonksiyonları (isalpha, isdigit vb.)
- Whitespace kaldırma ve kelime tabanlı dönüşümler

### C03
**String Karşılaştırma ve Birleştirme** — 6 egzersiz

- `strcmp` / `strncmp` uygulamaları
- `strcat` / `strncat` güvenli birleştirme
- `strstr` (alt string arama)

### C04
**Sayı-String Dönüşümleri** — 6 egzersiz

- `strlen` uygulaması
- `atoi` — string'den tamsayıya
- `putnbr` — sayıyı stdout'a yaz
- Farklı sayı tabanlarında (hex, octal) çıktı

### C05
**Özyineleme (Recursion)** — 8 egzersiz

- Faktöriyel hesaplama
- Fibonacci sayı dizisi
- Kuvvet (power) ve karekök fonksiyonları
- Özyinelemeli toplama

### C06
**Komut Satırı Argümanları** — 4 egzersiz

- `argc` ve `argv` kullanımı
- Argümanları listeleme ve yazdırma
- Programın adını ve parametrelerini işleme

### C07
**Dinamik Bellek (malloc)** — 4 egzersiz

- `malloc` ile string kopyalama
- `ft_range` — verilen aralıkta int dizisi üretme
- `ft_ultimate_range` — çift pointer ile aralık üretme
- `ft_strjoin` — birden fazla string'i birleştirme

### C08
**Header Dosyaları** — 6 egzersiz

- Kendi `.h` başlık dosyasını yazma
- `#ifndef` / `#define` / `#endif` include guard yapısı
- Struct tanımları ve typedef

---

## Dizin Yapısı

```
42-Piscine/
├── C02/   (ex00–ex11)  12 egzersiz
├── C03/   (ex00–ex05)   6 egzersiz
├── C04/   (ex00–ex05)   6 egzersiz
├── C05/   (ex00–ex07)   8 egzersiz
├── C06/   (ex00–ex03)   4 egzersiz
├── C07/   (ex00–ex03)   4 egzersiz
└── C08/   (ex00–ex05)   6 egzersiz
```

---

## Derleme

Her egzersiz bağımsız bir C dosyasıdır:

```bash
# Herhangi bir egzersizi derle
gcc -Wall -Wextra -Werror C02/ex05/ft_str_is_alpha.c -o test
./test

# Norminette ile stil kontrolü
norminette C02/ex05/ft_str_is_alpha.c
```

---

## 42 Hakkında

[42 Network](https://42.fr/en/homepage/), dünya genelinde 50'den fazla kampüsü olan, eğitim ücreti almayan, sınıf ve öğretmen olmayan bir yazılım okulu ağıdır. 42 Kocaeli, Türkiye'deki kampüslerinden biridir.

Piscine sürecini geçen adaylar ana müfredata (`common core`) kabul edilir ve libft, ft_printf, push_swap gibi projelere geçiş yapar.

---

<div align="center">

[![GitHub](https://img.shields.io/badge/GitHub-Sayicon-181717?style=for-the-badge&logo=github)](https://github.com/Sayicon)
[![42 Profile](https://img.shields.io/badge/42-mcekici-00BABC?style=for-the-badge)](https://profile.intra.42.fr/)

</div>

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:00BABC,100:00599C&height=100&section=footer" width="100%"/>
