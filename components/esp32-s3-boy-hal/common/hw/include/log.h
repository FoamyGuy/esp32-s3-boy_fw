/*
 * log.h
 *
 *  Created on: Nov 12, 2021
 *      Author: baram
 */

#ifndef SRC_COMMON_HW_INCLUDE_LOG_H_
#define SRC_COMMON_HW_INCLUDE_LOG_H_


#ifdef __cplusplus
extern "C" {
#endif

#include "hw_def.h"


#ifdef _USE_HW_LOG

#define LOG_CH            HW_LOG_CH
#define LOG_BOOT_BUF_MAX  HW_LOG_BOOT_BUF_MAX
#define LOG_LIST_BUF_MAX  HW_LOG_LIST_BUF_MAX


bool logInit(void);
void logEnable(void);
void logDisable(void);
bool logOpen(uint8_t ch, uint32_t baud);
void logBoot(uint8_t enable);
#if !_USE_LOG_PRINT
void logPrintf(const char *fmt, ...);
#endif
#endif

#ifdef __cplusplus
}
#endif


#endif /* SRC_COMMON_HW_INCLUDE_LOG_H_ */
