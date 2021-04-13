/**
*   \brief Main source file for PSoC6 BLE Keyboard
*
*   \author Davide Marzorati
*/

#include "debug_interface.h"
#include "project.h"

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */

    // Initialize debug serial port
    UART_START();
    setvbuf(stdin, NULL, _IONBF, 0);
    DBG_PRINTF("\f");
    DBG_PRINTF("BLE HID Keyboard Example\r\n");
   
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
