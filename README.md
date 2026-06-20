# Programming with Cpp(Arduino)

# --------------------( Task 1 )------------------
# Access my simulation @wokwi.com/makers/dan_abya 

TASK 1 Putting It All Together - Smart Countdown

Goal: Combine EVERYTHING you have learned - variables, a function, a while loop, the LED, and the Serial Monitor - into a single program.

Why this matters: This is the kind of small program real engineers write every day. If you can do this task, you have understood the building blocks of Arduino programming.

TIP: This task is intentionally harder. Read the instructions twice, draw the logic on paper if you need to, then start coding. Do not be discouraged if it takes you more than one try

that is normal.

Step 1 What your program must do

Write a single Arduino sketch that does ALL of the following:

1. Create a variable called startValue and set it to 5.

2. In setup(), set up Serial communication and configure pin 13 as OUTPUT.

3. Print the message "=== Smart Countdown Starting ===" once.

4. Use a while loop that counts DOWN from startValue to 1.

5. Inside the loop, on each step: print the current count to the Serial Monitor (e.g. "Count: 5"), call a function flashLED(int times) that you write yourself which blinks the LED that many times, then wait 1 second.

6. After the while loop finishes, print "=== Countdown Complete ===" to Serial.

7. loop() should stay empty - everything happens once in setup().

Step 2

Expected output on the Serial Monitor

=== Smart Countdown Starting ===

Count: 5

Count:

Count: 3

Count: 2

Count: 1

=== Countdown Complete ===

Expected LED behaviour: blinks 5 times, then 4 times, then 3, then 2, then 1.

Step 3 Hints (use only if you are stuck)

Your flashLED function will need its OWN small loop inside it. A while loop or a for loop will both work.

Inside flashLED, the variable that counts the flashes should be different from the one in setup. (They are in different functions, so they can even share the same name - but using different names is clearer.)

Test in stages: first get the Serial output working, then add the LED part.





