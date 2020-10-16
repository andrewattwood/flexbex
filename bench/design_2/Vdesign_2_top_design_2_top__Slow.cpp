// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top_design_2_top.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vdesign_2_top_design_2_top) {
    VL_CELL(forte_soc_top_i, Vdesign_2_top_forte_soc_top);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vdesign_2_top_design_2_top::__Vconfigure(Vdesign_2_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vdesign_2_top_design_2_top::~Vdesign_2_top_design_2_top() {
}

void Vdesign_2_top_design_2_top::_initial__TOP__design_2_top__2(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdesign_2_top_design_2_top::_initial__TOP__design_2_top__2\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider = 0x516U;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider = 0x516U;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out = 1U;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state = 0U;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 0U;
}

void Vdesign_2_top_design_2_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdesign_2_top_design_2_top::_ctor_var_reset\n"); );
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
    __PVT__ibex_core_w_0_data_addr_o = VL_RAND_RESET_I(32);
    __PVT__ibex_core_w_0_data_be_o = VL_RAND_RESET_I(4);
    __PVT__ibex_core_w_0_data_req_o = VL_RAND_RESET_I(1);
    __PVT__ibex_core_w_0_data_wdata_o = VL_RAND_RESET_I(32);
    __PVT__ibex_core_w_0_data_we_o = VL_RAND_RESET_I(1);
    __PVT__ibex_core_w_0_instr_addr_o = VL_RAND_RESET_I(32);
    __PVT__ibex_core_w_0_instr_req_o = VL_RAND_RESET_I(1);
    __PVT__ram_w_0_ibex_data_gnt_o = VL_RAND_RESET_I(1);
    __PVT__ram_w_0_ibex_data_rdata_o = VL_RAND_RESET_I(32);
    __PVT__ram_w_0_ibex_data_rvalid_o = VL_RAND_RESET_I(1);
    __PVT__ram_w_0_instr_gnt_o = VL_RAND_RESET_I(1);
    __PVT__ram_w_0_instr_rdata_o = VL_RAND_RESET_I(32);
    __PVT__ram_w_0_instr_rvalid_o = VL_RAND_RESET_I(1);
    __PVT__ram_w_0_uart_data_gnt_o = VL_RAND_RESET_I(1);
    __PVT__ram_w_0_uart_data_rdata_o = VL_RAND_RESET_I(32);
    __PVT__ram_w_0_uart_data_rvalid_o = VL_RAND_RESET_I(1);
    __PVT__uart_to_mem_w_0_data_addr_o = VL_RAND_RESET_I(12);
    __PVT__uart_to_mem_w_0_data_be_o = VL_RAND_RESET_I(4);
    __PVT__uart_to_mem_w_0_data_req_o = VL_RAND_RESET_I(1);
    __PVT__uart_to_mem_w_0_data_wdata_o = VL_RAND_RESET_I(32);
    __PVT__uart_to_mem_w_0_data_we_o = VL_RAND_RESET_I(1);
    __PVT__cont_2_uart_i__DOT__transmit = VL_RAND_RESET_I(1);
    __PVT__cont_2_uart_i__DOT__send = VL_RAND_RESET_I(8);
    __PVT__cont_2_uart_i__DOT__UART_STATE = VL_RAND_RESET_I(3);
    __PVT__cont_2_uart_i__DOT__trans_txn_ff2 = VL_RAND_RESET_I(1);
    __PVT__cont_2_uart_i__DOT__trans_txn_ff = VL_RAND_RESET_I(1);
    __PVT__cont_2_uart_i__DOT__idle_count = VL_RAND_RESET_I(4);
    __PVT__cont_2_uart_i__DOT__data_count = VL_RAND_RESET_I(2);
    __PVT__cont_2_uart_i__DOT__read_count = VL_RAND_RESET_I(2);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider = VL_RAND_RESET_I(11);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider = VL_RAND_RESET_I(11);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = VL_RAND_RESET_I(3);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown = VL_RAND_RESET_I(6);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining = VL_RAND_RESET_I(4);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data = VL_RAND_RESET_I(8);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out = VL_RAND_RESET_I(1);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state = VL_RAND_RESET_I(2);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown = VL_RAND_RESET_I(6);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining = VL_RAND_RESET_I(4);
    __PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data = VL_RAND_RESET_I(8);
}
