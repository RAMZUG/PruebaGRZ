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
#include "project.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int32 C,V_I, V_V;
char Text[20];
char UART_Data_RX;
int k;

void medicion(){
//     ADC_SelectConfiguration(1,1); //Configuración para corriente
    //Lee el voltaje de offset
//    AMux_FastSelect(1); //offset
//    ADC_StartConvert();
//    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
//    C =  ADC_Read32();
//    ADC_StopConvert();

    //Lee el voltaje para la corriente
//    AMux_FastSelect(0); //corriente
//    ADC_StartConvert();
//    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
//    C =  ADC_Read32() - C; //Resta el voltaje de offset
//    ADC_StopConvert();
    
//    V_I = ADC_CountsTo_uVolts(C);
       
//    ADC_SelectConfiguration(2,1); //Configuración del voltaje

    //Lee el voltaje de offset del voltaje
//    AMux_FastSelect(3); //offset
//    ADC_StartConvert();
//    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
//    C =  ADC_Read32();
//    ADC_StopConvert();

    //Lee el voltaje del voltaje
//    AMux_FastSelect(2); //voltaje
//    ADC_StartConvert();
//    ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
//    C =  ADC_Read32() - C; //Resta el voltaje de offset
//    ADC_StopConvert();
    
//    V_V = ADC_CountsTo_uVolts(C);
    
//    sprintf(Text,"%ld,",V_I); //Convierte a texto
//    UART_PutString(Text);
      V_V =999;   
    sprintf(Text,"%ld",V_V); //Convierte a texto
    UART_PutString(Text);
    
    UART_PutChar(10);//Envia un enter
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    UART_Start(); //Inicializo el puerto serie


    for(;;)
    {
        
        
               medicion();
               LED_Write(1);      
               CyDelay(100);
               LED_Write(0);
               CyDelay(100);
    }
}



/* [] END OF FILE */
