/*
 * HIB.h
 *
 *  Created on: 29/03/2020
 *      Author: vyldram
 */

#ifndef HEADER_DRIVER_HIB_H_
#define HEADER_DRIVER_HIB_H_


#include <stdint.h>
#include <NVIC.h>
#include <SYSCTL.h>

#define HIB_BASE            (0x400FC000)
#define HIB_BASE_BITBANDING (0x42000000)
#define HIB_OFFSET          (0x000FC000)

typedef volatile struct
{
    volatile const uint32_t RTCC          :32;
}HIBRTCC_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCM0          :32;
}HIBRTCM0_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCLD          :32;
}HIBRTCLD_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCEN        :1;
    volatile uint32_t HIBREQ       :1;
    const    uint32_t reserved     :1;
    volatile uint32_t RTCWEN       :1;
    volatile uint32_t PINWEN       :1;
    const    uint32_t reserved1    :1;
    volatile uint32_t CLK32EN      :1;
    volatile uint32_t VABORT       :1;
    volatile uint32_t VDD3ON       :1;
    volatile uint32_t BATWKEN      :1;
    volatile uint32_t BATCHK       :1;
    const    uint32_t reserved2    :2;
    volatile uint32_t VBATSEL      :2;
    const    uint32_t reserved3    :1;
    volatile uint32_t OSCBYP       :1;
    volatile uint32_t OSCDRV       :1;
    const    uint32_t  reserved4    :13;
    volatile const uint32_t WRC          :1;
}HIBCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   :1;
    const    uint32_t reserved  :1;
    volatile uint32_t LOWBAT    :1;
    volatile uint32_t EXTW      :1;
    volatile uint32_t WC        :1;
    const    uint32_t reserved1 :27;
}HIBIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   :1;
    const    uint32_t       reserved  :1;
    volatile const uint32_t LOWBAT    :1;
    volatile const uint32_t EXTW      :1;
    volatile const uint32_t WC        :1;
    const    uint32_t       reserved1 :27;
}HIBRIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   :1;
    const    uint32_t       reserved  :1;
    volatile const uint32_t LOWBAT    :1;
    volatile const uint32_t EXTW      :1;
    volatile const uint32_t WC        :1;
    const    uint32_t       reserved1 :27;
}HIBMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   :1;
    const    uint32_t reserved  :1;
    volatile uint32_t LOWBAT    :1;
    volatile uint32_t EXTW      :1;
    volatile uint32_t WC        :1;
    const    uint32_t reserved1 :27;
}HIBIC_TypeDef;

typedef volatile struct
{
    volatile uint32_t TRIM   :16;
}HIBRTCT_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCSSC   :15;
    const    uint32_t       reserved :1;
    volatile uint32_t       RTCSSM   :15;
    const    uint32_t       reserved1:1;

}HIBRTCSS_TypeDef;

typedef volatile struct
{
    volatile uint32_t HIBDATA[16];

}HIBDATA_ARRAY_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTD   :32;

}HIBDATA_TypeDef;


typedef volatile struct
{
    volatile const uint32_t RTCC          [32];
}HIBRTCC_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCM0          [32];
}HIBRTCM0_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCLD          [32];
}HIBRTCLD_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCEN        ;
    volatile uint32_t HIBREQ       ;
    const    uint32_t reserved     ;
    volatile uint32_t RTCWEN       ;
    volatile uint32_t PINWEN       ;
    const    uint32_t reserved1    ;
    volatile uint32_t CLK32EN      ;
    volatile uint32_t VABORT       ;
    volatile uint32_t VDD3ON       ;
    volatile uint32_t BATWKEN      ;
    volatile uint32_t BATCHK       ;
    const    uint32_t reserved2    [2];
    volatile uint32_t VBATSEL      [2];
    const    uint32_t reserved3    ;
    volatile uint32_t OSCBYP       ;
    volatile uint32_t OSCDRV       ;
    const    uint32_t  reserved4    [13];
    volatile const uint32_t WRC          ;
}HIBCTL_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   ;
    const    uint32_t reserved  ;
    volatile uint32_t LOWBAT    ;
    volatile uint32_t EXTW      ;
    volatile uint32_t WC        ;
    const    uint32_t reserved1 [27];
}HIBIM_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   ;
    const    uint32_t       reserved  ;
    volatile const uint32_t LOWBAT    ;
    volatile const uint32_t EXTW      ;
    volatile const uint32_t WC        ;
    const    uint32_t       reserved1 [27];
}HIBRIS_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCALT0   ;
    const    uint32_t       reserved  ;
    volatile const uint32_t LOWBAT    ;
    volatile const uint32_t EXTW      ;
    volatile const uint32_t WC        ;
    const    uint32_t       reserved1 [27];
}HIBMIS_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTCALT0   ;
    const    uint32_t reserved  ;
    volatile uint32_t LOWBAT    ;
    volatile uint32_t EXTW      ;
    volatile uint32_t WC        ;
    const    uint32_t reserved1 [27];
}HIBIC_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t TRIM   [16];
}HIBRTCT_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RTCSSC   [15];
    const    uint32_t       reserved ;
    volatile uint32_t       RTCSSM   [15];
    const    uint32_t       reserved1;

}HIBRTCSS_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t HIBDATA[16][32];

}HIBDATA_ARRAY_BITBANDING_TypeDef;

