/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
* this software. By using this software, you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2023 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : drp_proc.h
* Version      : 7.40
* Description  : RZ/V DRP-AI Sample Application for USB Camera version
***********************************************************************************************************************/

#pragma once
#ifndef DRPPROC_H
#define DRPPROC_H

/*****************************************
* Includes
******************************************/
#include "define.h"
#include <linux/drpai.h>

using namespace	 std;
class DRPProc
{
public:
    int8_t drp_open();
    int8_t drp_close();
    int8_t read_addrmap_txt(std::string addr_file, st_addr_t* drpai_address);
    int8_t load_data_to_mem(std::string data, uint32_t from, uint32_t size);
    int8_t load_drpai_data(st_addr_t& drpai_address, std::string drpai_file_path[]);
    int8_t drp_pselect(sigset_t* sigset);
    int8_t drp_start(drpai_data_t drpData[]);
    int8_t drp_getStatus(drpai_status_t* drpai_status);
    int8_t drp_assign(drpai_data_t* drpai_data);
    int8_t drp_read(void* outDataBuff, int32_t buffSize);
private:
    double timedifference_msec(struct timespec t0, struct timespec t1);

public:
    int32_t _drpai_fd;
};
#endif
