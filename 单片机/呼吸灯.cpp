/* void main()
{
    led_init(LED0);                         //初始化LED0
    led_init(LED1);                         //初始化LED1
    led_init(LED2);                         //初始化LED2
    led_init(LED3);                         //初始化LED3
    unsigned int PWM_LOW=0;                                   //定义周期并赋值
    
///////////////////////////////////////////////呼吸灯
    while(1)
    {
            
                led(LED0,LED_OFF);
                led(LED1,LED_OFF);
                led(LED2,LED_OFF);
                led(LED3,LED_OFF);
                DELAY_MS(1500);                                
                for(PWM_LOW=1;PWM_LOW<25;PWM_LOW++)        
                {                                      

                  led(LED0,LED_ON);
                  led(LED1,LED_ON);
                  led(LED2,LED_ON);
                  led(LED3,LED_ON);
                  DELAY_MS(PWM_LOW);
                  led(LED0,LED_OFF);
                  led(LED1,LED_OFF);
                  led(LED2,LED_OFF);
                  led(LED3,LED_OFF);
                  DELAY_MS(25-PWM_LOW);
                }
              //////////////////////////////////////////////////////
                for(PWM_LOW=25;PWM_LOW>0;PWM_LOW--)
                {

                  led(LED0,LED_ON);
                  led(LED1,LED_ON);
                  led(LED2,LED_ON);
                  led(LED3,LED_ON);
                  DELAY_MS(PWM_LOW);
                  led(LED0,LED_OFF);
                  led(LED1,LED_OFF);
                  led(LED2,LED_OFF);
                  led(LED3,LED_OFF);
                  DELAY_MS(25-PWM_LOW);
                }
             
             
   }
}