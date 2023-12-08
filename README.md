# Arduino-IDE

The purpose of this first tutorial is to explain the very basics of the Arduino IDE, which you can download [here](https://www.arduino.cc/en/software). Don't be fooled by its appearance. This IDE might look simple, but it is extremely powerful.

In my opinion, what gives this tool its power is not only the appearance or the lack of complex features (which make it easier to use), but also all the examples, projects, and libraries that are freely distributed by the open-source community. Despite this, the Arduino project thrives. In fact, it thrives because it is open-source, like Linux or the Raspberry Pi.

This is the visual representation of the Integrated Development Environment (IDE):

![alt text](resources/ArduinoIDE.jpg?raw=true)

So you can easily understand how the IDE works and to substantiate our position (within the open-source community), let's commence with a straightforward LED blink schematic. For this tutorial, you need:

- 1x Arduino Nano 3.0
- 1x LED
- 1x 10kOhm resistors
- Breadboard and wires

Now you have to replicate the circuit below:

![alt text](resources/Arduino-IDE_bb.png?raw=true)

The circuit can be powered via the Arduino's USB port or by applying 12V to the Arduino's Vin pin.

There are three major steps you must understand before uploading the [code](Arduino_IDE.ino) into Arduino's flash memory.

First, you have to select which Arduino board you're using by clicking **Tools > Board**. A list of all available boards will appear so you can select the one you're using. Another menu will appear if the board you selected has more than one processor to choose from. Just change it accordingly by clicking on: **Tools > Processor**.

Second, you must select the serial port. Again, click **Tools > Port** and select the COM port where you've connected the Arduino. If you're not sure which port is the right one, disconnect your Arduino board and re-open the menu. The entry that disappears should be the Arduino board. Reconnect the board and select that serial port.

Finally, click **Tools > Programmer** and select **Arduino as ISP**.

To upload the program, copy and paste this [code](Arduino_IDE.ino) into the IDE. Then, click the "Upload" button, and if everything is OK, you should see the RX and TX LEDs on the board flashing. If the upload is successful, the message "Done uploading." will appear in the status bar, and you should see the LED blinking. Yeah! You're good 🙂