typedef volatile struct
{
    volatile uint32_t RTD   [32];

}HIBDATA_BITBANDING_TypeDef;

typedef volatile struct
{
    union
    {
        volatile const uint32_t     HIBRTCC;
        HIBRTCC_TypeDef             HIBRTCC_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCM0;
        HIBRTCM0_TypeDef            HIBRTCM0_Bit;
    };
    const uint32_t                  reserved[1];
    union
    {
        volatile uint32_t           HIBRTCLD;
        HIBRTCLD_TypeDef            HIBRTCLD_Bit;
    };
    union
    {
        volatile uint32_t           HIBCTL;
        HIBCTL_TypeDef              HIBCTL_Bit;
    };
    union
    {
        volatile uint32_t           HIBIM;
        HIBIM_TypeDef               HIBIM_Bit;
    };
    union
    {
        volatile const uint32_t     HIBRIS;
        HIBRIS_TypeDef              HIBRIS_Bit;
    };
    union
    {
        volatile const uint32_t     HIBMIS;
        HIBMIS_TypeDef              HIBMIS_Bit;
    };
    union
    {
        volatile uint32_t           HIBIC;
        HIBIC_TypeDef               HIBIC_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCT;
        HIBRTCT_TypeDef             HIBRTCT_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCSS;
        HIBRTCSS_TypeDef            HIBRTCSS_Bit;
    };
    const uint32_t                  reserved1[1];
    union
    {
        volatile uint32_t           HIBDATA[16];
        HIBDATA_TypeDef             HIBDATA_Bit[16];
    };
}HIB_TypeDef;


typedef volatile struct
{
    union
    {
        volatile const uint32_t             HIBRTCC[32];
        HIBRTCC_BITBANDING_TypeDef          HIBRTCC_Bit;
    };
    union
    {
        volatile uint32_t                   HIBRTCM0[32];
        HIBRTCM0_BITBANDING_TypeDef         HIBRTCM0_Bit;
    };
    const uint32_t                          reserved[1*32];
    union
    {
        volatile uint32_t                   HIBRTCLD[32];
        HIBRTCLD_BITBANDING_TypeDef         HIBRTCLD_Bit;
    };
    union
    {
        volatile uint32_t                   HIBCTL[32];
        HIBCTL_BITBANDING_TypeDef           HIBCTL_Bit;
    };
    union
    {
        volatile uint32_t                   HIBIM[32];
        HIBIM_BITBANDING_TypeDef            HIBIM_Bit;
    };
    union
    {
        volatile const uint32_t             HIBRIS[32];
        HIBRIS_BITBANDING_TypeDef           HIBRIS_Bit;
    };
    union
    {
        volatile const uint32_t             HIBMIS[32];
        HIBMIS_BITBANDING_TypeDef           HIBMIS_Bit;
    };
    union
    {
        volatile uint32_t                   HIBIC[32];
        HIBIC_BITBANDING_TypeDef            HIBIC_Bit;
    };
    union
    {
        volatile uint32_t                   HIBRTCT[32];
        HIBRTCT_BITBANDING_TypeDef          HIBRTCT_Bit;
    };
    union
    {
        volatile uint32_t                   HIBRTCSS[32];
        HIBRTCSS_BITBANDING_TypeDef         HIBRTCSS_Bit;
    };
    const uint32_t                          reserved1[1*32];
    union
    {
        volatile uint32_t                   HIBDATA[16][32];
        HIBDATA_BITBANDING_TypeDef          HIBDATA_Bit[16];
    };
}HIB_BITBANDING_TypeDef;;

#define HIB                 (((HIB_TypeDef*)(HIB_BASE)))
#define HIB_BITBANDING      (((HIB_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+(HIB_OFFSET*32))))


#define HIB_HIBRTCC_OFFSET     (0x0000)
#define HIB_HIBRTCM0_OFFSET    (0x0004)
#define HIB_HIBRTCLD_OFFSET    (0x000C)
#define HIB_HIBCTL_OFFSET      (0x0010)
#define HIB_HIBIM_OFFSET       (0x0014)
#define HIB_HIBRIS_OFFSET      (0x0018)
#define HIB_HIBMIS_OFFSET      (0x001C)
#define HIB_HIBIC_OFFSET       (0x0020)
#define HIB_HIBRTCT_OFFSET     (0x0024)
#define HIB_HIBRTCSS_OFFSET    (0x0028)
#define HIB_HIBDATA_OFFSET     (0x0030)
#define HIB_HIBDATA0_OFFSET    (0x0030)
#define HIB_HIBDATA1_OFFSET    (0x0034)
#define HIB_HIBDATA2_OFFSET    (0x0038)
#define HIB_HIBDATA3_OFFSET    (0x003C)
#define HIB_HIBDATA4_OFFSET    (0x0040)
#define HIB_HIBDATA5_OFFSET    (0x0044)
#define HIB_HIBDATA6_OFFSET    (0x0048)
#define HIB_HIBDATA7_OFFSET    (0x004C)
#define HIB_HIBDATA8_OFFSET    (0x0050)
#define HIB_HIBDATA9_OFFSET    (0x0054)
#define HIB_HIBDATA10_OFFSET   (0x0058)
#define HIB_HIBDATA11_OFFSET   (0x005C)
#define HIB_HIBDATA12_OFFSET   (0x0060)
#define HIB_HIBDATA13_OFFSET   (0x0064)
#define HIB_HIBDATA14_OFFSET   (0x0068)
#define HIB_HIBDATA15_OFFSET   (0x006C)

