#include "DIO.h"
#include "std_macros.h"

void seven_seg_vinit_bcd(unsigned char portname)
{
	DIO_vsetPINDir(portname,0,1);
	DIO_vsetPINDir(portname,1,1);
	DIO_vsetPINDir(portname,2,1);
	DIO_vsetPINDir(portname,3,1);
}

void seven_seg_write_bcd(unsigned char portname,unsigned char value,unsigned char pinnumber)
{
	DIO_write_nibble(portname,value,pinnumber);
}