/*
 * BitsManipulation.h
 *
 * Created: 12/10/2022 11:54:54 م
 *  Author: FM
 */ 


#ifndef BITSMANIPULATION_H_
#define BITSMANIPULATION_H_


// Set Bit Macro
#define SET_BIT(x,BIT_NO) (x |= (1 << BIT_NO))

// Clear Bit Macro
#define CLEAR_BIT(x,BIT_NO) (x &= ~(1 << BIT_NO))

// Read Bit Macro
#define GET_BIT(x,BIT_NO) ((x & (1 << BIT_NO)) >> BIT_NO)

// Toggle Bit Macro
#define TOGGLE_BIT(x,BIT_NO) (x ^= (1 << BIT_NO))




#endif /* BITSMANIPULATION_H_ */