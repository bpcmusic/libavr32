#define WW 				0x10
#define WW_PRESET 		0x11
#define WW_POS			0x12
#define WW_SYNC			0x13
#define WW_START		0x14
#define WW_END			0x15
#define WW_PMODE		0x16
#define WW_PATTERN		0x17
#define WW_QPATTERN		0x18
#define WW_MUTE1		0x19
#define WW_MUTE2		0x1A
#define WW_MUTE3		0x1B
#define WW_MUTE4		0x1C
#define WW_MUTEA		0x1D
#define WW_MUTEB		0x1E

#define MP 				0x30
#define MP_PRESET		0x31
#define MP_RESET		0x32
#define MP_SYNC			0x33
#define MP_MUTE			0x34
#define MP_UNMUTE		0x35
#define MP_FREEZE		0x36
#define MP_UNFREEZE		0x37
#define MP_STOP			0x38

#define ES 				0x50
#define ES_PRESET		0x51
#define ES_MODE			0x52
#define ES_CLOCK		0x53
#define ES_RESET		0x54
#define ES_PATTERN		0x55
#define ES_TRANS		0x56
#define ES_STOP			0x57
#define ES_TRIPLE		0x58
#define ES_MAGIC		0x59

#define ORCA			0x40
#define ORCA_TRACK		0x40
#define ORCA_CLOCK		0x41
#define ORCA_DIVISOR	0x42
#define ORCA_PHASE		0x43
#define ORCA_RESET		0x44
#define ORCA_WEIGHT		0x45
#define ORCA_MUTE		0x46
#define ORCA_SCALE		0x47
#define ORCA_BANK		0x48
#define ORCA_PRESET		0x49
#define ORCA_RELOAD		0x4A
#define ORCA_ROTATES	0x4B
#define ORCA_ROTATEW	0x4C
#define ORCA_GRESET		0x4D
#define ORCA_CVA		0x4E
#define ORCA_CVB		0x4F

// TELEX_O

#define		TO 					0x60
#define 	TO_1				0x60
#define 	TO_2				0x61
#define 	TO_3				0x62
#define 	TO_4				0x63
#define 	TO_5				0x64
#define 	TO_6				0x65
#define 	TO_7				0x66
#define 	TO_8				0x67

#define 	TO_TR				0x01
#define 	TO_TR_TOG			0x02
#define 	TO_TR_TIME			0x03
#define 	TO_TR_PULSE			0x04

#define 	TO_CV				0x05
#define 	TO_CV_SLEW			0x06
#define 	TO_CV_SET			0x07
#define 	TO_CV_OFF			0x08

#define		TO_TR_POL			0x09

#define		TO_KILL				0x0A

#define		TO_CV_QT			0x0B
#define		TO_CV_QT_SET		0x0C
#define		TO_CV_NN			0x0D
#define		TO_CV_NN_SET		0x0E
#define		TO_CV_SCALE			0x0F

#define		TO_TR_FORMAT		0x10
#define		TO_CV_FORMAT		0x11

#define		TO_CV_FREQ			0x12
#define		TO_CV_WAVE			0x13
#define		TO_CV_SYMM			0x14
#define		TO_CV_SHAPE			0x15

/*
#define		TO_CYCLE	0x1E
#define		TO_RESET	0x1F
#define		TO_ENV		0x22
*/

// TELEXi

#define		TI 					0x68
#define 	TI_1				0x68
#define 	TI_2				0x69
#define 	TI_3				0x6A
#define 	TI_4				0x6B
#define 	TI_5				0x6C
#define 	TI_6				0x6D
#define 	TI_7				0x6E
#define 	TI_8				0x6F

#define		TI_IN_QT			0x00
#define		TI_IN_NN			0x01
#define		TI_IN_SCALE			0x02

#define		TI_PARAM_QT			0x03
#define		TI_PARAM_NN			0x04
#define		TI_PARAM_SCALE		0x05

#define		TI_IN_CALIBRATE		0x06
#define		TI_PARAM_CALIBRATE	0x07
#define		TI_STORE			0x08
#define		TI_RESET			0x09

