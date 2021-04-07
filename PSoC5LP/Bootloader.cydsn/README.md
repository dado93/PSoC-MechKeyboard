## PSoC-MechKeyboard Bootloader Project

This project is required to implement bootloader functionality in the PSoC-MechKeyboard.
In order to be able to upgrade the firmware (if required) when the keyboard is already completely 
assembled, the bootloader functionality allows to perform a firmware upgrade via USB.

In normal mode, bootloader passes controls to application code without waiting for any command.
When firmware upgrade is required, bootloader process can be started in two ways:
- by pressing the on-board switch on the CY8CKIT-059, which is connected to pin 2.2 until the keyboard is powered
- by pressing the keyboard switch connected to the configured pins in the project until the keyboard is powered. For this second mode of operation, be sure to configure the pins `Wait_Row` and `Wait_Col` in the Pin Assignment tab inside PSoC Creator Design Wide Resources. These pins must be connected to the switch which is configured to trigger the  bootloader operation