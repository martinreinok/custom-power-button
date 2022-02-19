# Toggle switch as a power button
Classic PC power buttons are momentary switches, however I wanted to use a toggle switch as a power button.

## Code
The arduino constantly reads the switch state and if within 25ms the switch state has changed, it toggles the shutdown header pin to low for 200ms.  
Depending on motherboard, this may differ. (Instead of low, could be high).

## Schematic
The toggle switch is connected to GND and SWITCH_PIN (digital 2).  
The PC shutdown header is connected to GND and SHUTDOWN_BUTTON (digital 4).  
The polarity of PC shutdown header is important, GND to GND.  

## Lightning
As of now I included a RGB led in the build but have not written any code for it.