/******************************************************************************************
************************************ 1 HIBRTCC *********************************************
******************************************************************************************/
#define HIB_HIBRTCC            (((HIBRTCC_TypeDef*)(HIB_BASE+HIB_HIBRTCC_OFFSET )))
#define HIB_HIBRTCC_R          (*((volatile const uint32_t *)(HIB_BASE+HIB_HIBRTCC_OFFSET)))
#define HIB_HIBRTCC_BITBANDING      (((HIBRTCC_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRTCC_OFFSET)*32))))


//--------
#define HIB_HIBRTCC_R_RTCC_MASK     (0xFFFFFFFF)
#define HIB_HIBRTCC_R_RTCC_BIT      (0)

#define HIB_HIBRTCC_RTCC_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 2 HIBRTCM0 *********************************************
******************************************************************************************/

#define HIB_HIBRTCM0            (((HIBRTCM0_TypeDef*)(HIB_BASE+HIB_HIBRTCM0_OFFSET )))
#define HIB_HIBRTCM0_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCM0_OFFSET)))
#define HIB_HIBRTCM0_BITBANDING      (((HIBRTCM0_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRTCM0_OFFSET)*32))))

//--------
#define HIB_HIBRTCM0_R_RTCM0_MASK     (0xFFFFFFFF)
#define HIB_HIBRTCM0_R_RTCM0_BIT      (0)

#define HIB_HIBRTCM0_RTCM0_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 3 HIBRTCLD *********************************************
******************************************************************************************/

#define HIB_HIBRTCLD            (((HIBRTCLD_TypeDef*)(HIB_BASE+HIB_HIBRTCLD_OFFSET )))
#define HIB_HIBRTCLD_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCLD_OFFSET)))
#define HIB_HIBRTCLD_BITBANDING      (((HIBRTCLD_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRTCLD_OFFSET)*32))))

//--------
#define HIB_HIBRTCLD_R_RTCLD_MASK     (0xFFFFFFFF)
#define HIB_HIBRTCLD_R_RTCLD_BIT      (0)

#define HIB_HIBRTCLD_RTCLD_MASK       (0xFFFFFFFF)
//--------

/******************************************************************************************
************************************ 4 HIBCTL *********************************************
******************************************************************************************/

#define HIB_HIBCTL            (((HIBCTL_TypeDef*)(HIB_BASE+HIB_HIBCTL_OFFSET )))
#define HIB_HIBCTL_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBCTL_OFFSET)))
#define HIB_HIBCTL_BITBANDING      (((HIBCTL_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32))))


//--------
#define HIB_HIBCTL_R_RTCEN_MASK     (0x00000001)
#define HIB_HIBCTL_R_RTCEN_BIT      (0)
#define HIB_HIBCTL_R_RTCEN_DIS      (0x00000000)
#define HIB_HIBCTL_R_RTCEN_EN       (0x00000001)

#define HIB_HIBCTL_RTCEN_MASK       (0x00000001)
#define HIB_HIBCTL_RTCEN_DIS        (0x00000000)
#define HIB_HIBCTL_RTCEN_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_HIBREQ_MASK     (0x00000002)
#define HIB_HIBCTL_R_HIBREQ_BIT      (1)
#define HIB_HIBCTL_R_HIBREQ_NOREQ    (0x00000000)
#define HIB_HIBCTL_R_HIBREQ_INIT     (0x00000002)

#define HIB_HIBCTL_HIBREQ_MASK       (0x00000001)
#define HIB_HIBCTL_HIBREQ_NOREQ      (0x00000000)
#define HIB_HIBCTL_HIBREQ_INIT       (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_RTCWEN_MASK     (0x00000008)
#define HIB_HIBCTL_R_RTCWEN_BIT      (3)
#define HIB_HIBCTL_R_RTCWEN_DIS      (0x00000000)
#define HIB_HIBCTL_R_RTCWEN_EN       (0x00000008)

#define HIB_HIBCTL_RTCWEN_MASK       (0x00000001)
#define HIB_HIBCTL_RTCWEN_DIS        (0x00000000)
#define HIB_HIBCTL_RTCWEN_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_PINWEN_MASK     (0x00000010)
#define HIB_HIBCTL_R_PINWEN_BIT      (4)
#define HIB_HIBCTL_R_PINWEN_DIS      (0x00000000)
#define HIB_HIBCTL_R_PINWEN_EN       (0x00000010)

