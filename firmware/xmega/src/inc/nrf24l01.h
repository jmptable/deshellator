#ifndef H_NRF24L01
#define H_NRF24L01

#define PORT_RF PORTC
#define RF_SCK  5
#define RF_MOSI 7
#define RF_CE   4
#define RF_CSN  0
#define RF_MISO 6
#define RF_IRQ  1

#define RF_CMD_R_REGISTER           0x00
#define RF_CMD_W_REGISTER           0x20
#define RF_CMD_R_RX_PAYLOAD         0x61
#define RF_CMD_W_TX_PAYLOAD         0xA0
#define RF_CMD_FLUSH_TX             0xE1
#define RF_CMD_FLUSH_RX             0xE2
#define RF_CMD_REUSE_TX_PL          0xE3
#define RF_CMD_R_RX_PL_WID          0x60
#define RF_CMD_W_ACK_PAYLOAD        0xA8
#define RF_CMD_W_TX_PAYLOAD_NO_ACK  0xB0
#define RF_CMD_NOP                  0xFF

#define RF_REG_CONFIG   0x00
#define RF_REG_STATUS   0x07
#define RF_REG_RX_PW_P0 0x11

#define PWR_UP  1
#define PRIM_RX 0

void rf_init_rx(void);
void rf_init_tx(void);
//int rf_rx(void);
void rf_transfer(uint8_t* data, int len);
void rf_write_reg(uint8_t addr, uint8_t value);
void rf_mode_rx(void);
uint8_t rf_rx(void);
uint8_t rf_available(void);

#endif
