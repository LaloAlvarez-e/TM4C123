/*
 * FLASH.h
 *
 *  Created on: 3 feb. 2018
 *      Author: InDev
 */

#ifndef FLASH_H_
#define FLASH_H_


#include "stdlib.h"
#include <stdint.h>
#include "SYSCTL.h"

#define FLASH_BASE              (0x400FD000)
#define FLASH_BITBANDING_BASE   (0x42000000)
#define FLASH_OFFSET            (0x000FD000)
#define FLASH_ADDRESS_MAX       (0x00040000)
#define FLASH_ADDRESS_MIN       (0x00000000)
#define FLASH_PAGE_SIZE         (0x00000400)
#define FLASH_PAGE_COUNT        (256)
#define FLASH_ERASEWORLD        (0xFFFFFFFF)
#define FLASH_ERASEHALFWORLD    (0xFFFF)
#define FLASH_ERASEBYTE         (0xFF)


typedef volatile struct
{
    volatile uint32_t OFFSET    :18;
    const    uint32_t reserved  :14;
}FMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   :32;
}FMD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRITE   :1;
    volatile uint32_t ERASE   :1;
    volatile uint32_t MERASE  :1;
    volatile uint32_t COMT    :1;
    const    uint32_t reserved:12;
    volatile uint32_t WRKEY   :16;
}FMC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ARIS     :1;
    volatile const uint32_t PRIS     :1;
    volatile const uint32_t ERIS     :1;
    const    uint32_t       reserved :6;
    volatile const uint32_t VOLTRIS  :1;
    volatile const uint32_t INVDRIS  :1;
    volatile const uint32_t ERRIS    :1;
    const    uint32_t       reserved1:1;
    volatile const uint32_t PROGRIS  :1;
    const    uint32_t       reserved2:18;
}FCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMASK     :1;
    volatile uint32_t PMASK     :1;
    volatile uint32_t EMASK     :1;
    const    uint32_t reserved  :6;
    volatile uint32_t VOLTMASK  :1;
    volatile uint32_t INVDMASK  :1;
    volatile uint32_t ERMASK    :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t PROGMASK  :1;
    const    uint32_t reserved2 :18;
}FCIM_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMISC     :1;
    volatile uint32_t PMISC     :1;
    volatile uint32_t EMISC     :1;
    const    uint32_t reserved  :6;
    volatile uint32_t VOLTMISC  :1;
    volatile uint32_t INVDMISC  :1;
    volatile uint32_t ERMISC    :1;
    const    uint32_t reserved1 :1;
    volatile uint32_t PROGMISC  :1;
    const    uint32_t reserved2 :18;
}FCMISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRBUF   :1;
    const    uint32_t reserved:15;
    volatile uint32_t WRKEY   :16;
}FMC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB0   :1;
    volatile uint32_t FWB1   :1;
    volatile uint32_t FWB2   :1;
    volatile uint32_t FWB3   :1;
    volatile uint32_t FWB4   :1;
    volatile uint32_t FWB5   :1;
    volatile uint32_t FWB6   :1;
    volatile uint32_t FWB7   :1;
    volatile uint32_t FWB8   :1;
    volatile uint32_t FWB9   :1;
    volatile uint32_t FWB10   :1;
    volatile uint32_t FWB11   :1;
    volatile uint32_t FWB12   :1;
    volatile uint32_t FWB13   :1;
    volatile uint32_t FWB14   :1;
    volatile uint32_t FWB15   :1;
    volatile uint32_t FWB16   :1;
    volatile uint32_t FWB17   :1;
    volatile uint32_t FWB18   :1;
    volatile uint32_t FWB19   :1;
    volatile uint32_t FWB20   :1;
    volatile uint32_t FWB21   :1;
    volatile uint32_t FWB22   :1;
    volatile uint32_t FWB23   :1;
    volatile uint32_t FWB24   :1;
    volatile uint32_t FWB25   :1;
    volatile uint32_t FWB26   :1;
    volatile uint32_t FWB27   :1;
    volatile uint32_t FWB28   :1;
    volatile uint32_t FWB29   :1;
    volatile uint32_t FWB30   :1;
    volatile uint32_t FWB31   :1;
}FWBVAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB[32];
}FWBn_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   :32;
}FWB_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      :16;
const    uint32_t       reserved  :16;
}FSIZE_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      :16;
const    uint32_t       reserved  :16;
}SSIZE_TypeDef;


typedef volatile struct
{
volatile const uint32_t SAFERTOS :1;
const    uint32_t       reserved :31;
}ROMSWMAP_TypeDef;




typedef volatile struct
{
    volatile uint32_t OFFSET    [18];
    const    uint32_t reserved  [14];
}BITBANDING_FMA_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   [32];
}BITBANDING_FMD_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRITE   ;
    volatile uint32_t ERASE   ;
    volatile uint32_t MERASE  ;
    volatile uint32_t COMT    ;
    const    uint32_t reserved[12];
    volatile uint32_t WRKEY   [16];
}BITBANDING_FMC_TypeDef;

typedef volatile struct
{
    volatile const uint32_t ARIS     ;
    volatile const uint32_t PRIS     ;
    volatile const uint32_t ERIS     ;
    const    uint32_t       reserved [6];
    volatile const uint32_t VOLTRIS  ;
    volatile const uint32_t INVDRIS  ;
    volatile const uint32_t ERRIS    ;
    const    uint32_t       reserved1;
    volatile const uint32_t PROGRIS  ;
    const    uint32_t       reserved2[18];
}BITBANDING_FCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMASK     ;
    volatile uint32_t PMASK     ;
    volatile uint32_t EMASK     ;
    const    uint32_t reserved  [6];
    volatile uint32_t VOLTMASK  ;
    volatile uint32_t INVDMASK  ;
    volatile uint32_t ERMASK    ;
    const    uint32_t reserved1 ;
    volatile uint32_t PROGMASK  ;
    const    uint32_t reserved2 [18];
}BITBANDING_FCIM_TypeDef;

typedef volatile struct
{
    volatile uint32_t AMISC     ;
    volatile uint32_t PMISC     ;
    volatile uint32_t EMISC     ;
    const    uint32_t reserved  [6];
    volatile uint32_t VOLTMISC  ;
    volatile uint32_t INVDMISC  ;
    volatile uint32_t ERMISC    ;
    const    uint32_t reserved1 ;
    volatile uint32_t PROGMISC  ;
    const    uint32_t reserved2 [18];
}BITBANDING_FCMISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t WRBUF   ;
    const    uint32_t reserved[15];
    volatile uint32_t WRKEY   [16];
}BITBANDING_FMC2_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB0   ;
    volatile uint32_t FWB1   ;
    volatile uint32_t FWB2   ;
    volatile uint32_t FWB3   ;
    volatile uint32_t FWB4   ;
    volatile uint32_t FWB5   ;
    volatile uint32_t FWB6   ;
    volatile uint32_t FWB7   ;
    volatile uint32_t FWB8   ;
    volatile uint32_t FWB9   ;
    volatile uint32_t FWB10   ;
    volatile uint32_t FWB11   ;
    volatile uint32_t FWB12   ;
    volatile uint32_t FWB13   ;
    volatile uint32_t FWB14   ;
    volatile uint32_t FWB15   ;
    volatile uint32_t FWB16   ;
    volatile uint32_t FWB17   ;
    volatile uint32_t FWB18   ;
    volatile uint32_t FWB19   ;
    volatile uint32_t FWB20   ;
    volatile uint32_t FWB21   ;
    volatile uint32_t FWB22   ;
    volatile uint32_t FWB23   ;
    volatile uint32_t FWB24   ;
    volatile uint32_t FWB25   ;
    volatile uint32_t FWB26   ;
    volatile uint32_t FWB27   ;
    volatile uint32_t FWB28   ;
    volatile uint32_t FWB29   ;
    volatile uint32_t FWB30   ;
    volatile uint32_t FWB31   ;
}BITBANDING_FWBVAL_TypeDef;

