/**
*   \brief Main source file for CM0 core.
*
*   This is the main source code for th CM0 code in the
*   PSoC6 BLE HID Keyboard project.
*   
*   \author Davide Marzorati
*/
    
#include "project.h"

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */
    
    /* Unfreeze IO after Hibernate */
    if(Cy_SysPm_GetIoFreezeStatus())
    {
        Cy_SysPm_IoUnfreeze();
    }
    
    /* Enable CM4.  CY_CORTEX_M4_APPL_ADDR must be updated if CM4 memory layout is changed. */
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR); 

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
