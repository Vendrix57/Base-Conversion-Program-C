# Decimal to Base-N Converter (C)

A mathematical utility that converts a decimal (Base-10) number into a target base (up to 4 digits). This program is an excellent demonstration of how computers handle different number systems and positional notation.

## 🧮 The Logic

The program uses the **Successive Division-Remainder** method to find the digits of the new base:
1. **Modulus (`%`):** Extracts the remainder, which becomes the digit for the current place value.
2. **Division (`/`):** Reduces the number to move to the next "place" (units, tens, hundreds, etc.).
3. **Reconstruction:** Combines the extracted digits into a single integer for display.


## 🚀 Features

* **Flexible Bases:** Convert decimal numbers into binary (Base-2), octal (Base-8), or any other base of your choice.
* **Range Calculation:** Uses the `pow()` function from `math.h` to calculate the maximum value that a 4-digit number can hold in the chosen base ($Base^4 - 1$).
* **Positional Mapping:** Explicitly calculates four specific place values (`place0` through `place3`) to show the internal mechanics of the conversion.

## 🛠️ Technical Overview

* **Math Library:** Integrates `math.h` for power calculations.
* **Type Casting:** Demonstrates converting `double` results from `pow()` into `int` for integer math.
* **Digit Ordering:** Reconstructs the final number by multiplying digits by powers of 10 to ensure the output reads correctly from left to right.

## 📋 How to Run

1.  **Compile the code:**
    ```bash
    gcc main.c -o converter -lm
    ```
2.  **Run the executable:**
    ```bash
    ./converter
    ```

## 📝 Example Output

```text
Enter any decimal number: 10
Enter the base you want it to convert to: 2

Maximum 4-digit value in base 2 is: 15
The decimal number converted to base 2 is: 1010
