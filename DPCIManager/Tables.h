//
//  Tables.h
//  DPCIManager
//
//  Created by PHPdev32 on 9/16/12.
//

#ifndef DPCIManager_Tables_h
#define DPCIManager_Tables_h

#include "License.h"

#define CODEC_ID(vendor,device) ((((UInt32) vendor & 0xffff) << 16) | \
((UInt32) device & 0xffff))

#define HDA_DEV_MATCH(fl, v)		((fl) == (v) || (fl) == 0xffffffff || \
(((fl) & 0xffff0000) == 0xffff0000 && ((fl) & 0x0000ffff) == ((v) & 0x0000ffff)) || \
(((fl) & 0x0000ffff) == 0x0000ffff && ((fl) & 0xffff0000) == ((v) & 0xffff0000)))

/* All codecs you can eat... */
#define HDA_CODEC_CONSTRUCT(vendor, id) (((UInt32) (vendor##_VENDORID) << 16) | ((id) & 0xffff))

/* Cirrus Logic */
#define CIRRUSLOGIC_VENDORID		0x1013
#define HDA_CODEC_CS4206			HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0x4206)
#define HDA_CODEC_CS4207			HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0x4207)
#define HDA_CODEC_CS4210			HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0x4210)
#define HDA_CODEC_CSXXXX			HDA_CODEC_CONSTRUCT(CIRRUSLOGIC, 0xffff)

/* Realtek */
#define REALTEK_VENDORID			0x10ec
#define HDA_CODEC_ALC221			HDA_CODEC_CONSTRUCT(REALTEK, 0x0221)
#define HDA_CODEC_ALC260			HDA_CODEC_CONSTRUCT(REALTEK, 0x0260)
#define HDA_CODEC_ALC262			HDA_CODEC_CONSTRUCT(REALTEK, 0x0262)
#define HDA_CODEC_ALC267			HDA_CODEC_CONSTRUCT(REALTEK, 0x0267)
#define HDA_CODEC_ALC268			HDA_CODEC_CONSTRUCT(REALTEK, 0x0268)
#define HDA_CODEC_ALC269			HDA_CODEC_CONSTRUCT(REALTEK, 0x0269)
#define HDA_CODEC_ALC270			HDA_CODEC_CONSTRUCT(REALTEK, 0x0270)
#define HDA_CODEC_ALC272			HDA_CODEC_CONSTRUCT(REALTEK, 0x0272)
#define HDA_CODEC_ALC273			HDA_CODEC_CONSTRUCT(REALTEK, 0x0273)
#define HDA_CODEC_ALC275			HDA_CODEC_CONSTRUCT(REALTEK, 0x0275)
#define HDA_CODEC_ALC276			HDA_CODEC_CONSTRUCT(REALTEK, 0x0276)
#define HDA_CODEC_ALC660			HDA_CODEC_CONSTRUCT(REALTEK, 0x0660)
#define HDA_CODEC_ALC662			HDA_CODEC_CONSTRUCT(REALTEK, 0x0662)
#define HDA_CODEC_ALC663			HDA_CODEC_CONSTRUCT(REALTEK, 0x0663)
#define HDA_CODEC_ALC665			HDA_CODEC_CONSTRUCT(REALTEK, 0x0665)
#define HDA_CODEC_ALC670			HDA_CODEC_CONSTRUCT(REALTEK, 0x0670)
#define HDA_CODEC_ALC680			HDA_CODEC_CONSTRUCT(REALTEK, 0x0680)
#define HDA_CODEC_ALC861			HDA_CODEC_CONSTRUCT(REALTEK, 0x0861)
#define HDA_CODEC_ALC861VD			HDA_CODEC_CONSTRUCT(REALTEK, 0x0862)
#define HDA_CODEC_ALC880			HDA_CODEC_CONSTRUCT(REALTEK, 0x0880)
#define HDA_CODEC_ALC882			HDA_CODEC_CONSTRUCT(REALTEK, 0x0882)
#define HDA_CODEC_ALC883			HDA_CODEC_CONSTRUCT(REALTEK, 0x0883)
#define HDA_CODEC_ALC885			HDA_CODEC_CONSTRUCT(REALTEK, 0x0885)
#define HDA_CODEC_ALC887			HDA_CODEC_CONSTRUCT(REALTEK, 0x0887)
#define HDA_CODEC_ALC888			HDA_CODEC_CONSTRUCT(REALTEK, 0x0888)
#define HDA_CODEC_ALC889			HDA_CODEC_CONSTRUCT(REALTEK, 0x0889)
#define HDA_CODEC_ALC892			HDA_CODEC_CONSTRUCT(REALTEK, 0x0892)
#define HDA_CODEC_ALC898			HDA_CODEC_CONSTRUCT(REALTEK, 0x0899)
#define HDA_CODEC_ALC1150			HDA_CODEC_CONSTRUCT(REALTEK, 0x0900)
#define HDA_CODEC_ALCXXXX			HDA_CODEC_CONSTRUCT(REALTEK, 0xffff)

/* Motorola */
#define MOTO_VENDORID				0x1057
#define HDA_CODEC_MOTOXXXX			HDA_CODEC_CONSTRUCT(MOTO, 0xffff)

/* Creative */
#define CREATIVE_VENDORID			0x1102
#define HDA_CODEC_CA0110			HDA_CODEC_CONSTRUCT(CREATIVE, 0x000a)
#define HDA_CODEC_CA0110_2			HDA_CODEC_CONSTRUCT(CREATIVE, 0x000b)
#define HDA_CODEC_SB0880			HDA_CODEC_CONSTRUCT(CREATIVE, 0x000d)
#define HDA_CODEC_CA0132			HDA_CODEC_CONSTRUCT(CREATIVE, 0x0011)
#define HDA_CODEC_CAXXXX			HDA_CODEC_CONSTRUCT(CREATIVE, 0xffff)

/* Analog Devices */
#define ANALOGDEVICES_VENDORID		0x11d4
#define HDA_CODEC_AD1884A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x184a)
#define HDA_CODEC_AD1882			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1882)
#define HDA_CODEC_AD1883			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1883)
#define HDA_CODEC_AD1884			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1884)
#define HDA_CODEC_AD1984A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x194a)
#define HDA_CODEC_AD1984B			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x194b)
#define HDA_CODEC_AD1981HD			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1981)
#define HDA_CODEC_AD1983			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1983)
#define HDA_CODEC_AD1984			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1984)
#define HDA_CODEC_AD1986A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1986)
#define HDA_CODEC_AD1987			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1987)
#define HDA_CODEC_AD1988			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x1988)
#define HDA_CODEC_AD1988B			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x198b)
#define HDA_CODEC_AD1882A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x882a)
#define HDA_CODEC_AD1989A			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x989a)
#define HDA_CODEC_AD1989B			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0x989b)
#define HDA_CODEC_ADXXXX			HDA_CODEC_CONSTRUCT(ANALOGDEVICES, 0xffff)

