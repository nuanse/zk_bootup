/* SigmaStar trade secret */
/* Copyright (c) [2019~2020] SigmaStar Technology.
All rights reserved.

Unless otherwise stipulated in writing, any and all information contained
herein regardless in any format shall remain the sole proprietary of
SigmaStar and be kept in strict confidence
(SigmaStar Confidential Information) by the recipient.
Any unauthorized act including without limitation unauthorized disclosure,
copying, use, reproduction, sale, distribution, modification, disassembling,
reverse engineering and compiling of the contents of SigmaStar Confidential
Information is unlawful and strictly prohibited. SigmaStar hereby reserves the
rights to any and all damages, losses, costs and expenses resulting therefrom.
*/
#ifndef _MI_SHADOW_DATATYPE_H_
#define _MI_SHADOW_DATATYPE_H_

#include "mi_sys_datatype.h"

#define MI_SHADOW_DUMP_BUFFER_SIZE (12 * 1024)

/* SHADOW Module ErrorCode */
#define MI_ERR_SHADOW_INVALID_DEVID MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_INVALID_DEVID)
#define MI_ERR_SHADOW_INVALID_CHNID MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_INVALID_CHNID)
#define MI_ERR_SHADOW_ILLEGAL_PARAM MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_ILLEGAL_PARAM)
#define MI_ERR_SHADOW_EXIST MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_EXIST)
#define MI_ERR_SHADOW_UNEXIST MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_UNEXIST)
#define MI_ERR_SHADOW_NULL_PTR MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NULL_PTR)
#define MI_ERR_SHADOW_NOT_CONFIG MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOT_CONFIG)
#define MI_ERR_SHADOW_NOT_SUPPORT MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOT_SUPPORT)
#define MI_ERR_SHADOW_NOT_PERM MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOT_PERM)
#define MI_ERR_SHADOW_NOMEM MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOMEM)
#define MI_ERR_SHADOW_NOBUF MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOBUF)
#define MI_ERR_SHADOW_BUF_EMPTY MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_BUF_EMPTY)
#define MI_ERR_SHADOW_BUF_FULL MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_BUF_FULL)
#define MI_ERR_SHADOW_NOTREADY MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_SYS_NOTREADY)
#define MI_ERR_SHADOW_BADADDR MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_BADADDR)
#define MI_ERR_SHADOW_BUSY MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_BUSY)
#define MI_ERR_SHADOW_CHN_NOT_STARTED MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_CHN_NOT_STARTED)
#define MI_ERR_SHADOW_CHN_NOT_STOPED MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_CHN_NOT_STOPED)
#define MI_ERR_SHADOW_NOT_INIT MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOT_INIT)
#define MI_ERR_SHADOW_INITED MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_INITED)
#define MI_ERR_SHADOW_NOT_ENABLE MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOT_ENABLE)
#define MI_ERR_SHADOW_NOT_DISABLE MI_DEF_ERR(E_MI_MODULE_ID_SHADOW,E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOT_DISABLE)
#define MI_ERR_SHADOW_TIMEOUT MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_SYS_TIMEOUT)
#define MI_ERR_SHADOW_DEV_NOT_STARTED MI_DEF_ERR(E_MI_MODULE_ID_SHADOW,E_MI_ERR_LEVEL_ERROR, E_MI_ERR_DEV_NOT_STARTED)
#define MI_ERR_SHADOW_DEV_NOT_STOPED MI_DEF_ERR(E_MI_MODULE_ID_SHADOW,E_MI_ERR_LEVEL_ERROR, E_MI_ERR_DEV_NOT_STOPED)
#define MI_ERR_SHADOW_CHN_NO_CONTENT MI_DEF_ERR(E_MI_MODULE_ID_SHADOW,E_MI_ERR_LEVEL_ERROR, E_MI_ERR_CHN_NO_CONTENT)
#define MI_ERR_SHADOW_NOVASAPCE MI_DEF_ERR(E_MI_MODULE_ID_SHADOW,E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOVASPACE)
#define MI_ERR_SHADOW_NOITEM MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_NOITEM)
#define MI_ERR_SHADOW_FAILED MI_DEF_ERR(E_MI_MODULE_ID_SHADOW, E_MI_ERR_LEVEL_ERROR, E_MI_ERR_FAILED)