#define HIB_HIBCTL_PINWEN_MASK       (0x00000001)
#define HIB_HIBCTL_PINWEN_DIS        (0x00000000)
#define HIB_HIBCTL_PINWEN_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_CLK32EN_MASK     (0x00000040)
#define HIB_HIBCTL_R_CLK32EN_BIT      (6)
#define HIB_HIBCTL_R_CLK32EN_DIS      (0x00000000)
#define HIB_HIBCTL_R_CLK32EN_EN       (0x00000040)

#define HIB_HIBCTL_CLK32EN_MASK       (0x00000001)
#define HIB_HIBCTL_CLK32EN_DIS        (0x00000000)
#define HIB_HIBCTL_CLK32EN_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_VABORT_MASK     (0x00000080)
#define HIB_HIBCTL_R_VABORT_BIT      (7)
#define HIB_HIBCTL_R_VABORT_DIS      (0x00000000)
#define HIB_HIBCTL_R_VABORT_EN       (0x00000080)

#define HIB_HIBCTL_VABORT_MASK       (0x00000001)
#define HIB_HIBCTL_VABORT_DIS        (0x00000000)
#define HIB_HIBCTL_VABORT_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_VDD3ON_MASK     (0x00000100)
#define HIB_HIBCTL_R_VDD3ON_BIT      (8)
#define HIB_HIBCTL_R_VDD3ON_DIS      (0x00000000)
#define HIB_HIBCTL_R_VDD3ON_EN       (0x00000100)

#define HIB_HIBCTL_VDD3ON_MASK       (0x00000001)
#define HIB_HIBCTL_VDD3ON_DIS        (0x00000000)
#define HIB_HIBCTL_VDD3ON_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_BATWKEN_MASK     (0x00000200)
#define HIB_HIBCTL_R_BATWKEN_BIT      (9)
#define HIB_HIBCTL_R_BATWKEN_DIS      (0x00000000)
#define HIB_HIBCTL_R_BATWKEN_EN       (0x00000200)

#define HIB_HIBCTL_BATWKEN_MASK       (0x00000001)
#define HIB_HIBCTL_BATWKEN_DIS        (0x00000000)
#define HIB_HIBCTL_BATWKEN_EN         (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_BATCHK_MASK       (0x00000400)
#define HIB_HIBCTL_R_BATCHK_BIT        (10)
#define HIB_HIBCTL_R_BATCHK_NOACTIVE   (0x00000000)
#define HIB_HIBCTL_R_BATCHK_NOCOMPLETE (0x00000400)
#define HIB_HIBCTL_R_BATCHK_INIT       (0x00000400)

#define HIB_HIBCTL_BATCHK_MASK        (0x00000001)
#define HIB_HIBCTL_BATCHK_NOACTIVE    (0x00000000)
#define HIB_HIBCTL_BATCHK_NOCOMPLETE  (0x00000001)
#define HIB_HIBCTL_BATCHK_INIT        (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_VBATSEL_MASK       (0x00006000)
#define HIB_HIBCTL_R_VBATSEL_BIT        (13)
#define HIB_HIBCTL_R_VBATSEL_1900mV     (0x00000000)
#define HIB_HIBCTL_R_VBATSEL_2100mV     (0x00002000)
#define HIB_HIBCTL_R_VBATSEL_2300mV     (0x00004000)
#define HIB_HIBCTL_R_VBATSEL_2500mV     (0x00006000)

#define HIB_HIBCTL_VBATSEL_MASK        (0x00000003)
#define HIB_HIBCTL_VBATSEL_1900mV      (0x00000000)
#define HIB_HIBCTL_VBATSEL_2100mV      (0x00000001)
#define HIB_HIBCTL_VBATSEL_2300mV      (0x00000002)
#define HIB_HIBCTL_VBATSEL_2500mV      (0x00000003)
//--------

//--------
#define HIB_HIBCTL_R_OSCBYP_MASK     (0x00010000)
#define HIB_HIBCTL_R_OSCBYP_BIT      (16)
#define HIB_HIBCTL_R_OSCBYP_EN       (0x00000000)
#define HIB_HIBCTL_R_OSCBYP_DIS      (0x00010000)

#define HIB_HIBCTL_OSCBYP_MASK       (0x00000001)
#define HIB_HIBCTL_OSCBYP_EN         (0x00000000)
#define HIB_HIBCTL_OSCBYP_DIS        (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_OSCDRV_MASK     (0x00020000)
#define HIB_HIBCTL_R_OSCDRV_BIT      (17)
#define HIB_HIBCTL_R_OSCDRV_12pF     (0x00000000)
#define HIB_HIBCTL_R_OSCDRV_24pF     (0x00020000)

#define HIB_HIBCTL_OSCDRV_MASK       (0x00000001)
#define HIB_HIBCTL_OSCDRV_12pF       (0x00000000)
#define HIB_HIBCTL_OSCDRV_24pF       (0x00000001)
//--------

//--------
#define HIB_HIBCTL_R_WRC_MASK     (0x80000000)
#define HIB_HIBCTL_R_WRC_BIT      (31)
#define HIB_HIBCTL_R_WRC_BUSY     (0x00000000)
#define HIB_HIBCTL_R_WRC_RDY      (0x80000000)

