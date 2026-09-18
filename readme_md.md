# Laboratory Activity: Control a Lamp's Brightness

This repository contains my solution for the **Control a Lamp’s Brightness** laboratory activity. In this activity, I simulated controlling a lamp's brightness setting (from 0 to 100) based on an ON/OFF switch state using C++ and the Arduino Serial Monitor.

---

## 1. Results Table

I tested the logic across different brightness settings (0, 50, and 100) with the switch set to both `true` (ON) and `false` (OFF).

| Brightness setting | Switch state | Expected lamp brightness | Observed output |
| :--- | :--- | :--- | :--- |
| 0 | On | 0 | 0 |
| 50 | On | 50 | 50 |
| 100 | On | 100 | 100 |
| 0 | Off | 0 | 0 |
| 50 | Off | 0 | 0 |
| 100 | Off | 0 | 0 |

---

## 2. Function Explanation: `getLampBrightness()`

I implemented the decision-making logic inside a function with the following signature:
`int getLampBrightness(bool switchOn, int brightnessSetting)`

* **Parameters:**
  * `bool switchOn`: Accepts a boolean value representing the switch state (`true` for ON, `false` for OFF).
  * `int brightnessSetting`: Accepts an integer value representing the selected brightness level (0 to 100).
* **Return Value:** 
  * Returns an `int`. If `switchOn` is `true`, it returns the value stored in `brightnessSetting`. If `switchOn` is `false`, it returns `0`.

---

## 3. Coding Check

1. **In `int brightnessSetting = 75;`, identify the data type, variable name, and initial value. How would you change the value to 50?**
   * **Data Type:** `int`
   * **Variable Name:** `brightnessSetting`
   * **Initial Value:** `75`
   * **To change it to 50:** Modify the declaration to `int brightnessSetting = 50;`.

2. **Why is `bool` suitable for `switchOn`, while `int` is suitable for `brightnessSetting`?**
   * `bool` is ideal for `switchOn` because a switch only has two possible states: ON (`true`) or OFF (`false`). `int` is suitable for `brightnessSetting` because brightness is a numeric value within a continuous range (0 to 100).

3. **Predict the output when `brightnessSetting` is 80 and `switchOn` is `false`.**
   * The calculated lamp brightness will be `0` because the switch is OFF.

4. **Are `switchOn` and `switchon` the same variable? Explain.**
   * No, they are different variables. C++ is case-sensitive, so the capital `O` in `switchOn` makes it distinct from `switchon`.

5. **What values are passed to `getLampBrightness()`, and what does it return?**
   * It receives the boolean switch state (`switchOn`) and the integer brightness level (`brightnessSetting`). It returns an integer representing the active lamp brightness (`brightnessSetting` if ON, `0` if OFF).

6. **If `lampBrightness` is declared inside `setup()`, can `loop()` access it directly? Explain.**
   * No. Variables declared inside `setup()` have local scope, meaning they only exist within `setup()`. `loop()` cannot access local variables declared in another function.