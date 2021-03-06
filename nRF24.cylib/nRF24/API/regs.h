/****************************************************************************
* This file is part of the PSoC Creator nRF24 Custom Component project.
*
* Copyright (C) 2016 Carlos Diaz <carlos.santiago.diaz@gmail.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
****************************************************************************/

#if !defined (`$INSTANCE_NAME`_REGS_H)
#define `$INSTANCE_NAME`_REGS_H

/* nRF24L01P Registers definitions */
    
#define NRF_CONFIG          0x00
#define NRF_EN_AA           0x01
#define NRF_EN_RXADDR       0x02
#define NRF_SETUP_AW        0x03
#define NRF_SETUP_RETR      0x04
#define NRF_RF_CH           0x05
#define NRF_RF_SETUP        0x06
#define NRF_STATUS          0x07
#define NRF_OBSERVE_TX      0x08
#define NRF_RPD             0x09
#define NRF_RX_ADDR_P0      0x0A
#define NRF_RX_ADDR_P1      0x0B
#define NRF_RX_ADDR_P2      0x0C
#define NRF_RX_ADDR_P3      0x0D
#define NRF_RX_ADDR_P4      0x0E
#define NRF_RX_ADDR_P5      0x0F
#define NRF_TX_ADDR         0x10
#define NRF_RX_PW_P0        0x11
#define NRF_RX_PW_P1        0x12
#define NRF_RX_PW_P2        0x13
#define NRF_RX_PW_P3        0x14
#define NRF_RX_PW_P4        0x15
#define NRF_RX_PW_P5        0x16
#define NRF_FIFO_STATUS     0x17
#define NRF_DYNPD           0x1C
#define NRF_FEATURE         0x1D

/* Register: CONFIG */
/* Address: 0x00 */
/* Configuration Register */
#define NRF_CONFIG_PRIM_RX      0
#define NRF_CONFIG_PWR_UP       1
#define NRF_CONFIG_CRCO         2
#define NRF_CONFIG_EN_CRC       3
#define NRF_CONFIG_MASK_MAX_RT  4
#define NRF_CONFIG_MASK_TX_DS   5
#define NRF_CONFIG_MASK_RX_DR   6

/* Register: EN_AA */
/* Address: 0x01 */
/* Enable Enhanced ShockBurst */
#define NRF_EN_AA_ENAA_P0   0
#define NRF_EN_AA_ENAA_P1   1
#define NRF_EN_AA_ENAA_P2   2
#define NRF_EN_AA_ENAA_P3   3
#define NRF_EN_AA_ENAA_P4   4
#define NRF_EN_AA_ENAA_P5   5
#define NRF_EN_AA_ENAA_ALL  0x3F
#define NRF_EN_AA_ENAA_NONE 0x00

/* Register: EN_RXADDR */
/* Address: 0x02 */
/* Enabled RX Addresses */
#define NRF_EN_RXADDR_ERX_P0    0
#define NRF_EN_RXADDR_ERX_P1    1
#define NRF_EN_RXADDR_ERX_P2    2
#define NRF_EN_RXADDR_ERX_P3    3
#define NRF_EN_RXADDR_ERX_P4    4
#define NRF_EN_RXADDR_ERX_P5    5
#define NRF_EN_RXADDR_ERX_ALL   0x3F
#define NRF_EN_RXADDR_ERX_NONE  0x00

/* Register: SETUP_AW */
/* Address: 0x03 */
/* Setup of Address Widths(common for all data pipes) */
#define NRF_SETUP_AW_3BYTES 3
#define NRF_SETUP_AW_4BYTES 4
#define NRF_SETUP_AW_5BYTES 1

