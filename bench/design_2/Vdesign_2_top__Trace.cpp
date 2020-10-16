// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdesign_2_top__Syms.h"


void Vdesign_2_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vdesign_2_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 1U))),32);
            tracep->chgBit(oldp+1,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id));
            tracep->chgIData(oldp+3,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o),32);
            tracep->chgBit(oldp+4,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o));
            tracep->chgBit(oldp+5,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o));
            tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready) 
                                    | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id))));
            tracep->chgBit(oldp+7,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set));
            tracep->chgCData(oldp+8,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+9,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id),3);
            tracep->chgCData(oldp+10,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause),6);
            tracep->chgBit(oldp+11,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgCData(oldp+14,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator),5);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgBit(oldp+17,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en));
            tracep->chgCData(oldp+19,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access));
            tracep->chgCData(oldp+22,(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o),2);
            tracep->chgSData(oldp+23,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr),12);
            tracep->chgIData(oldp+24,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_rdata),32);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id),2);
            tracep->chgBit(oldp+26,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid));
            tracep->chgBit(oldp+32,(((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id)) 
                                     & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready))));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_valid_lsu));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id));
            tracep->chgCData(oldp+36,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause),6);
            tracep->chgBit(oldp+37,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_dret_id));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause),3);
            tracep->chgBit(oldp+40,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save));
            tracep->chgBit(oldp+41,((1U & ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                                           | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_jump));
            tracep->chgBit(oldp+43,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_branch));
            tracep->chgBit(oldp+44,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_tbranch));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en));
            tracep->chgCData(oldp+46,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator),2);
            tracep->chgCData(oldp+47,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_delay),4);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__valid));
            tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__valid) 
                                     & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready))));
            tracep->chgBit(oldp+53,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req));
            tracep->chgIData(oldp+54,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+55,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid));
            tracep->chgBit(oldp+56,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready));
            tracep->chgIData(oldp+57,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc),32);
            tracep->chgIData(oldp+58,((0xfffffffeU 
                                       & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS),2);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid));
            tracep->chgBit(oldp+61,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgWData(oldp+62,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n),96);
            tracep->chgWData(oldp+65,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int),96);
            tracep->chgWData(oldp+68,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n),96);
            tracep->chgWData(oldp+71,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int),96);
            tracep->chgCData(oldp+74,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n),3);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int),3);
            tracep->chgIData(oldp+76,((0x3fffffffU 
                                       & ((IData)(1U) 
                                          + ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
                                              << 0x1eU) 
                                             | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
                                                >> 2U))))),30);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgIData(oldp+78,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j),32);
            tracep->chgBit(oldp+79,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we));
            tracep->chgBit(oldp+80,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec));
            tracep->chgBit(oldp+81,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+82,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+83,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+84,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec));
            tracep->chgBit(oldp+86,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_n));
            tracep->chgBit(oldp+88,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+89,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_stall));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_stall));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id));
            tracep->chgBit(oldp+97,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__select_data_rf));
            tracep->chgIData(oldp+99,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgBit(oldp+100,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_kill));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we_id));
            tracep->chgCData(oldp+102,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+105,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgBit(oldp+106,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_status));
            tracep->chgIData(oldp+108,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__operand_a_fw_id),32);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux),32);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns));
            tracep->chgIData(oldp+111,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec),31);
            tracep->chgBit(oldp+112,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_id));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__eFPGA_int_en));
            tracep->chgCData(oldp+119,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgBit(oldp+120,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+121,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+122,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+123,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
            tracep->chgCData(oldp+125,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns),2);
            tracep->chgCData(oldp+126,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_d),5);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+128,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+130,((0U == (IData)(
                                                    (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))));
            tracep->chgIData(oldp+131,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+132,((0x1ffffffffULL 
                                        & (((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            << 1U) 
                                           ^ (- (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)))))),33);
            tracep->chgBit(oldp+134,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgBit(oldp+135,((7U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+136,((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgCData(oldp+137,((0x1fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)),5);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+140,((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed)),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result),32);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         ((5U 
                                                           == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator)) 
                                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a 
                                                             >> 0x1fU)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a)))),33);
            tracep->chgQData(oldp+144,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed),33);
            tracep->chgBit(oldp+146,((1U & ((0x80000000U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                                ^ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b))
                                             ? ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                                 >> 0x1fU) 
                                                ^ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                             : (~ (IData)(
                                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgCData(oldp+148,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n),5);
            tracep->chgCData(oldp+149,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_n),2);
            tracep->chgCData(oldp+150,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n),3);
            tracep->chgQData(oldp+151,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n),34);
            tracep->chgQData(oldp+153,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n),34);
            tracep->chgQData(oldp+155,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+157,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgBit(oldp+161,((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode))));
            tracep->chgBit(oldp+162,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgBit(oldp+163,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                      ^ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b))));
            tracep->chgIData(oldp+164,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_n),32);
            tracep->chgIData(oldp+165,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_n),32);
            tracep->chgIData(oldp+166,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n),32);
            tracep->chgIData(oldp+167,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder),32);
            tracep->chgQData(oldp+168,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgQData(oldp+170,((0x1ffffffffULL 
                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U))),33);
            tracep->chgBit(oldp+172,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready));
            tracep->chgBit(oldp+173,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o));
            tracep->chgCData(oldp+174,((3U & (IData)(
                                                     (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))),2);
            tracep->chgBit(oldp+175,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned));
            tracep->chgBit(oldp+176,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address));
            tracep->chgCData(oldp+177,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS),3);
            tracep->chgBit(oldp+178,((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o) 
                                       & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o)) 
                                      & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id)))));
            tracep->chgBit(oldp+179,((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o) 
                                       & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o)) 
                                      & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id))));
            tracep->chgSData(oldp+180,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in),12);
            tracep->chgSData(oldp+181,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc),12);
            tracep->chgIData(oldp+182,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n),32);
            tracep->chgCData(oldp+183,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n),2);
            tracep->chgSData(oldp+184,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n),12);
            tracep->chgIData(oldp+185,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata),32);
            tracep->chgCData(oldp+186,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_index),5);
            tracep->chgBit(oldp+187,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_all_sel));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr));
            tracep->chgIData(oldp+191,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgIData(oldp+192,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+193,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgIData(oldp+194,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n),32);
            tracep->chgIData(oldp+195,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n),32);
            tracep->chgIData(oldp+196,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n),32);
            tracep->chgIData(oldp+197,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_n),32);
            tracep->chgIData(oldp+198,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_n),32);
            tracep->chgCData(oldp+199,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n),6);
            tracep->chgCData(oldp+200,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n),4);
            tracep->chgIData(oldp+201,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgSData(oldp+202,((0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o)),12);
            tracep->chgSData(oldp+203,((0xfffU & (IData)(
                                                         (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)))),12);
            tracep->chgBit(oldp+204,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i));
            tracep->chgSData(oldp+205,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i),12);
            tracep->chgIData(oldp+206,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i),32);
            tracep->chgCData(oldp+207,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgCData(oldp+208,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                                         ? ((1U & (IData)(
                                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 2U)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                                 ? 2U
                                                 : 1U))
                                         : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                                             ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                                 ? 1U
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 8U
                                                   : 0xcU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 6U
                                                   : 3U)))
                                             : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 7U
                                                   : 3U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 1U
                                                   : 0U))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 8U
                                                   : 0xcU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 0xeU
                                                   : 0xfU)))))),4);
            tracep->chgBit(oldp+209,(((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS)) 
                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o))));
            tracep->chgBit(oldp+210,(((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o))));
            tracep->chgBit(oldp+211,(((((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS)) 
                                        | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)) 
                                       | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy)) 
                                      | ((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                         | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o)))));
            tracep->chgBit(oldp+212,((1U & (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                             >> 1U) 
                                            | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                               & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
            tracep->chgIData(oldp+213,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                         ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)
                                         : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n))),32);
            tracep->chgBit(oldp+214,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready) 
                                      | (6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q)))));
            tracep->chgQData(oldp+215,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                         ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                         : (1ULL | 
                                            ((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a)) 
                                             << 1U)))),33);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [8U]))) {
            tracep->chgIData(oldp+217,(((1U & (IData)(
                                                      (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
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
                                         : ((1U & (IData)(
                                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                             ? ((0xffffff00U 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                                                      >> 0x18U)))
                                             : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id))),32);
            tracep->chgIData(oldp+218,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                         ? 0U : (0x1fU 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                    >> 0xfU)))),32);
            tracep->chgQData(oldp+219,((0x1ffffffffULL 
                                        & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                            ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                            : (((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                << 1U) 
                                               ^ (- (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate))))))),33);
            tracep->chgQData(oldp+221,((0x7ffffffffULL 
                                        & (VL_MULS_QQQ(35,35,35, 
                                                       (0x7ffffffffULL 
                                                        & VL_EXTENDS_QI(35,17, 
                                                                        (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a)))), 
                                                       (0x7ffffffffULL 
                                                        & VL_EXTENDS_QI(35,17, 
                                                                        (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                          << 0x10U) 
                                                                         | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b))))) 
                                           + VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
            tracep->chgQData(oldp+223,((0x3ffffffffULL 
                                        & ((0x7ffffffffULL 
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
                                              & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+225,(vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o),32);
            tracep->chgBit(oldp+226,(vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete));
            tracep->chgBit(oldp+227,((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))));
            tracep->chgBit(oldp+228,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out));
            tracep->chgBit(oldp+229,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out));
            tracep->chgBit(oldp+230,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit));
            tracep->chgCData(oldp+231,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send),8);
            tracep->chgBit(oldp+232,((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))));
            tracep->chgCData(oldp+233,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data),8);
            tracep->chgBit(oldp+234,((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))));
            tracep->chgBit(oldp+235,((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state))));
            tracep->chgBit(oldp+236,((5U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))));
            tracep->chgCData(oldp+237,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE),3);
            tracep->chgBit(oldp+238,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff2));
            tracep->chgBit(oldp+239,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff));
            tracep->chgCData(oldp+240,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__idle_count),4);
            tracep->chgCData(oldp+241,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count),2);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count),2);
            tracep->chgSData(oldp+243,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider),11);
            tracep->chgSData(oldp+244,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider),11);
            tracep->chgCData(oldp+245,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state),3);
            tracep->chgCData(oldp+246,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown),6);
            tracep->chgCData(oldp+247,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining),4);
            tracep->chgCData(oldp+248,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state),2);
            tracep->chgCData(oldp+249,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown),6);
            tracep->chgCData(oldp+250,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining),4);
            tracep->chgCData(oldp+251,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data),8);
            tracep->chgIData(oldp+252,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o),32);
            tracep->chgBit(oldp+253,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o));
            tracep->chgBit(oldp+254,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_rvalid_o));
            tracep->chgBit(oldp+255,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o));
            tracep->chgBit(oldp+256,(((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff2)) 
                                      & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff))));
            tracep->chgBit(oldp+257,((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))));
            tracep->chgCData(oldp+258,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data),8);
            tracep->chgBit(oldp+259,((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))));
            tracep->chgBit(oldp+260,((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state))));
            tracep->chgBit(oldp+261,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff2));
            tracep->chgBit(oldp+262,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff));
            tracep->chgBit(oldp+263,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_registered));
            tracep->chgBit(oldp+264,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued));
            tracep->chgSData(oldp+265,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__baud_i),16);
            tracep->chgBit(oldp+266,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__recv_ack_i));
            tracep->chgSData(oldp+267,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider),11);
            tracep->chgSData(oldp+268,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider),11);
            tracep->chgCData(oldp+269,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state),3);
            tracep->chgCData(oldp+270,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown),6);
            tracep->chgCData(oldp+271,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining),4);
            tracep->chgCData(oldp+272,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state),2);
            tracep->chgCData(oldp+273,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown),6);
            tracep->chgCData(oldp+274,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining),4);
            tracep->chgCData(oldp+275,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgSData(oldp+276,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS),12);
            tracep->chgIData(oldp+277,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA),32);
            tracep->chgCData(oldp+278,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i),8);
            tracep->chgCData(oldp+279,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE),3);
            tracep->chgBit(oldp+280,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit));
            tracep->chgCData(oldp+281,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count),3);
            tracep->chgBit(oldp+282,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__we));
            tracep->chgBit(oldp+283,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read));
            tracep->chgBit(oldp+284,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+285,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q),5);
            tracep->chgBit(oldp+286,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__irq_ack_o));
            tracep->chgBit(oldp+287,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_valid_id));
            tracep->chgBit(oldp+288,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_compressed_id));
            tracep->chgBit(oldp+289,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+290,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__misaligned_addr),32);
            tracep->chgBit(oldp+291,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy));
            tracep->chgBit(oldp+292,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch));
            tracep->chgBit(oldp+293,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                            >> 3U))));
            tracep->chgIData(oldp+295,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q),32);
            tracep->chgIData(oldp+296,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q),32);
            tracep->chgBit(oldp+297,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_if));
            tracep->chgBit(oldp+298,((1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                            >> 2U))));
            tracep->chgBit(oldp+299,((1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+300,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_q));
            tracep->chgCData(oldp+301,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS),2);
            tracep->chgIData(oldp+302,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q),32);
            tracep->chgIData(oldp+303,(((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q))),32);
            tracep->chgBit(oldp+304,((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                               >> 1U)))));
            tracep->chgWData(oldp+305,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q),96);
            tracep->chgWData(oldp+308,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q),96);
            tracep->chgCData(oldp+311,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q),3);
            tracep->chgBit(oldp+312,((3U != (3U & (
                                                   (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                                                      >> 0x10U))))));
            tracep->chgBit(oldp+313,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_q));
            tracep->chgBit(oldp+314,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_mux_dec));
            tracep->chgBit(oldp+315,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec));
            tracep->chgBit(oldp+316,((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))));
            tracep->chgBit(oldp+317,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_ack));
            tracep->chgBit(oldp+318,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs));
            tracep->chgWData(oldp+319,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+351,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp),992);
            tracep->chgIData(oldp+382,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__unnamedblk2__DOT__r),32);
            tracep->chgCData(oldp+383,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+384,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgCData(oldp+385,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs),2);
            tracep->chgQData(oldp+386,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgCData(oldp+388,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgCData(oldp+389,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q),2);
            tracep->chgCData(oldp+390,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q),3);
            tracep->chgQData(oldp+391,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q),34);
            tracep->chgIData(oldp+393,(((IData)(1U) 
                                        << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+394,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q),32);
            tracep->chgIData(oldp+395,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+396,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgCData(oldp+397,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgCData(oldp+398,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgBit(oldp+399,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+400,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+401,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q));
            tracep->chgCData(oldp+402,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS),3);
            tracep->chgIData(oldp+403,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q),32);
            tracep->chgSData(oldp+404,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q),12);
            tracep->chgIData(oldp+405,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q),32);
            tracep->chgCData(oldp+406,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q),2);
            tracep->chgSData(oldp+407,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q),12);
            tracep->chgIData(oldp+408,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q),32);
            tracep->chgIData(oldp+409,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q),32);
            tracep->chgIData(oldp+410,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q),32);
            tracep->chgCData(oldp+411,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q),6);
            tracep->chgCData(oldp+412,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q),4);
            tracep->chgIData(oldp+413,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk2__DOT__r),32);
            tracep->chgIData(oldp+414,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk1__DOT__r),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+415,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result),32);
            tracep->chgBit(oldp+416,((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r))));
            tracep->chgCData(oldp+417,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r),2);
            tracep->chgCData(oldp+418,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgIData(oldp+419,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o),32);
            tracep->chgBit(oldp+420,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o));
            tracep->chgBit(oldp+421,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o));
            tracep->chgIData(oldp+422,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ),32);
            tracep->chgBit(oldp+423,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued));
            tracep->chgBit(oldp+424,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_complete));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+425,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+426,((3U != (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))));
            tracep->chgBit(oldp+427,((3U != (3U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                   >> 0x10U)))));
            tracep->chgIData(oldp+428,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgIData(oldp+429,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id),32);
            tracep->chgIData(oldp+430,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id),32);
            tracep->chgIData(oldp+431,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id),32);
            tracep->chgIData(oldp+432,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr),32);
            tracep->chgIData(oldp+433,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id),32);
            tracep->chgIData(oldp+434,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_i_type),32);
            tracep->chgIData(oldp+435,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+436,(((0xffffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+437,((0xfffff000U 
                                        & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+438,(((0xfff00000U 
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
                                                    >> 0x14U)))))),32);
            tracep->chgIData(oldp+439,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgCData(oldp+440,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+441,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+442,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgQData(oldp+443,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgSData(oldp+445,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a),16);
            tracep->chgSData(oldp+446,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgIData(oldp+447,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgIData(oldp+448,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+449,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+450,((3U != (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
        }
        tracep->chgBit(oldp+451,(vlTOPp->reset));
        tracep->chgBit(oldp+452,(vlTOPp->clk));
        tracep->chgBit(oldp+453,(vlTOPp->we_i));
        tracep->chgCData(oldp+454,(vlTOPp->irq_id_o),5);
        tracep->chgCData(oldp+455,(vlTOPp->irq_id_i),5);
        tracep->chgBit(oldp+456,(vlTOPp->irq_i));
        tracep->chgBit(oldp+457,(vlTOPp->irq_ack_o));
        tracep->chgBit(oldp+458,(vlTOPp->debug_req_i));
        tracep->chgBit(oldp+459,(vlTOPp->start));
        tracep->chgIData(oldp+460,(vlTOPp->cont_2_uart_w_0_read_data_o),32);
        tracep->chgIData(oldp+461,(vlTOPp->data),32);
        tracep->chgSData(oldp+462,(vlTOPp->address),12);
        tracep->chgBit(oldp+463,(vlTOPp->cont_2_uart_w_0_complete));
        tracep->chgBit(oldp+464,(vlTOPp->start_ibex));
        tracep->chgIData(oldp+465,(vlTOPp->eFPGA_operand_a_o),32);
        tracep->chgIData(oldp+466,(vlTOPp->eFPGA_operand_b_o),32);
        tracep->chgIData(oldp+467,(vlTOPp->eFPGA_result_a_i),32);
        tracep->chgIData(oldp+468,(vlTOPp->eFPGA_result_b_i),32);
        tracep->chgIData(oldp+469,(vlTOPp->eFPGA_result_c_i),32);
        tracep->chgBit(oldp+470,(vlTOPp->uart_recv_error));
        tracep->chgSData(oldp+471,(vlTOPp->address),13);
        tracep->chgBit(oldp+472,((1U & (~ (IData)(vlTOPp->reset)))));
        tracep->chgBit(oldp+473,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch) 
                                  | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q))));
        tracep->chgIData(oldp+474,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)
                                     ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                         ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)
                                         : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n))
                                     : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en)
                                         ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result
                                         : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result))),32);
        tracep->chgIData(oldp+475,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o)
                                     ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
                                     : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q)),32);
        tracep->chgBit(oldp+476,(((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch) 
                                    | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q)) 
                                   | (IData)(vlTOPp->irq_i)) 
                                  | (IData)(vlTOPp->debug_req_i))));
        tracep->chgBit(oldp+477,((1U & ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr)
                                         ? ((3U != 
                                             (3U & 
                                              ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                                                  >> 0x10U)))) 
                                            | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                               >> 1U))
                                         : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q)))));
        tracep->chgIData(oldp+478,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
                                     ? ((0xffff0000U 
                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                              >> 0x10U)))
                                     : ((0xffff0000U 
                                         & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                              >> 0x10U))))),32);
        tracep->chgIData(oldp+479,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((0xffffff00U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                << 8U)) 
                                            | (0xffU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x18U)))
                                         : ((0xffff0000U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x10U))))
                                     : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((0xff000000U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                << 0x18U)) 
                                            | (0xffffffU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 8U)))
                                         : vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))),32);
        tracep->chgIData(oldp+480,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 7U)))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                         >> 0x18U))))
                                             : ((0xff00U 
                                                 & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                      >> 0x18U))))
                                         : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 0x1fU)))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                      >> 0x10U)))
                                             : (0xffffU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                   >> 0x10U))))
                                     : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 0x17U)))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                      >> 8U)))
                                             : (0xffffU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                   >> 8U)))
                                         : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffff0000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 0xfU)))) 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))
                                             : (0xffffU 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))))),32);
        tracep->chgIData(oldp+481,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 0x1fU)))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                      >> 0x18U)))
                                             : (0xffU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                   >> 0x18U)))
                                         : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 0x17U)))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                      >> 0x10U)))
                                             : (0xffU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                   >> 0x10U))))
                                     : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                         ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 0xfU)))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                      >> 8U)))
                                             : (0xffU 
                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                   >> 8U)))
                                         : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                             ? ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))
                                             : (0xffU 
                                                & vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o))))),32);
        tracep->chgBit(oldp+482,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
                                   ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o)
                                   : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id))));
        tracep->chgCData(oldp+483,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
                                     ? 0xfU : ((2U 
                                                & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))
                                                     ? 2U
                                                     : 1U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U)))
                                                       ? 8U
                                                       : 0xcU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U)))
                                                       ? 6U
                                                       : 3U)))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U)))
                                                       ? 7U
                                                       : 3U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U)))
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 2U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U)))
                                                       ? 8U
                                                       : 0xcU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                  >> 1U)))
                                                       ? 0xeU
                                                       : 0xfU))))))),4);
    }
}

void Vdesign_2_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
    }
}
