#ifndef __SOES_HOOK_H__
#define __SOES_HOOK_H__

#include <ecat_options.h>

typedef struct {
	uint8_t _rx[MAX_RXPDO_SIZE];
} CC_PACKED rx_pdo_t;

typedef struct {
	uint8_t _tx[MAX_TXPDO_SIZE];
} CC_PACKED tx_pdo_t;

void bootstrap_foe_init(void);

#endif 
