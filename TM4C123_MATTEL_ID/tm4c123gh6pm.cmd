/******************************************************************************
 *
 * Default Linker Command file for the Texas Instruments TM4C123GH6PM
 *
 * This is derived from revision 15071 of the TivaWare Library.
 *
 *****************************************************************************/

--retain=g_pfnVectors

MEMORY
{
    FLASH (RX)  : origin = 0x00000000, length = 0x00038000
    MATTEL(RX)  : origin = 0x00038000, length = 0x00001000
    MATTEL1(RX) : origin = 0x00039000, length = 0x00001000
    SRAM  (RWX) : origin = 0x20000000, length = 0x00007C00
    DMA   (RWX) : origin = 0x20007C00, length = 0x00000200
    DMAALT(RWX): origin = 0x20007E00, length = 0x00000200
}

/* The following command line options are set as part of the CCS project.    */
/* If you are building using the command line, or for some reason want to    */
/* define them here, you can uncomment and modify these lines as needed.     */
/* If you are using CCS for building, it is probably better to make any such */
/* modifications in your CCS project and leave this file alone.              */
/*                                                                           */
/* --heap_size=0                                                             */
--stack_size=10000
/* --library=rtsv7M4_T_le_eabi.lib                                           */

/* Section allocation in memory */

SECTIONS
{
    .intvecs:   > 0x00000000
    .text   :   > FLASH
    .const  :   > FLASH
    .cinit  :   > FLASH
    .pinit  :   > FLASH
    .init_array : > FLASH

    .vtable :   > 0x20000000
    .mattel : 	> MATTEL
    .mattel1: 	> MATTEL1
    .dma    :   > DMA
    .dmaalt :   > DMAALT
    .data   :   > SRAM
    .bss    :   > SRAM
    .sysmem :   > SRAM
    .stack  :   > SRAM
}

__STACK_TOP = __stack + 512;