/* CMedia */
#define CMEDIA_VENDORID				0x13f6
#define HDA_CODEC_CMI9880			HDA_CODEC_CONSTRUCT(CMEDIA, 0x9880)
#define HDA_CODEC_CMIXXXX			HDA_CODEC_CONSTRUCT(CMEDIA, 0xffff)

#define CMEDIA2_VENDORID			0x434d
#define HDA_CODEC_CMI98802			HDA_CODEC_CONSTRUCT(CMEDIA2, 0x4980)
#define HDA_CODEC_CMIXXXX2			HDA_CODEC_CONSTRUCT(CMEDIA2, 0xffff)

/* Sigmatel */
#define SIGMATEL_VENDORID			0x8384
#define HDA_CODEC_STAC9230X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7612)
#define HDA_CODEC_STAC9230D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7613)
#define HDA_CODEC_STAC9229X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7614)
#define HDA_CODEC_STAC9229D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7615)
#define HDA_CODEC_STAC9228X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7616)
#define HDA_CODEC_STAC9228D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7617)
#define HDA_CODEC_STAC9227X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7618)
#define HDA_CODEC_STAC9227D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7619)
#define HDA_CODEC_STAC9274			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7620)
#define HDA_CODEC_STAC9274D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7621)
#define HDA_CODEC_STAC9273X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7622)
#define HDA_CODEC_STAC9273D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7623)
#define HDA_CODEC_STAC9272X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7624)
#define HDA_CODEC_STAC9272D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7625)
#define HDA_CODEC_STAC9271X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7626)
#define HDA_CODEC_STAC9271D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7627)
#define HDA_CODEC_STAC9274X5NH		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7628)
#define HDA_CODEC_STAC9274D5NH		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7629)
#define HDA_CODEC_STAC9250			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7634)
#define HDA_CODEC_STAC9251			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7636)
#define HDA_CODEC_IDT92HD700X		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7638)
#define HDA_CODEC_IDT92HD700D		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7639)
#define HDA_CODEC_IDT92HD206X		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7645)
#define HDA_CODEC_IDT92HD206D		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7646)
#define HDA_CODEC_CXD9872RDK		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7661)
#define HDA_CODEC_STAC9872AK		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7662)
#define HDA_CODEC_CXD9872AKD		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7664)
#define HDA_CODEC_STAC9221			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7680)
#define HDA_CODEC_STAC922XD			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7681)
#define HDA_CODEC_STAC9221_A2		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7682)
#define HDA_CODEC_STAC9221D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7683)
#define HDA_CODEC_STAC9220			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7690)
#define HDA_CODEC_STAC9200D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7691)
#define HDA_CODEC_IDT92HD005		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7698)
#define HDA_CODEC_IDT92HD005D		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7699)
#define HDA_CODEC_STAC9205X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a0)
#define HDA_CODEC_STAC9205D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a1)
#define HDA_CODEC_STAC9204X			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a2)
#define HDA_CODEC_STAC9204D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a3)
#define HDA_CODEC_STAC9255			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a4)
#define HDA_CODEC_STAC9255D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a5)
#define HDA_CODEC_STAC9254			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a6)
#define HDA_CODEC_STAC9254D			HDA_CODEC_CONSTRUCT(SIGMATEL, 0x76a7)
#define HDA_CODEC_STAC9220_A2		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7880)
#define HDA_CODEC_STAC9220_A1		HDA_CODEC_CONSTRUCT(SIGMATEL, 0x7882)
#define HDA_CODEC_STACXXXX			HDA_CODEC_CONSTRUCT(SIGMATEL, 0xffff)

