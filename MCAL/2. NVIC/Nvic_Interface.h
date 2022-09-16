/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Nvic_Interface.h
 *       Module:  NVIC
 *
 *  Description:  header file for NVIC module   
 *  
 *********************************************************************************************************************/
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

#include "Std_Types.h"
#include "Nvic_Config.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/* Function to initialize IntCtrl module */
void Nvic_Init(void);
 
#endif  /* NVIC_INTERFACE_H */

/**********************************************************************************************************************
 *  END OF FILE: Nvic_Interface.h
 *********************************************************************************************************************/