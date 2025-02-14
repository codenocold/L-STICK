#ifndef SDK_CONFIG_H
#define SDK_CONFIG_H


// Logger
#define NRF_LOG_ENABLED 1
#define NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED 1
#define NRF_LOG_USES_COLORS 1
#define NRF_LOG_COLOR_DEFAULT 0
#define NRF_LOG_ERROR_COLOR 2
#define NRF_LOG_WARNING_COLOR 4
#define NRF_LOG_DEFAULT_LEVEL 4
#define NRF_LOG_DEFERRED 0
#define NRF_LOG_BUFSIZE 1024
#define NRF_LOG_ALLOW_OVERFLOW 1
#define NRF_LOG_USES_TIMESTAMP 0
#define NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY 32768
#define NRF_LOG_FILTERS_ENABLED 0
#define NRF_LOG_CLI_CMDS 0
#define NRF_LOG_MSGPOOL_ELEMENT_SIZE 20
#define NRF_LOG_MSGPOOL_ELEMENT_COUNT 8

// Log RTT backend
#define NRF_LOG_BACKEND_RTT_ENABLED 1
#define NRF_LOG_BACKEND_RTT_TEMP_BUFFER_SIZE 64
#define NRF_LOG_BACKEND_RTT_TX_RETRY_DELAY_MS 1
#define NRF_LOG_BACKEND_RTT_TX_RETRY_CNT 3

// SEGGER RTT
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_UP 512
#define SEGGER_RTT_CONFIG_MAX_NUM_UP_BUFFERS 2
#define SEGGER_RTT_CONFIG_BUFFER_SIZE_DOWN 16
#define SEGGER_RTT_CONFIG_MAX_NUM_DOWN_BUFFERS 2
#define SEGGER_RTT_CONFIG_DEFAULT_MODE 0

// Block allocator module
#define NRF_BALLOC_ENABLED 1
#define NRF_BALLOC_CLI_CMDS 0
#define NRF_BALLOC_CONFIG_LOG_ENABLED 0
#define NRF_BALLOC_CONFIG_LOG_LEVEL 3
#define NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL 3
#define NRF_BALLOC_CONFIG_INFO_COLOR 0
#define NRF_BALLOC_CONFIG_DEBUG_COLOR 0
#define NRF_BALLOC_CONFIG_DEBUG_ENABLED 0
#define NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS 1
#define NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS 1
#define NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED 0
#define NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED 0
#define NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED 0

// fprintf function
#define NRF_FPRINTF_ENABLED 1

// Queue module
#define NRF_QUEUE_ENABLED 1
#define NRF_QUEUE_CONFIG_INFO_COLOR 0
#define NRF_QUEUE_CONFIG_DEBUG_COLOR 0
#define NRF_QUEUE_CONFIG_LOG_ENABLED 0
#define NRF_QUEUE_CONFIG_LOG_LEVEL 0
#define NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL 0

// TWI transaction manager
#define NRF_TWI_MNGR_ENABLED 1
#define NRFX_TWI_ENABLED 1
#define NRFX_TWI0_ENABLED 1


#endif
