#ifndef _SSV_CFG_H_
#define _SSV_CFG_H_
#define SSV6200_HW_CAP_HT 0x00000001
#define SSV6200_HW_CAP_GF 0x00000002
#define SSV6200_HW_CAP_2GHZ 0x00000004
#define SSV6200_HW_CAP_5GHZ 0x00000008
#define SSV6200_HW_CAP_SECURITY 0x00000010
#define SSV6200_HT_CAP_SGI_20 0x00000020
#define SSV6200_HT_CAP_SGI_40 0x00000040
#define SSV6200_HW_CAP_AP 0x00000080
#define SSV6200_HW_CAP_P2P 0x00000100
#define SSV6200_HW_CAP_AMPDU_RX 0x00000200
#define SSV6200_HW_CAP_AMPDU_TX 0x00000400
#define SSV6200_HW_CAP_TDLS 0x00000800
#define EXTERNEL_CONFIG_SUPPORT 64
struct ssv6xxx_cfg
{
	u32 hw_caps;
	u32 def_chan;
	u32 crystal_type;
	u8 maddr[2][6];
	u32 n_maddr;
	u32 use_wpa2_only;
	u32 ignore_reset_in_ap;
	u32 chip_id;
	u32 r_calbration_result;
	u32 sar_result;
	u32 crystal_frequency_offset;
	u32 tx_power_index_1;
	u32 tx_power_index_2;
	u32 chip_identity;
	u32 wifi_tx_gain_level_gn;
	u32 wifi_tx_gain_level_b;
	u32 configuration[EXTERNEL_CONFIG_SUPPORT + 1][2];
};
#endif
