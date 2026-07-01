# Smart Countdown Timer (Arduino)

This project is a simple Arduino application that demonstrates core programming concepts: variables, custom functions, loops (`while` and `for`), and hardware control using the Serial Monitor and an LED.

The program executes a countdown from a specified starting value, blinking an onboard LED dynamically based on the current countdown step, and then stops.

## How It Works

All the logic runs exactly once inside the `setup()` function, leaving the main `loop()` empty. 

1. **Initialization:** The program sets digital pin 13 as an output for the LED and opens serial communication at a 9600 baud rate.
2. **The Countdown Loop:** A `while` loop counts down from `5` to `1`. 
3. **Dynamic Blinking:** During each step of the countdown, the current number is printed to the Serial Monitor, and a custom function `flashled()` is called. 
4. **The Helper Function:** The `flashled(int times)` function uses a `for` loop to blink the LED on pin 13 exactly as many times as the current countdown number (e.g., 5 blinks, then 4 blinks, etc.).
5. **Completion:** Once the loop hits zero, it prints a final completion message to the Serial Monitor.

## Expected Serial Monitor Output

=== Smart countdown Starting ===
     Count : 5
     Count : 4
     Count : 3
     Count : 2
     Count : 1

 You can test and view the live simulation of this project here: wokwi.com/makers/dan_abya







