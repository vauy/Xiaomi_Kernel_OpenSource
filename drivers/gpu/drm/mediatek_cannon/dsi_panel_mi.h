#ifndef DSI_PANEL_MI_H
#define DSI_PANEL_MI_H

enum DISPPARAM_MODE {
	DISPPARAM_WARM = 0x1,
	DISPPARAM_DEFAULT = 0x2,
	DISPPARAM_COLD = 0x3,
	DISPPARAM_PAPERMODE8 = 0x5,
	DISPPARAM_PAPERMODE1 = 0x6,
	DISPPARAM_PAPERMODE2 = 0x7,
	DISPPARAM_PAPERMODE3 = 0x8,
	DISPPARAM_PAPERMODE4 = 0x9,
	DISPPARAM_PAPERMODE5 = 0xA,
	DISPPARAM_PAPERMODE6 = 0xB,
	DISPPARAM_PAPERMODE7 = 0xC,
	DISPPARAM_WHITEPOINT_XY = 0xE,
	DISPPARAM_CE_ON = 0x10,
	DISPPARAM_CE_OFF = 0xF0,
	DISPPARAM_CABCUI_ON = 0x100,
	DISPPARAM_CABCSTILL_ON = 0x200,
	DISPPARAM_CABCMOVIE_ON = 0x300,
	DISPPARAM_CABC_OFF = 0x400,
	DISPPARAM_SKIN_CE_CABCUI_ON = 0x500,
	DISPPARAM_SKIN_CE_CABCSTILL_ON = 0x600,
	DISPPARAM_SKIN_CE_CABCMOVIE_ON = 0x700,
	DISPPARAM_SKIN_CE_CABC_OFF = 0x800,
	DISPPARAM_DIMMING_OFF = 0xE00,
	DISPPARAM_DIMMING = 0xF00,
	DISPPARAM_ACL_L1 = 0x1000,
	DISPPARAM_ACL_L2 = 0x2000,
	DISPPARAM_ACL_L3 = 0x3000,
	DISPPARAM_ACL_OFF = 0xF000,
	DISPPARAM_HBM_ON = 0x10000,
	DISPPARAM_HBM_FOD_ON = 0x20000,
	DISPPARAM_HBM_FOD2NORM = 0x30000,
	DISPPARAM_DC_ON = 0x40000,
	DISPPARAM_DC_OFF = 0x50000,
	DISPPARAM_HBM_FOD_OFF = 0xE0000,
	DISPPARAM_HBM_OFF = 0xF0000,
	DISPPARAM_LCD_HBM_L1_ON = 0xB0000,
	DISPPARAM_LCD_HBM_L2_ON = 0xC0000,
	DISPPARAM_LCD_HBM_L3_ON = 0xD0000,
	DISPPARAM_LCD_HBM_OFF      = 0xA0000,
	DISPPARAM_NORMALMODE1 = 0x100000,
	DISPPARAM_P3 = 0x200000,
	DISPPARAM_SRGB = 0x300000,
	DISPPARAM_SKIN_CE = 0x400000,
	DISPPARAM_SKIN_CE_OFF = 0x500000,
	DISPPARAM_DOZE_BRIGHTNESS_HBM = 0x600000,
	DISPPARAM_DOZE_BRIGHTNESS_LBM = 0x700000,
	DISPPARAM_DOZE_OFF = 0x800000,
	DISPPARAM_HBM_BACKLIGHT_RESEND = 0xA00000,
	DISPPARAM_FOD_BACKLIGHT = 0xD00000,
	DISPPARAM_CRC_P3_D65 = 0xE00000,
	DISPPARAM_CRC_OFF = 0xF00000,
	DISPPARAM_FOD_BACKLIGHT_ON = 0x1000000,
	DISPPARAM_FOD_BACKLIGHT_OFF = 0x2000000,
	DISPPARAM_FLAT_CRC_P3 = 0x4000000,
	DISPPARAM_ONE_PLUSE = 0x5000000,
	DISPPARAM_FOUR_PLUSE = 0x6000000,
	DISPPARAM_DEMURA_LEVEL02 = 0x7000000,
	DISPPARAM_DEMURA_LEVEL08 = 0x8000000,
	DISPPARAM_DEMURA_LEVEL0D = 0x9000000,
	DISPPARAM_IDLE_ON = 0xA000000,
	DISPPARAM_IDLE_OFF = 0xB000000,
	DISPPARAM_BACKLIGHT_SET = 0xC000000,
	DISPPARAM_PANEL_ID_GET = 0xD000000,
	DISPPARAM_SET_THERMAL_HBM_DISABLE     = 0xE000000,
	DISPPARAM_CLEAR_THERMAL_HBM_DISABLE   = 0xF000000,
	DISPPARAM_DOZE_STATE = 0x10000000,
	DISPPARAM_RESTORE_BACKLIGHT = 0x20000000,
	DISPPARAM_DFPS_STATE = 0x30000000,
	DISPPARAM_THERMAL_HBM_DISABLE = 0x50000000,
	DISPPARAM_MAX_LUMINANCE = 0x30000000,
	DISPPARAM_THERMAL_HBM_ENABLE = 0x40000000,
};

#endif // DSI_PANEL_MI_H
