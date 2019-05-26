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
void main()
{

  led_init(LED1);                         //初始化LED1
  LCD_Init();
  pit_init_ms(PIT0,1000); 
  
  NVIC_SetPriorityGrouping(4);
  NVIC_SetPriority(PIT0_IRQn,0);
  set_vector_handler(PIT0_VECTORn,pit_handler);
  enable_irq(PIT0_IRQn);
  while(1)
  {

      DELAY_MS(5000);
    
  }
}