/* IDT */
#define IDT_VENDORID				0x111d
#define HDA_CODEC_IDT92HD75BX		HDA_CODEC_CONSTRUCT(IDT, 0x7603)
#define HDA_CODEC_IDT92HD83C1X		HDA_CODEC_CONSTRUCT(IDT, 0x7604)
#define HDA_CODEC_IDT92HD81B1X		HDA_CODEC_CONSTRUCT(IDT, 0x7605)
#define HDA_CODEC_IDT92HD75B3		HDA_CODEC_CONSTRUCT(IDT, 0x7608)
#define HDA_CODEC_IDT92HD73D1		HDA_CODEC_CONSTRUCT(IDT, 0x7674)
#define HDA_CODEC_IDT92HD73C1		HDA_CODEC_CONSTRUCT(IDT, 0x7675)
#define HDA_CODEC_IDT92HD73E1		HDA_CODEC_CONSTRUCT(IDT, 0x7676)
#define HDA_CODEC_IDT92HD71B8		HDA_CODEC_CONSTRUCT(IDT, 0x76b0)
#define HDA_CODEC_IDT92HD71B8_2		HDA_CODEC_CONSTRUCT(IDT, 0x76b1)
#define HDA_CODEC_IDT92HD71B7		HDA_CODEC_CONSTRUCT(IDT, 0x76b2)
#define HDA_CODEC_IDT92HD71B7_2		HDA_CODEC_CONSTRUCT(IDT, 0x76b3)
#define HDA_CODEC_IDT92HD71B6		HDA_CODEC_CONSTRUCT(IDT, 0x76b4)
#define HDA_CODEC_IDT92HD71B6_2		HDA_CODEC_CONSTRUCT(IDT, 0x76b5)
#define HDA_CODEC_IDT92HD71B5		HDA_CODEC_CONSTRUCT(IDT, 0x76b6)
#define HDA_CODEC_IDT92HD71B5_2		HDA_CODEC_CONSTRUCT(IDT, 0x76b7)
#define HDA_CODEC_IDT92HD89C3		HDA_CODEC_CONSTRUCT(IDT, 0x76c0)
#define HDA_CODEC_IDT92HD89C2		HDA_CODEC_CONSTRUCT(IDT, 0x76c1)
#define HDA_CODEC_IDT92HD89C1		HDA_CODEC_CONSTRUCT(IDT, 0x76c2)
#define HDA_CODEC_IDT92HD89B3		HDA_CODEC_CONSTRUCT(IDT, 0x76c3)
#define HDA_CODEC_IDT92HD89B2		HDA_CODEC_CONSTRUCT(IDT, 0x76c4)
#define HDA_CODEC_IDT92HD89B1		HDA_CODEC_CONSTRUCT(IDT, 0x76c5)
#define HDA_CODEC_IDT92HD89E3		HDA_CODEC_CONSTRUCT(IDT, 0x76c6)
#define HDA_CODEC_IDT92HD89E2		HDA_CODEC_CONSTRUCT(IDT, 0x76c7)
#define HDA_CODEC_IDT92HD89E1		HDA_CODEC_CONSTRUCT(IDT, 0x76c8)
#define HDA_CODEC_IDT92HD89D3		HDA_CODEC_CONSTRUCT(IDT, 0x76c9)
#define HDA_CODEC_IDT92HD89D2		HDA_CODEC_CONSTRUCT(IDT, 0x76ca)
#define HDA_CODEC_IDT92HD89D1		HDA_CODEC_CONSTRUCT(IDT, 0x76cb)
#define HDA_CODEC_IDT92HD89F3		HDA_CODEC_CONSTRUCT(IDT, 0x76cc)
#define HDA_CODEC_IDT92HD89F2		HDA_CODEC_CONSTRUCT(IDT, 0x76cd)
#define HDA_CODEC_IDT92HD89F1		HDA_CODEC_CONSTRUCT(IDT, 0x76ce)
#define HDA_CODEC_IDT92HD87B1_3		HDA_CODEC_CONSTRUCT(IDT, 0x76d1)
#define HDA_CODEC_IDT92HD83C1C		HDA_CODEC_CONSTRUCT(IDT, 0x76d4)
#define HDA_CODEC_IDT92HD81B1C		HDA_CODEC_CONSTRUCT(IDT, 0x76d5)
#define HDA_CODEC_IDT92HD87B2_4		HDA_CODEC_CONSTRUCT(IDT, 0x76d9)
#define HDA_CODEC_IDT92HD93BXX		HDA_CODEC_CONSTRUCT(IDT, 0x76df)
#define HDA_CODEC_IDT92HD91BXX		HDA_CODEC_CONSTRUCT(IDT, 0x76e0)
#define HDA_CODEC_IDT92HD98BXX		HDA_CODEC_CONSTRUCT(IDT, 0x76e3)
#define HDA_CODEC_IDT92HD99BXX		HDA_CODEC_CONSTRUCT(IDT, 0x76e5)
#define HDA_CODEC_IDT92HD90BXX		HDA_CODEC_CONSTRUCT(IDT, 0x76e7)
#define HDA_CODEC_IDT92HD66B1X5		HDA_CODEC_CONSTRUCT(IDT, 0x76e8)
#define HDA_CODEC_IDT92HD66B2X5		HDA_CODEC_CONSTRUCT(IDT, 0x76e9)
#define HDA_CODEC_IDT92HD66B3X5		HDA_CODEC_CONSTRUCT(IDT, 0x76ea)
#define HDA_CODEC_IDT92HD66C1X5		HDA_CODEC_CONSTRUCT(IDT, 0x76eb)
#define HDA_CODEC_IDT92HD66C2X5		HDA_CODEC_CONSTRUCT(IDT, 0x76ec)
#define HDA_CODEC_IDT92HD66C3X5		HDA_CODEC_CONSTRUCT(IDT, 0x76ed)
#define HDA_CODEC_IDT92HD66B1X3		HDA_CODEC_CONSTRUCT(IDT, 0x76ee)
#define HDA_CODEC_IDT92HD66B2X3		HDA_CODEC_CONSTRUCT(IDT, 0x76ef)
#define HDA_CODEC_IDT92HD66B3X3		HDA_CODEC_CONSTRUCT(IDT, 0x76f0)
#define HDA_CODEC_IDT92HD66C1X3		HDA_CODEC_CONSTRUCT(IDT, 0x76f1)
#define HDA_CODEC_IDT92HD66C2X3		HDA_CODEC_CONSTRUCT(IDT, 0x76f2)
#define HDA_CODEC_IDT92HD66C3_65    HDA_CODEC_CONSTRUCT(IDT, 0x76f3)
#define HDA_CODEC_IDTXXXX			HDA_CODEC_CONSTRUCT(IDT, 0xffff)

/* Silicon Image */
#define SII_VENDORID				0x1095
#define HDA_CODEC_SII1390			HDA_CODEC_CONSTRUCT(SII, 0x1390)
#define HDA_CODEC_SII1392			HDA_CODEC_CONSTRUCT(SII, 0x1392)
#define HDA_CODEC_SIIXXXX			HDA_CODEC_CONSTRUCT(SII, 0xffff)

/* Lucent/Agere */
#define AGERE_VENDORID				0x11c1
#define HDA_CODEC_AGEREXXXX			HDA_CODEC_CONSTRUCT(AGERE, 0xffff)

/* Conexant */
#define CONEXANT_VENDORID			0x14f1
#define HDA_CODEC_CX20549			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5045)
#define HDA_CODEC_CX20551			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5047)
#define HDA_CODEC_CX20561			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5051)
#define HDA_CODEC_CX20582			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5066)
#define HDA_CODEC_CX20583			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5067)
#define HDA_CODEC_CX20584			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5068)
#define HDA_CODEC_CX20585			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5069)
#define HDA_CODEC_CX20588			HDA_CODEC_CONSTRUCT(CONEXANT, 0x506c)
#define HDA_CODEC_CX20590			HDA_CODEC_CONSTRUCT(CONEXANT, 0x506e)
#define HDA_CODEC_CX20631			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5097)
#define HDA_CODEC_CX20632			HDA_CODEC_CONSTRUCT(CONEXANT, 0x5098)
#define HDA_CODEC_CX20641			HDA_CODEC_CONSTRUCT(CONEXANT, 0x50a1)
#define HDA_CODEC_CX20642			HDA_CODEC_CONSTRUCT(CONEXANT, 0x50a2)
#define HDA_CODEC_CX20651			HDA_CODEC_CONSTRUCT(CONEXANT, 0x50ab)
#define HDA_CODEC_CX20652			HDA_CODEC_CONSTRUCT(CONEXANT, 0x50ac)
#define HDA_CODEC_CX20664			HDA_CODEC_CONSTRUCT(CONEXANT, 0x50b8)
#define HDA_CODEC_CX20665			HDA_CODEC_CONSTRUCT(CONEXANT, 0x50b9)
#define HDA_CODEC_CXXXXX			HDA_CODEC_CONSTRUCT(CONEXANT, 0xffff)

