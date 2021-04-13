/**
*   \file debug.h
*   \brief Header file for debug interface.
*
*   The debug interface allows to monitor the 
*   program through a standard serial port. 
*   In production, make sure to disable the debug
*   module by setting the #DEBUG_UART_ENABLED to
*   #DISABLED.
*/

#ifndef __DEBUG__
    #define __DEBUG__

    #include "config.h"
    #include <project.h>
    #include <stdio.h>
    
    /***************************************
    *   UART Macros / prototypes
    ***************************************/
    #if (DEBUG_UART_ENABLED == ENABLED)
        #define DBG_PRINTF(...)              (printf(__VA_ARGS__))
        #define UART_PUT_CHAR(...)           while(1UL != UART_Put(__VA_ARGS__))
        #define UART_GET_CHAR(...)           (UART_Get())
        #define UART_IS_TX_COMPLETE(...)     (UART_IsTxComplete())
        #define UART_WAIT_TX_COMPLETE(...)   while(UART_DEB_IS_TX_COMPLETE() == 0) ;    
        #define UART_SCB_CLEAR_RX_FIFO(...)  (Cy_SCB_ClearRxFifo(UART_SCB__HW))
        #define UART_START(...)              (UART_Start(__VA_ARGS__))
    #else
        #define DBG_PRINTF(...)
        #define UART_DEB_PUT_CHAR(...)
        #define UART_DEB_GET_CHAR(...)          (0u)
        #define UART_DEB_IS_TX_COMPLETE(...)    (1u)
        #define UART_DEB_WAIT_TX_COMPLETE(...)  (0u)
        #define UART_DEB_SCB_CLEAR_RX_FIFO(...) (0u)
        #define UART_START(...)
    #endif /* (DEBUG_UART_ENABLED == ENABLED) */
    
#endif    
/* [] END OF FILE */