typedef volatile struct
{
    volatile uint32_t FWB[32][32];
}BITBANDING_FWBn_TypeDef;

typedef volatile struct
{
    volatile uint32_t DATA   [32];
}BITBANDING_FWB_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      [16];
const    uint32_t       reserved  [16];
}BITBANDING_FSIZE_TypeDef;

typedef volatile struct
{
volatile const uint32_t SIZE      [16];
const    uint32_t       reserved  [16];
}BITBANDING_SSIZE_TypeDef;


typedef volatile struct
{
volatile const uint32_t SAFERTOS ;
const    uint32_t       reserved [31];
}BITBANDING_ROMSWMAP_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t           FMA;
        FMA_TypeDef                 FMA_Bit;
    };
    union
    {
        volatile uint32_t           FMD;
        FMD_TypeDef                 FMD_Bit;
    };
    union
    {
        volatile uint32_t           FMC;
        FMC_TypeDef                 FMC_Bit;
    };
    union
    {
        volatile const uint32_t     FCRIS;
        FCRIS_TypeDef               FCRIS_Bit;
    };
    union
    {
        volatile uint32_t           FCIM;
        FCIM_TypeDef                FCIM_Bit;
    };
    union
    {
        volatile uint32_t           FCMISC;
        FCMISC_TypeDef              FCMISC_Bit;
    };
    const uint32_t                  reserved[2];
    union
    {
        volatile uint32_t           FMC2;
        FMC2_TypeDef                FMC2_Bit;
    };
    union
    {
        volatile uint32_t           FWBVAL;
        FWBVAL_TypeDef              FWBVAL_Bit;
    };
    const uint32_t                  reserved1[51];
    union
    {
        volatile uint32_t           FWBn[32];
        FWB_TypeDef                 FWBn_Bit[32];
    };


    const uint32_t                  reserved2[912];
    union
    {
        volatile const uint32_t     FSIZE;
        FSIZE_TypeDef               FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t     SSIZE;
        SSIZE_TypeDef               SSIZE_Bit;
    };
    const uint32_t                  reserved3[2];
    union
    {
        volatile const uint32_t     ROMSWMAP;
        ROMSWMAP_TypeDef            ROMSWMAP_Bit;
    };
}FLASH_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t           FMA[32];
        BITBANDING_FMA_TypeDef      FMA_Bit;
    };
    union
    {
        volatile uint32_t           FMD[32];
        BITBANDING_FMD_TypeDef      FMD_Bit;
    };
    union
    {
        volatile uint32_t           FMC[32];
        BITBANDING_FMC_TypeDef      FMC_Bit;
    };
    union
    {
        volatile const uint32_t     FCRIS[32];
        BITBANDING_FCRIS_TypeDef    FCRIS_Bit;
    };
    union
    {
        volatile uint32_t           FCIM[32];
        BITBANDING_FCIM_TypeDef     FCIM_Bit;
    };
    union
    {
        volatile uint32_t           FCMISC[32];
        BITBANDING_FCMISC_TypeDef   FCMISC_Bit;
    };
    const uint32_t                  reserved[2*32];
    union
    {
        volatile uint32_t           FMC2[32];
        BITBANDING_FMC2_TypeDef     FMC2_Bit;
    };
    union
    {
        volatile uint32_t           FWBVAL[32];
        BITBANDING_FWBVAL_TypeDef   FWBVAL_Bit;
    };
    const uint32_t                  reserved1[51*32];
    union
    {
        volatile uint32_t           FWBn[32][32];
        BITBANDING_FWB_TypeDef      FWBn_Bit[32];
    };


    const uint32_t                  reserved2[912*32];
    union
    {
        volatile const uint32_t     FSIZE[32];
        BITBANDING_FSIZE_TypeDef    FSIZE_Bit;
    };
    union
    {
        volatile const uint32_t     SSIZE[32];
        BITBANDING_SSIZE_TypeDef    SSIZE_Bit;
    };
    const uint32_t                  reserved3[2*32];
    union
    {
        volatile const uint32_t     ROMSWMAP[32];
        BITBANDING_ROMSWMAP_TypeDef ROMSWMAP_Bit;
    };
}BITBANDING_FLASH_TypeDef;

#define FLASH                 (((FLASH_TypeDef*)(FLASH_BASE)))
#define FLASH_BITBANDING      (((BITBANDING_FLASH_TypeDef*)(FLASH_BITBANDING_BASE+(FLASH_OFFSET*32))))


#define FLASH_FMA_OFFSET     (0x0000)
#define FLASH_FMD_OFFSET     (0x0004)
#define FLASH_FMC_OFFSET     (0x0008)
#define FLASH_FCRIS_OFFSET   (0x000C)
#define FLASH_FCIM_OFFSET    (0x0010)
#define FLASH_FCMISC_OFFSET  (0x0014)
#define FLASH_FMC2_OFFSET    (0x0020)
#define FLASH_FWBVAL_OFFSET  (0x0030)
#define FLASH_FWBn_OFFSET    (0x0100)
#define FLASH_FWB0_OFFSET    (0x0100)
#define FLASH_FWB1_OFFSET    (0x0104)
#define FLASH_FWB2_OFFSET    (0x0108)
#define FLASH_FWB3_OFFSET    (0x010C)
#define FLASH_FWB4_OFFSET    (0x0110)
#define FLASH_FWB5_OFFSET    (0x0114)
#define FLASH_FWB6_OFFSET    (0x0118)
#define FLASH_FWB7_OFFSET    (0x011C)
#define FLASH_FWB8_OFFSET    (0x0120)
#define FLASH_FWB9_OFFSET    (0x0124)
#define FLASH_FWB10_OFFSET   (0x0128)
#define FLASH_FWB11_OFFSET   (0x012C)
#define FLASH_FWB12_OFFSET   (0x0130)
#define FLASH_FWB13_OFFSET   (0x0134)
#define FLASH_FWB14_OFFSET   (0x0138)
#define FLASH_FWB15_OFFSET   (0x013C)
#define FLASH_FWB16_OFFSET   (0x0140)
#define FLASH_FWB17_OFFSET   (0x0144)
#define FLASH_FWB18_OFFSET   (0x0148)
#define FLASH_FWB19_OFFSET   (0x014C)
#define FLASH_FWB20_OFFSET   (0x0150)
#define FLASH_FWB21_OFFSET   (0x0154)
#define FLASH_FWB22_OFFSET   (0x0158)
#define FLASH_FWB23_OFFSET   (0x015C)
#define FLASH_FWB24_OFFSET   (0x0160)
#define FLASH_FWB25_OFFSET   (0x0164)
#define FLASH_FWB26_OFFSET   (0x0168)
#define FLASH_FWB27_OFFSET   (0x016C)
#define FLASH_FWB28_OFFSET   (0x0170)
#define FLASH_FWB29_OFFSET   (0x0174)
#define FLASH_FWB30_OFFSET   (0x0178)
#define FLASH_FWB31_OFFSET   (0x017C)
#define FLASH_FSIZE_OFFSET   (0x0FC0)
#define FLASH_SSIZE_OFFSET   (0x0FC4)
#define FLASH_ROMSWMAP_OFFSET (0x0FCC)