/* Register: SETUP_RETR */
/* Address: 0x04 */
/* Setup of Automatic Retransmission */
#define NRF_SETUP_RETR_ARD_4000   0xF0 /* 4400 us retry delay */
#define NRF_SETUP_RETR_ARD_3750   0xE0 /* 3750 us retry delay */
#define NRF_SETUP_RETR_ARD_3500   0xD0 /* 3500 us retry delay */
#define NRF_SETUP_RETR_ARD_3250   0xC0 /* 3250 us retry delay */
#define NRF_SETUP_RETR_ARD_3000   0xB0 /* 3000 us retry delay */
#define NRF_SETUP_RETR_ARD_2750   0xA0 /* 2750 us retry delay */
#define NRF_SETUP_RETR_ARD_2500   0x90 /* 2500 us retry delay */
#define NRF_SETUP_RETR_ARD_2250   0x80 /* 2250 us retry delay */
#define NRF_SETUP_RETR_ARD_2000   0x70 /* 2000 us retry delay */
#define NRF_SETUP_RETR_ARD_1750   0x60 /* 1750 us retry delay */
#define NRF_SETUP_RETR_ARD_1500   0x50 /* 1500 us retry delay */
#define NRF_SETUP_RETR_ARD_1250   0x40 /* 1250 us retry delay */
#define NRF_SETUP_RETR_ARD_1000   0x30 /* 1000 us retry delay */
#define NRF_SETUP_RETR_ARD_750    0x20 /* 750 us retry delay */
#define NRF_SETUP_RETR_ARD_500    0x10 /* 500 us retry delay */
#define NRF_SETUP_RETR_ARD_250    0x00 /* 250 us retry delay */
#define NRF_SETUP_RETR_ARC_15     0x0F /* 15 retry count */
#define NRF_SETUP_RETR_ARC_14     0x0E /* 14 retry count */
#define NRF_SETUP_RETR_ARC_13     0x0D /* 13 retry count */
#define NRF_SETUP_RETR_ARC_12     0x0C /* 12 retry count */
#define NRF_SETUP_RETR_ARC_11     0x0B /* 11 retry count */
#define NRF_SETUP_RETR_ARC_10     0x0A /* 10 retry count */
#define NRF_SETUP_RETR_ARC_9      0x09 /* 9 retry count */
#define NRF_SETUP_RETR_ARC_8      0x08 /* 8 retry count */
#define NRF_SETUP_RETR_ARC_7      0x07 /* 7 retry count */
#define NRF_SETUP_RETR_ARC_6      0x06 /* 6 retry count */
#define NRF_SETUP_RETR_ARC_5      0x05 /* 5 retry count */
#define NRF_SETUP_RETR_ARC_4      0x04 /* 4 retry count */
#define NRF_SETUP_RETR_ARC_3      0x03 /* 3 retry count */
#define NRF_SETUP_RETR_ARC_2      0x02 /* 2 retry count */
#define NRF_SETUP_RETR_ARC_1      0x01 /* 1 retry count */
#define NRF_SETUP_RETR_ARC_0      0x00 /* 0 retry count, retry disabled */

/* Register: RF_CH */
/* Address: 0x05 */
/* RF Channel */
/* nRF24L01p handle up to 125 RF channels */

/* Register: RF_SETUP */
/* Address: 0x06 */
/* RF Setup Register */
#define NRF_RF_SETUP_RF_DR_HIGH 3
#define NRF_RF_SETUP_PLL_LOCK   4
#define NRF_RF_SETUP_RF_DR_LOW  5
#define NRF_RF_SETUP_CONT_WAVE  7
#define NRF_RF_SETUP_RF_DR_250  0x20
#define NRF_RF_SETUP_RF_DR_1000 0x00
#define NRF_RF_SETUP_RF_DR_2000 0x08
#define NRF_RF_SETUP_RF_PWR     0x06
#define NRF_RF_SETUP_RF_PWR_0   0x06
#define NRF_RF_SETUP_RF_PWR_6   0x04
#define NRF_RF_SETUP_RF_PWR_12  0x02
#define NRF_RF_SETUP_RF_PWR_18  0x00

/* Register: STATUS */
/* Address: 0x07 */
/* Status Register */
#define NRF_STATUS_RX_DR_MASK   0x40u
#define NRF_STATUS_TX_DS_MASK   0x20u
#define NRF_STATUS_MAX_RT_MASK  0x10u

#define NRF_STATUS_DATA_IS_RDY  0x40

