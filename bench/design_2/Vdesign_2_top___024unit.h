// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign_2_top.h for the primary calling header

#ifndef _VDESIGN_2_TOP___024UNIT_H_
#define _VDESIGN_2_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "Vdesign_2_top__Dpi.h"

//==========

class Vdesign_2_top__Syms;
class Vdesign_2_top_VerilatedVcd;


//----------

VL_MODULE(Vdesign_2_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vdesign_2_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign_2_top___024unit);  ///< Copying not allowed
  public:
    Vdesign_2_top___024unit(const char* name = "TOP");
    ~Vdesign_2_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vdesign_2_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