#define HIB_HIBCTL_WRC_MASK       (0x00000001)
#define HIB_HIBCTL_WRC_BUSY       (0x00000000)
#define HIB_HIBCTL_WRC_RDY        (0x00000001)
//--------


#define HIB_HIBCTL_RTCEN_BITBANDING   (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_RTCEN_BIT*4))))
#define HIB_HIBCTL_HIBREQ_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_HIBREQ_BIT*4))))
#define HIB_HIBCTL_RTCWEN_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_RTCWEN_BIT*4))))
#define HIB_HIBCTL_PINWEN_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_PINWEN_BIT*4))))
#define HIB_HIBCTL_CLK32EN_BITBANDING (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_CLK32EN_BIT*4))))
#define HIB_HIBCTL_VABORT_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_VABORT_BIT*4))))
#define HIB_HIBCTL_VDD3ON_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_VDD3ON_BIT*4))))
#define HIB_HIBCTL_BATWKEN_BITBANDING (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_BATWKEN_BIT*4))))
#define HIB_HIBCTL_BATCHK_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_BATCHK_BIT*4))))
#define HIB_HIBCTL_OSCBYP_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_OSCBYP_BIT*4))))
#define HIB_HIBCTL_OSCDRV_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_OSCDRV_BIT*4))))
#define HIB_HIBCTL_WRC_BITBANDING     (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBCTL_OFFSET)*32)+(HIB_HIBCTL_R_WRC_BIT*4))))

/******************************************************************************************
************************************ 5 HIBIM *********************************************
******************************************************************************************/

#define HIB_HIBIM            (((HIBIM_TypeDef*)(HIB_BASE+HIB_HIBIM_OFFSET )))
#define HIB_HIBIM_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBIM_OFFSET)))
#define HIB_HIBIM_BITBANDING      (((HIBIM_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32))))


//--------
#define HIB_HIBIM_R_RTCALT0_MASK       (0x00000001)
#define HIB_HIBIM_R_RTCALT0_BIT        (0)
#define HIB_HIBIM_R_RTCALT0_DIS        (0x00000000)
#define HIB_HIBIM_R_RTCALT0_EN         (0x00000001)

#define HIB_HIBIM_RTCALT0_MASK       (0x00000001)
#define HIB_HIBIM_RTCALT0_DIS        (0x00000000)
#define HIB_HIBIM_RTCALT0_EN         (0x00000001)
//--------

//--------
#define HIB_HIBIM_R_LOWBAT_MASK       (0x00000004)
#define HIB_HIBIM_R_LOWBAT_BIT        (2)
#define HIB_HIBIM_R_LOWBAT_DIS        (0x00000000)
#define HIB_HIBIM_R_LOWBAT_EN         (0x00000004)

#define HIB_HIBIM_LOWBAT_MASK       (0x00000001)
#define HIB_HIBIM_LOWBAT_DIS        (0x00000000)
#define HIB_HIBIM_LOWBAT_EN         (0x00000001)
//--------

//--------
#define HIB_HIBIM_R_EXTW_MASK       (0x00000008)
#define HIB_HIBIM_R_EXTW_BIT        (3)
#define HIB_HIBIM_R_EXTW_DIS        (0x00000000)
#define HIB_HIBIM_R_EXTW_EN         (0x00000008)

#define HIB_HIBIM_EXTW_MASK       (0x00000001)
#define HIB_HIBIM_EXTW_DIS        (0x00000000)
#define HIB_HIBIM_EXTW_EN         (0x00000001)
//--------

//--------
#define HIB_HIBIM_R_WC_MASK       (0x00000010)
#define HIB_HIBIM_R_WC_BIT        (4)
#define HIB_HIBIM_R_WC_DIS        (0x00000000)
#define HIB_HIBIM_R_WC_EN         (0x00000010)

#define HIB_HIBIM_WC_MASK       (0x00000001)
#define HIB_HIBIM_WC_DIS        (0x00000000)
#define HIB_HIBIM_WC_EN         (0x00000001)
//--------

#define HIB_HIBIM_RTCALT0_BITBANDING (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_RTCALT0_BIT*4))))
#define HIB_HIBIM_LOWBAT_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_LOWBAT_BIT*4))))
#define HIB_HIBIM_EXTW_BITBANDING    (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_EXTW_BIT*4))))
#define HIB_HIBIM_WC_BITBANDING      (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIM_OFFSET)*32)+(HIB_HIBIM_R_WC_BIT*4))))

/******************************************************************************************
************************************ 6 HIBRIS *********************************************
******************************************************************************************/


#define HIB_HIBRIS            (((HIBRIS_TypeDef*)(HIB_BASE+HIB_HIBRIS_OFFSET )))
#define HIB_HIBRIS_R          (*((volatile const uint32_t *)(HIB_BASE+HIB_HIBRIS_OFFSET)))
#define HIB_HIBRIS_BITBANDING      (((HIBRIS_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32))))


//--------
#define HIB_HIBRIS_R_RTCALT0_MASK       (0x00000001)
#define HIB_HIBRIS_R_RTCALT0_BIT        (0)
#define HIB_HIBRIS_R_RTCALT0_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_R_RTCALT0_ACTIVE     (0x00000001)

