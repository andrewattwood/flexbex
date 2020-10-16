// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top_design_2_top.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vdesign_2_top_design_2_top::_sequent__TOP__design_2_top__1(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdesign_2_top_design_2_top::_sequent__TOP__design_2_top__1\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__cont_2_uart_i__DOT__UART_STATE;
    CData/*3:0*/ __Vdly__cont_2_uart_i__DOT__idle_count;
    CData/*1:0*/ __Vdly__cont_2_uart_i__DOT__data_count;
    CData/*1:0*/ __Vdly__cont_2_uart_i__DOT__read_count;
    // Body
    __Vdly__cont_2_uart_i__DOT__read_count = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count;
    __Vdly__cont_2_uart_i__DOT__data_count = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count;
    __Vdly__cont_2_uart_i__DOT__idle_count = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__idle_count;
    __Vdly__cont_2_uart_i__DOT__UART_STATE = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE;
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 0U;
    }
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider 
        = (0x7ffU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider) 
                     - (IData)(1U)));
    if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider)))))) {
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider = 0x516U;
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown 
            = (0x3fU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown) 
                        - (IData)(1U)));
    }
    if ((0U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out)))) {
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider = 0x516U;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown = 2U;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown)))))) {
                if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out) {
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 5U;
                } else {
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown = 4U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining = 8U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 2U;
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown)))))) {
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining 
                        = (0xfU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining) 
                                   - (IData)(1U)));
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data 
                        = (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out) 
                            << 7U) | (0x7fU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data) 
                                               >> 1U)));
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown = 4U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state 
                        = ((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining))
                            ? 2U : 3U);
                }
            } else {
                if ((3U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown)))))) {
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state 
                            = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out)
                                ? 6U : 5U);
                    }
                } else {
                    if ((4U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state 
                            = ((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown))
                                ? 4U : 0U);
                    } else {
                        if ((5U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown = 8U;
                            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 4U;
                        } else {
                            if ((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state = 0U;
    }
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider 
        = (0x7ffU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider) 
                     - (IData)(1U)));
    if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider)))))) {
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider = 0x516U;
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown 
            = (0x3fU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown) 
                        - (IData)(1U)));
    }
    if ((0U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state))) {
        if (vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit) {
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data 
                = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider = 0x516U;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown = 4U;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out = 0U;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining = 8U;
            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state = 1U;
        }
    } else {
        if ((1U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown)))))) {
                if ((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining))) {
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining 
                        = (0xfU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining) 
                                   - (IData)(1U)));
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out 
                        = (1U & (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data));
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown = 4U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state = 1U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data 
                        = (0x7fU & ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data) 
                                    >> 1U));
                } else {
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out = 1U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown = 8U;
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state = 2U;
                }
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state))) {
                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state 
                    = ((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown))
                        ? 2U : 0U);
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__cont_2_uart_i__DOT__UART_STATE = 0U;
        vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete = 0U;
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
        __Vdly__cont_2_uart_i__DOT__idle_count = 0U;
        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send = 0U;
        __Vdly__cont_2_uart_i__DOT__data_count = 0U;
        vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o = 0U;
        __Vdly__cont_2_uart_i__DOT__read_count = 0U;
    } else {
        if ((0U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE))) {
            if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff2)) 
                             & (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff)))) {
                VL_WRITEF("C2U - Send new cmd \n\n");
                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                    = ((IData)(vlTOPp->we_i) ? 0x41U
                        : 0x42U);
                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                __Vdly__cont_2_uart_i__DOT__UART_STATE = 1U;
                __Vdly__cont_2_uart_i__DOT__idle_count = 0U;
                vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete = 0U;
            } else {
                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
            }
        } else {
            if ((1U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE))) {
                if ((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                    if (((0x41U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data)) 
                         | (0x42U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data)))) {
                        __Vdly__cont_2_uart_i__DOT__data_count = 0U;
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                            = (0x60U | (0x1fU & ((IData)(vlTOPp->address) 
                                                 >> 8U)));
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                        __Vdly__cont_2_uart_i__DOT__UART_STATE = 2U;
                    } else {
                        __Vdly__cont_2_uart_i__DOT__idle_count 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__idle_count)));
                        if ((7U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__idle_count))) {
                            __Vdly__cont_2_uart_i__DOT__UART_STATE = 0U;
                        }
                    }
                } else {
                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
                }
            } else {
                if ((2U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE))) {
                    if ((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                            = (0xffU & (IData)(vlTOPp->address));
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                        __Vdly__cont_2_uart_i__DOT__UART_STATE = 3U;
                    } else {
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send = 0U;
                    }
                } else {
                    if ((3U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE))) {
                        if ((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                            if (VL_LIKELY(vlTOPp->we_i)) {
                                __Vdly__cont_2_uart_i__DOT__UART_STATE = 4U;
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                                    = (0xffU & (vlTOPp->data 
                                                >> 0x18U));
                                __Vdly__cont_2_uart_i__DOT__data_count = 2U;
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                            } else {
                                VL_WRITEF("C2U - GOT B1 - %3#\n",
                                          8,vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data);
                                __Vdly__cont_2_uart_i__DOT__UART_STATE = 5U;
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                                    = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data;
                                __Vdly__cont_2_uart_i__DOT__read_count = 2U;
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                                vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o 
                                    = ((0xffffffU & vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o) 
                                       | ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data) 
                                          << 0x18U));
                            }
                        } else {
                            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
                            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send = 0U;
                        }
                    } else {
                        if ((4U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE))) {
                            if (VL_UNLIKELY((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state)))) {
                                VL_WRITEF("packet sent cont 2 uart\n");
                                if ((2U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count))) {
                                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                                        = (0xffU & 
                                           (vlTOPp->data 
                                            >> 0x10U));
                                    __Vdly__cont_2_uart_i__DOT__data_count = 1U;
                                } else {
                                    if ((1U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count))) {
                                        vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                                            = (0xffU 
                                               & (vlTOPp->data 
                                                  >> 8U));
                                        __Vdly__cont_2_uart_i__DOT__data_count = 0U;
                                    } else {
                                        if (VL_UNLIKELY(
                                                        (0U 
                                                         == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count)))) {
                                            VL_WRITEF("C2U - data senf last \n\n");
                                            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                                                = (0xffU 
                                                   & vlTOPp->data);
                                            __Vdly__cont_2_uart_i__DOT__UART_STATE = 0U;
                                            vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete = 1U;
                                        } else {
                                            vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send = 0U;
                                        }
                                    }
                                }
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                            } else {
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
                                vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send = 0U;
                            }
                        } else {
                            if ((5U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE))) {
                                if ((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))) {
                                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send 
                                        = vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data;
                                    if (VL_UNLIKELY(
                                                    (2U 
                                                     == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count)))) {
                                        VL_WRITEF("C2U - GOT B2 -%3#\n",
                                                  8,
                                                  vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data);
                                        vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o 
                                            = ((0xff00ffffU 
                                                & vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o) 
                                               | ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data) 
                                                  << 0x10U));
                                        __Vdly__cont_2_uart_i__DOT__read_count = 1U;
                                    } else {
                                        if (VL_UNLIKELY(
                                                        (1U 
                                                         == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count)))) {
                                            VL_WRITEF("C2U - GOT B3 -%3#\n",
                                                      8,
                                                      vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data);
                                            vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o 
                                                = (
                                                   (0xffff00ffU 
                                                    & vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o) 
                                                   | ((IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data) 
                                                      << 8U));
                                            __Vdly__cont_2_uart_i__DOT__read_count = 0U;
                                        } else {
                                            if (VL_UNLIKELY(
                                                            (0U 
                                                             == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count)))) {
                                                VL_WRITEF("C2U - GOT B4 -%3#\n",
                                                          8,
                                                          vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data);
                                                vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o 
                                                    = 
                                                    ((0xffffff00U 
                                                      & vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o) 
                                                     | (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data));
                                                __Vdly__cont_2_uart_i__DOT__UART_STATE = 0U;
                                                vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete = 1U;
                                            }
                                        }
                                    }
                                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 1U;
                                } else {
                                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit = 0U;
                                    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE 
        = __Vdly__cont_2_uart_i__DOT__UART_STATE;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__idle_count 
        = __Vdly__cont_2_uart_i__DOT__idle_count;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count 
        = __Vdly__cont_2_uart_i__DOT__data_count;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count 
        = __Vdly__cont_2_uart_i__DOT__read_count;
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff));
    vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->start));
}