/******************************************************************************************
************************************ 1 FMA *********************************************
******************************************************************************************/
#define FLASH_FMA               (((FMA_TypeDef*)(FLASH_BASE+FLASH_FMA_OFFSET )))
#define FLASH_FMA_R             (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMA_OFFSET)))
#define FLASH_BITBANDING_FMA    (((BITBANDING_FMA_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMA_OFFSET)*32))))

//--------
#define FLASH_FMA_R_OFFSET_MASK     (0x0003FFFF)
#define FLASH_FMA_R_OFFSET_BIT      (0)

#define FLASH_FMA_OFFSET_MASK       (0x0003FFFF)
//--------

/******************************************************************************************
************************************ 2 FMD *********************************************
******************************************************************************************/
#define FLASH_FMD               (((FMD_TypeDef*)(FLASH_BASE+FLASH_FMD_OFFSET )))
#define FLASH_FMD_R             (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMD_OFFSET)))
#define FLASH_BITBANDING_FMD    (((BITBANDING_FMD_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMD_OFFSET)*32))))

//--------
#define FLASH_FMD_R_DATA_MASK     (0xFFFFFFFF)
#define FLASH_FMD_R_DATA_BIT      (0)

#define FLASH_FMD_DATA_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 3 FMC *********************************************
******************************************************************************************/
#define FLASH_FMC               (((FMC_TypeDef*)(FLASH_BASE+FLASH_FMC_OFFSET )))
#define FLASH_FMC_R             (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMC_OFFSET)))
#define FLASH_BITBANDING_FMC    (((BITBANDING_FMC_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32))))


//--------
#define FLASH_FMC_R_WRITE_MASK          (0x00000001)
#define FLASH_FMC_R_WRITE_BIT           (0)
#define FLASH_FMC_R_WRITE_COMPLETE      (0x00000000)
#define FLASH_FMC_R_WRITE_NOCOMPLETE    (0x00000001)
#define FLASH_FMC_R_WRITE_WRITE         (0x00000001)

#define FLASH_FMC_WRITE_MASK            (0x00000001)
#define FLASH_FMC_WRITE_COMPLETE        (0x00000000)
#define FLASH_FMC_WRITE_NOCOMPLETE      (0x00000001)
#define FLASH_FMC_WRITE_WRITE           (0x00000001)
//--------

//--------
#define FLASH_FMC_R_ERASE_MASK          (0x00000002)
#define FLASH_FMC_R_ERASE_BIT           (1)
#define FLASH_FMC_R_ERASE_COMPLETE      (0x00000000)
#define FLASH_FMC_R_ERASE_NOCOMPLETE    (0x00000002)
#define FLASH_FMC_R_ERASE_ERASE         (0x00000002)

#define FLASH_FMC_ERASE_MASK            (0x00000001)
#define FLASH_FMC_ERASE_COMPLETE        (0x00000000)
#define FLASH_FMC_ERASE_NOCOMPLETE      (0x00000001)
#define FLASH_FMC_ERASE_ERASE           (0x00000001)
//--------

//--------
#define FLASH_FMC_R_MERASE_MASK          (0x00000004)
#define FLASH_FMC_R_MERASE_BIT           (2)
#define FLASH_FMC_R_MERASE_COMPLETE      (0x00000000)
#define FLASH_FMC_R_MERASE_NOCOMPLETE    (0x00000004)
#define FLASH_FMC_R_MERASE_MERASE        (0x00000004)

#define FLASH_FMC_MERASE_MASK           (0x00000001)
#define FLASH_FMC_MERASE_COMPLETE       (0x00000000)
#define FLASH_FMC_MERASE_NOCOMPLETE     (0x00000001)
#define FLASH_FMC_MERASE_MERASE         (0x00000001)
//--------

//--------
#define FLASH_FMC_R_COMT_MASK           (0x00000008)
#define FLASH_FMC_R_COMT_BIT            (3)
#define FLASH_FMC_R_COMT_COMPLETE       (0x00000000)
#define FLASH_FMC_R_COMT_NOCOMPLETE     (0x00000008)
#define FLASH_FMC_R_COMT_WRITE          (0x00000008)

#define FLASH_FMC_COMT_MASK             (0x00000001)
#define FLASH_FMC_COMT_COMPLETE         (0x00000000)
#define FLASH_FMC_COMT_NOCOMPLETE       (0x00000001)
#define FLASH_FMC_COMT_WRITE            (0x00000001)
//--------

//--------
#define FLASH_FMC_R_WRKEY_MASK          (0xFFFF0000)
#define FLASH_FMC_R_WRKEY_BIT           (16)
#define FLASH_FMC_R_WRKEY_KEY1          (0xA4420000)
#define FLASH_FMC_R_WRKEY_KEY2          (0x71D50000)

#define FLASH_FMC_WRKEY_MASK            (0x0000FFFF)
#define FLASH_FMC_WRKEY_KEY1            (0x0000A442)
#define FLASH_FMC_WRKEY_KEY2            (0x000071D5)
//--------

#define FLASH_BITBANDING_FMC_WRITE     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_WRITE_BIT*4))))
#define FLASH_BITBANDING_FMC_ERASE     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_ERASE_BIT*4))))
#define FLASH_BITBANDING_FMC_MERASE    (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_MERASE_BIT*4))))
#define FLASH_BITBANDING_FMC_COMT      (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC_OFFSET)*32)+(FLASH_FMC_R_COMT_BIT*4))))

/******************************************************************************************
************************************ 4 FCRIS *********************************************
******************************************************************************************/
#define FLASH_FCRIS             (((FCRIS_TypeDef*)(FLASH_BASE+FLASH_FCRIS_OFFSET )))
#define FLASH_FCRIS_R           (*((volatile const uint32_t *)(FLASH_BASE+FLASH_FCRIS_OFFSET)))
#define FLASH_BITBANDING_FCRIS  (((BITBANDING_FCRIS_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32))))

//--------
#define FLASH_FCRIS_R_ARIS_MASK         (0x00000001)
#define FLASH_FCRIS_R_ARIS_BIT          (0)
#define FLASH_FCRIS_R_ARIS_NOACTIVE     (0x00000000)
#define FLASH_FCRIS_R_ARIS_ACTIVE       (0x00000001)

#define FLASH_FCRIS_ARIS_MASK           (0x00000001)
#define FLASH_FCRIS_ARIS_NOACTIVE       (0x00000000)
#define FLASH_FCRIS_ARIS_ACTIVE         (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_PRIS_MASK         (0x00000002)
#define FLASH_FCRIS_R_PRIS_BIT          (1)
#define FLASH_FCRIS_R_PRIS_NOACTIVE     (0x00000000)
#define FLASH_FCRIS_R_PRIS_ACTIVE       (0x00000002)

#define FLASH_FCRIS_PRIS_MASK           (0x00000001)
#define FLASH_FCRIS_PRIS_NOACTIVE       (0x00000000)
#define FLASH_FCRIS_PRIS_ACTIVE         (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_ERIS_MASK         (0x00000004)
#define FLASH_FCRIS_R_ERIS_BIT          (2)
#define FLASH_FCRIS_R_ERIS_NOACTIVE     (0x00000000)
#define FLASH_FCRIS_R_ERIS_ACTIVE       (0x00000004)

