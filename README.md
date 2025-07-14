  # Light Probe with Vibration for Blind and Deafblind People
## Project Description
The light probe indicates light sources by vibration. The more light hits the probe, the stronger the vibration.  
This allows users to check whether a light is on in a room, where the windows are located, whether the sun is shining, etc.  
For example, if you turn toward a light source with the probe in your hand, the vibration increases. By sweeping the probe side to side, the direction of a light source can be easily detected.

## Features
- Measures light intensity using a photoresistor (LDR)  
- Converts light intensity into vibration strength  
- Uses a coreless vibration motor  
- Controlled by a microcontroller (Arduino Nano Every)  
- Compact design by 3D-printed enclosure  
- Ideal for blind and deafblind users  

## Project Contents
- **Firmware:** Microcontroller code for Arduino  
- **Hardware:** Circuit diagram, pinouts, and wiring guide  
- **Enclosure:** 3D files (STL)  
- **Documentation:** User guide, assembly instructions, bill of materials, and building notes  

## Bill of Materials
The following components are linked to product pages. For the vibration motor, push button, and battery holder, the exact linked products are required, as the enclosure is designed to fit them.  
This does not apply to generic parts like the Nano, breadboard, or LDR.  
Estimated total cost (subject to price changes): €24.50

- 1 [Arduino Nano]( https://www.amazon.de/gp/product/B07WWK29XF)  
- 1 [Mini Breadboard]( https://www.amazon.de/Elegoo-Points-Mini-Breadboard-Arduino/dp/B01M9CHKO4) (170 tie points) or 1 [expansion board]( https://funduinoshop.com/bauelemente/verbinder/klemmen/nano-r3-expansion-board-fuer-schraubklemmen) with screw terminals  
- 1 [Photoresistor]( https://www.amazon.de/dp/B082X5JY71) (LDR) – crimping required  
- 1 [Vikye Coreless Vibration Motor]( https://www.amazon.de/gp/product/B07TS7WR67) – crimping required  
- 1 [Gebildet 12mm Stainless Steel Push Button]( https://www.amazon.de/dp/B09Q8F5JR3) – crimping required  
- 1 [SDENSHI 9V Battery Holder]( https://www.amazon.de/gp/product/B082RKZTFW) – crimping required  
- 5 [Jumper Wires]( https://www.amazon.de/VoltMate-kompatibel-Arduino-Raspberry-Breadboard/dp/B0CX5MGPWT) (male-to-female)  
- 1 Resistor 10 kΩ  

**Required tools:** needle-nose and/or flat pliers, Phillips screwdriver, optionally ducked or double-sided tape

## The Circuit
The circuit can be built using an Arduino Nano and a mini breadboard or a screw terminal shield – both fit into the enclosure.  
Sighted people may of course solder.

- One pin of the LDR goes to 5V, the other to the 10 kΩ resistor and to A0 (voltage divider)  
- The other pin of the resistor goes to GND  
- The vibration motor connects to D11 and GND  
- The battery connects with its positive terminal via the push button to VIN and with its negative terminal to GND  

With the specified battery holder: the wires come out corresponding to the polarity of the inserted battery.  
If the wires point away from the body and the clip is on the left, the right wire is positive and the left one is negative.

## Enclosure Description
“Front” and “rear” refer to positions relative to the enclosure. How the device is oriented or held during assembly is up to the builder.

The enclosure body is a tube open at both ends, tapering slightly toward the front.  
At the rear end, there are four notches around the edge and four cylinders on the inner wall.  
These notches align with the corners of the battery holder. This allows for the smallest possible outer dimensions, as the front of the battery holder is not fully enclosed.  
When the holder is inserted with its corners in the notches, the holes in the front panel align with screw mounts in the cylinders.

Inside, roughly in the middle, there is a platform to support the breadboard with its wiring.  
Beneath this platform, so between it and the enclosure wall, is the socket for the vibration motor.  
Just before the front end, there is a hole for the push button.  
On the front rim, an internal screw thread is located.

The enclosure tip is cone-shaped. Its base has a thread, and its tip has a hole for the LDR.  
Inside, just before the hole, is a ring that acts as a lock for the expansion plug.

The expansion plug is a blunt cone with two lateral grooves and one groove on the bottom.  
At the bottom, there are two vertical tabs parallel to the center groove.

## Assembly
If using a breadboard, it is recommended to secure the circuit with tape to prevent components from coming loose during insertion.  
If using a screw terminal shield, tape is not required, but double-sided tape must be applied to hold the shield in place.

The entire circuit can be pre-wired before installation.  
Only the push button must be disconnected before inserting.

First, feed the LDR (attached to long jumper wires) through the rear and pull it out the front.  
Do the same for the wires of the vibration motor and the push button.  
The vibration motor is inserted into its socket from the front.  
Peel the protective backing from the breadboard and gently insert it.  
Make sure the board is placed on the platform so that nothing sticks out at the back, as the platform aligns with the battery holder.

Now the battery holder should be inserted and screwed down, so that the rest of the assembly is easier.  
Make sure no wires are jammed between the battery holder and the breadboard.

Insert the push button from the outside into the hole. From the inside, fasten the nut onto the button and tighten it.  
Reconnect the wires to the button.

Next, place the LDR’s pins into the side grooves of the expansion plug so the sensor lies on top of the plug.  
Now insert the plug into the cone tip using pliers.  
Squeeze the bottom tabs together until the base of the plug passes the inner ring. This ring locks the plug in place at the tip.

Finally, screw the cone tip onto the body and tighten firmly.

## License
© 2025 Robbie Sandberg  
This project is licensed under the Creative Commons Attribution – NonCommercial 4.0 International License (CC BY-NC 4.0).

You are allowed to:  
- Build the device  
- Use, share, and modify the designs  
- Use the work in non-commercial contexts (school, personal, self-help)

You are not allowed to:  
- Sell the designs or derived devices  
- Use them commercially (advertising, paid workshops, etc.)  
- Share the work without attribution