#define NRF_STATUS_TX_FULL  0
#define NRF_STATUS_TX_FIFO_FULL 0x01
#define NRF_STATUS_TX_FIFO_AV_LOC 0x00
#define NRF_STATUS_MAX_RT   4
#define NRF_STATUS_TX_DS    5
#define NRF_STATUS_RX_DR    6
#define NRF_STATUS_RX_P_NO_RX_FIFO_NOT_EMPTY  0x0E
#define NRF_STATUS_RX_P_NO_UNUSED  0x0C
#define NRF_STATUS_RX_P_NO_5  0x0A
#define NRF_STATUS_RX_P_NO_4  0x08
#define NRF_STATUS_RX_P_NO_3  0x06
#define NRF_STATUS_RX_P_NO_2  0x04
#define NRF_STATUS_RX_P_NO_1  0x02
#define NRF_STATUS_RX_P_NO_0  0x00

/* Register: OBSERVE TX */
/* Address: 0x08 */
/* Transmit observe register */
#define NRF_OBSERVE_TX_PLOS_CNT_MASK    0xF0
#define NRF_OBSERVE_TX_ARC_CNT_MASK     0x0F

/* Register: RPD */
/* Address: 0x09 */
/* Received Power Detector */
#define NRF_RPD_RPD 0

/* Register: SETUP_AW */
/* Address: 0x03 */
/* Setup of Address Widths(common for all data pipes) */

#define NRF_RX_PW_MASK  0x3F

/* Register: FIFO_STATUS */
/* Address: 0x17 */
/* FIFO Status Register */
#define NRF_FIFO_STATUS_RX_EMPTY_POS    0
#define NRF_FIFO_STATUS_RX_FULL_POS     1
#define NRF_FIFO_STATUS_TX_EMPTY_POS    4
#define NRF_FIFO_STATUS_TX_FULL_POS     5
#define NRF_FIFO_STATUS_TX_REUSE_POS    6

#define NRF_FIFO_STATUS_RX_EMPTY_MASK    (1 << NRF_FIFO_STATUS_RX_EMPTY_POS)
#define NRF_FIFO_STATUS_RX_FULL_MASK     (1 << NRF_FIFO_STATUS_RX_FULL_POS)
#define NRF_FIFO_STATUS_TX_EMPTY_MASK    (1 << NRF_FIFO_STATUS_TX_EMPTY_POS)
#define NRF_FIFO_STATUS_TX_FULL_MASK     (1 << NRF_FIFO_STATUS_TX_FULL_POS)
#define NRF_FIFO_STATUS_TX_REUSE_MASK    (1 << NRF_FIFO_STATUS_TX_REUSE_POS)

/* Register: DYNPD */
/* Address: 0x1C */
/* Enable dynamic payload length */

#define NRF_DYNPD_DPL_P0_POS    0
#define NRF_DYNPD_DPL_P1_POS    1
#define NRF_DYNPD_DPL_P2_POS    2
#define NRF_DYNPD_DPL_P3_POS    3
#define NRF_DYNPD_DPL_P4_POS    4
#define NRF_DYNPD_DPL_P5_POS    5

#define NRF_DYNPD_DPL_P0    (1 << NRF_DYNPD_DPL_P0_POS)
#define NRF_DYNPD_DPL_P1    (1 << NRF_DYNPD_DPL_P1_POS)
#define NRF_DYNPD_DPL_P2    (1 << NRF_DYNPD_DPL_P2_POS)
#define NRF_DYNPD_DPL_P3    (1 << NRF_DYNPD_DPL_P3_POS)
#define NRF_DYNPD_DPL_P4    (1 << NRF_DYNPD_DPL_P4_POS)
#define NRF_DYNPD_DPL_P5    (1 << NRF_DYNPD_DPL_P5_POS)
#define NRF_ENABLE_DYNPD_ALLPIPES   0x3F
#define NRF_DISABLE_DYNPD_ALLPIPES  0x00

/* Register: FEATURE */
/* Address: 0x1D */
/* Feature Register */

#define NRF_FEATURE_EN_DYN_ACK_POS  0
#define NRF_FEATURE_EN_ACK_PAY_POS  1
#define NRF_FEATURE_EN_DPL_POS      2