typedef enum
{
    MI_SHADOW_CALLBACK_EVENT_ONBINDINPUTPORT,
    MI_SHADOW_CALLBACK_EVENT_ONBINDOUTPUTPORT,
    MI_SHADOW_CALLBACK_EVENT_ONUNBINDINPUTPORT,
    MI_SHADOW_CALLBACK_EVENT_ONUNBINDOUTPUTPORT,
    MI_SHADOW_CALLBACK_EVENT_BINDMAX,

    MI_SHADOW_CALLBACK_EVENT_ONDumpDEVATTR,
    MI_SHADOW_CALLBACK_EVENT_ONDumpCHANNELATTR,
    MI_SHADOW_CALLBACK_EVENT_ONDumpINPUTPORTATTR,
    MI_SHADOW_CALLBACK_EVENT_ONDumpOUTPUTPORTATTR,
    MI_SHADOW_CALLBACK_EVENT_ONHELP,
    MI_SHADOW_CALLBACK_EVENT_DUMPMAX,

    MI_SHADOW_CALLBACK_EVENT_CMDDEBUGLEVEL,
    MI_SHADOW_CALLBACK_EVENT_CMDCHECKPOINT,
    MI_SHADOW_CALLBACK_EVENT_CMDSELFCHECKING,
    MI_SHADOW_CALLBACK_EVENT_CMDWORKMODEENABLE,
    MI_SHADOW_CALLBACK_EVENT_CMDCHNENABLE,
    MI_SHADOW_CALLBACK_EVENT_CMDDUMPALLENABLE,
    MI_SHADOW_CALLBACK_EVENT_CMDDUMPIMAGE,
    MI_SHADOW_CALLBACK_EVENT_CMDMAX,

    MI_SHADOW_CALLBACK_EVENT_EXIT,
    MI_SHADOW_CALLBACK_EVENT_TIMEOUT,
    MI_SHADOW_CALLBACK_EVENT_MAX,
} MI_SHADOW_CALLBACK_EVENT_e;

typedef struct MI_SHADOW_ModuleDevInfo_s
{
    MI_ModuleId_e eModuleId;
    MI_U32 u32DevId;
    MI_U32 u32InputPortNum;
    MI_U32 u32OutputPortNum;
    MI_U32 u32DevChnNum;
}MI_SHADOW_ModuleDevInfo_t;

#define MI_SHADOW_HANDLE MI_HANDLE
typedef MI_S32 (* MI_SHADOW_Callback)(MI_SYS_ChnPort_t *pstChnCurryPort, MI_SYS_ChnPort_t *pstChnPeerPort, void *pUsrData);
typedef MI_S32 (* MI_SHADOW_DumpCallback)(MI_SHADOW_HANDLE handle, MI_U32  u32DevId, void *pUsrData);
typedef MI_S32 (* MI_SHADOW_CmdCallback)(MI_SHADOW_HANDLE handle, MI_U32 u32DevId, MI_U8 argc, MI_S8 **argv, void *pUsrData);

typedef struct MI_SHADOW_RegisterDevParams_s
{
    MI_SHADOW_ModuleDevInfo_t stModDevInfo;

    MI_SHADOW_Callback OnBindInputPort;
    MI_SHADOW_Callback OnBindOutputPort;
    MI_SHADOW_Callback OnUnBindInputPort;
    MI_SHADOW_Callback OnUnBindOutputPort;

    MI_SHADOW_DumpCallback OnDumpDevAttr;
    MI_SHADOW_DumpCallback OnDumpChannelAttr;
    MI_SHADOW_DumpCallback OnDumpInputPortAttr;
    MI_SHADOW_DumpCallback OnDumpOutPortAttr;
    MI_SHADOW_DumpCallback OnHelp;

    MI_SHADOW_CmdCallback CmdDebugLevel;
    MI_SHADOW_CmdCallback CmdCheckPoint;
    MI_SHADOW_CmdCallback CmdSelfChecking;
    MI_SHADOW_CmdCallback CmdWorkModeEnable;
    MI_SHADOW_CmdCallback CmdChnEnable;
    MI_SHADOW_CmdCallback CmdDumpAllEnable;
    MI_SHADOW_CmdCallback CmdDumpImage;

    void *pUsrData;
    MI_U8 *pDumpBuf;
} MI_SHADOW_RegisterDevParams_t;

typedef struct MI_SHADOW_InitParam_s
{
    MI_U32 u32DevId;
    MI_U8 *u8Data;
} MI_SHADOW_InitParam_t;

#endif ///_MI_SHADOW_DATATYPE_H_