#define FLASH_FCRIS_ERIS_MASK           (0x00000001)
#define FLASH_FCRIS_ERIS_NOACTIVE       (0x00000000)
#define FLASH_FCRIS_ERIS_ACTIVE         (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_VOLTRIS_MASK      (0x00000200)
#define FLASH_FCRIS_R_VOLTRIS_BIT       (9)
#define FLASH_FCRIS_R_VOLTRIS_NOACTIVE  (0x00000000)
#define FLASH_FCRIS_R_VOLTRIS_ACTIVE    (0x00000200)

#define FLASH_FCRIS_VOLTRIS_MASK        (0x00000001)
#define FLASH_FCRIS_VOLTRIS_NOACTIVE    (0x00000000)
#define FLASH_FCRIS_VOLTRIS_ACTIVE      (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_INVDRIS_MASK      (0x00000400)
#define FLASH_FCRIS_R_INVDRIS_BIT       (10)
#define FLASH_FCRIS_R_INVDRIS_NOACTIVE  (0x00000000)
#define FLASH_FCRIS_R_INVDRIS_ACTIVE    (0x00000400)

#define FLASH_FCRIS_INVDRIS_MASK        (0x00000001)
#define FLASH_FCRIS_INVDRIS_NOACTIVE    (0x00000000)
#define FLASH_FCRIS_INVDRIS_ACTIVE      (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_ERRIS_MASK        (0x00000800)
#define FLASH_FCRIS_R_ERRIS_BIT         (11)
#define FLASH_FCRIS_R_ERRIS_NOACTIVE    (0x00000000)
#define FLASH_FCRIS_R_ERRIS_ACTIVE      (0x00000800)

#define FLASH_FCRIS_ERRIS_MASK          (0x00000001)
#define FLASH_FCRIS_ERRIS_NOACTIVE      (0x00000000)
#define FLASH_FCRIS_ERRIS_ACTIVE        (0x00000001)
//--------

//--------
#define FLASH_FCRIS_R_PROGRIS_MASK      (0x00002000)
#define FLASH_FCRIS_R_PROGRIS_BIT       (13)
#define FLASH_FCRIS_R_PROGRIS_NOACTIVE  (0x00000000)
#define FLASH_FCRIS_R_PROGRIS_ACTIVE    (0x00002000)

#define FLASH_FCRIS_PROGRIS_MASK        (0x00000001)
#define FLASH_FCRIS_PROGRIS_NOACTIVE    (0x00000000)
#define FLASH_FCRIS_PROGRIS_ACTIVE      (0x00000001)
//--------

#define FLASH_BITBANDING_FCRIS_ARIS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_ARIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_PRIS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_PRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_ERIS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_ERIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_VOLTRIS  (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_VOLTRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_INVDRIS  (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_INVDRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_ERRIS    (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_ERRIS_BIT*4))))
#define FLASH_BITBANDING_FCRIS_PROGRIS  (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCRIS_OFFSET)*32)+(FLASH_FCRIS_R_PROGRIS_BIT*4))))

/******************************************************************************************
************************************ 5 FCIM *********************************************
******************************************************************************************/
#define FLASH_FCIM            (((FCIM_TypeDef*)(FLASH_BASE+FLASH_FCIM_OFFSET )))
#define FLASH_FCIM_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FCIM_OFFSET)))
#define FLASH_BITBANDING_FCIM  (((BITBANDING_FCIM_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32))))

//--------
#define FLASH_FCIM_R_AMASK_MASK         (0x00000001)
#define FLASH_FCIM_R_AMASK_BIT          (0)
#define FLASH_FCIM_R_AMASK_DIS          (0x00000000)
#define FLASH_FCIM_R_AMASK_EN           (0x00000001)

#define FLASH_FCIM_AMASK_MASK           (0x00000001)
#define FLASH_FCIM_AMASK_DIS            (0x00000000)
#define FLASH_FCIM_AMASK_EN             (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_PMASK_MASK         (0x00000002)
#define FLASH_FCIM_R_PMASK_BIT          (1)
#define FLASH_FCIM_R_PMASK_DIS          (0x00000000)
#define FLASH_FCIM_R_PMASK_EN           (0x00000002)

#define FLASH_FCIM_PMASK_MASK           (0x00000001)
#define FLASH_FCIM_PMASK_DIS            (0x00000000)
#define FLASH_FCIM_PMASK_EN             (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_EMASK_MASK         (0x00000004)
#define FLASH_FCIM_R_EMASK_BIT          (2)
#define FLASH_FCIM_R_EMASK_DIS          (0x00000000)
#define FLASH_FCIM_R_EMASK_EN           (0x00000004)

#define FLASH_FCIM_EMASK_MASK           (0x00000001)
#define FLASH_FCIM_EMASK_DIS            (0x00000000)
#define FLASH_FCIM_EMASK_EN             (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_VOLTMASK_MASK      (0x00000200)
#define FLASH_FCIM_R_VOLTMASK_BIT       (9)
#define FLASH_FCIM_R_VOLTMASK_DIS       (0x00000000)
#define FLASH_FCIM_R_VOLTMASK_EN        (0x00000200)

#define FLASH_FCIM_VOLTMASK_MASK        (0x00000001)
#define FLASH_FCIM_VOLTMASK_DIS         (0x00000000)
#define FLASH_FCIM_VOLTMASK_EN          (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_INVDMASK_MASK      (0x00000400)
#define FLASH_FCIM_R_INVDMASK_BIT       (10)
#define FLASH_FCIM_R_INVDMASK_DIS       (0x00000000)
#define FLASH_FCIM_R_INVDMASK_EN        (0x00000400)

#define FLASH_FCIM_INVDMASK_MASK        (0x00000001)
#define FLASH_FCIM_INVDMASK_DIS         (0x00000000)
#define FLASH_FCIM_INVDMASK_EN          (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_ERMASK_MASK        (0x00000800)
#define FLASH_FCIM_R_ERMASK_BIT         (11)
#define FLASH_FCIM_R_ERMASK_DIS         (0x00000000)
#define FLASH_FCIM_R_ERMASK_EN          (0x00000800)

#define FLASH_FCIM_ERMASK_MASK          (0x00000001)
#define FLASH_FCIM_ERMASK_DIS           (0x00000000)
#define FLASH_FCIM_ERMASK_EN            (0x00000001)
//--------

//--------
#define FLASH_FCIM_R_PROGMASK_MASK      (0x00002000)
#define FLASH_FCIM_R_PROGMASK_BIT       (13)
#define FLASH_FCIM_R_PROGMASK_DIS       (0x00000000)
#define FLASH_FCIM_R_PROGMASK_EN        (0x00002000)

#define FLASH_FCIM_PROGMASK_MASK        (0x00000001)
#define FLASH_FCIM_PROGMASK_DIS         (0x00000000)
#define FLASH_FCIM_PROGMASK_EN          (0x00000001)
//--------

#define FLASH_BITBANDING_FCIM_AMASK     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_AMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_PMASK     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_PMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_EMASK     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_EMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_VOLTMASK  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_VOLTMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_INVDMASK  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_INVDMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_ERMASK    (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_ERMASK_BIT*4))))
#define FLASH_BITBANDING_FCIM_PROGMASK  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCIM_OFFSET)*32)+(FLASH_FCIM_R_PROGMASK_BIT*4))))

