
/**************************************************************/
/*                                                            */
/*      Copyright Mentor Graphics Corporation 2006 - 2012     */
/*                  All Rights Reserved                       */
/*                                                            */
/*       THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY      */
/*         INFORMATION WHICH IS THE PROPERTY OF MENTOR        */
/*         GRAPHICS CORPORATION OR ITS LICENSORS AND IS       */
/*                 SUBJECT TO LICENSE TERMS.                  */
/*                                                            */
/**************************************************************/

//*<
//* Generated By Model Builder, Mentor Graphics Computer Systems, Inc.
//*
//* This file contains the PV class for driver.
//* This is a template file: You may modify this file to implement the 
//* behavior of your component. 
//* 
//* Model Builder version: 4.1.0
//* Generated on: Jan. 27, 2016 03:09:19 PM, (user: mbradley)
//*>


#pragma once

#include "driver_model.h"
#include "data.h"

using namespace tlm;

//This class inherits from the driver_pv_base class
class driver_pv : public driver_pv_base {
 public:
  typedef esl::tlm_types::Address mb_address_type;
 public:
  // Constructor
  // Do not add parameters here.
  // To add parameters - use the Model Builder form (under PV->Parameters tab)
  SC_HAS_PROCESS(driver_pv);
  driver_pv(sc_core::sc_module_name module_name);        

 protected:
  ////////////////////////////////////////
  // signals callbacks
  //////////////////////////////////////// 
  void irq_callback(); 

  // user code

  void thread();

  char msg[64];
  sc_event gotIrqEvent;
  FILE * fp;

};

