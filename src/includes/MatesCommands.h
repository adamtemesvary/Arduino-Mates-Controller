#ifndef __MatesCommands_H__
#define __MatesCommands_H__

#define MATES_CMD_START_BYTE  '$'

typedef enum MatesCommand {
  MATES_CMD_SET_PAGE = 0x0000,
  MATES_CMD_GET_PAGE = 0x0001,
  MATES_CMD_SET_WIDGET_VALUE = 0x0002,
  MATES_CMD_GET_WIDGET_VALUE = 0x0003,
  MATES_CMD_SET_WIDGET_PARAM = 0x0004,
  MATES_CMD_GET_WIDGET_PARAM = 0x0005,
  MATES_CMD_SET_BACKLIGHT = 0x0006,
  MATES_CMD_CLR_PRINT_AREA = 0x0007,
  MATES_CMD_SET_PRINT_COLOR = 0x0008,
  MATES_CMD_SYSTEM_RESET = 0x0009,
  MATES_CMD_UPDATE_TEXT_AREA = 0xFFFF,
  MATES_CMD_APPEND_PRINT_AREA = 0xFFFE,
  MATES_CMD_PRINT_STRING = 0xFFFD,
  MATES_CMD_SET_WIDGET_32VAL = 0xFFFC,
  MATES_CMD_APPEND_SCOPE_DATA = 0xFFFB,
  MATES_CMD_UPDATE_DOT_MATRIX = 0xFFFA
} MatesCommands;

#endif // __MatesCommands_H__