/******************************************************************************************
************************************ 6 FCMISC *********************************************
******************************************************************************************/
#define FLASH_FCMISC                (((FCMISC_TypeDef*)(FLASH_BASE+FLASH_FCMISC_OFFSET )))
#define FLASH_FCMISC_R              (*((volatile uint32_t *)(FLASH_BASE+FLASH_FCMISC_OFFSET)))
#define FLASH_BITBANDING_FCMISC     (((BITBANDING_FCMISC_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32))))

//--------
#define FLASH_FCMISC_R_AMISC_MASK       (0x00000001)
#define FLASH_FCMISC_R_AMISC_BIT        (0)
#define FLASH_FCMISC_R_AMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_AMISC_OCCUR      (0x00000001)
#define FLASH_FCMISC_R_AMISC_CLEAR      (0x00000001)

#define FLASH_FCMISC_AMISC_MASK         (0x00000001)
#define FLASH_FCMISC_AMISC_NOOCCUR      (0x00000000)
#define FLASH_FCMISC_AMISC_OCCUR        (0x00000001)
#define FLASH_FCMISC_AMISC_CLEAR        (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_PMISC_MASK       (0x00000002)
#define FLASH_FCMISC_R_PMISC_BIT        (1)
#define FLASH_FCMISC_R_PMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_PMISC_OCCUR      (0x00000002)
#define FLASH_FCMISC_R_PMISC_CLEAR      (0x00000002)

#define FLASH_FCMISC_PMISC_MASK         (0x00000001)
#define FLASH_FCMISC_PMISC_NOOCCUR      (0x00000000)
#define FLASH_FCMISC_PMISC_OCCUR        (0x00000001)
#define FLASH_FCMISC_PMISC_CLEAR        (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_EMISC_MASK       (0x00000004)
#define FLASH_FCMISC_R_EMISC_BIT        (2)
#define FLASH_FCMISC_R_EMISC_NOOCCUR    (0x00000000)
#define FLASH_FCMISC_R_EMISC_OCCUR      (0x00000004)
#define FLASH_FCMISC_R_EMISC_CLEAR      (0x00000004)

#define FLASH_FCMISC_EMISC_MASK         (0x00000001)
#define FLASH_FCMISC_EMISC_NOOCCUR      (0x00000000)
#define FLASH_FCMISC_EMISC_OCCUR        (0x00000001)
#define FLASH_FCMISC_EMISC_CLEAR        (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_VOLTMISC_MASK    (0x00000200)
#define FLASH_FCMISC_R_VOLTMISC_BIT     (9)
#define FLASH_FCMISC_R_VOLTMISC_NOOCCUR (0x00000000)
#define FLASH_FCMISC_R_VOLTMISC_OCCUR   (0x00000200)
#define FLASH_FCMISC_R_VOLTMISC_CLEAR   (0x00000200)

#define FLASH_FCMISC_VOLTMISC_MASK      (0x00000001)
#define FLASH_FCMISC_VOLTMISC_NOOCCUR   (0x00000000)
#define FLASH_FCMISC_VOLTMISC_OCCUR     (0x00000001)
#define FLASH_FCMISC_VOLTMISC_CLEAR     (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_INVDMISC_MASK    (0x00000400)
#define FLASH_FCMISC_R_INVDMISC_BIT     (10)
#define FLASH_FCMISC_R_INVDMISC_NOOCCUR (0x00000000)
#define FLASH_FCMISC_R_INVDMISC_OCCUR   (0x00000400)
#define FLASH_FCMISC_R_INVDMISC_CLEAR   (0x00000400)

#define FLASH_FCMISC_INVDMISC_MASK      (0x00000001)
#define FLASH_FCMISC_INVDMISC_NOOCCUR   (0x00000000)
#define FLASH_FCMISC_INVDMISC_OCCUR     (0x00000001)
#define FLASH_FCMISC_INVDMISC_CLEAR     (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_ERMISC_MASK      (0x00000800)
#define FLASH_FCMISC_R_ERMISC_BIT       (11)
#define FLASH_FCMISC_R_ERMISC_NOOCCUR   (0x00000000)
#define FLASH_FCMISC_R_ERMISC_OCCUR     (0x00000800)
#define FLASH_FCMISC_R_ERMISC_CLEAR     (0x00000800)

#define FLASH_FCMISC_ERMISC_MASK        (0x00000001)
#define FLASH_FCMISC_ERMISC_NOOCCUR     (0x00000000)
#define FLASH_FCMISC_ERMISC_OCCUR       (0x00000001)
#define FLASH_FCMISC_ERMISC_CLEAR       (0x00000001)
//--------

//--------
#define FLASH_FCMISC_R_PROGMISC_MASK    (0x0002000)
#define FLASH_FCMISC_R_PROGMISC_BIT     (13)
#define FLASH_FCMISC_R_PROGMISC_NOOCCUR (0x00000000)
#define FLASH_FCMISC_R_PROGMISC_OCCUR   (0x00002000)
#define FLASH_FCMISC_R_PROGMISC_CLEAR   (0x00002000)

#define FLASH_FCMISC_PROGMISC_MASK      (0x00000001)
#define FLASH_FCMISC_PROGMISC_NOOCCUR   (0x00000000)
#define FLASH_FCMISC_PROGMISC_OCCUR     (0x00000001)
#define FLASH_FCMISC_PROGMISC_CLEAR     (0x00000001)
//--------

#define FLASH_BITBANDING_FCMISC_AMISC     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_AMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_PMISC     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_PMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_EMISC     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_EMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_VOLTMISC  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_VOLTMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_INVDMISC  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_INVDMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_ERMISC    (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_ERMISC_BIT*4))))
#define FLASH_BITBANDING_FCMISC_PROGMISC  (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FCMISC_OFFSET)*32)+(FLASH_FCMISC_R_PROGMISC_BIT*4))))

/******************************************************************************************
************************************ 7 FMC2 *********************************************
******************************************************************************************/
#define FLASH_FMC2              (((FMC2_TypeDef*)(FLASH_BASE+FLASH_FMC2_OFFSET )))
#define FLASH_FMC2_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FMC2_OFFSET)))
#define FLASH_BITBANDING_FMC2   (((BITBANDING_FMC2_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC2_OFFSET)*32))))

//--------
#define FLASH_FMC2_R_WRBUF_MASK         (0x00000001)
#define FLASH_FMC2_R_WRBUF_BIT          (0)
#define FLASH_FMC2_R_WRBUF_COMPLETE     (0x00000000)
#define FLASH_FMC2_R_WRBUF_NOCOMPLETE   (0x00000001)
#define FLASH_FMC2_R_WRBUF_WRITE        (0x00000001)

#define FLASH_FMC2_WRBUF_MASK           (0x00000001)
#define FLASH_FMC2_WRBUF_COMPLETE       (0x00000000)
#define FLASH_FMC2_WRBUF_NOCOMPLETE     (0x00000001)
#define FLASH_FMC2_WRBUF_WRITE          (0x00000001)
//--------

//--------
#define FLASH_FMC2_R_WRKEY_MASK         (0xFFFF0000)
#define FLASH_FMC2_R_WRKEY_BIT          (16)
#define FLASH_FMC2_R_WRKEY_KEY1         (0xA4420000)
#define FLASH_FMC2_R_WRKEY_KEY2         (0x71D50000)

