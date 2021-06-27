/**
  ******************************************************************************
  * @file    Inc/command.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    4-April-2016
  * @brief   Header file for command.c
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _COMMAND_H
#define _COMMAND_H

#ifdef __cplusplus
extern "C"
{
#endif

  /* Includes ------------------------------------------------------------------*/
#include "flash_if.h"
#include "main.h"
#include "fatfs.h"


  /* Exported types ------------------------------------------------------------*/
  /* Exported constants --------------------------------------------------------*/
  enum  /* Error code */
  {
    DOWNLOAD_OK = 0,
    DOWNLOAD_FAIL,
    DOWNLOAD_FILE_FAIL,
    DOWNLOAD_ERASE_FAIL,
    DOWNLOAD_WRITE_FAIL
  };

  /* Exported macros -----------------------------------------------------------*/
  /* Exported functions ------------------------------------------------------- */
//  void COMMAND_UPLOAD(void);
//  void COMMAND_JUMP(void);
  uint8_t COMMAND_DOWNLOAD(void);
  uint8_t COMMAND_ProgramFlashMemory(void);
  uint8_t is_update_available(void);
  FRESULT card_unlink(void);

#ifdef __cplusplus
}
#endif

#endif  /* _COMMAND_H */

/*******************(C)COPYRIGHT STMicroelectronics *****END OF FILE******/
