/**********************************************************************************
 *
 *      Hardware definitions
 *
 **********************************************************************************
 * FileName:        hardware.h
 * Version:			1.00
 *
 * Processor:       MSP430G2xxx
 * Complier:        IAR Workbench for MSP430 v4.50 or higher
 *                  
 * Company:         ARTON
 *
 *
 * Author               Date      	Version	  		Comment
 *-------------------------------------------------------------------------------
 * Oleg Semeniuk	 16.11.2013    	1.00		Release for v1.00
 *

 *********************************************************************************/

#ifndef __HARDWARE_H__
#define __HARDWARE_H__

/*********************************************************************************/
/*                                 INCLUDES                                      */
/*********************************************************************************/
#include  "msp430g2433.h"
#include  "type.h"


/*********************************************************************************/
/*                               DEFINITIONS                                     */
/*********************************************************************************/

// For VREF+
#define VREF_DIR	P1DIR
#define VREF_OUT	P1OUT
#define VREF_IES       	P1IES
#define VREF_IFG	P1IFG
#define VREF_IE		P1IE
#define VREF_REN	P1REN
#define VREF_BIT	BIT4

// For AMP_PWR signal
#define AMP_PWR_DIR  	P1DIR
#define AMP_PWR_OUT  	P1OUT
#define AMP_PWR_BIT  	BIT7
#define	AMP_PWR_ON()	AMP_PWR_OUT |= AMP_PWR_BIT
#define	AMP_PWR_OFF()	AMP_PWR_OUT &= ~AMP_PWR_BIT


// For Button
#define BUT_DIR			P1DIR
#define BUT_IN			P1IN
#define BUT_OUT			P1OUT
#define BUT_IES        	P1IES
#define BUT_IFG			P1IFG
#define BUT_IE			P1IE
#define BUT_REN			P1REN
#define BUT_BIT			BIT2

//!!!!! For test
#define CH_IN_DIR		P2DIR
#define CH_IN_OUT		P2OUT
#define CH_IN_BIT		BIT2
#define CH_IN_SET()		CH_IN_OUT |= CH_IN_BIT 
#define CH_IN_CLR()		CH_IN_OUT &= ~CH_IN_BIT 


// For Red LED
#define RED_DIR   		P2DIR
#define RED_OUT   		P2OUT
#define RED_BIT  		BIT7
#define	RED_SET()		RED_OUT |= RED_BIT
#define	RED_CLR()		RED_OUT &= ~RED_BIT


// For Yellow LED
#define YEL_DIR   		P2DIR
#define YEL_OUT   		P2OUT
#define YEL_BIT  		BIT1
#define	YEL_SET()		YEL_OUT |= YEL_BIT
#define	YEL_CLR()		YEL_OUT &= ~YEL_BIT

/*
// For Fire signal
#define FIRE_DIR   		P2DIR
#define FIRE_OUT   		P2OUT
#define FIRE_BIT  		BIT3
#define	FIRE_SET()		FIRE_OUT |= FIRE_BIT
#define	FIRE_CLR()		FIRE_OUT &= ~FIRE_BIT


// For Fault signal
#define FAULT_DIR   	P2DIR
#define FAULT_OUT   	P2OUT
#define FAULT_BIT  		BIT4
#define	FAULT_SET()		FAULT_OUT |= FAULT_BIT
#define	FAULT_CLR()		FAULT_OUT &= ~FAULT_BIT
*/


// For Fire signal
#define FIRE_DIR   		P2DIR
#define FIRE_OUT   		P2OUT
#define FIRE_BIT  		BIT4
#define	FIRE_SET()		FIRE_OUT |= FIRE_BIT
#define	FIRE_CLR()		FIRE_OUT &= ~FIRE_BIT


// For Fault signal
#define NFAULT_DIR   	        P2DIR
#define NFAULT_OUT   	        P2OUT
#define NFAULT_BIT  		BIT3
#define	NFAULT_SET()		NFAULT_OUT |= NFAULT_BIT
#define	NFAULT_CLR()		NFAULT_OUT &= ~NFAULT_BIT


//TEST_OUT
#define TEST_OUT_DIR   	        P1DIR
#define TEST_OUT_OUT   	        P1OUT
#define TEST_OUT_BIT  		BIT6
#define	TEST_OUT_SET()		TEST_OUT_OUT |= TEST_OUT_BIT
#define	TEST_OUT_CLR()		TEST_OUT_OUT &= ~TEST_OUT_BIT
#define	TEST_OUT_TGL()		TEST_OUT_OUT ^= TEST_OUT_BIT


// For Intercom
#define INTER_DIR		P2DIR
#define INTER_IN		P2IN
#define INTER_OUT		P2OUT
#define INTER_IES               P2IES
#define INTER_IFG		P2IFG
#define INTER_IE		P2IE
#define INTER_REN		P2REN
#define INTER_BIT		BIT6
#define	INTER_SET()		INTER_OUT |= INTER_BIT
#define	INTER_CLR()		INTER_OUT &= ~INTER_BIT


// For Strob signal
/*
#define STROB_DIR		P2DIR
#define STROB_IN		P2IN
#define STROB_OUT		P2OUT
#define STROB_IES               P2IES
#define STROB_IFG		P2IFG
#define STROB_IE		P2IE
#define STROB_REN		P2REN
#define STROB_BIT		BIT1
*/

// For AMP Gain
#define GAIN_1_DIR		P1DIR
#define GAIN_1_OUT		P1OUT
#define GAIN_1_BIT		BIT3
#define GAIN_2_DIR		P2DIR
#define GAIN_2_OUT		P2OUT
#define GAIN_2_BIT		BIT0

#define	GAIN_1_SET()	        GAIN_1_OUT |=  GAIN_1_BIT
#define	GAIN_1_CLR()	        GAIN_1_OUT &= ~GAIN_1_BIT
#define	GAIN_2_SET()	        GAIN_2_OUT |=  GAIN_2_BIT
#define	GAIN_2_CLR()	        GAIN_2_OUT &= ~GAIN_2_BIT




// For ADC measurement
#define ADC_CH_AMP_1	INCH_1
#define ADC_CH_AMP_2	INCH_0
#define ADC_CH_VCC		INCH_11
#define ADC_CH_TEMP		INCH_10

#define REF1_5V			0


// For IRed LED
#define IRED_DIR   		P2DIR
#define IRED_OUT   		P2OUT
#define IRED_BIT  		BIT5
#define	IRED_SET()		IRED_OUT |= IRED_BIT
#define	IRED_CLR()		IRED_OUT &= ~IRED_BIT



/*********************************************************************************/
/*                                FUNCTIONS                                      */
/*********************************************************************************/
// Function prototipes
void AMP_SetGain(u8 value);
void GPIO_Init(void);
void STROB_IE_Enable(void);
void STROB_IE_Disable(void);

#endif  /* __HARDWARE_H__ */




