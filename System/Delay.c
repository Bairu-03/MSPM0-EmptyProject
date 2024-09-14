#include "ti_msp_dl_config.h"

/**
  * @brief  微秒延时
  * @param  us 延时时间（微秒）
  * @retval 无
  */
void delay_us(unsigned long us) 
{
    while(us--)
        delay_cycles(CPUCLK_FREQ/1000000);
}

/**
  * @brief  毫秒延时
  * @param  ms 延时时间（毫秒）
  * @retval 无
  */
void delay_ms(unsigned long ms) 
{
    while(ms--)
	    delay_cycles(CPUCLK_FREQ/1000);
}