# push_swap

## Proje Hakkında (TR)
Bu proje, 42 eğitim programı kapsamında, verilen bir sayı dizisini kısıtlı bir komut seti ve iki adet yığın (stack) kullanarak en az hamleyle sıralamayı amaçlayan bir algoritma projesidir. Verimlilik, veri yapıları ve algoritma optimizasyonu projenin temel odak noktasıdır.

### Algoritma Yaklaşımı
Bu projede büyük veri setlerini (100 ve 500 sayı) verimli bir şekilde sıralamak için **Radix** algoritması kullanılmıştır. Algoritma, her adımda "en düşük maliyetli" (en az hamle gerektiren) elemanı seçerek stack A ve stack B arasında stratejik transferler gerçekleştirir.

### Teknik Özellikler
- **Stack Yönetimi**: Bağlı liste (linked list) veya dizi tabanlı yığın yapısı.
- **Komut Seti**: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr` operasyonlarının tam uygulanması.
- **Hata Yönetimi**: Yinelenen sayılar, sayı olmayan girdiler ve integer sınırlarını aşan değerlerin kontrolü.
- **Performans**: 
  - 3 sayı: Maksimum 3 hamle.
  - 5 sayı: Maksimum 12 hamle.
  - 100 sayı: 1084 hamle.
  - 500 sayı: 6784 hamle.

---

## About the Project (EN)
This project, developed as part of the 42 curriculum, aims to sort a sequence of numbers using a limited instruction set and two stacks (A and B) with the minimum number of operations. The core focus is on efficiency, data structures, and algorithmic optimization.

### Algorithmic Approach
This project implements the **Radix** algorithm to efficiently sort large datasets. The algorithm performs strategic transfers between stack A and stack B by calculating the "lowest cost" (minimum operations required) for each element at every step.

### Technical Details
- **Stack Management**: Implementation of stack structure using linked lists or arrays.
- **Instruction Set**: Full implementation of `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.
- **Error Handling**: Checks for duplicate numbers, non-numeric inputs, and values exceeding integer limits.
- **Performance Goals**:
  - 3 numbers: Max 3 moves.
  - 5 numbers: Max 12 moves.
  - 100 numbers: 1084 moves.
  - 500 numbers: 6784 moves.

---

## Kullanım / Usage

1. Derleme (Compilation)
   ```bash
   make
2. Çalıştırma (Running)
   ```bash
   ./push_swap 3 2 5 1 4
3. Performans Testi (Performance Check)
   ```bash
   ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
