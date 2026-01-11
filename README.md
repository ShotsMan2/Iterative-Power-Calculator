# Iterative Power Calculator

This project is a custom implementation of the mathematical **Exponentiation** function in C. Instead of relying on the standard `<math.h>` library's `pow()` function, this algorithm demonstrates how to calculate powers using fundamental control flow structures.

## 🧮 Mathematical Logic

The algorithm computes the result of $b^n$ (Base to the power of $n$) using **Iterative Multiplication**.

$$Result = \prod_{i=1}^{n} b = \underbrace{b \times b \times \dots \times b}_{n \text{ times}}$$

### Algorithm Complexity
* **Time Complexity:** $O(n)$ - Linear time relative to the exponent size.
* **Space Complexity:** $O(1)$ - Uses a single accumulator variable.

## ⚙️ How It Works

1.  **Input:** Accepts an integer `base` and an integer `exponent`.
2.  **Initialization:** Sets the accumulator (`sonuc`) to 1 (the identity element for multiplication).
3.  **Iteration:** Loops `exponent` times.
    * In each step, updates: `accumulator = accumulator * base`
4.  **Output:** Prints the final calculated value.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o power_calc
    ```
2.  Run the executable:
    ```bash
    ./power_calc
    ```
3.  Enter the base and exponent when prompted.

---
*This repository demonstrates accumulator logic and loop structures in C programming.*
