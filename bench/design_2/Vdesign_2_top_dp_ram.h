// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign_2_top.h for the primary calling header

#ifndef _VDESIGN_2_TOP_DP_RAM_H_
#define _VDESIGN_2_TOP_DP_RAM_H_  // guard

#include "verilated_heavy.h"
#include "Vdesign_2_top__Dpi.h"

//==========

class Vdesign_2_top__Syms;
class Vdesign_2_top_VerilatedVcd;


//----------

VL_MODULE(Vdesign_2_top_dp_ram) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__en_a_i,0,0);
    VL_IN8(__PVT__o_be_a_i,3,0);
    VL_IN8(__PVT__we_a_i,0,0);
    VL_IN8(__PVT__en_b_i,0,0);
    VL_IN8(__PVT__o_be_b_i,3,0);
    VL_IN8(__PVT__we_b_i,0,0);
    VL_IN16(__PVT__addr_a_i,11,0);
    VL_IN16(__PVT__addr_b_i,11,0);
    VL_IN(__PVT__wdata_a_i,31,0);
    VL_OUT(__PVT__rdata_a_o,31,0);
    VL_IN(__PVT__wdata_b_i,31,0);
    VL_OUT(__PVT__rdata_b_o,31,0);
    
    // LOCAL SIGNALS
    CData/*3:0*/ __PVT__be_b_i;
    IData/*31:0*/ __PVT__ram_block[4096];
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vdlyvlsb__ram_block__v0;
    CData/*7:0*/ __Vdlyvval__ram_block__v0;
    CData/*0:0*/ __Vdlyvset__ram_block__v0;
    CData/*4:0*/ __Vdlyvlsb__ram_block__v1;
    CData/*7:0*/ __Vdlyvval__ram_block__v1;
    CData/*0:0*/ __Vdlyvset__ram_block__v1;
    CData/*4:0*/ __Vdlyvlsb__ram_block__v2;
    CData/*7:0*/ __Vdlyvval__ram_block__v2;
    CData/*0:0*/ __Vdlyvset__ram_block__v2;
    CData/*4:0*/ __Vdlyvlsb__ram_block__v3;
    CData/*7:0*/ __Vdlyvval__ram_block__v3;
    CData/*0:0*/ __Vdlyvset__ram_block__v3;
    SData/*11:0*/ __Vdlyvdim0__ram_block__v0;
    SData/*11:0*/ __Vdlyvdim0__ram_block__v1;
    SData/*11:0*/ __Vdlyvdim0__ram_block__v2;
    SData/*11:0*/ __Vdlyvdim0__ram_block__v3;
    
    // INTERNAL VARIABLES
  private:
    Vdesign_2_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign_2_top_dp_ram);  ///< Copying not allowed
  public:
    Vdesign_2_top_dp_ram(const char* name = "TOP");
    ~Vdesign_2_top_dp_ram();
    
    // INTERNAL METHODS
    void __Vconfigure(Vdesign_2_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__2(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__3(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__1(Vdesign_2_top__Syms* __restrict vlSymsp);
    uint32_t readByte(uint32_t byte_addr);
    uint32_t readWord(uint32_t word_addr);
    void writeByte(uint32_t byte_addr, uint32_t val);
    void writeWord(uint32_t addr, uint32_t val);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
