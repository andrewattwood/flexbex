// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vdesign_2_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdesign_2_top::eval\n"); );
    Vdesign_2_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../rtl//design_2_top.v", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdesign_2_top::_eval_initial_loop(Vdesign_2_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../rtl//design_2_top.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vdesign_2_top::_sequent__TOP__2(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_sequent__TOP__2\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uart_recv_error = (5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state));
    vlTOPp->cont_2_uart_w_0_complete = vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete;
    vlTOPp->cont_2_uart_w_0_read_data_o = vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o;
}

VL_INLINE_OPT void Vdesign_2_top::_sequent__TOP__3(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_sequent__TOP__3\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->irq_id_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
    vlTOPp->irq_ack_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__irq_ack_o;
}

VL_INLINE_OPT void Vdesign_2_top::_sequent__TOP__5(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_sequent__TOP__5\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->eFPGA_operand_b_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id;
    vlTOPp->eFPGA_operand_a_o = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id;
}

void Vdesign_2_top::_eval(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_eval\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i._combo__TOP__design_2_top__forte_soc_top_i__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__design_2_top._sequent__TOP__design_2_top__1(vlSymsp);
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i._sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__2(vlSymsp);
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0._sequent__TOP__design_2_top__forte_soc_top_i__ram_0__2(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__7(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if (((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk)) 
         & (IData)(vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__9(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__10(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i._sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__3(vlSymsp);
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0._sequent__TOP__design_2_top__forte_soc_top_i__ram_0__3(vlSymsp);
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__11(vlSymsp);
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0._sequent__TOP__design_2_top__forte_soc_top_i__ram_0__4(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk))) 
          | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._multiclk__TOP__design_2_top__forte_soc_top_i__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i._combo__TOP__design_2_top__forte_soc_top_i__13(vlSymsp);
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0._combo__TOP__design_2_top__forte_soc_top_i__ram_0__5(vlSymsp);
    if ((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._sequent__TOP__design_2_top__forte_soc_top_i__14(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk))) 
          | ((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i._multiclk__TOP__design_2_top__forte_soc_top_i__15(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    vlSymsp->TOP__design_2_top__forte_soc_top_i._combo__TOP__design_2_top__forte_soc_top_i__16(vlSymsp);
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0._combo__TOP__design_2_top__forte_soc_top_i__ram_0__6(vlSymsp);
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i._settle__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__1(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__design_2_top__forte_soc_top_i____PVT__ibex_core_i__DOT__clk 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk;
}

VL_INLINE_OPT QData Vdesign_2_top::_change_request(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_change_request\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vdesign_2_top::_change_request_1(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_change_request_1\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_w_0_data_req_o)
         | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__data_misaligned)
         | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_valid)
         | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid)
         | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__id_stage_i__DOT__deassert_we));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_w_0_data_req_o))) VL_DBG_MSGF("        CHANGE: ../rtl//forte_soc_top.v:48: ibex_core_w_0_data_req_o\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__data_misaligned))) VL_DBG_MSGF("        CHANGE: ../rtl//ibex_core.sv:116: ibex_core_i.data_misaligned\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_valid))) VL_DBG_MSGF("        CHANGE: ../rtl//ibex_core.sv:170: ibex_core_i.if_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid))) VL_DBG_MSGF("        CHANGE: ../rtl//ibex_if_stage.sv:93: ibex_core_i.if_stage_i.fetch_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we ^ vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__id_stage_i__DOT__deassert_we))) VL_DBG_MSGF("        CHANGE: ../rtl//ibex_id_stage.sv:154: ibex_core_i.id_stage_i.deassert_we\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_w_0_data_req_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o;
    vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__data_misaligned 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned;
    vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_valid 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid;
    vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlTOPp->__Vchglast__TOP__design_2_top__forte_soc_top_i__ibex_core_i__DOT__id_stage_i__DOT__deassert_we 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we;
    return __req;
}

#ifdef VL_DEBUG
void Vdesign_2_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdesign_2_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((we_i & 0xfeU))) {
        Verilated::overWidthError("we_i");}
    if (VL_UNLIKELY((irq_id_i & 0xe0U))) {
        Verilated::overWidthError("irq_id_i");}
    if (VL_UNLIKELY((irq_i & 0xfeU))) {
        Verilated::overWidthError("irq_i");}
    if (VL_UNLIKELY((debug_req_i & 0xfeU))) {
        Verilated::overWidthError("debug_req_i");}
    if (VL_UNLIKELY((start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((address & 0xf000U))) {
        Verilated::overWidthError("address");}
    if (VL_UNLIKELY((start_ibex & 0xfeU))) {
        Verilated::overWidthError("start_ibex");}
}
#endif  // VL_DEBUG
