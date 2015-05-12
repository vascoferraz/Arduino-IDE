/*****************************************************************************
* Copyright (C) 2012 by Vasco Ferraz. All Rights Reserved.                   *
*                                                                            *
* This program is free software: you can redistribute it and/or modify       *
* it under the terms of the GNU General Public License as published by       *
* the Free Software Foundation, either version 3 of the License, or          *
* (at your option) any later version.                                        *
*                                                                            *
* This program is distributed in the hope that it will be useful,            *
* but WITHOUT ANY WARRANTY; without even the implied warranty of             *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               *
* GNU General Public License for more details.                               *
*                                                                            *
* You should have received a copy of the GNU General Public License          *
* along with this program. If not, see <http://www.gnu.org/licenses/>.       *
*                                                                            *
*  Author:        Vasco Ferraz                                               *
*  Contact:       http://vascoferraz.com/contact/                            *
*  Description:   http://vascoferraz.com/tutorials/arduino-ide/              *
*****************************************************************************/

// The setup function runs only once when you power or reset the board
void setup()
{
 pinMode(2, OUTPUT); // Initialize digital pin 2 as an output
}

// The loop function runs indefinitely after the setup function ends
void loop()
{
 digitalWrite(2, HIGH);  // Turn on the LED. This line will put 5 Volt (HIGH) in digital pin 2
 delay(100);             // Wait for 100 milliseconds (0.1 seconds) with the LED on
 digitalWrite(2, LOW);   // Turn the LED off by making the voltage LOW (Zero Volt)
 delay(1000);            // Wait for 1000 milliseconds (1 second) with the LED off
}