/* VIA */
#define VIA_VENDORID				0x1106
#define HDA_CODEC_VT1708_8			HDA_CODEC_CONSTRUCT(VIA, 0x1708)
#define HDA_CODEC_VT1708_9			HDA_CODEC_CONSTRUCT(VIA, 0x1709)
#define HDA_CODEC_VT1708_A			HDA_CODEC_CONSTRUCT(VIA, 0x170a)
#define HDA_CODEC_VT1708_B			HDA_CODEC_CONSTRUCT(VIA, 0x170b)
#define HDA_CODEC_VT1709_0			HDA_CODEC_CONSTRUCT(VIA, 0xe710)
#define HDA_CODEC_VT1709_1			HDA_CODEC_CONSTRUCT(VIA, 0xe711)
#define HDA_CODEC_VT1709_2			HDA_CODEC_CONSTRUCT(VIA, 0xe712)
#define HDA_CODEC_VT1709_3			HDA_CODEC_CONSTRUCT(VIA, 0xe713)
#define HDA_CODEC_VT1709_4			HDA_CODEC_CONSTRUCT(VIA, 0xe714)
#define HDA_CODEC_VT1709_5			HDA_CODEC_CONSTRUCT(VIA, 0xe715)
#define HDA_CODEC_VT1709_6			HDA_CODEC_CONSTRUCT(VIA, 0xe716)
#define HDA_CODEC_VT1709_7			HDA_CODEC_CONSTRUCT(VIA, 0xe717)
#define HDA_CODEC_VT1708B_0			HDA_CODEC_CONSTRUCT(VIA, 0xe720)
#define HDA_CODEC_VT1708B_1			HDA_CODEC_CONSTRUCT(VIA, 0xe721)
#define HDA_CODEC_VT1708B_2			HDA_CODEC_CONSTRUCT(VIA, 0xe722)
#define HDA_CODEC_VT1708B_3			HDA_CODEC_CONSTRUCT(VIA, 0xe723)
#define HDA_CODEC_VT1708B_4			HDA_CODEC_CONSTRUCT(VIA, 0xe724)
#define HDA_CODEC_VT1708B_5			HDA_CODEC_CONSTRUCT(VIA, 0xe725)
#define HDA_CODEC_VT1708B_6			HDA_CODEC_CONSTRUCT(VIA, 0xe726)
#define HDA_CODEC_VT1708B_7			HDA_CODEC_CONSTRUCT(VIA, 0xe727)
#define HDA_CODEC_VT1708S_0			HDA_CODEC_CONSTRUCT(VIA, 0x0397)
#define HDA_CODEC_VT1708S_1			HDA_CODEC_CONSTRUCT(VIA, 0x1397)
#define HDA_CODEC_VT1708S_2			HDA_CODEC_CONSTRUCT(VIA, 0x2397)
#define HDA_CODEC_VT1708S_3			HDA_CODEC_CONSTRUCT(VIA, 0x3397)
#define HDA_CODEC_VT1708S_4			HDA_CODEC_CONSTRUCT(VIA, 0x4397)
#define HDA_CODEC_VT1708S_5			HDA_CODEC_CONSTRUCT(VIA, 0x5397)
#define HDA_CODEC_VT1708S_6			HDA_CODEC_CONSTRUCT(VIA, 0x6397)
#define HDA_CODEC_VT1708S_7			HDA_CODEC_CONSTRUCT(VIA, 0x7397)
#define HDA_CODEC_VT1702_0			HDA_CODEC_CONSTRUCT(VIA, 0x0398)
#define HDA_CODEC_VT1702_1			HDA_CODEC_CONSTRUCT(VIA, 0x1398)
#define HDA_CODEC_VT1702_2			HDA_CODEC_CONSTRUCT(VIA, 0x2398)
#define HDA_CODEC_VT1702_3			HDA_CODEC_CONSTRUCT(VIA, 0x3398)
#define HDA_CODEC_VT1702_4			HDA_CODEC_CONSTRUCT(VIA, 0x4398)
#define HDA_CODEC_VT1702_5			HDA_CODEC_CONSTRUCT(VIA, 0x5398)
#define HDA_CODEC_VT1702_6			HDA_CODEC_CONSTRUCT(VIA, 0x6398)
#define HDA_CODEC_VT1702_7			HDA_CODEC_CONSTRUCT(VIA, 0x7398)
#define HDA_CODEC_VT1716S_0			HDA_CODEC_CONSTRUCT(VIA, 0x0433)
#define HDA_CODEC_VT1716S_1			HDA_CODEC_CONSTRUCT(VIA, 0xa721)
#define HDA_CODEC_VT1718S_0			HDA_CODEC_CONSTRUCT(VIA, 0x0428)
#define HDA_CODEC_VT1718S_1			HDA_CODEC_CONSTRUCT(VIA, 0x4428)
#define HDA_CODEC_VT1802_0			HDA_CODEC_CONSTRUCT(VIA, 0x0446)
#define HDA_CODEC_VT1802_1			HDA_CODEC_CONSTRUCT(VIA, 0x8446)
#define HDA_CODEC_VT1812			HDA_CODEC_CONSTRUCT(VIA, 0x0448)
#define HDA_CODEC_VT1818S			HDA_CODEC_CONSTRUCT(VIA, 0x0440)
#define HDA_CODEC_VT1828S			HDA_CODEC_CONSTRUCT(VIA, 0x4441)
#define HDA_CODEC_VT2002P_0			HDA_CODEC_CONSTRUCT(VIA, 0x0438)
#define HDA_CODEC_VT2002P_1			HDA_CODEC_CONSTRUCT(VIA, 0x4438)
#define HDA_CODEC_VT2020			HDA_CODEC_CONSTRUCT(VIA, 0x0441)
#define HDA_CODEC_VTXXXX			HDA_CODEC_CONSTRUCT(VIA, 0xffff)

/* ATI */
#define ATI_VENDORID				0x1002
#define HDA_CODEC_ATIRS600_1		HDA_CODEC_CONSTRUCT(ATI, 0x793c)
#define HDA_CODEC_ATIRS600_2		HDA_CODEC_CONSTRUCT(ATI, 0x7919)
#define HDA_CODEC_ATIRS690			HDA_CODEC_CONSTRUCT(ATI, 0x791a)
#define HDA_CODEC_ATIR6XX			HDA_CODEC_CONSTRUCT(ATI, 0xaa01)
#define HDA_CODEC_ATIXXXX			HDA_CODEC_CONSTRUCT(ATI, 0xffff)

