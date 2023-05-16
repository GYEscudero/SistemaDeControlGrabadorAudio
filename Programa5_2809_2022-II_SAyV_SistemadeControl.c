#include <16F887.h>           //Libreria del microcontrolador.
#fuses INTRC_IO,FCMEN,NOIESO  //Fuses del oscilador.
#fuses NOWDT,NOBROWNOUT,PUT,NODEBUG,NOLVP //Fuses de reset.
#fuses NOPROTECT,NOCPD,NOWRT //Fuses de seguridad de los códigos.

/*Directivas de control*/
#use fast_io(A)
#use fast_io(C)
#use delay(clock=8M) 

/*Programa principal*/

void main()
   {
   set_tris_a(0xFF);//puerto A como entrada
   set_tris_c(0x00);//puerto C como salida
   
   while (true)
      {
      output_c(0x1E);
      
      
      //Grabar al precionar un boton
      if (input(pin_a0)== 0)       
         {
         
         //Reset
         output_low(PIN_C4);
         delay_ms(500);
         output_high(PIN_C4);
         delay_ms(500);
         output_low(PIN_C4);
         delay_ms(500);
         //---------------------
            
            //Subrutina de Grabar al precionar un boton
            while(input(pin_a5)==0)
            {
            output_high(PIN_C0);
            delay_us(83);
            output_low(PIN_C0);
            delay_us(83);
            output_c(0x04);
            }
            //-----------------------------------------
         }
      //-----------------------
           

      //Reproducir al precionar un boton      
      if (input(pin_a1)== 0)
         {
         
         //Reset
         output_low(PIN_C4);
         delay_ms(500);         
         output_high(PIN_C4);
         delay_ms(500);
         output_low(PIN_C4);
         delay_ms(500);
         //---------------------

            //Subrutina de Reproducir al precionar un boton 
            while(input(pin_a5)==0)
            {
            output_high(PIN_C0);
            delay_us(83);
            output_low(PIN_C0);
            delay_us(83);
            output_c(0x02);
            }   
            //-----------------------------------------
         }
      //-----------------------
      
      
         //Grabar al mientras preciono un boton      
      if (input(pin_a2)== 0)
         {

         //Reset
         output_low(PIN_C4);
         delay_ms(500);
         output_high(PIN_C4);
         delay_ms(500);
         output_low(PIN_C4);
         //--------------------
         
            //Subrutina de Grabar al mientras preciono un boton         
            while(input(pin_a2)==0)
            {
            output_high(PIN_C0);
            delay_us(83);
            output_low(PIN_C0);
            delay_us(83);
            output_c(0x04);
            }
            //-----------------------------------------
         }
      //-----------------------
      
      
      //Reproducir lento al precionar un boton      
      if (input(pin_a3)== 0)
         {
         
         //Reset
         output_low(PIN_C4);
         delay_ms(500);
         output_high(PIN_C4);
         delay_ms(500);
         output_low(PIN_C4);
         delay_ms(500);
         //---------------------
 
            //Subrutina de Reproducir lento al precionar un boton 
            while(input(pin_a5)==0)
            {
            output_high(PIN_C0);
            delay_us(125);
            output_low(PIN_C0);
            delay_us(125);
            output_c(0x02);
            }  
            //-----------------------------------------
         }
      //-----------------------
      
      
      //Reproducir rapido al precionar un boton      
      if (input(pin_a4)== 0)
         {
         
         //Reset         
         output_low(PIN_C4);
         delay_ms(500);
         output_high(PIN_C4);
         delay_ms(500);
         output_low(PIN_C4);
         delay_ms(500);
         //---------------------
        
            //Subrutina de Reproducir rapido al precionar un boton          
            while(input(pin_a5)==0)
            {
            output_high(PIN_C0);
            delay_us(50);
            output_low(PIN_C0);
            delay_us(50);
            output_c(0x02);
            } 
            //----------------------------------------- 
         }
      //-----------------------           
      }
   }
  
         
      
