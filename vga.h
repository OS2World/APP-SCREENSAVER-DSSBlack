/*====================================================================
This file is part of the Blackout screen saver.       v1.00 1996-06-29
See README file for details.

This file is "stolen" from the VESA package for emx written by
Johannes Martin.
====================================================================*/

/* VGA index register ports */
#define CRT_I   0x3D4   /* CRT Controller Index - color emulation */
#define ATT_IW  0x3C0   /* Attribute Controller Index & Data Write Register */
#define GRA_I   0x3CE   /* Graphics Controller Index */
#define SEQ_I   0x3C4   /* Sequencer Index */
#define PEL_IW  0x3C8   /* PEL Write Index */
#define PEL_IR  0x3C7   /* PEL Read Index */

/* VGA data register ports */
#define CRT_D   0x3D5   /* CRT Controller Data Register - color emulation */
#define ATT_R   0x3C1   /* Attribute Controller Data Read Register */
#define GRA_D   0x3CF   /* Graphics Controller Data Register */
#define SEQ_D   0x3C5   /* Sequencer Data Register */
#define MIS_R   0x3CC   /* Misc Output Read Register */
#define MIS_W   0x3C2   /* Misc Output Write Register */
#define IS1_R   0x3DA   /* Input Status Register 1 - color emulation */
#define PEL_D   0x3C9   /* PEL Data Register */

#define SEG_SELECT 0x3CD /* ET4000 Segment Selection */


#define FIRST_PORT (0x3c2)
#define LAST_PORT  (0x3d5)

