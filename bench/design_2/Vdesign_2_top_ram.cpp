// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top_ram.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vdesign_2_top_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__2(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign_2_top_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__2\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_rvalid_o 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i;
    }
}

VL_INLINE_OPT void Vdesign_2_top_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__3(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign_2_top_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__3\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)))) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i;
    }
}

VL_INLINE_OPT void Vdesign_2_top_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__4(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign_2_top_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__4\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_gnt_o 
        = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o;
}

VL_INLINE_OPT void Vdesign_2_top_ram::_combo__TOP__design_2_top__forte_soc_top_i__ram_0__5(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign_2_top_ram::_combo__TOP__design_2_top__forte_soc_top_i__ram_0__5\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i 
        = ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
            ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
            : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o));
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o 
        = ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)) 
           & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o));
}

VL_INLINE_OPT void Vdesign_2_top_ram::_combo__TOP__design_2_top__forte_soc_top_i__ram_0__6(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdesign_2_top_ram::_combo__TOP__design_2_top__forte_soc_top_i__ram_0__6\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i 
            = (0xfffU & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS));
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
            = vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA;
    } else {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i 
            = (0xfffU & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
            = ((1U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? ((0xff000000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                  << 0x18U)) 
                                              | (0xffffffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                    >> 8U)))
                                           : ((0xffff0000U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                    >> 0x10U))))
                : ((1U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                  >> 1U))) ? ((0xffffff00U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                    >> 0x18U)))
                    : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id));
    }
}