#define HIB_HIBRIS_RTCALT0_MASK       (0x00000001)
#define HIB_HIBRIS_RTCALT0_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_RTCALT0_ACTIVE     (0x00000001)
//--------

//--------
#define HIB_HIBRIS_R_LOWBAT_MASK       (0x00000004)
#define HIB_HIBRIS_R_LOWBAT_BIT        (2)
#define HIB_HIBRIS_R_LOWBAT_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_R_LOWBAT_ACTIVE     (0x00000004)

#define HIB_HIBRIS_LOWBAT_MASK       (0x00000001)
#define HIB_HIBRIS_LOWBAT_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_LOWBAT_ACTIVE     (0x00000001)
//--------

//--------
#define HIB_HIBRIS_R_EXTW_MASK       (0x00000008)
#define HIB_HIBRIS_R_EXTW_BIT        (3)
#define HIB_HIBRIS_R_EXTW_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_R_EXTW_ACTIVE     (0x00000008)

#define HIB_HIBRIS_EXTW_MASK       (0x00000001)
#define HIB_HIBRIS_EXTW_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_EXTW_ACTIVE     (0x00000001)
//--------

//--------
#define HIB_HIBRIS_R_WC_MASK       (0x00000010)
#define HIB_HIBRIS_R_WC_BIT        (4)
#define HIB_HIBRIS_R_WC_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_R_WC_ACTIVE     (0x00000010)

#define HIB_HIBRIS_WC_MASK       (0x00000001)
#define HIB_HIBRIS_WC_NOACTIVE   (0x00000000)
#define HIB_HIBRIS_WC_ACTIVE     (0x00000001)
//--------


#define HIB_HIBRIS_RTCALT0_BITBANDING (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_RTCALT0_BIT*4))))
#define HIB_HIBRIS_LOWBAT_BITBANDING  (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_LOWBAT_BIT*4))))
#define HIB_HIBRIS_EXTW_BITBANDING    (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_EXTW_BIT*4))))
#define HIB_HIBRIS_WC_BITBANDING      (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRIS_OFFSET)*32)+(HIB_HIBRIS_R_WC_BIT*4))))

/******************************************************************************************
************************************ 7 HIBMIS *********************************************
******************************************************************************************/

#define HIB_HIBMIS            (((HIBMIS_TypeDef*)(HIB_BASE+HIB_HIBMIS_OFFSET )))
#define HIB_HIBMIS_R          (*((volatile const uint32_t *)(HIB_BASE+HIB_HIBMIS_OFFSET)))
#define HIB_HIBMIS_BITBANDING      (((HIBMIS_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32))))


//--------
#define HIB_HIBMIS_R_RTCALT0_MASK       (0x00000001)
#define HIB_HIBMIS_R_RTCALT0_BIT        (0)
#define HIB_HIBMIS_R_RTCALT0_NOOCCUR   (0x00000000)
#define HIB_HIBMIS_R_RTCALT0_OCCUR     (0x00000001)

#define HIB_HIBMIS_RTCALT0_MASK       (0x00000001)
#define HIB_HIBMIS_RTCALT0_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_RTCALT0_OCCUR      (0x00000001)
//--------

//--------
#define HIB_HIBMIS_R_LOWBAT_MASK       (0x00000004)
#define HIB_HIBMIS_R_LOWBAT_BIT        (2)
#define HIB_HIBMIS_R_LOWBAT_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_R_LOWBAT_OCCUR      (0x00000004)

#define HIB_HIBMIS_LOWBAT_MASK       (0x00000001)
#define HIB_HIBMIS_LOWBAT_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_LOWBAT_OCCUR      (0x00000001)
//--------

//--------
#define HIB_HIBMIS_R_EXTW_MASK       (0x00000008)
#define HIB_HIBMIS_R_EXTW_BIT        (3)
#define HIB_HIBMIS_R_EXTW_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_R_EXTW_OCCUR      (0x00000008)

#define HIB_HIBMIS_EXTW_MASK       (0x00000001)
#define HIB_HIBMIS_EXTW_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_EXTW_OCCUR      (0x00000001)
//--------

//--------
#define HIB_HIBMIS_R_WC_MASK       (0x00000010)
#define HIB_HIBMIS_R_WC_BIT        (4)
#define HIB_HIBMIS_R_WC_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_R_WC_OCCUR      (0x00000010)

#define HIB_HIBMIS_WC_MASK       (0x00000001)
#define HIB_HIBMIS_WC_NOOCCUR    (0x00000000)
#define HIB_HIBMIS_WC_OCCUR      (0x00000001)
//--------

#define HIB_HIBMIS_RTCALT0_BITBANDING (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_RTCALT0_BIT*4))))
#define HIB_HIBMIS_LOWBAT_BITBANDING  (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_LOWBAT_BIT*4))))
#define HIB_HIBMIS_EXTW_BITBANDING    (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_EXTW_BIT*4))))
#define HIB_HIBMIS_WC_BITBANDING      (*((volatile const uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBMIS_OFFSET)*32)+(HIB_HIBMIS_R_WC_BIT*4))))