#define FLASH_FMC2_WRKEY_MASK           (0x0000FFFF)
#define FLASH_FMC2_WRKEY_KEY1           (0x0000A442)
#define FLASH_FMC2_WRKEY_KEY2           (0x000071D5)
//--------

#define FLASH_BITBANDING_FMC2_WRBUF     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FMC2_OFFSET)*32)+(FLASH_FMC2_R_WRBUF_BIT*4))))

/******************************************************************************************
************************************ 8 FWBVAL *********************************************
******************************************************************************************/
#define FLASH_FWBVAL            (((FWBVAL_TypeDef*)(FLASH_BASE+FLASH_FWBVAL_OFFSET )))
#define FLASH_FWBVAL_R          (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWBVAL_OFFSET)))
#define FLASH_BITBANDING_FWBVAL   (((BITBANDING_FWBVAL_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32))))

//--------
#define FLASH_FWBVAL_R_FWB0_MASK        (0x00000001)
#define FLASH_FWBVAL_R_FWB0_BIT         (0)
#define FLASH_FWBVAL_R_FWB0_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB0_NEWDATA     (0x00000001)

#define FLASH_FWBVAL_FWB0_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB0_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB0_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB1_MASK        (0x00000002)
#define FLASH_FWBVAL_R_FWB1_BIT         (1)
#define FLASH_FWBVAL_R_FWB1_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB1_NEWDATA     (0x00000002)

#define FLASH_FWBVAL_FWB1_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB1_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB1_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB2_MASK        (0x00000004)
#define FLASH_FWBVAL_R_FWB2_BIT         (2)
#define FLASH_FWBVAL_R_FWB2_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB2_NEWDATA     (0x00000004)

#define FLASH_FWBVAL_FWB2_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB2_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB2_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB3_MASK        (0x00000008)
#define FLASH_FWBVAL_R_FWB3_BIT         (3)
#define FLASH_FWBVAL_R_FWB3_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB3_NEWDATA     (0x00000008)

#define FLASH_FWBVAL_FWB3_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB3_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB3_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB4_MASK        (0x00000010)
#define FLASH_FWBVAL_R_FWB4_BIT         (4)
#define FLASH_FWBVAL_R_FWB4_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB4_NEWDATA     (0x00000010)

#define FLASH_FWBVAL_FWB4_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB4_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB4_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB5_MASK        (0x00000020)
#define FLASH_FWBVAL_R_FWB5_BIT         (5)
#define FLASH_FWBVAL_R_FWB5_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB5_NEWDATA     (0x00000020)

#define FLASH_FWBVAL_FWB5_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB5_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB5_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB6_MASK        (0x00000040)
#define FLASH_FWBVAL_R_FWB6_BIT         (6)
#define FLASH_FWBVAL_R_FWB6_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB6_NEWDATA     (0x00000040)

#define FLASH_FWBVAL_FWB6_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB6_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB6_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB7_MASK        (0x00000080)
#define FLASH_FWBVAL_R_FWB7_BIT         (7)
#define FLASH_FWBVAL_R_FWB7_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB7_NEWDATA     (0x00000080)

#define FLASH_FWBVAL_FWB7_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB7_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB7_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB8_MASK        (0x00000100)
#define FLASH_FWBVAL_R_FWB8_BIT         (8)
#define FLASH_FWBVAL_R_FWB8_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB8_NEWDATA     (0x00000100)

#define FLASH_FWBVAL_FWB8_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB8_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB8_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB9_MASK        (0x00000200)
#define FLASH_FWBVAL_R_FWB9_BIT         (9)
#define FLASH_FWBVAL_R_FWB9_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB9_NEWDATA     (0x00000200)

#define FLASH_FWBVAL_FWB9_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB9_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB9_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB10_MASK        (0x00000400)
#define FLASH_FWBVAL_R_FWB10_BIT         (10)
#define FLASH_FWBVAL_R_FWB10_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB10_NEWDATA     (0x00000400)

#define FLASH_FWBVAL_FWB10_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB10_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB10_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB11_MASK        (0x00000800)
#define FLASH_FWBVAL_R_FWB11_BIT         (11)
#define FLASH_FWBVAL_R_FWB11_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB11_NEWDATA     (0x00000800)

#define FLASH_FWBVAL_FWB11_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB11_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB11_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB12_MASK        (0x00001000)
#define FLASH_FWBVAL_R_FWB12_BIT         (12)
#define FLASH_FWBVAL_R_FWB12_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB12_NEWDATA     (0x00001000)

#define FLASH_FWBVAL_FWB12_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB12_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB12_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB13_MASK        (0x00002000)
#define FLASH_FWBVAL_R_FWB13_BIT         (13)
#define FLASH_FWBVAL_R_FWB13_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB13_NEWDATA     (0x00002000)

#define FLASH_FWBVAL_FWB13_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB13_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB13_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB14_MASK        (0x00004000)
#define FLASH_FWBVAL_R_FWB14_BIT         (14)
#define FLASH_FWBVAL_R_FWB14_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB14_NEWDATA     (0x00004000)

#define FLASH_FWBVAL_FWB14_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB14_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB14_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB15_MASK        (0x00008000)
#define FLASH_FWBVAL_R_FWB15_BIT         (15)
#define FLASH_FWBVAL_R_FWB15_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB15_NEWDATA     (0x00008000)

#define FLASH_FWBVAL_FWB15_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB15_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB15_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB16_MASK        (0x00010000)
#define FLASH_FWBVAL_R_FWB16_BIT         (16)
#define FLASH_FWBVAL_R_FWB16_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB16_NEWDATA     (0x00010000)

#define FLASH_FWBVAL_FWB16_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB16_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB16_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB17_MASK        (0x00020000)
#define FLASH_FWBVAL_R_FWB17_BIT         (17)
#define FLASH_FWBVAL_R_FWB17_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB17_NEWDATA     (0x00020000)

#define FLASH_FWBVAL_FWB17_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB17_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB17_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB18_MASK        (0x00040000)
#define FLASH_FWBVAL_R_FWB18_BIT         (18)
#define FLASH_FWBVAL_R_FWB18_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB18_NEWDATA     (0x00040000)

#define FLASH_FWBVAL_FWB18_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB18_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB18_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB19_MASK        (0x00080000)
#define FLASH_FWBVAL_R_FWB19_BIT         (19)
#define FLASH_FWBVAL_R_FWB19_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB19_NEWDATA     (0x00080000)

#define FLASH_FWBVAL_FWB19_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB19_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB19_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB20_MASK        (0x00100000)
#define FLASH_FWBVAL_R_FWB20_BIT         (20)
#define FLASH_FWBVAL_R_FWB20_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB20_NEWDATA     (0x00100000)

#define FLASH_FWBVAL_FWB20_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB20_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB20_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB21_MASK        (0x00200000)
#define FLASH_FWBVAL_R_FWB21_BIT         (21)
#define FLASH_FWBVAL_R_FWB21_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB21_NEWDATA     (0x00200000)

#define FLASH_FWBVAL_FWB21_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB21_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB21_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB22_MASK        (0x00400000)
#define FLASH_FWBVAL_R_FWB22_BIT         (22)
#define FLASH_FWBVAL_R_FWB22_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB22_NEWDATA     (0x00400000)

#define FLASH_FWBVAL_FWB22_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB22_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB22_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB23_MASK        (0x00800000)
#define FLASH_FWBVAL_R_FWB23_BIT         (23)
#define FLASH_FWBVAL_R_FWB23_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB23_NEWDATA     (0x00800000)

