// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vdesign_2_top) {
    Vdesign_2_top__Syms* __restrict vlSymsp = __VlSymsp = new Vdesign_2_top__Syms(this, name());
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(design_2_top, Vdesign_2_top_design_2_top);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vdesign_2_top::__Vconfigure(Vdesign_2_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vdesign_2_top::~Vdesign_2_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vdesign_2_top::_settle__TOP__1(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_settle__TOP__1\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cont_2_uart_w_0_complete = vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete;
    vlTOPp->cont_2_uart_w_0_read_data_o = vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o;
    vlTOPp->irq_id_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
    vlTOPp->irq_ack_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__irq_ack_o;
    vlTOPp->eFPGA_operand_b_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id;
    vlTOPp->eFPGA_operand_a_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id;
}

void Vdesign_2_top::_settle__TOP__4(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_settle__TOP__4\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uart_recv_error = (5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state));
}

void Vdesign_2_top::_eval_initial(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_eval_initial\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlSymsp->TOP__design_2_top._initial__TOP__design_2_top__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i._initial__TOP__design_2_top__forte_soc_top_i__6(vlSymsp);
    vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk;
}

void Vdesign_2_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::final\n"); );
    // Variables
    Vdesign_2_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdesign_2_top::_eval_settle(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_eval_settle\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i._settle__TOP__design_2_top__forte_soc_top_i__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0._settle__TOP__design_2_top__forte_soc_top_i__ram_0__1(vlSymsp);
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i._settle__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__1(vlSymsp);
    vlSymsp->TOP__design_2_top__forte_soc_top_i._settle__TOP__design_2_top__forte_soc_top_i__2(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vdesign_2_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_ctor_var_reset\n"); );
    // Body
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    we_i = VL_RAND_RESET_I(1);
    irq_id_o = VL_RAND_RESET_I(5);
    irq_id_i = VL_RAND_RESET_I(5);
    irq_i = VL_RAND_RESET_I(1);
    irq_ack_o = VL_RAND_RESET_I(1);
    debug_req_i = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    cont_2_uart_w_0_read_data_o = VL_RAND_RESET_I(32);
    data = VL_RAND_RESET_I(32);
    address = VL_RAND_RESET_I(12);
    cont_2_uart_w_0_complete = VL_RAND_RESET_I(1);
    start_ibex = VL_RAND_RESET_I(1);
    eFPGA_operand_a_o = VL_RAND_RESET_I(32);
    eFPGA_operand_b_o = VL_RAND_RESET_I(32);
    eFPGA_result_a_i = VL_RAND_RESET_I(32);
    eFPGA_result_b_i = VL_RAND_RESET_I(32);
    eFPGA_result_c_i = VL_RAND_RESET_I(32);
    uart_recv_error = VL_RAND_RESET_I(1);
    __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_w_0_data_req_o = VL_RAND_RESET_I(1);
    __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__data_misaligned = VL_RAND_RESET_I(1);
    __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid = VL_RAND_RESET_I(1);
    __Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__id_stage_i__DOT__deassert_we = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<10; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