/* NVIDIA */
#define NVIDIA_VENDORID				0x10de
#define HDA_CODEC_NVIDIAMCP78		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0002)
#define HDA_CODEC_NVIDIAMCP78_2		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0003)
#define HDA_CODEC_NVIDIAMCP78_3		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0005)
#define HDA_CODEC_NVIDIAMCP78_4		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0006)
#define HDA_CODEC_NVIDIAMCP7A		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0007)
#define HDA_CODEC_NVIDIAGT220		HDA_CODEC_CONSTRUCT(NVIDIA, 0x000a)
#define HDA_CODEC_NVIDIAGT21X		HDA_CODEC_CONSTRUCT(NVIDIA, 0x000b)
#define HDA_CODEC_NVIDIAMCP89		HDA_CODEC_CONSTRUCT(NVIDIA, 0x000c)
#define HDA_CODEC_NVIDIAGT240		HDA_CODEC_CONSTRUCT(NVIDIA, 0x000d)
#define HDA_CODEC_NVIDIAGTX470      HDA_CODEC_CONSTRUCT(NVIDIA, 0x0010)
#define HDA_CODEC_NVIDIAGTS450		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0011)
#define HDA_CODEC_NVIDIAGT440		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0014)
#define HDA_CODEC_NVIDIAGTX550		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0015)
#define HDA_CODEC_NVIDIAGTX570		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0018)
#define HDA_CODEC_NVIDIAGTX680      HDA_CODEC_CONSTRUCT(NVIDIA, 0x0040)
#define HDA_CODEC_NVIDIAMCP67		HDA_CODEC_CONSTRUCT(NVIDIA, 0x0067)
#define HDA_CODEC_NVIDIAMCP73		HDA_CODEC_CONSTRUCT(NVIDIA, 0x8001)
#define HDA_CODEC_NVIDIAXXXX		HDA_CODEC_CONSTRUCT(NVIDIA, 0xffff)

/* Chrontel */
#define CHRONTEL_VENDORID			0x17e8
#define HDA_CODEC_CHXXXX			HDA_CODEC_CONSTRUCT(CHRONTEL, 0xffff)

/* INTEL */
#define INTEL_VENDORID				0x8086
#define HDA_CODEC_INTELIP			HDA_CODEC_CONSTRUCT(INTEL, 0x0054)
#define HDA_CODEC_INTELBL			HDA_CODEC_CONSTRUCT(INTEL, 0x2801)
#define HDA_CODEC_INTELCA			HDA_CODEC_CONSTRUCT(INTEL, 0x2802)
#define HDA_CODEC_INTELEL			HDA_CODEC_CONSTRUCT(INTEL, 0x2803)
#define HDA_CODEC_INTELIP2			HDA_CODEC_CONSTRUCT(INTEL, 0x2804)
#define HDA_CODEC_INTELCPT			HDA_CODEC_CONSTRUCT(INTEL, 0x2805)
#define HDA_CODEC_INTELPPT			HDA_CODEC_CONSTRUCT(INTEL, 0x2806)
#define HDA_CODEC_INTELCL			HDA_CODEC_CONSTRUCT(INTEL, 0x29fb)
#define HDA_CODEC_INTELXXXX			HDA_CODEC_CONSTRUCT(INTEL, 0xffff)

