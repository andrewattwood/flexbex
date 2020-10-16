// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign_2_top.h for the primary calling header

#ifndef _VDESIGN_2_TOP_RAM_H_
#define _VDESIGN_2_TOP_RAM_H_  // guard

#include "verilated_heavy.h"
#include "Vdesign_2_top__Dpi.h"

//==========

class Vdesign_2_top__Syms;
class Vdesign_2_top_VerilatedVcd;
class Vdesign_2_top_dp_ram;


//----------

VL_MODULE(Vdesign_2_top_ram) {
  public:
    // CELLS
    Vdesign_2_top_dp_ram* dp_ram_i;
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__instr_req_i,0,0);
    VL_OUT8(__PVT__instr_rvalid_o,0,0);
    VL_OUT8(__PVT__instr_gnt_o,0,0);
    VL_IN8(__PVT__ibex_data_req_i,0,0);
    VL_IN8(__PVT__ibex_data_we_i,0,0);
    VL_IN8(__PVT__ibex_data_be_i,3,0);
    VL_OUT8(__PVT__ibex_data_rvalid_o,0,0);
    VL_OUT8(__PVT__ibex_data_gnt_o,0,0);
    VL_IN8(__PVT__uart_data_req_i,0,0);
    VL_IN8(__PVT__uart_data_we_i,0,0);
    VL_IN8(__PVT__uart_data_be_i,3,0);
    VL_OUT8(__PVT__uart_data_rvalid_o,0,0);
    VL_OUT8(__PVT__uart_data_gnt_o,0,0);
    VL_IN16(__PVT__instr_addr_i,11,0);
    VL_IN16(__PVT__ibex_data_addr_i,11,0);
    VL_IN16(__PVT__uart_data_addr_i,11,0);
    VL_OUT(__PVT__instr_rdata_o,31,0);
    VL_IN(__PVT__ibex_data_wdata_i,31,0);
    VL_OUT(__PVT__ibex_data_rdata_o,31,0);
    VL_IN(__PVT__uart_data_wdata_i,31,0);
    VL_OUT(__PVT__uart_data_rdata_o,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__data_req_i;
    SData/*11:0*/ __PVT__data_addr_i;
    IData/*31:0*/ __PVT__data_wdata_i;
    
    // INTERNAL VARIABLES
  private:
    Vdesign_2_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign_2_top_ram);  ///< Copying not allowed
  public:
    Vdesign_2_top_ram(const char* name = "TOP");
    ~Vdesign_2_top_ram();
    
    // INTERNAL METHODS
    void __Vconfigure(Vdesign_2_top__Syms* symsp, bool first);
    static void _combo__TOP__design_2_top__forte_soc_top_i__ram_0__5(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__design_2_top__forte_soc_top_i__ram_0__6(Vdesign_2_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__design_2_top__forte_soc_top_i__ram_0__2(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__ram_0__3(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__ram_0__4(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__design_2_top__forte_soc_top_i__ram_0__1(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
