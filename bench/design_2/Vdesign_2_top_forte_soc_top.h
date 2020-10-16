// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdesign_2_top.h for the primary calling header

#ifndef _VDESIGN_2_TOP_FORTE_SOC_TOP_H_
#define _VDESIGN_2_TOP_FORTE_SOC_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vdesign_2_top__Dpi.h"

//==========

class Vdesign_2_top__Syms;
class Vdesign_2_top_VerilatedVcd;
class Vdesign_2_top_ram;


//----------

VL_MODULE(Vdesign_2_top_forte_soc_top) {
  public:
    // CELLS
    Vdesign_2_top_ram* ram_0;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__debug_req_i,0,0);
    VL_IN8(__PVT__fetch_enable_i,0,0);
    VL_OUT8(__PVT__irq_ack_o,0,0);
    VL_IN8(__PVT__irq_i,0,0);
    VL_IN8(__PVT__irq_id_i,4,0);
    VL_OUT8(__PVT__irq_id_o,4,0);
    VL_IN8(__PVT__rx_i,0,0);
    VL_OUT8(__PVT__tx_o,0,0);
    VL_OUT8(__PVT__uart_recv_error,0,0);
    VL_OUT(__PVT__eFPGA_operand_a_o,31,0);
    VL_OUT(__PVT__eFPGA_operand_b_o,31,0);
    VL_IN(__PVT__eFPGA_result_a_i,31,0);
    VL_IN(__PVT__eFPGA_result_b_i,31,0);
    VL_IN(__PVT__eFPGA_result_c_i,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__ibex_core_i__DOT__clk;
        CData/*0:0*/ __PVT__ibex_core_w_0_data_req_o;
        CData/*0:0*/ __PVT__ibex_core_w_0_instr_req_o;
        CData/*0:0*/ __PVT__uart_to_mem_w_0_data_req_o;
        CData/*0:0*/ __PVT__uart_to_mem_w_0_data_we_o;
        CData/*7:0*/ __PVT__uart_to_mem_i__DOT__tx_byte_i;
        CData/*2:0*/ __PVT__uart_to_mem_i__DOT__UART_STATE;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__transmit;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__trans_txn_ff2;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__trans_txn_ff;
        CData/*2:0*/ __PVT__uart_to_mem_i__DOT__data_count;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__we;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__start_read;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__read_issued;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__read_registered;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__read_complete;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__write_issued;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__recv_ack_i;
        CData/*2:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state;
        CData/*5:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown;
        CData/*3:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining;
        CData/*7:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data;
        CData/*0:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out;
        CData/*1:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state;
        CData/*5:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown;
        CData/*3:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining;
        CData/*7:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__instr_valid_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__is_compressed_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__illegal_c_insn_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__pc_set;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__pc_mux_id;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__exc_pc_mux_id;
        CData/*5:0*/ __PVT__ibex_core_i__DOT__exc_cause;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__is_decoding;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__data_misaligned;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ctrl_busy;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__core_ctrl_firstfetch;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__core_busy_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__halt_if;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_ready;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_ready;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_valid;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__data_valid_lsu;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__instr_req_int;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__csr_save_cause;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__csr_save_if;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__csr_save_id;
        CData/*5:0*/ __PVT__ibex_core_i__DOT__csr_cause;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__csr_restore_mret_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__csr_restore_dret_id;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__debug_cause;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__debug_csr_save;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__perf_jump;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__perf_branch;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__perf_tbranch;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__core_clock_gate_i__DOT__clk_en;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__valid;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn;
    };
    struct {
        CData/*1:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_n;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_mux_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_stall;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_stall;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__select_data_rf;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_ack;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_kill;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we_id;
        CData/*4:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_en;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator;
        CData/*3:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_delay;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_status;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__eFPGA_int_en;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    };
    struct {
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*6:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*3:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        CData/*3:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs;
        CData/*4:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_d;
        CData/*4:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r;
        CData/*3:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count;
        CData/*4:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        CData/*4:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_n;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_we_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS;
        CData/*2:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n;
        CData/*1:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q;
        CData/*4:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_index;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_all_sel;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr;
        CData/*0:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int;
        CData/*5:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q;
        CData/*5:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n;
        CData/*3:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q;
        CData/*3:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n;
        SData/*11:0*/ __PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS;
        SData/*15:0*/ __PVT__uart_to_mem_i__DOT__baud_i;
        SData/*10:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider;
        SData/*10:0*/ __PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider;
        SData/*11:0*/ __PVT__ibex_core_i__DOT__csr_addr;
        SData/*15:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a;
        SData/*15:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b;
        SData/*11:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in;
        SData/*11:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc;
        SData/*11:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q;
        SData/*11:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n;
        SData/*11:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q;
        IData/*31:0*/ __PVT__ibex_core_w_0_instr_addr_o;
        IData/*31:0*/ __PVT__uart_to_mem_i__DOT__DATA;
    };
    struct {
        IData/*31:0*/ __PVT__uart_to_mem_i__DOT__DATA_READ;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__instr_rdata_id;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__pc_id;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__misaligned_addr;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__csr_rdata;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q;
        WData/*95:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n[3];
        WData/*95:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[3];
        WData/*95:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q[3];
        WData/*95:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n[3];
        WData/*95:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int[3];
        WData/*95:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[3];
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_i_type;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__operand_a_fw_id;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux;
        WData/*1023:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg[32];
        WData/*991:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp[31];
        IData/*30:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__unnamedblk2__DOT__r;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_n;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk2__DOT__r;
        IData/*31:0*/ __PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk1__DOT__r;
    };
    struct {
        QData/*32:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        QData/*32:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        QData/*33:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext;
        QData/*32:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed;
        QData/*33:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q;
        QData/*33:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n;
        QData/*33:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n;
        QData/*33:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        QData/*32:0*/ __PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound3;
    CData/*1:0*/ ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o;
    CData/*0:0*/ ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound1;
    CData/*0:0*/ ibex_core_i__DOT__cs_registers_i__DOT____Vlvbound1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx6;
    CData/*0:0*/ __Vdly__uart_to_mem_i__DOT__read_issued;
    CData/*0:0*/ __Vdly__uart_to_mem_w_0_data_req_o;
    CData/*0:0*/ __Vdly__uart_to_mem_i__DOT__read_complete;
    SData/*8:0*/ __Vtableidx1;
    IData/*31:0*/ ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound1;
    IData/*31:0*/ ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____Vlvbound2;
    IData/*31:0*/ ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT____Vlvbound2;
    IData/*31:0*/ __Vdly__uart_to_mem_i__DOT__DATA_READ;
    static IData/*31:0*/ __Vtable1___PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc[512];
    static CData/*0:0*/ __Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d[32];
    static CData/*0:0*/ __Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready[32];
    static CData/*0:0*/ __Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req[32];
    static CData/*0:0*/ __Vtable2___PVT__ibex_core_i__DOT__if_stage_i__DOT__valid[32];
    static CData/*0:0*/ __Vtable3___PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[32];
    static CData/*0:0*/ __Vtable4___PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[32];
    static CData/*0:0*/ __Vtable5___PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[128];
    static CData/*2:0*/ __Vtable6___PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS[256];
    static CData/*0:0*/ __Vtable6___PVT__ibex_core_w_0_data_req_o[256];
    static CData/*0:0*/ __Vtable6___PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o[256];
    static CData/*0:0*/ __Vtable6___PVT__ibex_core_i__DOT__data_valid_lsu[256];
    static CData/*0:0*/ __Vtable6___PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address[256];
    static CData/*0:0*/ __Vtable6___PVT__ibex_core_i__DOT__data_misaligned[256];
    
    // INTERNAL VARIABLES
  private:
    Vdesign_2_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdesign_2_top_forte_soc_top);  ///< Copying not allowed
  public:
    Vdesign_2_top_forte_soc_top(const char* name = "TOP");
    ~Vdesign_2_top_forte_soc_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vdesign_2_top__Syms* symsp, bool first);
    static void _combo__TOP__design_2_top__forte_soc_top_i__13(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__design_2_top__forte_soc_top_i__16(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__design_2_top__forte_soc_top_i__3(Vdesign_2_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__design_2_top__forte_soc_top_i__6(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__design_2_top__forte_soc_top_i__12(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__design_2_top__forte_soc_top_i__15(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__10(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__11(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__14(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__4(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__5(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__7(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__8(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__design_2_top__forte_soc_top_i__9(Vdesign_2_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__design_2_top__forte_soc_top_i__1(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__design_2_top__forte_soc_top_i__2(Vdesign_2_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