#define FLASH_FWBVAL_FWB23_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB23_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB23_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB24_MASK        (0x01000000)
#define FLASH_FWBVAL_R_FWB24_BIT         (24)
#define FLASH_FWBVAL_R_FWB24_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB24_NEWDATA     (0x01000000)

#define FLASH_FWBVAL_FWB24_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB24_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB24_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB25_MASK        (0x02000000)
#define FLASH_FWBVAL_R_FWB25_BIT         (25)
#define FLASH_FWBVAL_R_FWB25_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB25_NEWDATA     (0x02000000)

#define FLASH_FWBVAL_FWB25_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB25_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB25_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB26_MASK        (0x04000000)
#define FLASH_FWBVAL_R_FWB26_BIT         (26)
#define FLASH_FWBVAL_R_FWB26_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB26_NEWDATA     (0x04000000)

#define FLASH_FWBVAL_FWB26_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB26_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB26_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB27_MASK        (0x08000000)
#define FLASH_FWBVAL_R_FWB27_BIT         (27)
#define FLASH_FWBVAL_R_FWB27_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB27_NEWDATA     (0x08000000)

#define FLASH_FWBVAL_FWB27_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB27_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB27_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB28_MASK        (0x10000000)
#define FLASH_FWBVAL_R_FWB28_BIT         (28)
#define FLASH_FWBVAL_R_FWB28_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB28_NEWDATA     (0x10000000)

#define FLASH_FWBVAL_FWB28_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB28_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB28_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB29_MASK        (0x20000000)
#define FLASH_FWBVAL_R_FWB29_BIT         (29)
#define FLASH_FWBVAL_R_FWB29_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB29_NEWDATA     (0x20000000)

#define FLASH_FWBVAL_FWB29_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB29_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB29_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB30_MASK        (0x40000000)
#define FLASH_FWBVAL_R_FWB30_BIT         (30)
#define FLASH_FWBVAL_R_FWB30_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB30_NEWDATA     (0x40000000)

#define FLASH_FWBVAL_FWB30_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB30_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB30_NEWDATA       (0x00000001)
//--------

//--------
#define FLASH_FWBVAL_R_FWB31_MASK        (0x80000000)
#define FLASH_FWBVAL_R_FWB31_BIT         (31)
#define FLASH_FWBVAL_R_FWB31_NODATA      (0x00000000)
#define FLASH_FWBVAL_R_FWB31_NEWDATA     (0x80000000)

#define FLASH_FWBVAL_FWB31_MASK          (0x00000001)
#define FLASH_FWBVAL_FWB31_NODATA        (0x00000000)
#define FLASH_FWBVAL_FWB31_NEWDATA       (0x00000001)
//--------


#define FLASH_BITBANDING_FWBVAL_FWB0     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB0_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB1     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB1_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB2     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB2_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB3     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB3_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB4     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB4_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB5     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB5_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB6     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB6_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB7     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB7_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB8     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB8_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB9     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB9_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB10     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB10_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB11     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB11_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB12     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB12_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB13     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB13_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB14     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB14_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB15     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB15_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB16     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB16_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB17     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB17_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB18     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB18_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB19     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB19_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB20     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB20_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB21     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB21_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB22     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB22_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB23     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB23_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB24     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB24_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB25     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB25_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB26     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB26_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB27     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB27_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB28     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB28_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB29     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB29_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB30     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB30_BIT*4))))
#define FLASH_BITBANDING_FWBVAL_FWB31     (*((volatile uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBVAL_OFFSET)*32)+(FLASH_FWBVAL_R_FWB31_BIT*4))))


/******************************************************************************************
************************************ 9-40 FWBn *********************************************
******************************************************************************************/
#define FLASH_FWBn              (((FWBn_TypeDef*)(FLASH_BASE+FLASH_FWBn_OFFSET )))
#define FLASH_BITBANDING_FWBn   (((BITBANDING_FWBn_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWBn_OFFSET)*32))))

#define FLASH_FWB0              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB0_OFFSET )))
#define FLASH_FWB0_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB0_OFFSET)))
#define FLASH_BITBANDING_FWB0   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB0_OFFSET)*32))))

#define FLASH_FWB1              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB1_OFFSET )))
#define FLASH_FWB1_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB1_OFFSET)))
#define FLASH_BITBANDING_FWB1   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB1_OFFSET)*32))))

#define FLASH_FWB2              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB2_OFFSET )))
#define FLASH_FWB2_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB2_OFFSET)))
#define FLASH_BITBANDING_FWB2   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB2_OFFSET)*32))))

#define FLASH_FWB3              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB3_OFFSET )))
#define FLASH_FWB3_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB3_OFFSET)))
#define FLASH_BITBANDING_FWB3   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB3_OFFSET)*32))))

#define FLASH_FWB4              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB4_OFFSET )))
#define FLASH_FWB4_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB4_OFFSET)))
#define FLASH_BITBANDING_FWB4   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB4_OFFSET)*32))))

#define FLASH_FWB5              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB5_OFFSET )))
#define FLASH_FWB5_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB5_OFFSET)))
#define FLASH_BITBANDING_FWB5   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB5_OFFSET)*32))))

#define FLASH_FWB6              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB6_OFFSET )))
#define FLASH_FWB6_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB6_OFFSET)))
#define FLASH_BITBANDING_FWB6   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB6_OFFSET)*32))))

#define FLASH_FWB7              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB7_OFFSET )))
#define FLASH_FWB7_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB7_OFFSET)))
#define FLASH_BITBANDING_FWB7   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB7_OFFSET)*32))))

#define FLASH_FWB8              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB8_OFFSET )))
#define FLASH_FWB8_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB8_OFFSET)))
#define FLASH_BITBANDING_FWB8   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB8_OFFSET)*32))))

#define FLASH_FWB9              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB9_OFFSET )))
#define FLASH_FWB9_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB9_OFFSET)))
#define FLASH_BITBANDING_FWB9   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB9_OFFSET)*32))))

#define FLASH_FWB10              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB10_OFFSET )))
#define FLASH_FWB10_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB10_OFFSET)))
#define FLASH_BITBANDING_FWB10   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB10_OFFSET)*32))))

#define FLASH_FWB11              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB11_OFFSET )))
#define FLASH_FWB11_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB11_OFFSET)))
#define FLASH_BITBANDING_FWB11   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB11_OFFSET)*32))))

#define FLASH_FWB12              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB12_OFFSET )))
#define FLASH_FWB12_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB12_OFFSET)))
#define FLASH_BITBANDING_FWB12   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB12_OFFSET)*32))))

#define FLASH_FWB13              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB13_OFFSET )))
#define FLASH_FWB13_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB13_OFFSET)))
#define FLASH_BITBANDING_FWB13   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB13_OFFSET)*32))))

#define FLASH_FWB14              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB14_OFFSET )))
#define FLASH_FWB14_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB14_OFFSET)))
#define FLASH_BITBANDING_FWB14   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB14_OFFSET)*32))))

#define FLASH_FWB15              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB15_OFFSET )))
#define FLASH_FWB15_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB15_OFFSET)))
#define FLASH_BITBANDING_FWB15   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB15_OFFSET)*32))))

#define FLASH_FWB16              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB16_OFFSET )))
#define FLASH_FWB16_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB16_OFFSET)))
#define FLASH_BITBANDING_FWB16   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB16_OFFSET)*32))))

