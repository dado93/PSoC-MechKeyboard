/**
*   Main file for USB Bootloader.
*
*   This program is executed when the board is powered. If the switch connected to
*   the column and row configured in the Pins tab is pressed when the board is 
*   powered, or if the on-board switch (connected to pin 2.2) is pressed, 
*   then bootloader operation starts and firmware upgrade can be performed. 
*   Otherwise, control is passed to application program.
*/

#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Bootloader_LED_Write(1);
    
    Wait_Column_Write(1);
    if ( (Wait_Row_Read() == 1) || ( BL_Switch_Read() == 0) )
    {
        Bootloader_SET_RUN_TYPE(Bootloader_START_BTLDR);
    }
    Wait_Column_Write(0);
    
    Bootloader_Start();
    
    for(;;) 
    {
        /* Place your application code here. */
    }
    
    return 0;
}

/* [] END OF FILE */
