# Bitwise Operations in C

This repository contains basic to advanced C programs that demonstrate the use of bitwise operations. These are useful for learning, practicing, or revising concepts before technical interviews.

---

## 🔧 Contents

| File Name                  | Description                                     |
|---------------------------|-------------------------------------------------|
| `set_clear_toggle.c`      | Set, clear, and toggle a specific bit           |
| `check_even_odd.c`        | Check whether a number is even or odd          |
| `check_kth_bit.c`         | Check if the k-th bit is set                   |
| `count_set_bits.c`        | Count number of set bits in an integer         |
| `power_of_two.c`          | Check if a number is a power of two            |
| `swap_using_xor.c`        | Swap two numbers without using a temp variable |
| `bitwise_operators_demo.c`| Demonstration of AND, OR, XOR, NOT, <<, >>     |

---

## 📌 What Are Bitwise Operators?

Bitwise operators perform operations on bits of integers. They are commonly used in embedded systems, competitive programming, and system-level programming.

---

## 🧠 Useful Tips

- **Set a bit:** `num |= (1 << k);`
- **Clear a bit:** `num &= ~(1 << k);`
- **Toggle a bit:** `num ^= (1 << k);`
- **Check a bit:** `(num >> k) & 1`

---

## 🛠️ How to Run

You can compile any file using `gcc`:

```bash
gcc filename.c -o output
./output