#define FLASH_FWB17              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB17_OFFSET )))
#define FLASH_FWB17_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB17_OFFSET)))
#define FLASH_BITBANDING_FWB17   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB17_OFFSET)*32))))

#define FLASH_FWB18              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB18_OFFSET )))
#define FLASH_FWB18_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB18_OFFSET)))
#define FLASH_BITBANDING_FWB18   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB18_OFFSET)*32))))

#define FLASH_FWB19              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB19_OFFSET )))
#define FLASH_FWB19_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB19_OFFSET)))
#define FLASH_BITBANDING_FWB19   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB19_OFFSET)*32))))

#define FLASH_FWB20              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB20_OFFSET )))
#define FLASH_FWB20_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB20_OFFSET)))
#define FLASH_BITBANDING_FWB20   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB20_OFFSET)*32))))

#define FLASH_FWB21              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB21_OFFSET )))
#define FLASH_FWB21_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB21_OFFSET)))
#define FLASH_BITBANDING_FWB21   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB21_OFFSET)*32))))

#define FLASH_FWB22              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB22_OFFSET )))
#define FLASH_FWB22_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB22_OFFSET)))
#define FLASH_BITBANDING_FWB22   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB22_OFFSET)*32))))

#define FLASH_FWB23              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB23_OFFSET )))
#define FLASH_FWB23_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB23_OFFSET)))
#define FLASH_BITBANDING_FWB23   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB23_OFFSET)*32))))

#define FLASH_FWB24              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB24_OFFSET )))
#define FLASH_FWB24_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB24_OFFSET)))
#define FLASH_BITBANDING_FWB24   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB24_OFFSET)*32))))

#define FLASH_FWB25              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB25_OFFSET )))
#define FLASH_FWB25_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB25_OFFSET)))
#define FLASH_BITBANDING_FWB25   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB25_OFFSET)*32))))

#define FLASH_FWB26              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB26_OFFSET )))
#define FLASH_FWB26_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB26_OFFSET)))
#define FLASH_BITBANDING_FWB26   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB26_OFFSET)*32))))

#define FLASH_FWB27              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB27_OFFSET )))
#define FLASH_FWB27_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB27_OFFSET)))
#define FLASH_BITBANDING_FWB27   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB27_OFFSET)*32))))

#define FLASH_FWB28              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB28_OFFSET )))
#define FLASH_FWB28_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB28_OFFSET)))
#define FLASH_BITBANDING_FWB28   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB28_OFFSET)*32))))

#define FLASH_FWB29              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB29_OFFSET )))
#define FLASH_FWB29_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB29_OFFSET)))
#define FLASH_BITBANDING_FWB29   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB29_OFFSET)*32))))

#define FLASH_FWB30              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB30_OFFSET )))
#define FLASH_FWB30_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB30_OFFSET)))
#define FLASH_BITBANDING_FWB30   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB30_OFFSET)*32))))

#define FLASH_FWB31              (((FWB_TypeDef*)(FLASH_BASE+FLASH_FWB31_OFFSET )))
#define FLASH_FWB31_R            (*((volatile uint32_t *)(FLASH_BASE+FLASH_FWB31_OFFSET)))
#define FLASH_BITBANDING_FWB31   (((BITBANDING_FWB_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FWB31_OFFSET)*32))))

/******************************************************************************************
************************************ 41 FSIZE *********************************************
******************************************************************************************/
#define FLASH_FSIZE            (((FSIZE_TypeDef*)(FLASH_BASE+FLASH_FSIZE_OFFSET )))
#define FLASH_FSIZE_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_FSIZE_OFFSET)))
#define FLASH_BITBANDING_FSIZE   (((BITBANDING_FSIZE_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_FSIZE_OFFSET)*32))))

//--------
#define FLASH_FSIZE_R_SIZE_MASK     (0x0000FFFF)
#define FLASH_FSIZE_R_SIZE_BIT      (0)
#define FLASH_FSIZE_R_SIZE_256KB    (0x0000007F)

#define FLASH_FSIZE_SIZE_MASK       (0x0000FFFF)
#define FLASH_FSIZE_SIZE_256KB      (0x0000007F)
//--------

/******************************************************************************************
************************************ 42 SSIZE *********************************************
******************************************************************************************/
#define FLASH_SSIZE            (((SSIZE_TypeDef*)(FLASH_BASE+FLASH_SSIZE_OFFSET )))
#define FLASH_SSIZE_R          (*((volatile const uint32_t *)(FLASH_BASE+FLASH_SSIZE_OFFSET)))
#define FLASH_BITBANDING_SSIZE   (((BITBANDING_SSIZE_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_SSIZE_OFFSET)*32))))

//--------
#define FLASH_SSIZE_R_SIZE_MASK     (0x0000FFFF)
#define FLASH_SSIZE_R_SIZE_BIT      (0)
#define FLASH_SSIZE_R_SIZE_32KB     (0x0000007F)

#define FLASH_SSIZE_SIZE_MASK       (0x0000FFFF)
#define FLASH_SSIZE_SIZE_32KB       (0x0000007F)
//--------

/******************************************************************************************
************************************ 43 ROMSWMAP *********************************************
******************************************************************************************/
#define FLASH_ROMSWMAP              (((ROMSWMAP_TypeDef*)(FLASH_BASE+FLASH_ROMSWMAP_OFFSET )))
#define FLASH_ROMSWMAP_R            (*((volatile const uint32_t *)(FLASH_BASE+FLASH_ROMSWMAP_OFFSET)))
#define FLASH_BITBANDING_ROMSWMAP   (((BITBANDING_ROMSWMAP_TypeDef*)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_ROMSWMAP_OFFSET)*32))))

//--------
#define FLASH_ROMSWMAP_R_SAFERTOS_MASK      (0x00000001)
#define FLASH_ROMSWMAP_R_SAFERTOS_BIT       (0)
#define FLASH_ROMSWMAP_R_SAFERTOS_NOPRESENT (0x00000000)
#define FLASH_ROMSWMAP_R_SAFERTOS_PRESENT   (0x00000001)

#define FLASH_ROMSWMAP_SAFERTOS_MASK       (0x00000001)
#define FLASH_ROMSWMAP_SAFERTOS_NOPRESENT  (0x00000000)
#define FLASH_ROMSWMAP_SAFERTOS_PRESENT    (0x00000001)
//--------

#define FLASH_BITBANDING_ROMSWMAP_SAFERTOS     (*((volatile const uint32_t *)(FLASH_BITBANDING_BASE+((FLASH_OFFSET+FLASH_ROMSWMAP_OFFSET)*32)+(0*4))))


typedef enum
{
    FLASH_enOK =0,
    FLASH_enERROR=1,
}FLASH_nSTATUS;

FLASH_nSTATUS FLASH__enWaitWrite(void);
FLASH_nSTATUS FLASH__enWaitBufWrite(void);
FLASH_nSTATUS FLASH__enWaitPageErase(void);
FLASH_nSTATUS FLASH__enWaitMassErase(void);

FLASH_nSTATUS FLASH__enPageErasePos(uint32_t u32Page);
FLASH_nSTATUS FLASH__enPageErase(uint32_t u32Address);
FLASH_nSTATUS FLASH__enMassErase(void);

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteBuf(uint32_t* pu32Data,uint32_t u32Address, uint32_t u32Count);

FLASH_nSTATUS FLASH__enWriteWorld(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteByte(uint8_t u8Data, uint32_t u32Address);

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count);

#endif /* FLASH_H_ */
