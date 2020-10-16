// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top_forte_soc_top.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_combo__TOP__design_2_top__forte_soc_top_i__3(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_combo__TOP__design_2_top__forte_soc_top_i__3\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xffdU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) 
              << 1U));
    if ((1U & (~ (IData)(vlTOPp->clk)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_clock_gate_i__DOT__clk_en = 1U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk 
        = ((IData)(vlTOPp->clk) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__4(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__4\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__uart_to_mem_i__DOT__write_issued;
    CData/*0:0*/ __Vdly__uart_to_mem_i__DOT__read_registered;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_complete 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_complete;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__DATA_READ 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ;
    __Vdly__uart_to_mem_i__DOT__read_registered = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_registered;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_issued 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued;
    __Vdly__uart_to_mem_i__DOT__write_issued = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued;
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state = 0U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider 
        = (0x7ffU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider) 
                     - (IData)(1U)));
    if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider)))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider = 0x516U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown 
            = (0x3fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown) 
                        - (IData)(1U)));
    }
    if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider = 0x516U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown = 2U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown)))))) {
                if (vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state = 5U;
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown = 4U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining = 8U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state = 2U;
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown)))))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining 
                        = (0xfU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining) 
                                   - (IData)(1U)));
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data 
                        = (((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out) 
                            << 7U) | (0x7fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data) 
                                               >> 1U)));
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown = 4U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state 
                        = ((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining))
                            ? 2U : 3U);
                }
            } else {
                if ((3U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown)))))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state 
                            = ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out)
                                ? 6U : 5U);
                    }
                } else {
                    if ((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state 
                            = ((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown))
                                ? 4U : 0U);
                    } else {
                        if ((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown = 8U;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state = 4U;
                        } else {
                            if ((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state = 0U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider 
        = (0x7ffU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider) 
                     - (IData)(1U)));
    if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider)))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider = 0x516U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown 
            = (0x3fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown) 
                        - (IData)(1U)));
    }
    if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state))) {
        if (((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff2)) 
             & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider = 0x516U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown = 4U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out = 0U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining = 8U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown)))))) {
                if ((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining 
                        = (0xfU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining) 
                                   - (IData)(1U)));
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out 
                        = (1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data));
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown = 4U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data 
                        = (0x7fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data) 
                                    >> 1U));
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown = 8U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state = 2U;
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state 
                    = ((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown))
                        ? 2U : 0U);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o;
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__recv_ack_i = 0U;
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__baud_i = 0x2580U;
    }
    if (vlTOPp->reset) {
        __Vdly__uart_to_mem_i__DOT__write_issued = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_issued = 0U;
        __Vdly__uart_to_mem_i__DOT__read_registered = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__DATA_READ = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_complete = 0U;
    } else {
        if ((((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count)) 
              | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued)) 
             & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__we))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued) {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_gnt_o) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o = 0U;
                        __Vdly__uart_to_mem_i__DOT__write_issued = 0U;
                    }
                }
            } else {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o = 1U;
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o = 1U;
                __Vdly__uart_to_mem_i__DOT__write_issued = 1U;
            }
        } else {
            if (((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued)) 
                 & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_complete = 0U;
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o = 0U;
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o = 1U;
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_issued = 1U;
            } else {
                if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued) 
                     & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_gnt_o))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o = 0U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_issued = 0U;
                    __Vdly__uart_to_mem_i__DOT__read_registered = 1U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_registered) {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_rvalid_o) {
                            __Vdly__uart_to_mem_i__DOT__read_registered = 0U;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__DATA_READ 
                                = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_complete = 1U;
                        }
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_complete) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_complete = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued 
        = __Vdly__uart_to_mem_i__DOT__write_issued;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_registered 
        = __Vdly__uart_to_mem_i__DOT__read_registered;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit));
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__5(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__5\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__uart_to_mem_i__DOT__UART_STATE;
    CData/*2:0*/ __Vdly__uart_to_mem_i__DOT__data_count;
    CData/*0:0*/ __Vdly__uart_to_mem_i__DOT__we;
    // Body
    __Vdly__uart_to_mem_i__DOT__we = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__we;
    __Vdly__uart_to_mem_i__DOT__data_count = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count;
    __Vdly__uart_to_mem_i__DOT__UART_STATE = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE;
    if (vlTOPp->reset) {
        __Vdly__uart_to_mem_i__DOT__UART_STATE = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 0U;
        __Vdly__uart_to_mem_i__DOT__data_count = 4U;
        __Vdly__uart_to_mem_i__DOT__we = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i = 0U;
    } else {
        if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE))) {
            __Vdly__uart_to_mem_i__DOT__data_count = 4U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read = 0U;
            if ((((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state)) 
                  & (6U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) 
                 & (0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i = 0x20U;
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
            } else {
                if ((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                    if ((5U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                        if ((0x41U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i = 0x41U;
                            __Vdly__uart_to_mem_i__DOT__we = 1U;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                            __Vdly__uart_to_mem_i__DOT__UART_STATE = 1U;
                        } else {
                            if (VL_UNLIKELY((0x42U 
                                             == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data)))) {
                                VL_WRITEF("IDLE to WAIT_ADDR_HEAD \n\n");
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i = 0x42U;
                                __Vdly__uart_to_mem_i__DOT__we = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                                __Vdly__uart_to_mem_i__DOT__UART_STATE = 1U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 0U;
                }
            }
        } else {
            if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE))) {
                if ((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                    if ((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                        __Vdly__uart_to_mem_i__DOT__UART_STATE = 0U;
                    } else {
                        if (VL_UNLIKELY((3U == (7U 
                                                & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data) 
                                                   >> 5U))))) {
                            VL_WRITEF("WAIT_ADDR_HEAD to WAIT_ADDR_TAIL\n\n");
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS 
                                = ((0xffU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS)) 
                                   | (0x1f00U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data) 
                                                 << 8U)));
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                            __Vdly__uart_to_mem_i__DOT__UART_STATE = 2U;
                        }
                    }
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 0U;
                }
            } else {
                if ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE))) {
                    if ((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS 
                            = ((0xf00U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS)) 
                               | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data));
                        __Vdly__uart_to_mem_i__DOT__data_count = 4U;
                        if ((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                            __Vdly__uart_to_mem_i__DOT__UART_STATE = 0U;
                        } else {
                            if (VL_LIKELY(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__we)) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                                __Vdly__uart_to_mem_i__DOT__UART_STATE = 3U;
                            } else {
                                VL_WRITEF("WAIT_ADDR_TAIL received_o\n\n");
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read = 1U;
                            }
                        }
                    } else {
                        if (VL_UNLIKELY(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued)) {
                            VL_WRITEF("WAIT_ADDR_TAIL READ ISSUED\n\n");
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read = 0U;
                        } else {
                            if (VL_UNLIKELY(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_complete)) {
                                VL_WRITEF("WAIT_ADDR_TAIL to SEND_READ_DATA\n\n");
                                __Vdly__uart_to_mem_i__DOT__UART_STATE = 4U;
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 0U;
                            }
                        }
                    }
                } else {
                    if ((3U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE))) {
                        if (VL_UNLIKELY((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state)))) {
                            VL_WRITEF("packet recieved uart 2 mem\n");
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data;
                            if ((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA 
                                    = ((0xffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA) 
                                       | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data) 
                                          << 0x18U));
                                __Vdly__uart_to_mem_i__DOT__data_count = 3U;
                            } else {
                                if ((3U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA 
                                        = ((0xff00ffffU 
                                            & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA) 
                                           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data) 
                                              << 0x10U));
                                    __Vdly__uart_to_mem_i__DOT__data_count = 2U;
                                } else {
                                    if ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA 
                                            = ((0xffff00ffU 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA) 
                                               | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data) 
                                                  << 8U));
                                        __Vdly__uart_to_mem_i__DOT__data_count = 1U;
                                    } else {
                                        if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count))) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA 
                                                = (
                                                   (0xffffff00U 
                                                    & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA) 
                                                   | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data));
                                            __Vdly__uart_to_mem_i__DOT__data_count = 0U;
                                            __Vdly__uart_to_mem_i__DOT__UART_STATE = 0U;
                                        }
                                    }
                                }
                            }
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 0U;
                        }
                    } else {
                        if ((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE))) {
                            if (VL_UNLIKELY((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count)))) {
                                VL_WRITEF("U2M - Sending B1 -%3#\n",
                                          8,(0xffU 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
                                                >> 0x18U)));
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                    = (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
                                                >> 0x18U));
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                                __Vdly__uart_to_mem_i__DOT__data_count = 3U;
                            } else {
                                if ((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))) {
                                    if (VL_UNLIKELY(
                                                    (3U 
                                                     == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count)))) {
                                        VL_WRITEF("U2M - Sending B2 -%3#\n",
                                                  8,
                                                  (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
                                                      >> 0x10U)));
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                            = (0xffU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
                                                  >> 0x10U));
                                        __Vdly__uart_to_mem_i__DOT__data_count = 2U;
                                    } else {
                                        if (VL_UNLIKELY(
                                                        (2U 
                                                         == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count)))) {
                                            VL_WRITEF("U2M - Sending B3 -%3#\n",
                                                      8,
                                                      (0xffU 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
                                                          >> 8U)));
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                                = (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
                                                      >> 8U));
                                            __Vdly__uart_to_mem_i__DOT__data_count = 1U;
                                        } else {
                                            if (VL_UNLIKELY(
                                                            (1U 
                                                             == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count)))) {
                                                VL_WRITEF("U2M - Sending B4 -%3#\n",
                                                          8,
                                                          (0xffU 
                                                           & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ));
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i 
                                                    = 
                                                    (0xffU 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ);
                                                __Vdly__uart_to_mem_i__DOT__data_count = 0U;
                                            } else {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count))) {
                                                    __Vdly__uart_to_mem_i__DOT__UART_STATE = 0U;
                                                }
                                            }
                                        }
                                    }
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 1U;
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q 
        = ((~ (IData)(vlTOPp->reset)) & ((((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS)) 
                                           | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)) 
                                          | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy)) 
                                         | ((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                            | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE 
        = __Vdly__uart_to_mem_i__DOT__UART_STATE;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__we 
        = __Vdly__uart_to_mem_i__DOT__we;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count 
        = __Vdly__uart_to_mem_i__DOT__data_count;
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__7(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__7\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__unnamedblk2__DOT__r = 0x20U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk2__DOT__r = 1U;
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk1__DOT__r = 1U;
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q 
            = (0xffeU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q));
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__cs_registers_i__DOT____Vlvbound1 
            = (1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc));
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q 
            = ((0xffeU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q)) 
               | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__cs_registers_i__DOT____Vlvbound1));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_d));
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS));
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[1U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[2U] = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[0U];
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[1U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[1U];
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[2U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[2U];
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[2U] = 0U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U];
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U];
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[2U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U];
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q = 3U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q = 0U;
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q 
            = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)
                ? 0U : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_q 
        = ((IData)(vlTOPp->reset) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_q 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_n));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q = 3U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q = 3U;
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q 
            = (3U | (0xcU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n)));
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n;
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_valid_id = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_valid_id = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready) 
                 | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_valid_id = 0U;
            }
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS = 0U;
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS;
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_n;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_n;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_n;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_compressed_id = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_compressed_id 
                = (3U != (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata));
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
        = ((IData)(vlTOPp->reset) ? 0ULL : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en)
                                             ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n
                                             : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                                 ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n
                                                 : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)));
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__misaligned_addr = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__misaligned_addr 
                    = (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                               >> 1U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o) 
             & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_we_q)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q) 
                    | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned))
                    ? vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o
                    : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext);
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__illegal_c_insn_id = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__illegal_c_insn_id 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[1U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[2U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[3U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[4U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[5U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[6U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[7U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[8U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[9U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xaU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xbU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xcU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xdU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xeU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xfU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x10U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x11U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x12U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x13U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x14U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x15U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x16U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x17U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x18U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x19U] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1aU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1bU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1cU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1dU] = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1eU] = 0U;
    } else {
        if ((1U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[1U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((4U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[2U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((8U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[3U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x10U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[4U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x20U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[5U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x40U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[6U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x80U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[7U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x100U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[8U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x200U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[9U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x400U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xaU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x800U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xbU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x1000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xcU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xdU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xeU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x8000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xfU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x10000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x10U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x20000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x11U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x40000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x12U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x80000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x13U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x100000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x14U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x200000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x15U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x400000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x16U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x800000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x17U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x1000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x18U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x2000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x19U] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x4000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1aU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x8000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1bU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x10000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1cU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x20000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1dU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
        if ((0x40000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec)) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1eU] 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy = 0U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__irq_ack_o = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__irq_ack_o = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_ack = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_ack = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_if = 0U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_if = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_if = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int = 1U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int 
                = (1U & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U)) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                      >> 1U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)) 
                                      << 1U)));
        }
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? (1ULL | ((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_we_q = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[1U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[2U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[1U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[3U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[2U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[4U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[3U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[5U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[4U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[6U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[5U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[7U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[6U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[8U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[7U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[9U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[8U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0xaU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[9U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0xbU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xaU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0xcU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xbU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0xdU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xcU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0xeU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xdU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0xfU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xeU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x10U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0xfU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x11U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x10U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x12U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x11U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x13U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x12U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x14U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x13U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x15U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x14U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x16U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x15U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x17U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x16U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x18U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x17U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x19U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x18U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x1aU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x19U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x1bU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1aU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x1cU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1bU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x1dU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1cU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x1eU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1dU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[0x1fU] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[0x1eU];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec = 1U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_mux_dec = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_mux_dec = 1U;
    }
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__8(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__8\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r;
    CData/*3:0*/ __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count;
    // Body
    __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count;
    __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r;
    if (vlTOPp->reset) {
        __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r = 0U;
        __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count = 0U;
    } else {
        if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r))) {
            __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count = 0U;
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en) {
                __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r = 1U;
            }
        } else {
            if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r))) {
                __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count)));
                if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count) 
                     == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_delay))) {
                    __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r = 2U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result 
                        = ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator))
                            ? vlTOPp->eFPGA_result_a_i
                            : ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator))
                                ? vlTOPp->eFPGA_result_b_i
                                : ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator))
                                    ? vlTOPp->eFPGA_result_c_i
                                    : vlTOPp->eFPGA_result_a_i)));
                }
            } else {
                if ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r))) {
                    __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count 
        = __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r 
        = __Vdly__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r;
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__9(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__9\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (VL_UNLIKELY(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding) 
                     & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec)))) {
        VL_WRITEF("%t: Illegal instruction (core 0) at PC 0x%x: 0x%x\n",
                  64,VL_TIME_UNITED_Q(1),32,vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id,
                  32,vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id);
    }
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__10(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__10\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__DATA_READ;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_issued;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_complete 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_i__DOT__read_complete;
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__11(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__11\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vdly__uart_to_mem_w_0_data_req_o;
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_multiclk__TOP__design_2_top__forte_soc_top_i__12(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_multiclk__TOP__design_2_top__forte_soc_top_i__12\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U]
            : vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                          >> 0x1fU)))) 
                                           << 8U)) 
                           | (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                       >> 0x18U))) : 
                       (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                 >> 0x18U))) : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                 ? 
                                                ((0xffffff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                    >> 0x17U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                       >> 0x10U)))
                                                 : 
                                                (0xffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                    >> 0x10U))))
                : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                           | (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                       >> 8U))) : (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                      >> 8U)))
                    : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                          >> 7U)))) 
                                           << 8U)) 
                           | (0xffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))
                        : (0xffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))))
            : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                              >> 7U)))) 
                                               << 0x10U)) 
                               | ((0xff00U & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                              << 8U)) 
                                  | (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 0x18U))))
                            : ((0xff00U & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                           << 8U)) 
                               | (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x18U))))
                        : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                              >> 0x1fU)))) 
                                               << 0x10U)) 
                               | (0xffffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                             >> 0x10U)))
                            : (0xffffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                          >> 0x10U))))
                    : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? ((0xffff0000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                              >> 0x17U)))) 
                                               << 0x10U)) 
                               | (0xffffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                             >> 8U)))
                            : (0xffffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                          >> 8U))) : 
                       ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                         ? ((0xffff0000U & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                           >> 0xfU)))) 
                                            << 0x10U)) 
                            | (0xffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))
                         : (0xffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))))
                : ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xffffff00U & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                           << 8U)) 
                           | (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x18U))) : 
                       ((0xffff0000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                        << 0x10U)) 
                        | (0xffffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x10U)))) : 
                   ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                     ? ((0xff000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                        << 0x18U)) 
                        | (0xffffffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                        >> 8U))) : vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))));
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_combo__TOP__design_2_top__forte_soc_top_i__13(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_combo__TOP__design_2_top__forte_soc_top_i__13\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_d 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
    if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
        if ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 3U) & (IData)(vlTOPp->irq_i))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_d 
                = vlTOPp->irq_id_i;
        }
    }
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__14(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_sequent__TOP__design_2_top__forte_soc_top_i__14\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr;
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id = 0U;
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr 
        = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U]
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[
        (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                  >> 0x14U))];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_i_type 
        = ((0xfffff000U & ((- (IData)((1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0x14U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[
        (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                  >> 0xfU))];
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                           ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                              >> 0x10U) : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id));
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a 
            = (0xffffU & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                           ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                              >> 0x10U) : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                                           >> 0x10U)));
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                           ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                              >> 0x10U) : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id));
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a 
            = (0xffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id);
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id))) 
                   << 1U));
    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                      >> 1U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q))) 
                                                  << 1U)));
        }
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id))) 
                                                  << 1U))));
    }
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_multiclk__TOP__design_2_top__forte_soc_top_i__15(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_multiclk__TOP__design_2_top__forte_soc_top_i__15\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr)
            ? ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
                ? ((0xffff0000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U)))
                : ((0xffff0000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U))))
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
        if ((0U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x10413U | ((0x3c000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 5U)))))));
        } else {
            if ((2U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x42403U | ((0x4000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x15U)) 
                                   | ((0x3800000U & 
                                       (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0xdU)) | 
                                      ((0x400000U & 
                                        (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 0x10U)) 
                                       | ((0x38000U 
                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 8U)) 
                                          | (0x380U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 5U)))))));
            } else {
                if ((6U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x842023U | ((0x4000000U 
                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x15U)) 
                                        | ((0x2000000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x700000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | ((0xc00U 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                                                    | (0x200U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 3U))))))));
                }
            }
        }
    } else {
        if ((1U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x40063U | ((0xf0000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0xcU)))) 
                                           << 0x1cU)) 
                                       | ((0xc000000U 
                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x17U)) 
                                             | ((0x38000U 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 8U)) 
                                                | ((0x1000U 
                                                    & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 1U)) 
                                                   | ((0xc00U 
                                                       & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                                                      | ((0x300U 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 5U)) 
                                                         | (0x80U 
                                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 5U))))))))));
                } else {
                    if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x6fU | ((0x80000000U 
                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))));
                    } else {
                        if ((0x800U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 0xcU)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((0x40U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)
                                            ? ((0x20U 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)))))
                                            : ((0x20U 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))))));
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x47413U | (
                                                   (0xfc000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 0xcU)))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))))));
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x45413U | ((0x40000000U 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    }
                }
            } else {
                if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x37U | ((0xfffe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x11U)) 
                                        | ((0x1f000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
                        if ((2U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x10113U | ((0xe0000000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                  >> 0xcU)))) 
                                                   << 0x1dU)) 
                                               | ((0x18000000U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                            << 0x17U)) 
                                                        | (0x1000000U 
                                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0x12U)))))));
                        }
                    } else {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))))
                            : (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)))))));
                }
            }
        } else {
            if ((2U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
                if ((0x8000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x12023U | ((0xc000000U 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                               | ((0x2000000U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0x1f00000U 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | (0xe00U 
                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    } else {
                        if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x33U | ((0x1f00000U 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
                                if ((0U == (0x1fU & 
                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed = 0x100073U;
                                } else {
                                    if ((0U == (0x1fU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                            = (0xe7U 
                                               | (0xf8000U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)));
                                    }
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x33U | ((0x1f00000U 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)));
                                if ((0U == (0x1fU & 
                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                        = (0x67U | 
                                           (0xf8000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)));
                                }
                            }
                        }
                    }
                } else {
                    if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x12003U | ((0xc000000U 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x18U)) 
                                               | ((0x2000000U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0x1c00000U 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | (0xf80U 
                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    } else {
                        if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xdU)))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x1013U | ((0x1f00000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
                        }
                    }
                }
            } else {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((0U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
        if ((0U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
            if ((0U == (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                 >> 5U)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            if ((2U != (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                if ((6U != (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else {
        if ((1U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        if ((0x800U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x1000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((0x1000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                            if ((0U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U)))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((2U != (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            if ((0U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                        if ((0U == ((0x20U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 7U)) 
                                    | (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U))))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else {
                        if ((0U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((2U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
                if ((0x8000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    } else {
                        if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((0x1000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0U == (0x1fU & 
                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    if ((0U != (0x1fU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 2U)))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((0U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else {
                        if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        } else {
                            if ((0U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                            if ((1U & ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                        >> 0xcU) | 
                                       (0U == (0x1fU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 2U)))))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vdesign_2_top_forte_soc_top::_combo__TOP__design_2_top__forte_soc_top_i__16(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vdesign_2_top_forte_soc_top::_combo__TOP__design_2_top__forte_soc_top_i__16\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp14[3];
    WData/*95:0*/ __Vtemp15[3];
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0x13U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__eFPGA_int_en = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_status = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec = 1U;
                                                    } else {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
                                        = ((0x4000U 
                                            & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                            ? 2U : 0U);
                                    if ((1U == (3U 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                                            } else {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal)))) {
                                        if ((((((0x300U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0x14U))) 
                                                | (0x7b0U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                       >> 0x14U)))) 
                                               | (0x7b1U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      >> 0x14U)))) 
                                              | (0x7b2U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0x14U)))) 
                                             | (0x7b3U 
                                                == 
                                                (0xfffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                    >> 0x14U))))) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    }
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 1U;
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 4U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 5U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 1U;
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 5U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                }
                                if ((0U != (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_id = 1U;
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_mux_dec) {
                                    if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x2000U 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                ? (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                    ? 0xfU
                                                    : 9U)
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                    ? 0xeU
                                                    : 8U));
                                    } else {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        } else {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator 
                                                = (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                    ? 0x11U
                                                    : 0x10U);
                                        }
                                    }
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            }
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                if ((0x80000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                } else {
                                    if ((1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0x1cU)))) {
                                        if ((0x40000000U 
                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                            if ((0x20000000U 
                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 5U;
                                                                        } else {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                                        } else {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        } else {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        } else {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        } else {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        } else {
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                        ? 6U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                        ? 0x13U
                                                                        : 0x12U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                                        ? 7U
                                                                        : 0U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id = 1U;
                                if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                }
                                if ((0U == (3U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                                        } else {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                if ((0x4000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0x19U)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 6U;
                                            } else {
                                                if (
                                                    (0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                         >> 0x19U)))) {
                                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 5U;
                                                } else {
                                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                }
                                            }
                                        } else {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    if ((0x2000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                                                ? 0x13U
                                                : 0x12U);
                                    } else {
                                        if ((0x1000U 
                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 7U;
                                            if ((0U 
                                                 != 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0x19U)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            }
                                        } else {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
                                } else {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator 
                                    = (3U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                             >> 0xcU));
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_delay 
                                    = (0xfU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                               >> 0x19U));
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__eFPGA_int_en = 1U;
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                } else {
                    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
                                    = (1U & (~ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id 
                                    = ((0U == (3U & 
                                               (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                >> 0xcU)))
                                        ? 2U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0xcU)))
                                                 ? 1U
                                                 : 0U));
                                if ((7U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
                                        = (1U & (~ 
                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0x1eU)));
                                    if ((0x80000000U 
                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                            if ((0x20000000U 
                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x20000000U 
                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x10000000U 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)) {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                                            } else {
                                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((3U == (7U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__illegal_c_insn_id) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 1U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 5U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we = 0U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned)
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__misaligned_addr
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xfdfU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o) 
                & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o)) 
               & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id))) 
              << 5U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xfbfU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o) 
                & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o)) 
               & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id)) 
              << 6U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                  >> 0x1fU) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (1U & ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                  >> 0x1fU) & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
        = (1U & ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                  ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q) 
                     & (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                   >> 0x1fU))) : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q) 
                                                  & (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                      >> 1U) 
                                                     & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                        >> 0x1fU)))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = (1U & (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q) 
                  >> 1U) & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                             ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                                   >> 0x1fU)) : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                                                    >> 0x1fU)))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)
            ? 0U : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec)))) {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec)))) {
                            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_mret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_dret_id = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec)))) {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_dret_id = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause = 1U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) 
                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                              >> 0xfU)) & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                         | ((IData)(vlTOPp->debug_req_i) 
                            & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        if (vlTOPp->debug_req_i) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause = 3U;
                        } else {
                            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause = 1U;
                            }
                        }
                    }
                } else {
                    if ((4U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause = 4U;
                    } else {
                        if (vlTOPp->debug_req_i) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause = 3U;
                        } else {
                            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause 
                        = (0x20U | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q));
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause = 0xbU;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause = 2U;
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec)))) {
                                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 0xfU)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause = 3U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id = 0U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) 
                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                              >> 0xfU)) & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                         | ((IData)(vlTOPp->debug_req_i) 
                            & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id = 1U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id = 1U;
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec)))) {
                                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 0xfU)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save = 0U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) 
                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                              >> 0xfU)) & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                         | ((IData)(vlTOPp->debug_req_i) 
                            & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save = 1U;
                    }
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 0U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) 
                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                              >> 0xfU)) & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                         | ((IData)(vlTOPp->debug_req_i) 
                            & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 1U;
                    }
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 1U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 1U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 1U;
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec)))) {
                                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 0xfU)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id = 4U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id = 5U;
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id = 4U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id = 1U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id 
                                = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                    ? 6U : 0U);
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec)))) {
                                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 0xfU)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id = 7U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause 
                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause = 0xbU;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause = 2U;
                        } else {
                            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec)))) {
                                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec)))) {
                                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                                     >> 0xfU)))) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause = 3U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_id));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_n 
        = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
            ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                ? 0U : ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                         ? 0U : 3U)) : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                                         ? 2U : 1U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q;
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
                                                          >> 0x10U))))));
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                    ? (QData)((IData)((0xffffU & (IData)(
                                                         (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
                                                          >> 0x10U)))))
                    : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q);
        }
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
            = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
                                                      >> 0x10U)))))
                : 0ULL);
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready = 0U;
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready = 1U;
        } else {
            if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready = 1U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__eFPGA_int_en));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx4 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable4___PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx4];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx3 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable3___PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx3];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_i_type
                : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_compressed_id) 
                        & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned)))
                        ? 2U : 4U) : ((0xfff00000U 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                         >> 0x1fU)))) 
                                          << 0x14U)) 
                                      | ((0xff000U 
                                          & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                >> 9U)) 
                                            | (0x7feU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0x14U)))))))
            : ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)
                    : ((0xffffe000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                       ((0x1000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                    >> 0x13U)) | ((0x800U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                           >> 7U)))))))
                : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                    >> 7U))))
                    : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_i_type)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__operand_a_fw_id
            : ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id
                : ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)
                        ? 0U : (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                         >> 0xfU)))
                    : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx1 
        = (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause) 
            << 3U) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable1___PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx1];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n 
        = (0x3ffffffffULL & ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                              ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                                  ? ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                  : ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35,35,35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                              : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q))
                                  ? ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35,35,35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                  : ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_branch = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_branch = 1U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en) 
           | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel)
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1fU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffdU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (2U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1dU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffbU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (4U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1bU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff7U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (8U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x19U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffefU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x17U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffdfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x15U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffbfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x13U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffff7fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x11U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffeffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xfU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffdffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xdU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffbffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xbU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff7ffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 9U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffefffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 7U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffdfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 5U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffbfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 3U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff7fffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 1U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffeffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                          << 1U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffdffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                          << 3U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffbffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                          << 5U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfff7ffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                          << 7U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffefffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                           << 9U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffdfffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xbU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffbfffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xdU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff7fffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xfU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfeffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x11U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfdffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x13U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfbffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x15U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf7ffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x17U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xefffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x19U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xdfffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1bU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xbfffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1dU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x7fffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1fU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xeffU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_branch) 
              << 8U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en)))) {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_stall = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en)))) {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_stall = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access)
            ? (0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)
            : 0U);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                               ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : (1ULL | ((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a)) 
                                          << 1U))) 
                             + (0x1ffffffffULL & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                                   ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  (((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U) 
                                                   ^ 
                                                   (- (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate))))))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a 
        = ((7U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_index = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access) {
        if ((0x3cU == (0x7fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr) 
                                >> 5U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_index 
                = (0x1fU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr));
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_all_sel = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access) {
        if ((0x7a0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x7a1U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if ((0x79fU == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_all_sel = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access) {
        if ((0x7a0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata 
                = ((0xfffff000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata) 
                   | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q));
        } else {
            if ((0x7a1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata 
                    = ((0xfffffffcU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata) 
                       | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q));
            }
        }
        if ((0x3cU == (0x7fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr) 
                                >> 5U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if (((((((((0x300U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr)) 
               | (0x305U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) 
              | (0x341U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) 
             | (0x342U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) 
            | (0xf14U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) 
           | (0x301U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) 
          | (0x7b0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) 
         | (0x7b1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
            = ((0x300U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                ? ((0x1800U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                               << 0xbU)) | ((0x80U 
                                             & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 5U)) 
                                            | (8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q))))
                : ((0x305U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                    ? 0U : ((0x341U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                             ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q
                             : ((0x342U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                                 ? ((0x80000000U & 
                                     ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                      << 0x1aU)) | 
                                    (0x1fU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q)))
                                 : ((0xf14U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                                     ? 0U : ((0x301U 
                                              == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                                              ? 0x40001104U
                                              : ((0x7b0U 
                                                  == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))
                                                  ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q
                                                  : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q)))))));
    } else {
        if ((0x7b2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q;
        } else {
            if ((0x7b3U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access) {
        if ((0x7a0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x7a1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr = 1U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access) {
        if ((0x7a0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer = 1U;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access) {
        if ((0x7a0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x7a1U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if ((0x79fU == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr = 1U;
                }
            }
        }
        if ((0x3cU == (0x7fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr) 
                                >> 5U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr = 1U;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q;
    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n = 0U;
            }
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n 
                = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? 6U : 5U);
        }
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n 
            = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                        ? 4U : 3U) : 3U) : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                                             ? 2U : 
                                            ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                                              ? ((0U 
                                                  == (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                  ? 6U
                                                  : 1U)
                                              : ((0U 
                                                  == (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                  ? 6U
                                                  : 1U))));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_n 
                    = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_n 
                    = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
                                 >> 0x1fU)) ^ (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q 
                                               >> 0x1fU)))
                  ? (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q 
                             >> 0x1fU)) : (~ (IData)(
                                                     (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 0x20U)))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx5 
        = ((0x40U & (((0x80000000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                      ^ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b))
                       ? ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                           >> 0x1fU) ^ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                       : (~ (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                     >> 0x20U)))) << 6U)) 
           | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator) 
               << 1U) | (0U == (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                        >> 1U)))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable5___PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx5];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned = 0U;
    if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) 
         & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)))) {
        if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))) {
            if ((0U != (3U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                      >> 1U))))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned = 1U;
            }
        } else {
            if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))) {
                if ((3U == (3U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U))))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((5U 
                                                               == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a))), 
                                           (0x1fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n 
                = (3U & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))
                          ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                             & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q)))
                          : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                             | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q))));
        } else {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n 
                    = (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n 
                = (0xfffU & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))
                              ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                 & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q)))
                              : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                 | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q))));
        } else {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n 
                    = (0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q;
    if ((1U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q) 
               & ((0xffffffffU != vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q) 
                  | (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q) 
                        >> 1U)))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n 
            = ((IData)(1U) + vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q);
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n 
                = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))
                    ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                       & (~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q))
                    : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                       | vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q));
        } else {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_rdata 
        = ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr) 
             | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer)) 
            | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr))
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int);
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder 
            = (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder 
            = (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q);
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_n = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_n 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_stall = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs)))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_stall 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6 
        = (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) 
            << 7U) | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned) 
                       << 6U) | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o) 
                                  << 5U) | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o) 
                                                << 3U) 
                                               | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS))))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable6___PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable6___PVT__ibex_core_w_0_data_req_o
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable6___PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_valid_lsu 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable6___PVT__ibex_core_i__DOT__data_valid_lsu
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable6___PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable6___PVT__ibex_core_i__DOT__data_misaligned
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx6];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (1U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                            >> 0x1fU))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffffdU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (2U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                             >> 0x1eU)) << 1U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffffbU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (4U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                             >> 0x1dU)) << 2U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffff7U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (8U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                             >> 0x1cU)) << 3U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffffefU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x10U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                >> 0x1bU)) << 4U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffffdfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x20U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                >> 0x1aU)) << 5U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffffbfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x40U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                >> 0x19U)) << 6U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffff7fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x80U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                >> 0x18U)) << 7U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffeffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x100U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                 >> 0x17U)) << 8U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffdffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x200U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                 >> 0x16U)) << 9U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffffbffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x400U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                 >> 0x15U)) << 0xaU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffff7ffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x800U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                 >> 0x14U)) << 0xbU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffefffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x1000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                  >> 0x13U)) << 0xcU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffdfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x2000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                  >> 0x12U)) << 0xdU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffffbfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x4000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                  >> 0x11U)) << 0xeU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffff7fffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x8000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                  >> 0x10U)) << 0xfU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffeffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x10000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                   >> 0xfU)) << 0x10U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffdffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x20000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                   >> 0xeU)) << 0x11U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfffbffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x40000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                   >> 0xdU)) << 0x12U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfff7ffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x80000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                   >> 0xcU)) << 0x13U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffefffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x100000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                    >> 0xbU)) << 0x14U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffdfffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x200000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                    >> 0xaU)) << 0x15U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xffbfffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x400000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                    >> 9U)) << 0x16U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xff7fffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x800000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                    >> 8U)) << 0x17U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfeffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x1000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                     >> 7U)) << 0x18U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfdffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x2000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                     >> 6U)) << 0x19U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xfbffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x4000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                     >> 5U)) << 0x1aU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xf7ffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x8000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                     >> 4U)) << 0x1bU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xefffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x10000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                      >> 3U)) << 0x1cU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xdfffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x20000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                      >> 2U)) << 0x1dU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0xbfffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x40000000U & ((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed 
                                      >> 1U)) << 0x1eU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result 
        = ((0x7fffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result) 
           | (0x80000000U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed) 
                             << 0x1fU)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))
            ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o))
                ? ((~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_rdata)
                : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_rdata))
            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a);
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n 
                    = (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n = 0U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n 
        = (0x1fU & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q;
    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q) 
                      >> 1U)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n 
                = ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))
                    ? ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                        ? (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                            ^ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b))
                            ? (QData)((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)
                        : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                            ? (QData)((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q))
                    : ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                        ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                        : (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder))));
        }
    } else {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n 
                    = (((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder)) 
                        << 1U) | (QData)((IData)((1U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                                     >> (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n))))));
            } else {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n 
                    = (QData)((IData)((1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                             >> 0x1fU))));
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n = 0x1fU;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n = 0x1fU;
            } else {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n 
                    = ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator))
                        ? 0x3ffffffffULL : (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id)));
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n = 0x1fU;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready 
        = (1U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)
                  ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready) 
                     | (6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q)))
                  : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)
                      ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_valid_lsu)
                      : ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en)) 
                         | (2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r))))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((7U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result
            : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    if ((0x300U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
        if ((0x341U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x342U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if ((0x7b0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                    if ((0x7b1U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                        if ((0x7b2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((0x300U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
        if ((0x341U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x342U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if ((0x7b0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                    if ((0x7b1U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                        if ((0x7b2U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                            if ((0x7b3U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q;
    if ((0x300U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
        if ((0x341U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x342U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n 
                        = ((0x20U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                     >> 0x1aU)) | (0x1fU 
                                                   & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
                }
            }
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q;
    if ((0x300U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
        if ((0x341U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if ((0x342U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if ((0x7b0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0x40000000U | (0xfffffffU 
                                              & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n));
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (3U | vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xfffffff7U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xffffffefU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xfffffbffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xfffffdffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xffffffdfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xffffbfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                            = (0xf000ffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause) 
                      << 6U));
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q;
    if ((0x300U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (3U | ((8U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int) 
                         | (4U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 5U))));
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save)))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xbU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (4U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 1U)));
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (7U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (3U | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_mret_id) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((7U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            << 1U)));
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (4U | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n));
        } else {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_dret_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                    = ((7U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                       | (8U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                << 1U)));
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n 
                    = (4U | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n));
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id;
    if ((0x300U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
        if ((0x341U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            }
        } else {
            if ((0x342U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                if ((0x7b0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                    if ((0x7b1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr))) {
                        if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & (~ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n 
                                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_if) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr;
        } else {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id;
            }
        }
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc;
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns = 0U;
            }
        }
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns = 1U;
        } else {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
            } else {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns = 1U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns = 1U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we_id;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we 
                = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready) 
                   & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we_id));
        }
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we = 0U;
        } else {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id)))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we = 0U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we = 0U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__select_data_rf = 1U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__select_data_rf 
                    = (1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)));
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle = 1U;
            }
        }
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle = 1U;
        } else {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
            } else {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle = 1U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle = 1U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall = 0U;
            } else {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall = 1U;
                }
            }
        }
    } else {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall = 1U;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall = 0U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id)))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall = 0U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)))) {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)))) {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x10U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator) 
                              >> 1U)))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result 
                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                }
            } else {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
            }
        }
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result 
            = ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
                ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                : ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
                    ? ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
                        ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result
                        : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
                            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result
                            : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                               & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)))
                    : ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
                        ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))
                            ? (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                               | vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)
                            : (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                               ^ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b))
                        : (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)))));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((1U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((2U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffffdU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 1U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((3U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffffbU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 2U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((4U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffff7U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 3U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((5U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffffefU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 4U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((6U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffffdfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 5U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((7U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffffbfU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 6U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((8U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffff7fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 7U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((9U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                            >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffeffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 8U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0xaU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                              >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffdffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 9U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0xbU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                              >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffffbffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0xaU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0xcU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                              >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffff7ffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0xbU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0xdU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                              >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffefffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0xcU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0xeU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                              >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffdfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0xdU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0xfU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                              >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fffbfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0xeU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x10U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fff7fffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0xfU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x11U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffeffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x10U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x12U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffdffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x11U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x13U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ffbffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x12U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x14U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7ff7ffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x13U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x15U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fefffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x14U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x16U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fdfffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x15U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x17U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7fbfffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x16U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x18U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7f7fffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x17U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x19U == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7effffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x18U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x1aU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7dffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x19U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x1bU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x7bffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x1aU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x1cU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x77ffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x1bU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x1dU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x6fffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x1cU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x1eU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x5fffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x1dU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1 
        = ((0x1fU == (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                               >> 7U))) & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1) 
              << 0x1eU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready 
        = (1U & (((((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall)) 
                    & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_stall))) 
                   & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_stall))) 
                  & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall))) 
                 & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__select_data_rf)
            ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access)
                ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_rdata
                : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)
                    ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                        ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)
                        : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n))
                    : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en)
                        ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result
                        : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result)))
            : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o)
                ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
                : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_kill = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int 
        = (1U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 3U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_tbranch = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_jump = 0U;
    if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 2U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 2U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 2U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec)
                            ? 2U : 5U);
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 2U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                    } else {
                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 2U;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                        } else {
                            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 3U;
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                            } else {
                                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 4U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                                } else {
                                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn) {
                                        if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                        } else {
                                            if ((0x8000U 
                                                 & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                            } else {
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 2U;
                                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding = 0U;
                    if (((IData)(vlTOPp->debug_req_i) 
                         & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    } else {
                        if (((((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs)) 
                               & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int)) 
                              & (~ (IData)(vlTOPp->debug_req_i))) 
                             & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        } else {
                            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_kill 
                                = (((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs)) 
                                    & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle))) 
                                   & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id)));
                            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_valid_id) {
                                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding = 1U;
                                if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_q) 
                                     | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set))) {
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_tbranch 
                                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_q;
                                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_jump 
                                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set;
                                } else {
                                    if ((((((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                              | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                             | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                            | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec)) 
                                           | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn)) 
                                          | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec)) 
                                         | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_status))) {
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                                    }
                                }
                            }
                        }
                    }
                    if ((1U & ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                >> 2U) & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    }
                    if (((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs)) 
                         & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    }
                    if (((IData)(vlTOPp->debug_req_i) 
                         & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    if ((1U & ((((IData)(vlTOPp->irq_i) 
                                 | (IData)(vlTOPp->debug_req_i)) 
                                | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                               | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                  >> 2U)))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                    }
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 0U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                } else {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id = 0U;
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set = 1U;
                    if (vlTOPp->start_ibex) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs;
    if ((0U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
        if ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 3U) & (IData)(vlTOPp->irq_i))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns 
                = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_ack)
                    ? 2U : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_kill)
                             ? 0U : 1U));
        } else {
            if ((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns = 0U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n = 0U;
    if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n 
                    = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q;
            }
        }
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n 
            = ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id))
                ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id))
                    ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q
                    : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc)
                : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id))
                    ? (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                               >> 1U)) : 0x80U));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xdffU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_tbranch) 
              << 9U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xf7fU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_jump) 
              << 7U));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we 
        = (1U & ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding)) 
                 | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xbffU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | (((((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id)) 
                 & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready)) 
                & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding)) 
               & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_compressed_id)) 
              << 0xaU));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx2 
        = (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set) 
            << 4U) | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid) 
                       << 3U) | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                  << 2U) | (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_q)))));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx2];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx2];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx2];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__valid 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__valid
        [vlSymsp->TOP__design_2_top__forte_soc_top_i.__Vtableidx2];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if)) 
           & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__valid) 
              & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
        = ((IData)(4U) + (0xfffffffcU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q));
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q;
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                    = (0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n);
            }
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                = ((IData)(4U) + (0xfffffffcU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q));
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                    = (0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n);
            }
        }
    } else {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q;
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                    = (0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n);
            }
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                = ((IData)(4U) + (0xfffffffcU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q));
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o 
                    = (0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid = 0U;
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
            }
        } else {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
            }
        } else {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid = 1U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o = 0U;
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o = 1U;
            }
        } else {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o = 1U;
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o = 1U;
        } else {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o = 0U;
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o = 1U;
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in 
        = ((0xfefU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in)) 
           | (0x10U & ((((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                         | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)) 
                        & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set))) 
                       << 4U)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid = 0U;
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS)))) {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid = 1U;
                }
            } else {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS;
    if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS 
                    = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)
                        ? 2U : 1U);
            }
        } else {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS 
                        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)
                            ? 2U : 1U);
                } else {
                    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS = 3U;
                    }
                }
            } else {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS = 0U;
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS 
                = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)
                    ? 2U : 1U);
        } else {
            if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int) 
                 & ((~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                        >> 1U)) | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS 
                    = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)
                        ? 2U : 1U);
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc 
        = ((0xffeU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc)) 
           | ((0U != ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in) 
                      & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q))) 
              & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                 | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[0U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[1U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[2U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[2U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[0U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[2U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j = 0U;
        {
            while (VL_GTS_III(1,32,32, 3U, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)) {
                if ((1U & (~ ((2U >= (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)) 
                              & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                 >> (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)))))) {
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound1 
                        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q;
                    if (VL_LIKELY((0x5fU >= (0x7fU 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                                                << 5U))))) {
                        VL_ASSIGNSEL_WIII(32,(0x7fU 
                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                                                 << 5U)), vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int, vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound1);
                    }
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound2 
                        = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o;
                    if (VL_LIKELY((0x5fU >= (0x7fU 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                                                << 5U))))) {
                        VL_ASSIGNSEL_WIII(32,(0x7fU 
                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                                                 << 5U)), vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int, vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound2);
                    }
                    vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound3 = 1U;
                    if (VL_LIKELY((2U >= (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)))) {
                        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int 
                            = (((~ ((IData)(1U) << 
                                    (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j))) 
                                & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int)) 
                               | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound3) 
                                  << (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j)));
                    }
                    goto __Vlabel1;
                }
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j 
                    = ((IData)(1U) + vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j);
            }
            __Vlabel1: ;
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid 
        = (1U & ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr)
                  ? ((3U != (3U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                   >> 0x10U))) ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                          >> 1U) | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                    & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid))))
                  : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)));
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[0U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[1U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[2U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[2U];
    if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[0U] 
            = ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])
                ? ((3U != (3U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U))) ? (0xfffffffcU 
                                                & (((IData)(1U) 
                                                    + 
                                                    ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
                                                      << 0x1eU) 
                                                     | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
                                                        >> 2U))) 
                                                   << 2U))
                    : (2U | (0xfffffffcU & (((IData)(1U) 
                                             + ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
                                                 << 0x1eU) 
                                                | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
                                                   >> 2U))) 
                                            << 2U))))
                : ((3U != (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))
                    ? (2U | (0xfffffffcU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U]))
                    : (0xfffffffcU & (((IData)(1U) 
                                       + ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
                                           << 0x1eU) 
                                          | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
                                             >> 2U))) 
                                      << 2U))));
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[0U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U];
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U];
    if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid))) {
        if ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])) {
            VL_EXTEND_WQ(96,64, __Vtemp14, (((QData)((IData)(
                                                             vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U]))));
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
                = __Vtemp14[0U];
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
                = __Vtemp14[1U];
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
                = __Vtemp14[2U];
        } else {
            if ((3U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))) {
                VL_EXTEND_WQ(96,64, __Vtemp15, (((QData)((IData)(
                                                                 vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[1U]))));
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[0U] 
                    = __Vtemp15[0U];
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[1U] 
                    = __Vtemp15[1U];
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[2U] 
                    = __Vtemp15[2U];
            }
        }
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int;
    if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready) 
         & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid))) {
        if ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U])) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
                = (3U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int) 
                         >> 1U));
        } else {
            if ((3U == (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))) {
                vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n 
                    = (3U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int) 
                             >> 1U));
            }
        }
    }
}
