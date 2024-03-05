# Melody_buzzer_IoT

This code is written for an ESP32 microcontroller using the Arduino IDE. It plays a simple melody using a piezo buzzer connected to pin 6. The melody is defined in the `melody` array, and the duration of each note is set by the `noteDuration` variable. The melody is played in the `setup()` function and continuously loops in the `loop()` function.

### Hardware Setup
1. Connect a piezo buzzer to pin 6 of the ESP32 microcontroller.

### Code Explanation
- The `melody` array holds the frequency values for each note of the melody.
- `noteDuration` determines the duration of each note, calculated based on the tempo (beats per minute).
- Inside the `setup()` function, each note of the melody is played sequentially with a brief pause between each note.
- In the `loop()` function, the melody continuously loops, playing indefinitely.

### Usage
1. Connect the ESP32 microcontroller to your computer.
2. Open the Arduino IDE.
3. Copy the provided code into a new sketch.
4. Upload the sketch to the ESP32 board.
5. You should hear the melody playing through the piezo buzzer connected to pin 6.

### Additional Notes
- You can modify the `melody` array to change the melody.
- Adjust the `noteDuration` variable to change the tempo of the melody.
- Customize the code to include additional functionality, such as controlling LEDs or other components alongside the melody.

### Compatibility
- This code is designed for the ESP32 microcontroller using the Arduino IDE.
- Ensure you have the necessary libraries installed for the ESP32 board in the Arduino IDE.