#define NRF_FEATURE_EN_DYN_ACK  (1 << NRF_FEATURE_EN_DYN_ACK_POS)
#define NRF_FEATURE_EN_ACK_PAY  (1 << NRF_FEATURE_EN_ACK_PAY_POS)
#define NRF_FEATURE_EN_DPL      (1 << NRF_FEATURE_EN_DPL_POS)

/* Command Name Mnemonics (Instructions) */
#define NRF_R_REGISTER     0x00
#define NRF_W_REGISTER     0x20
#define NRF_REGISTER_MASK  0x1F
#define NRF_R_RX_PAYLOAD   0x61
#define NRF_W_TX_PAYLOAD   0xA0
#define NRF_FLUSH_TX       0xE1
#define NRF_FLUSH_RX       0xE2
#define NRF_REUSE_TX_PL    0xE3
#define NRF_R_RX_PL_WID    0x60
#define NRF_W_ACK_PAYLOAD  0xA8
#define NRF_W_TX_PAYLOAD_NOACK 0xB0
#define NRF_NOP            0xFF

/* Data pipes */
#define NRF_DATA_PIPE1  0x00
#define NRF_DATA_PIPE2  0x01
#define NRF_DATA_PIPE3  0x02
#define NRF_DATA_PIPE4  0x03
#define NRF_DATA_PIPE5  0x04

/* NRF24 Registers Default Values */
#define NRF_CONFIG_DEFAULT_VAL         0x08
#define NRF_EN_AA_DEFAULT_VAL          0x3F
#define NRF_EN_RXADDR_DEFAULT_VAL      0x03
#define NRF_SETUP_AW_DEFAULT_VAL       0x03
#define NRF_SETUP_RETR_DEFAULT_VAL     0x03
#define NRF_RF_CH_DEFAULT_VAL          0x02
#define NRF_RF_SETUP_DEFAULT_VAL       0x0F
#define NRF_STATUS_DEFAULT_VAL         0x0E
#define NRF_OBSERVE_TX_DEFAULT_VAL     0x00
#define NRF_CD_DEFAULT_VAL             0x00
#define NRF_RX_ADDR_P0_B0_DEFAULT_VAL  0xE7
#define NRF_RX_ADDR_P0_B1_DEFAULT_VAL  0xE7
#define NRF_RX_ADDR_P0_B2_DEFAULT_VAL  0xE7
#define NRF_RX_ADDR_P0_B3_DEFAULT_VAL  0xE7
#define NRF_RX_ADDR_P0_B4_DEFAULT_VAL  0xE7
#define NRF_RX_ADDR_P1_B0_DEFAULT_VAL  0xC2
#define NRF_RX_ADDR_P1_B1_DEFAULT_VAL  0xC2
#define NRF_RX_ADDR_P1_B2_DEFAULT_VAL  0xC2
#define NRF_RX_ADDR_P1_B3_DEFAULT_VAL  0xC2
#define NRF_RX_ADDR_P1_B4_DEFAULT_VAL  0xC2
#define NRF_RX_ADDR_P2_DEFAULT_VAL     0xC3
#define NRF_RX_ADDR_P3_DEFAULT_VAL     0xC4
#define NRF_RX_ADDR_P4_DEFAULT_VAL     0xC5
#define NRF_RX_ADDR_P5_DEFAULT_VAL     0xC6
#define NRF_TX_ADDR_B0_DEFAULT_VAL     0xE7
#define NRF_TX_ADDR_B1_DEFAULT_VAL     0xE7
#define NRF_TX_ADDR_B2_DEFAULT_VAL     0xE7
#define NRF_TX_ADDR_B3_DEFAULT_VAL     0xE7
#define NRF_TX_ADDR_B4_DEFAULT_VAL     0xE7
#define NRF_RX_PW_P0_DEFAULT_VAL       0x00
#define NRF_RX_PW_P1_DEFAULT_VAL       0x00
#define NRF_RX_PW_P2_DEFAULT_VAL       0x00
#define NRF_RX_PW_P3_DEFAULT_VAL       0x00
#define NRF_RX_PW_P4_DEFAULT_VAL       0x00
#define NRF_RX_PW_P5_DEFAULT_VAL       0x00
#define NRF_FIFO_STATUS_DEFAULT_VAL    0x11

#endif /* NRF_REGS_H */

/* [] END OF FILE */
