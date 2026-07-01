# Beeping Countdown

Arduino sketch that combines a buzzer and a 7-segment display into one program. It counts down from 9 to 0 — showing each digit on the display and beeping once per step — then plays a longer tone once it reaches 0.

## Wiring

- Buzzer → pin 8
- 7-segment display (segments a–g) → pins 2, 3, 4, 5, 6, 7, 9

## Behaviour

**Display:** 9 → 8 → 7 → 6 → 5 → 4 → 3 → 2 → 1 → 0 (each digit shown for 1 second)

**Buzzer:** short beep on each digit change, longer tone at 0

**Serial Monitor:**
```
===Beeping countdown Starting===
Count: 9
Count: 8
...
Count: 0
=== Countdown Complete ===
```