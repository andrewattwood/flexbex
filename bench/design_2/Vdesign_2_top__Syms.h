// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VDESIGN_2_TOP__SYMS_H_
#define _VDESIGN_2_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vdesign_2_top.h"
#include "Vdesign_2_top_design_2_top.h"
#include "Vdesign_2_top_forte_soc_top.h"
#include "Vdesign_2_top___024unit.h"
#include "Vdesign_2_top_ram.h"
#include "Vdesign_2_top_dp_ram.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vdesign_2_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vdesign_2_top*                 TOPp;
    Vdesign_2_top_design_2_top     TOP__design_2_top;
    Vdesign_2_top_forte_soc_top    TOP__design_2_top__forte_soc_top_i;
    Vdesign_2_top_ram              TOP__design_2_top__forte_soc_top_i__ram_0;
    Vdesign_2_top_dp_ram           TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i;
    
    // CREATORS
    Vdesign_2_top__Syms(Vdesign_2_top* topp, const char* namep);
    ~Vdesign_2_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
