// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDESIGN_2_TOP_H_
#define _VDESIGN_2_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vdesign_2_top__Dpi.h"

//==========

class Vdesign_2_top__Syms;
class Vdesign_2_top_VerilatedVcd;
class Vdesign_2_top_design_2_top;


//----------

VL_MODULE(Vdesign_2_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vdesign_2_top_design_2_top* design_2_top;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(we_i,0,0);
    VL_OUT8(irq_id_o,4,0);
    VL_IN8(irq_id_i,4,0);
    VL_IN8(irq_i,0,0);
    VL_OUT8(irq_ack_o,0,0);
    VL_IN8(debug_req_i,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(cont_2_uart_w_0_complete,0,0);
    VL_IN8(start_ibex,0,0);
    VL_OUT8(uart_recv_error,0,0);
    VL_IN16(address,11,0);
    VL_OUT(cont_2_uart_w_0_read_data_o,31,0);
    VL_IN(data,31,0);
    VL_OUT(eFPGA_operand_a_o,31,0);
    VL_OUT(eFPGA_operand_b_o,31,0);
    VL_IN(eFPGA_result_a_i,31,0);
    VL_IN(eFPGA_result_b_i,31,0);
    VL_IN(eFPGA_result_c_i,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk;
    CData/*0:0*/ __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_w_0_data_req_o;
    CData/*0:0*/ __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__data_misaligned;
    CData/*0:0*/ __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_valid;
    CData/*0:0*/ __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid;
    CData/*0:0*/ __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__id_stage_i__DOT__deassert_we;
    CData/*0:0*/ __Vm_traceActivity[10];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vdesign_2_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign_2_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vdesign_2_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vdesign_2_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vdesign_2_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vdesign_2_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vdesign_2_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vdesign_2_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vdesign_2_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
