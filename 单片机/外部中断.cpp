void pit_handler()
{
  static char i=0;
  unsigned char prt[1];
  
  prt[0]=0x41+i;
  LCD_Print(5,5,prt);
  led_turn(LED1);
  
  i++;
  if(i>25)i=0;
  
  PIT_Flag_Clear(PIT0);
  
}
void PORTA_IRQHandler()
{
  uint8   n=0;
  n=8;  
  if(PORTA_ISFR &(1<<n))
  {
    PORTA_ISFR =(1<<n);
    //用户任务
    led_turn(LED0);
    //用户任务
  }
  
  //PORT_FUNC(D,7,key_handler);
}
void main()
{

  led_init(LED1);                         //初始化LED1
  led_init(LED0);
  LCD_Init();
  pit_init_ms(PIT0,1000); 
  
  NVIC_SetPriorityGrouping(4);
  NVIC_SetPriority(PIT0_IRQn,0);
  set_vector_handler(PIT0_VECTORn,pit_handler);
  enable_irq(PIT0_IRQn);
  
  gpio_init(PTA9,GPO,0);
  gpio_init(PTA8,GPI,0);
  port_init_NoALT(PTA8,PULLUP| IRQ_FALLING);
  
  set_vector_handler(PORTA_VECTORn,PORTA_IRQHandler);
  enable_irq(PORTA_IRQn);
  
  while(1)
  {

      DELAY_MS(500);
    
  }
}