/******************************************************************************************
************************************ 8 HIBIC *********************************************
******************************************************************************************/

#define HIB_HIBIC            (((HIBIC_TypeDef*)(HIB_BASE+HIB_HIBIC_OFFSET )))
#define HIB_HIBIC_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBIC_OFFSET)))
#define HIB_HIBIC_BITBANDING      (((HIBIC_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32))))

//--------
#define HIB_HIBIC_R_RTCALT0_MASK       (0x00000001)
#define HIB_HIBIC_R_RTCALT0_BIT        (0)
#define HIB_HIBIC_R_RTCALT0_CLEAR      (0x00000001)

#define HIB_HIBIC_RTCALT0_MASK       (0x00000001)
#define HIB_HIBIC_RTCALT0_CLEAR      (0x00000001)
//--------

//--------
#define HIB_HIBIC_R_LOWBAT_MASK       (0x00000004)
#define HIB_HIBIC_R_LOWBAT_BIT        (2)
#define HIB_HIBIC_R_LOWBAT_CLEAR      (0x00000004)

#define HIB_HIBIC_LOWBAT_MASK       (0x00000001)
#define HIB_HIBIC_LOWBAT_CLEAR      (0x00000001)
//--------

//--------
#define HIB_HIBIC_R_EXTW_MASK       (0x00000008)
#define HIB_HIBIC_R_EXTW_BIT        (3)
#define HIB_HIBIC_R_EXTW_CLEAR      (0x00000008)

#define HIB_HIBIC_EXTW_MASK       (0x00000001)
#define HIB_HIBIC_EXTW_CLEAR      (0x00000001)
//--------

//--------
#define HIB_HIBIC_R_WC_MASK       (0x00000010)
#define HIB_HIBIC_R_WC_BIT        (4)
#define HIB_HIBIC_R_WC_CLEAR      (0x00000010)

#define HIB_HIBIC_WC_MASK       (0x00000001)
#define HIB_HIBIC_WC_CLEAR      (0x00000001)
//--------

#define HIB_HIBIC_RTCALT0_BITBANDING (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_RTCALT0_BIT*4))))
#define HIB_HIBIC_LOWBAT_BITBANDING  (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_LOWBAT_BIT*4))))
#define HIB_HIBIC_EXTW_BITBANDING    (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_EXTW_BIT*4))))
#define HIB_HIBIC_WC_BITBANDING      (*((volatile uint32_t *)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBIC_OFFSET)*32)+(HIB_HIBIC_R_WC_BIT*4))))

/******************************************************************************************
************************************ 9 HIBRTCT *********************************************
******************************************************************************************/

#define HIB_HIBRTCT            (((HIBRTCT_TypeDef*)(HIB_BASE+HIB_HIBRTCT_OFFSET )))
#define HIB_HIBRTCT_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCT_OFFSET)))
#define HIB_HIBRTCT_BITBANDING      (((HIBRTCT_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRTCT_OFFSET)*32))))

//--------
#define HIB_HIBRTCT_R_TRIM_MASK     (0x0000FFFF)
#define HIB_HIBRTCT_R_TRIM_BIT      (0)

#define HIB_HIBRTCT_TRIM_MASK       (0x0000FFFF)
//--------

/******************************************************************************************
************************************ 10 HIBRTCSS *********************************************
******************************************************************************************/

#define HIB_HIBRTCSS            (((HIBRTCSS_TypeDef*)(HIB_BASE+HIB_HIBRTCSS_OFFSET )))
#define HIB_HIBRTCSS_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBRTCSS_OFFSET)))
#define HIB_HIBRTCSS_BITBANDING      (((HIBRTCSS_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBRTCSS_OFFSET)*32))))

//--------
#define HIB_HIBRTCSS_R_RTCSSC_MASK     (0x00007FFF)
#define HIB_HIBRTCSS_R_RTCSSC_BIT      (0)

#define HIB_HIBRTCSS_RTCSSC_MASK       (0x00007FFF)
//--------

//--------
#define HIB_HIBRTCSS_R_RTCSSM_MASK     (0x7FFF0000)
#define HIB_HIBRTCSS_R_RTCSSM_BIT      (16)

#define HIB_HIBRTCSS_RTCSSM_MASK       (0x00007FFF)
//--------


/******************************************************************************************
************************************ HIBDATA *********************************************
******************************************************************************************/

#define HIB_HIBDATA            (((HIBDATA_ARRAY_TypeDef*)(HIB_BASE+HIB_HIBDATA_OFFSET )))
#define HIB_HIBDATA_BITBANDING      (((HIBDATA_ARRAY_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA_OFFSET)*32))))



/******************************************************************************************
************************************ 11 HIBDATA0 *********************************************
******************************************************************************************/


#define HIB_HIBDATA0            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA0_OFFSET )))
#define HIB_HIBDATA0_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA0_OFFSET)))
#define HIB_HIBDATA0_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA0_OFFSET)*32))))

#define HIB_HIBDATA1            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA1_OFFSET )))
#define HIB_HIBDATA1_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA1_OFFSET)))
#define HIB_HIBDATA1_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA1_OFFSET)*32))))

