// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top_dp_ram.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

uint32_t Vdesign_2_top_dp_ram::readWord(uint32_t word_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::readWord\n"); );
    // Variables
    VL_OUT(readWord__Vfuncrtn,31,0);
    Vdesign_2_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    readWord__Vfuncrtn = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
        [(0xfffU & word_addr)];
    // Final
    return (readWord__Vfuncrtn);
}

uint32_t Vdesign_2_top_dp_ram::readByte(uint32_t byte_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::readByte\n"); );
    // Variables
    VL_OUT8(readByte__Vfuncrtn,7,0);
    Vdesign_2_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    readByte__Vfuncrtn = (0xffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                          [(0xfffU & byte_addr)]);
    // Final
    return (readByte__Vfuncrtn);
}

void Vdesign_2_top_dp_ram::writeWord(uint32_t addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::writeWord\n"); );
    // Variables
    Vdesign_2_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block[(0xfffU 
                                                                                & addr)] 
        = val;
}

void Vdesign_2_top_dp_ram::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::writeByte\n"); );
    // Variables
    Vdesign_2_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block[(0xfffU 
                                                                                & byte_addr)] 
        = val;
}

VL_INLINE_OPT void Vdesign_2_top_dp_ram::_settle__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__1(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::_settle__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__1\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i 
        = (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
             ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o)
             : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id))
            ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
                ? 0xfU : ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                           ? ((1U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 2U)))
                               ? ((1U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)))
                                   ? 8U : 4U) : ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 1U)))
                                                  ? 2U
                                                  : 1U))
                           : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                               ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                   ? 1U : ((1U & (IData)(
                                                         (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                                ? 8U
                                                : 0xcU)
                                            : ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                                ? 6U
                                                : 3U)))
                               : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                   ? ((1U & (IData)(
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 2U)))
                                       ? ((1U & (IData)(
                                                        (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? 7U : 3U)
                                       : ((1U & (IData)(
                                                        (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? 1U : 0U))
                                   : ((1U & (IData)(
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 2U)))
                                       ? ((1U & (IData)(
                                                        (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? 8U : 0xcU)
                                       : ((1U & (IData)(
                                                        (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)))
                                           ? 0xeU : 0xfU))))))
            : 0U);
}

VL_INLINE_OPT void Vdesign_2_top_dp_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__2(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__2\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v0 = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v1 = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v2 = 0U;
    vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v3 = 0U;
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        if ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v0 
                = (0xffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i);
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v0 = 1U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v0 = 0U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v0 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i;
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        if ((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v1 
                = (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
                            >> 8U));
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v1 = 1U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v1 = 8U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v1 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i;
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        if ((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v2 
                = (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
                            >> 0x10U));
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v2 = 1U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v2 = 0x10U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v2 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i;
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        if ((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))) {
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v3 
                = (0xffU & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
                            >> 0x18U));
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v3 = 1U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v3 = 0x18U;
            vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v3 
                = vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i;
        }
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o 
            = ((0xffffff00U & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o) 
               | (0xffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                  [(0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o)]));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o 
            = ((0xffff00ffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o) 
               | (0xff00U & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                  [(0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o)]));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o 
            = ((0xff00ffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o) 
               | (0xff0000U & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                  [(0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o)]));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o 
            = ((0xffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o) 
               | (0xff000000U & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                  [(0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o)]));
    }
}

VL_INLINE_OPT void Vdesign_2_top_dp_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__3(Vdesign_2_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::_sequent__TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i__3\n"); );
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
            = ((0xffffff00U & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o) 
               | (0xffU & ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))
                            ? vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i
                            : vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                           [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i])));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
            = ((0xffff00ffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o) 
               | (0xff00U & (((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))
                               ? (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
                                  >> 8U) : (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                                            [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i] 
                                            >> 8U)) 
                             << 8U)));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
            = ((0xff00ffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o) 
               | (0xff0000U & (((4U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))
                                 ? (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
                                    >> 0x10U) : (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                                                 [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i] 
                                                 >> 0x10U)) 
                               << 0x10U)));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
            = ((0xffffffU & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o) 
               | (0xff000000U & (((8U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i))
                                   ? (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i 
                                      >> 0x18U) : (
                                                   vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                                                   [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i] 
                                                   >> 0x18U)) 
                                 << 0x18U)));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v0) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block[vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v0))) 
                & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v0]) 
               | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v0) 
                  << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v0)));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v1) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block[vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v1))) 
                & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v1]) 
               | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v1) 
                  << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v1)));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v2) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block[vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v2))) 
                & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v2]) 
               | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v2) 
                  << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v2)));
    }
    if (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvset__ram_block__v3) {
        vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block[vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v3))) 
                & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__ram_block
                [vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvdim0__ram_block__v3]) 
               | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvval__ram_block__v3) 
                  << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vdlyvlsb__ram_block__v3)));
    }
}