static const struct {UInt32 id; char *name;} gCodecList[] = {
	{ HDA_CODEC_CS4206,			"Cirrus Logic CS4206" },
	{ HDA_CODEC_CS4207,			"Cirrus Logic CS4207" },
	{ HDA_CODEC_CS4210,			"Cirrus Logic CS4210" },
	{ HDA_CODEC_ALC221,			"Realtek ALC221" },
	{ HDA_CODEC_ALC260,			"Realtek ALC260" },
	{ HDA_CODEC_ALC262,			"Realtek ALC262" },
	{ HDA_CODEC_ALC267,			"Realtek ALC267" },
	{ HDA_CODEC_ALC268,			"Realtek ALC268" },
	{ HDA_CODEC_ALC269,			"Realtek ALC269" },
	{ HDA_CODEC_ALC270,			"Realtek ALC270" },
	{ HDA_CODEC_ALC272,			"Realtek ALC272" },
	{ HDA_CODEC_ALC273,			"Realtek ALC273" },
	{ HDA_CODEC_ALC275,			"Realtek ALC275" },
	{ HDA_CODEC_ALC276,			"Realtek ALC276" },
	{ HDA_CODEC_ALC660,			"Realtek ALC660" },
	{ HDA_CODEC_ALC662,			"Realtek ALC662" },
	{ HDA_CODEC_ALC663,			"Realtek ALC663" },
	{ HDA_CODEC_ALC665,			"Realtek ALC665" },
	{ HDA_CODEC_ALC670,			"Realtek ALC670" },
	{ HDA_CODEC_ALC680,			"Realtek ALC680" },
	{ HDA_CODEC_ALC861,			"Realtek ALC861" },
	{ HDA_CODEC_ALC861VD,		"Realtek ALC861-VD" },
	{ HDA_CODEC_ALC880,			"Realtek ALC880" },
	{ HDA_CODEC_ALC882,			"Realtek ALC882" },
	{ HDA_CODEC_ALC883,			"Realtek ALC883" },
	{ HDA_CODEC_ALC885,			"Realtek ALC885/889a" },
	{ HDA_CODEC_ALC887,			"Realtek ALC887/888b" },
	{ HDA_CODEC_ALC888,			"Realtek ALC888" },
	{ HDA_CODEC_ALC889,			"Realtek ALC889" },
	{ HDA_CODEC_ALC892,			"Realtek ALC892" },
  	{ HDA_CODEC_ALC898,			"Realtek ALC898" },
    { HDA_CODEC_ALC1150,		"Realtek ALC1150" },
	{ HDA_CODEC_AD1882,			"Analog Devices AD1882" },
	{ HDA_CODEC_AD1882A,		"Analog Devices AD1882A" },
	{ HDA_CODEC_AD1883,			"Analog Devices AD1883" },
	{ HDA_CODEC_AD1884,			"Analog Devices AD1884" },
	{ HDA_CODEC_AD1884A,		"Analog Devices AD1884A" },
	{ HDA_CODEC_AD1981HD,		"Analog Devices AD1981HD" },
	{ HDA_CODEC_AD1983,			"Analog Devices AD1983" },
	{ HDA_CODEC_AD1984,			"Analog Devices AD1984" },
	{ HDA_CODEC_AD1984A,		"Analog Devices AD1984A" },
	{ HDA_CODEC_AD1984B,		"Analog Devices AD1984B" },
	{ HDA_CODEC_AD1986A,		"Analog Devices AD1986A" },
	{ HDA_CODEC_AD1987,			"Analog Devices AD1987" },
	{ HDA_CODEC_AD1988,			"Analog Devices AD1988A" },
	{ HDA_CODEC_AD1988B,		"Analog Devices AD1988B" },
	{ HDA_CODEC_AD1989A,		"Analog Devices AD1989A" },
    { HDA_CODEC_AD1989B,        "Analog Devices AD2000b" },
	{ HDA_CODEC_CA0110,			"Creative CA0110-IBG" },
	{ HDA_CODEC_CA0110_2,		"Creative CA0110-IBG" },
	{ HDA_CODEC_CA0132,			"Creative CA0132" },
	{ HDA_CODEC_SB0880,			"Creative SB0880 X-Fi" },
	{ HDA_CODEC_CMI9880,		"CMedia CMI9880" },
	{ HDA_CODEC_CMI98802,		"CMedia CMI9880" },
	{ HDA_CODEC_CXD9872RDK,		"Sigmatel CXD9872RD/K" },
	{ HDA_CODEC_CXD9872AKD,		"Sigmatel CXD9872AKD" },
	{ HDA_CODEC_STAC9200D,		"Sigmatel STAC9200D" },
	{ HDA_CODEC_STAC9204X,		"Sigmatel STAC9204X" },
	{ HDA_CODEC_STAC9204D,		"Sigmatel STAC9204D" },
	{ HDA_CODEC_STAC9205X,		"Sigmatel STAC9205X" },
	{ HDA_CODEC_STAC9205D,		"Sigmatel STAC9205D" },
	{ HDA_CODEC_STAC9220,		"Sigmatel STAC9220" },
	{ HDA_CODEC_STAC9220_A1,	"Sigmatel STAC9220_A1" },
	{ HDA_CODEC_STAC9220_A2,	"Sigmatel STAC9220_A2" },
	{ HDA_CODEC_STAC9221,		"Sigmatel STAC9221" },
	{ HDA_CODEC_STAC9221_A2,	"Sigmatel STAC9221_A2" },
	{ HDA_CODEC_STAC9221D,		"Sigmatel STAC9221D" },
	{ HDA_CODEC_STAC922XD,		"Sigmatel STAC9220D/9223D" },
	{ HDA_CODEC_STAC9227X,		"Sigmatel STAC9227X" },
	{ HDA_CODEC_STAC9227D,		"Sigmatel STAC9227D" },
	{ HDA_CODEC_STAC9228X,		"Sigmatel STAC9228X" },
	{ HDA_CODEC_STAC9228D,		"Sigmatel STAC9228D" },
	{ HDA_CODEC_STAC9229X,		"Sigmatel STAC9229X" },
	{ HDA_CODEC_STAC9229D,		"Sigmatel STAC9229D" },
	{ HDA_CODEC_STAC9230X,		"Sigmatel STAC9230X" },
	{ HDA_CODEC_STAC9230D,		"Sigmatel STAC9230D" },
	{ HDA_CODEC_STAC9250,		"Sigmatel STAC9250" },
	{ HDA_CODEC_STAC9251,		"Sigmatel STAC9251" },
	{ HDA_CODEC_STAC9255,		"Sigmatel STAC9255" },
	{ HDA_CODEC_STAC9255D,		"Sigmatel STAC9255D" },
	{ HDA_CODEC_STAC9254,		"Sigmatel STAC9254" },
	{ HDA_CODEC_STAC9254D,		"Sigmatel STAC9254D" },
	{ HDA_CODEC_STAC9271X,		"Sigmatel STAC9271X" },
	{ HDA_CODEC_STAC9271D,		"Sigmatel STAC9271D" },
	{ HDA_CODEC_STAC9272X,		"Sigmatel STAC9272X" },
	{ HDA_CODEC_STAC9272D,		"Sigmatel STAC9272D" },
	{ HDA_CODEC_STAC9273X,		"Sigmatel STAC9273X" },
	{ HDA_CODEC_STAC9273D,		"Sigmatel STAC9273D" },
	{ HDA_CODEC_STAC9274,		"Sigmatel STAC9274" },
	{ HDA_CODEC_STAC9274D,		"Sigmatel STAC9274D" },
	{ HDA_CODEC_STAC9274X5NH,	"Sigmatel STAC9274X5NH" },
	{ HDA_CODEC_STAC9274D5NH,	"Sigmatel STAC9274D5NH" },
	{ HDA_CODEC_STAC9872AK,		"Sigmatel STAC9872AK" },
	{ HDA_CODEC_IDT92HD005,		"IDT 92HD005" },
	{ HDA_CODEC_IDT92HD005D,	"IDT 92HD005D" },
	{ HDA_CODEC_IDT92HD206X,	"IDT 92HD206X" },
	{ HDA_CODEC_IDT92HD206D,	"IDT 92HD206D" },
	{ HDA_CODEC_IDT92HD66B1X5,	"IDT 92HD66B1X5" },
	{ HDA_CODEC_IDT92HD66B2X5,	"IDT 92HD66B2X5" },
	{ HDA_CODEC_IDT92HD66B3X5,	"IDT 92HD66B3X5" },
	{ HDA_CODEC_IDT92HD66C1X5,	"IDT 92HD66C1X5" },
	{ HDA_CODEC_IDT92HD66C2X5,	"IDT 92HD66C2X5" },
	{ HDA_CODEC_IDT92HD66C3X5,	"IDT 92HD66C3X5" },
	{ HDA_CODEC_IDT92HD66B1X3,	"IDT 92HD66B1X3" },
	{ HDA_CODEC_IDT92HD66B2X3,	"IDT 92HD66B2X3" },
	{ HDA_CODEC_IDT92HD66B3X3,	"IDT 92HD66B3X3" },
	{ HDA_CODEC_IDT92HD66C1X3,	"IDT 92HD66C1X3" },
	{ HDA_CODEC_IDT92HD66C2X3,	"IDT 92HD66C2X3" },
	{ HDA_CODEC_IDT92HD66C3_65,	"IDT 92HD66C3_65" },
	{ HDA_CODEC_IDT92HD700X,	"IDT 92HD700X" },
	{ HDA_CODEC_IDT92HD700D,	"IDT 92HD700D" },
	{ HDA_CODEC_IDT92HD71B5,	"IDT 92HD71B5" },
	{ HDA_CODEC_IDT92HD71B5_2,	"IDT 92HD71B5" },
	{ HDA_CODEC_IDT92HD71B6,	"IDT 92HD71B6" },
	{ HDA_CODEC_IDT92HD71B6_2,	"IDT 92HD71B6" },
	{ HDA_CODEC_IDT92HD71B7,	"IDT 92HD71B7" },
	{ HDA_CODEC_IDT92HD71B7_2,	"IDT 92HD71B7" },
	{ HDA_CODEC_IDT92HD71B8,	"IDT 92HD71B8" },
	{ HDA_CODEC_IDT92HD71B8_2,	"IDT 92HD71B8" },
	{ HDA_CODEC_IDT92HD73C1,	"IDT 92HD73C1" },
	{ HDA_CODEC_IDT92HD73D1,	"IDT 92HD73D1" },
	{ HDA_CODEC_IDT92HD73E1,	"IDT 92HD73E1" },
	{ HDA_CODEC_IDT92HD75B3,	"IDT 92HD75B3" },
	{ HDA_CODEC_IDT92HD75BX,	"IDT 92HD75BX" },
	{ HDA_CODEC_IDT92HD81B1C,	"IDT 92HD81B1C" },
	{ HDA_CODEC_IDT92HD81B1X,	"IDT 92HD81B1X" },
	{ HDA_CODEC_IDT92HD83C1C,	"IDT 92HD83C1C" },
	{ HDA_CODEC_IDT92HD83C1X,	"IDT 92HD83C1X" },
	{ HDA_CODEC_IDT92HD87B1_3,	"IDT 92HD87B1/3" },
	{ HDA_CODEC_IDT92HD87B2_4,	"IDT 92HD87B2/4" },
	{ HDA_CODEC_IDT92HD89C3,	"IDT 92HD89C3" },
	{ HDA_CODEC_IDT92HD89C2,	"IDT 92HD89C2" },
	{ HDA_CODEC_IDT92HD89C1,	"IDT 92HD89C1" },
	{ HDA_CODEC_IDT92HD89B3,	"IDT 92HD89B3" },
	{ HDA_CODEC_IDT92HD89B2,	"IDT 92HD89B2" },
	{ HDA_CODEC_IDT92HD89B1,	"IDT 92HD89B1" },
	{ HDA_CODEC_IDT92HD89E3,	"IDT 92HD89E3" },
	{ HDA_CODEC_IDT92HD89E2,	"IDT 92HD89E2" },
	{ HDA_CODEC_IDT92HD89E1,	"IDT 92HD89E1" },
	{ HDA_CODEC_IDT92HD89D3,	"IDT 92HD89D3" },
	{ HDA_CODEC_IDT92HD89D2,	"IDT 92HD89D2" },
	{ HDA_CODEC_IDT92HD89D1,	"IDT 92HD89D1" },
	{ HDA_CODEC_IDT92HD89F3,	"IDT 92HD89F3" },
	{ HDA_CODEC_IDT92HD89F2,	"IDT 92HD89F2" },
	{ HDA_CODEC_IDT92HD89F1,	"IDT 92HD89F1" },
	{ HDA_CODEC_IDT92HD90BXX,	"IDT 92HD90BXX" },
	{ HDA_CODEC_IDT92HD91BXX,	"IDT 92HD91BXX" },
	{ HDA_CODEC_IDT92HD93BXX,	"IDT 92HD93BXX" },
	{ HDA_CODEC_IDT92HD98BXX,	"IDT 92HD98BXX" },
	{ HDA_CODEC_IDT92HD99BXX,	"IDT 92HD99BXX" },
	{ HDA_CODEC_CX20549,		"Conexant CX20549 (Venice)" },
	{ HDA_CODEC_CX20551,		"Conexant CX20551 (Waikiki)" },
	{ HDA_CODEC_CX20561,		"Conexant CX20561 (Hermosa)" },
	{ HDA_CODEC_CX20582,		"Conexant CX20582 (Pebble)" },
	{ HDA_CODEC_CX20583,		"Conexant CX20583 (Pebble HSF)" },
	{ HDA_CODEC_CX20584,		"Conexant CX20584" },
	{ HDA_CODEC_CX20585,		"Conexant CX20585" },
	{ HDA_CODEC_CX20588,		"Conexant CX20588" },
	{ HDA_CODEC_CX20590,		"Conexant CX20590" },
	{ HDA_CODEC_CX20631,		"Conexant CX20631" },
	{ HDA_CODEC_CX20632,		"Conexant CX20632" },
	{ HDA_CODEC_CX20641,		"Conexant CX20641" },
	{ HDA_CODEC_CX20642,		"Conexant CX20642" },
	{ HDA_CODEC_CX20651,		"Conexant CX20651" },
	{ HDA_CODEC_CX20652,		"Conexant CX20652" },
	{ HDA_CODEC_CX20664,		"Conexant CX20664" },
	{ HDA_CODEC_CX20665,		"Conexant CX20665" },
	{ HDA_CODEC_VT1708_8,		"VIA VT1708_8" },
	{ HDA_CODEC_VT1708_9,		"VIA VT1708_9" },
	{ HDA_CODEC_VT1708_A,		"VIA VT1708_A" },
	{ HDA_CODEC_VT1708_B,		"VIA VT1708_B" },
	{ HDA_CODEC_VT1709_0,		"VIA VT1709_0" },
	{ HDA_CODEC_VT1709_1,		"VIA VT1709_1" },
	{ HDA_CODEC_VT1709_2,		"VIA VT1709_2" },
	{ HDA_CODEC_VT1709_3,		"VIA VT1709_3" },
	{ HDA_CODEC_VT1709_4,		"VIA VT1709_4" },
	{ HDA_CODEC_VT1709_5,		"VIA VT1709_5" },
	{ HDA_CODEC_VT1709_6,		"VIA VT1709_6" },
	{ HDA_CODEC_VT1709_7,		"VIA VT1709_7" },
	{ HDA_CODEC_VT1708B_0,		"VIA VT1708B_0" },
	{ HDA_CODEC_VT1708B_1,		"VIA VT1708B_1" },
	{ HDA_CODEC_VT1708B_2,		"VIA VT1708B_2" },
	{ HDA_CODEC_VT1708B_3,		"VIA VT1708B_3" },
	{ HDA_CODEC_VT1708B_4,		"VIA VT1708B_4" },
	{ HDA_CODEC_VT1708B_5,		"VIA VT1708B_5" },
	{ HDA_CODEC_VT1708B_6,		"VIA VT1708B_6" },
	{ HDA_CODEC_VT1708B_7,		"VIA VT1708B_7" },
	{ HDA_CODEC_VT1708S_0,		"VIA VT1708S_0" },
	{ HDA_CODEC_VT1708S_1,		"VIA VT1708S_1" },
	{ HDA_CODEC_VT1708S_2,		"VIA VT1708S_2" },
	{ HDA_CODEC_VT1708S_3,		"VIA VT1708S_3" },
	{ HDA_CODEC_VT1708S_4,		"VIA VT1708S_4" },
	{ HDA_CODEC_VT1708S_5,		"VIA VT1708S_5" },
	{ HDA_CODEC_VT1708S_6,		"VIA VT1708S_6" },
	{ HDA_CODEC_VT1708S_7,		"VIA VT1708S_7" },
	{ HDA_CODEC_VT1702_0,		"VIA VT1702_0" },
	{ HDA_CODEC_VT1702_1,		"VIA VT1702_1" },
	{ HDA_CODEC_VT1702_2,		"VIA VT1702_2" },
	{ HDA_CODEC_VT1702_3,		"VIA VT1702_3" },
	{ HDA_CODEC_VT1702_4,		"VIA VT1702_4" },
	{ HDA_CODEC_VT1702_5,		"VIA VT1702_5" },
	{ HDA_CODEC_VT1702_6,		"VIA VT1702_6" },
	{ HDA_CODEC_VT1702_7,		"VIA VT1702_7" },
	{ HDA_CODEC_VT1716S_0,		"VIA VT1716S_0" },
	{ HDA_CODEC_VT1716S_1,		"VIA VT1716S_1" },
	{ HDA_CODEC_VT1718S_0,		"VIA VT1718S_0" },
	{ HDA_CODEC_VT1718S_1,		"VIA VT1718S_1" },
	{ HDA_CODEC_VT1802_0,		"VIA VT1802_0" },
	{ HDA_CODEC_VT1802_1,		"VIA VT1802_1" },
	{ HDA_CODEC_VT1812,			"VIA VT1812" },
	{ HDA_CODEC_VT1818S,		"VIA VT1818S" },
	{ HDA_CODEC_VT1828S,		"VIA VT1828S" },
	{ HDA_CODEC_VT2002P_0,		"VIA VT2002P_0" },
	{ HDA_CODEC_VT2002P_1,		"VIA VT2002P_1" },
	{ HDA_CODEC_VT2020,			"VIA VT2020" },
	{ HDA_CODEC_ATIRS600_1,		"ATI RS600 HDMI" },
	{ HDA_CODEC_ATIRS600_2,		"ATI RS600 HDMI" },
	{ HDA_CODEC_ATIRS690,		"ATI RS690/780 HDMI" },
	{ HDA_CODEC_ATIR6XX,		"ATI R6xx HDMI" },
	{ HDA_CODEC_NVIDIAMCP67,	"NVidia MCP67 HDMI" },
	{ HDA_CODEC_NVIDIAMCP73,	"NVidia MCP73 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78_2,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78_3,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78_4,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP7A,	"NVidia MCP7A HDMI" },
	{ HDA_CODEC_NVIDIAGT220, 	"NVidia GT220 HDMI" },
	{ HDA_CODEC_NVIDIAGT21X, 	"NVidia GT21x HDMI" },
	{ HDA_CODEC_NVIDIAMCP89, 	"NVidia MCP89 HDMI" },
	{ HDA_CODEC_NVIDIAGT240, 	"NVidia GT240 HDMI" },
    { HDA_CODEC_NVIDIAGTX470,   "NVidia GTX470 HDMI" },
	{ HDA_CODEC_NVIDIAGTS450, 	"NVidia GTS450 HDMI" },
	{ HDA_CODEC_NVIDIAGT440, 	"NVidia GT440 HDMI" },
	{ HDA_CODEC_NVIDIAGTX550, 	"NVidia GTX550 HDMI" },
	{ HDA_CODEC_NVIDIAGTX570, 	"NVidia GTX570 HDMI" },
    { HDA_CODEC_NVIDIAGTX680,   "NVidia GTX680 HDMI" },
	{ HDA_CODEC_INTELIP,		"Intel HD (Ironlake) HDMI" },
	{ HDA_CODEC_INTELBL,		"Intel 3100/X3500 (Bearlake) HDMI" },
	{ HDA_CODEC_INTELCA,		"Intel 4500MHD (Cantiga) HDMI" },
	{ HDA_CODEC_INTELEL,		"Intel (X)4500(HD) (Eaglelake) HDMI" },
	{ HDA_CODEC_INTELIP2,		"Intel HD (Ironlake) HDMI" },
	{ HDA_CODEC_INTELCPT,		"Intel HD 3000 (Sandy Bridge) HDMI" },
	{ HDA_CODEC_INTELPPT,		"Intel HD 4000 (Ivy Bridge) HDMI" },
	{ HDA_CODEC_INTELCL,		"Intel X3100 (Crestline) HDMI" },
	{ HDA_CODEC_SII1390,		"Silicon Image SiI1390 HDMI" },
	{ HDA_CODEC_SII1392,		"Silicon Image SiI1392 HDMI" },
	/* Unknown codec */
	{ HDA_CODEC_ADXXXX,			"Analog Devices (Unknown)" },
	{ HDA_CODEC_AGEREXXXX,		"Lucent/Agere Systems (Unknown)" },
	{ HDA_CODEC_ALCXXXX,		"Realtek (Unknown)" },
	{ HDA_CODEC_ATIXXXX,		"ATI (Unknown)" },
	{ HDA_CODEC_CAXXXX,			"Creative (Unknown)" },
	{ HDA_CODEC_CMIXXXX,		"CMedia (Unknown)" },
	{ HDA_CODEC_CMIXXXX2,		"CMedia (Unknown)" },
	{ HDA_CODEC_CSXXXX,			"Cirrus Logic (Unknown)" },
	{ HDA_CODEC_CXXXXX,			"Conexant (Unknown)" },
	{ HDA_CODEC_CHXXXX,			"Chrontel (Unknown)" },
	{ HDA_CODEC_IDTXXXX,		"IDT (Unknown)" },
	{ HDA_CODEC_INTELXXXX,		"Intel (Unknown)" },
	{ HDA_CODEC_MOTOXXXX,		"Motorola (Unknown)" },
	{ HDA_CODEC_NVIDIAXXXX,		"NVidia (Unknown)" },
	{ HDA_CODEC_SIIXXXX,		"Silicon Image (Unknown)" },
	{ HDA_CODEC_STACXXXX,		"Sigmatel (Unknown)" },
	{ HDA_CODEC_VTXXXX,			"VIA (Unknown)" },
	{ 0,						NULL }
};

#endif