#define HIB_HIBDATA2            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA2_OFFSET )))
#define HIB_HIBDATA2_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA2_OFFSET)))
#define HIB_HIBDATA2_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA2_OFFSET)*32))))

#define HIB_HIBDATA3            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA3_OFFSET )))
#define HIB_HIBDATA3_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA3_OFFSET)))
#define HIB_HIBDATA3_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA3_OFFSET)*32))))

#define HIB_HIBDATA4            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA4_OFFSET )))
#define HIB_HIBDATA4_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA4_OFFSET)))
#define HIB_HIBDATA4_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA4_OFFSET)*32))))

#define HIB_HIBDATA5            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA5_OFFSET )))
#define HIB_HIBDATA5_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA5_OFFSET)))
#define HIB_HIBDATA5_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA5_OFFSET)*32))))

#define HIB_HIBDATA6            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA6_OFFSET )))
#define HIB_HIBDATA6_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA6_OFFSET)))
#define HIB_HIBDATA6_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA6_OFFSET)*32))))

#define HIB_HIBDATA7            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA7_OFFSET )))
#define HIB_HIBDATA7_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA7_OFFSET)))
#define HIB_HIBDATA7_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA7_OFFSET)*32))))

#define HIB_HIBDATA8            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA8_OFFSET )))
#define HIB_HIBDATA8_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA8_OFFSET)))
#define HIB_HIBDATA8_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA8_OFFSET)*32))))

#define HIB_HIBDATA9            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA9_OFFSET )))
#define HIB_HIBDATA9_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA9_OFFSET)))
#define HIB_HIBDATA9_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA9_OFFSET)*32))))

#define HIB_HIBDATA10            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA10_OFFSET )))
#define HIB_HIBDATA10_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA10_OFFSET)))
#define HIB_HIBDATA10_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA10_OFFSET)*32))))

#define HIB_HIBDATA11            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA11_OFFSET )))
#define HIB_HIBDATA11_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA11_OFFSET)))
#define HIB_HIBDATA11_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA11_OFFSET)*32))))

#define HIB_HIBDATA12            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA12_OFFSET )))
#define HIB_HIBDATA12_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA12_OFFSET)))
#define HIB_HIBDATA12_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA12_OFFSET)*32))))

#define HIB_HIBDATA13            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA13_OFFSET )))
#define HIB_HIBDATA13_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA13_OFFSET)))
#define HIB_HIBDATA13_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA13_OFFSET)*32))))

#define HIB_HIBDATA14            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA14_OFFSET )))
#define HIB_HIBDATA14_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA14_OFFSET)))
#define HIB_HIBDATA14_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA14_OFFSET)*32))))

#define HIB_HIBDATA15            (((HIBDATA_TypeDef*)(HIB_BASE+HIB_HIBDATA15_OFFSET )))
#define HIB_HIBDATA15_R          (*((volatile uint32_t *)(HIB_BASE+HIB_HIBDATA15_OFFSET)))
#define HIB_HIBDATA15_BITBANDING      (((HIBDATA_BITBANDING_TypeDef*)(HIB_BASE_BITBANDING+((HIB_OFFSET+HIB_HIBDATA15_OFFSET)*32))))


typedef enum
{
    HIB_enREADY = 0,
    HIB_enBUSY =1,
}HIB_nREADY;

typedef enum
{
    HIB_enOK = 0,
    HIB_enERROR =1,
}HIB_nSTATUS;

typedef enum
{
    HIB_enRTCALT =0x1,
    HIB_enLOWBAT  =0x4,
    HIB_enEXTW=0x8,
    HIB_enWC =0x10,
    HIB_enALL =0x1F,

}HIB_nINTERRUPT;

HIB_nSTATUS HIB__enReadCounter(uint32_t* pu32Counter, uint32_t *pu32SubCounter);
HIB_nSTATUS HIB__enSetCounter(uint32_t u32Counter);
HIB_nSTATUS HIB__enSetMatch(uint32_t u32Counter, uint32_t u32SubCounter);

HIB_nSTATUS HIB__enEnWakePin(void);
HIB_nSTATUS HIB__enDisWakePin(void);
HIB_nSTATUS HIB__enEnRTCWakeUp(void);
HIB_nSTATUS HIB__enDisRTCWakeUp(void);
HIB_nSTATUS HIB__enEnLOWBATWakeUp(void);
HIB_nSTATUS HIB__enDisLOWBATWakeUp(void);
HIB_nSTATUS HIB__enReqHibernation(void);

HIB_nSTATUS HIB__enEnModule(void);
HIB_nSTATUS HIB__enDisModule(void);

HIB_nSTATUS HIB__enEnInterrupt(HIB_nINTERRUPT enInterrupt);
HIB_nSTATUS HIB__enDisInterrupt(HIB_nINTERRUPT enInterrupt);
HIB_nSTATUS HIB__enClearInterrupt(HIB_nINTERRUPT enInterrupt);
HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch);

void HIBISR(void);

extern HIB_nREADY HIB_enCount;
#endif /* HEADER_DRIVER_HIB_H_ */
