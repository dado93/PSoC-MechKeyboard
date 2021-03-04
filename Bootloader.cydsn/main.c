/**
*   Main file for USB Bootloader.
*
*   This program is executed when the board
*   is powered. If the switch connected to
*   the column and row configured in the 
*   Pins tab is pressed when the board is 
*   powered, then bootloader operation 
*   starts. Otherwise, application must give
*   control to bootloader to allow firmware 
*   upgrade.
*/

#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Bootloader_LED_Write(1);
    Bootloader_Start();
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
