/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "debug_interface.h"
#include "project.h"

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
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
