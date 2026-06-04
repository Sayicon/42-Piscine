<div align="center">

# 42 Piscine

**42 Kocaeli Havuz (Piscine) sürecinde tamamlanan C programlama egzersizleri.**

[![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![School](https://img.shields.io/badge/42-Kocaeli-00BABC?style=for-the-badge)](https://42kocaeli.com.tr/)

</div>

---

## Piscine Nedir?

**Piscine** (Fransızca: yüzme havuzu), 42 okullarının yeni öğrenci seçim sürecidir. Yaklaşık 4 hafta boyunca, programlama deneyimi olmadan katılan adaylar yoğun bir C programlama eğitiminden geçer. Sabahtan geceye kadar süren çalışma temposu, problem çözme becerisini ve öz-öğrenme kapasitesini ölçer.

Bu repoda Piscine sürecinde tamamlanan tüm modüller yer almaktadır.

---

## Modüller

| Modül | Konu | Egzersiz Sayısı |
|-------|------|:---:|
| [C02](#c02) | String işleme | 12 |
| [C03](#c03) | String karşılaştırma ve birleştirme | — |
| [C04](#c04) | Sayı-string dönüşümleri | — |
| [C05](#c05) | Özyineleme (Recursion) | — |
| [C06](#c06) | argc / argv | — |
| [C07](#c07) | Dinamik bellek tahsisi | 4 |
| [C08](#c08) | Header dosyaları ve makrolar | — |

---

## Modül Detayları

### C02
**String Manipülasyonu**

String kopyalama, dönüştürme ve karakter sınıflandırma egzersizleri:
- Dizileri büyük/küçük harfe çevirme
- String'i n karakter kadar kopyalama
- Karakter sınıflandırma fonksiyonları (isalpha, isdigit vb.)
- Whitespace kaldırma ve kelime tabanlı dönüşümler

### C03
**String Karşılaştırma ve Birleştirme**

- `strcmp` / `strncmp` uygulamaları
- `strcat` / `strncat` güvenli birleştirme
- `strstr` (alt string arama)

### C04
**Sayı-String Dönüşümleri**

- `strlen` uygulaması
- `atoi` — string'den tamsayıya
- `putnbr` — sayıyı stdout'a yaz
- Farklı sayı tabanlarında (hex, octal) çıktı

### C05
**Özyineleme (Recursion)**

- Faktöriyel hesaplama
- Fibonacci sayı dizisi
- Kuvvet (power) ve karekök fonksiyonları
- Özyinelemeli toplama

### C06
**Komut Satırı Argümanları**

- `argc` ve `argv` kullanımı
- Argümanları listeleme ve yazdırma
- Programın adını ve parametrelerini işleme

### C07
**Dinamik Bellek (malloc)**

- `malloc` ile string kopyalama
- `ft_range` — verilen aralıkta int dizisi üretme
- `ft_ultimate_range` — çift pointer ile aralık üretme
- `ft_strjoin` — birden fazla string'i birleştirme

### C08
**Header Dosyaları**

- Kendi `.h` başlık dosyasını yazma
- `#ifndef` / `#define` / `#endif` include guard yapısı
- Struct tanımları ve typedef

---

## Dizin Yapısı

```
42-Piscine/
├── C02/
│   ├── ex00/    # ft_putstr
│   ├── ex01/    # ft_putstr (revised)
│   ├── ex02/    # ft_putnbr
│   ├── ...
│   └── ex11/
├── C03/
│   └── ex00/ – ex05/
├── C04/
│   └── ex00/ – ex04/
├── C05/
│   └── ex00/ – ex08/
├── C06/
│   └── ex00/ – ex03/
├── C07/
│   └── ex00/ – ex03/
└── C08/
    └── ex00/ – ex03/
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

[42 Network](https://42.fr/en/homepage/), dünya genelinde 50'den fazla kampüsü olan eğitim ücreti almayan, sınıf ve öğretmen olmayan bir yazılım okulu ağıdır. 42 Kocaeli, Türkiye'deki kampüslerinden biridir.

Piscine sürecini geçen adaylar ana müfredata (`common core`) kabul edilir ve libft, ft_printf, push_swap gibi projelere geçiş yapar.

---

<div align="center">

*42 Kocaeli — Piscine sürecindeki çalışmalar*

[![GitHub](https://img.shields.io/badge/GitHub-Sayicon-181717?style=flat-square&logo=github)](https://github.com/Sayicon)

</div>
