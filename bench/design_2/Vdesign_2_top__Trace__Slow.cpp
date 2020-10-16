// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdesign_2_top__Syms.h"


//======================

void Vdesign_2_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vdesign_2_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdesign_2_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vdesign_2_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vdesign_2_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+452,"reset", false,-1);
        tracep->declBit(c+453,"clk", false,-1);
        tracep->declBit(c+454,"we_i", false,-1);
        tracep->declBus(c+455,"irq_id_o", false,-1, 4,0);
        tracep->declBus(c+456,"irq_id_i", false,-1, 4,0);
        tracep->declBit(c+457,"irq_i", false,-1);
        tracep->declBit(c+458,"irq_ack_o", false,-1);
        tracep->declBit(c+459,"debug_req_i", false,-1);
        tracep->declBit(c+460,"start", false,-1);
        tracep->declBus(c+461,"cont_2_uart_w_0_read_data_o", false,-1, 31,0);
        tracep->declBus(c+462,"data", false,-1, 31,0);
        tracep->declBus(c+463,"address", false,-1, 11,0);
        tracep->declBit(c+464,"cont_2_uart_w_0_complete", false,-1);
        tracep->declBit(c+465,"start_ibex", false,-1);
        tracep->declBus(c+466,"eFPGA_operand_a_o", false,-1, 31,0);
        tracep->declBus(c+467,"eFPGA_operand_b_o", false,-1, 31,0);
        tracep->declBus(c+468,"eFPGA_result_a_i", false,-1, 31,0);
        tracep->declBus(c+469,"eFPGA_result_b_i", false,-1, 31,0);
        tracep->declBus(c+470,"eFPGA_result_c_i", false,-1, 31,0);
        tracep->declBit(c+471,"uart_recv_error", false,-1);
        tracep->declBit(c+452,"design_2_top reset", false,-1);
        tracep->declBit(c+453,"design_2_top clk", false,-1);
        tracep->declBit(c+454,"design_2_top we_i", false,-1);
        tracep->declBus(c+286,"design_2_top irq_id_o", false,-1, 4,0);
        tracep->declBus(c+456,"design_2_top irq_id_i", false,-1, 4,0);
        tracep->declBit(c+457,"design_2_top irq_i", false,-1);
        tracep->declBit(c+287,"design_2_top irq_ack_o", false,-1);
        tracep->declBit(c+459,"design_2_top debug_req_i", false,-1);
        tracep->declBit(c+460,"design_2_top start", false,-1);
        tracep->declBus(c+226,"design_2_top cont_2_uart_w_0_read_data_o", false,-1, 31,0);
        tracep->declBus(c+462,"design_2_top data", false,-1, 31,0);
        tracep->declBus(c+463,"design_2_top address", false,-1, 11,0);
        tracep->declBit(c+227,"design_2_top cont_2_uart_w_0_complete", false,-1);
        tracep->declBit(c+465,"design_2_top start_ibex", false,-1);
        tracep->declBus(c+430,"design_2_top eFPGA_operand_a_o", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top eFPGA_operand_b_o", false,-1, 31,0);
        tracep->declBus(c+468,"design_2_top eFPGA_result_a_i", false,-1, 31,0);
        tracep->declBus(c+469,"design_2_top eFPGA_result_b_i", false,-1, 31,0);
        tracep->declBus(c+470,"design_2_top eFPGA_result_c_i", false,-1, 31,0);
        tracep->declBit(c+228,"design_2_top uart_recv_error", false,-1);
        tracep->declBit(c+229,"design_2_top uart_to_mem_w_0_tx_o", false,-1);
        tracep->declBit(c+230,"design_2_top cont_2_uart_w_0_tx_o", false,-1);
        tracep->declBus(c+485,"design_2_top ibex_core_w_0_data_addr_o", false,-1, 31,0);
        tracep->declBus(c+486,"design_2_top ibex_core_w_0_data_be_o", false,-1, 3,0);
        tracep->declBit(c+487,"design_2_top ibex_core_w_0_data_req_o", false,-1);
        tracep->declBus(c+488,"design_2_top ibex_core_w_0_data_wdata_o", false,-1, 31,0);
        tracep->declBit(c+489,"design_2_top ibex_core_w_0_data_we_o", false,-1);
        tracep->declBus(c+490,"design_2_top ibex_core_w_0_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+491,"design_2_top ibex_core_w_0_instr_req_o", false,-1);
        tracep->declBit(c+492,"design_2_top ram_w_0_ibex_data_gnt_o", false,-1);
        tracep->declBus(c+493,"design_2_top ram_w_0_ibex_data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+494,"design_2_top ram_w_0_ibex_data_rvalid_o", false,-1);
        tracep->declBit(c+495,"design_2_top ram_w_0_instr_gnt_o", false,-1);
        tracep->declBus(c+496,"design_2_top ram_w_0_instr_rdata_o", false,-1, 31,0);
        tracep->declBit(c+497,"design_2_top ram_w_0_instr_rvalid_o", false,-1);
        tracep->declBit(c+498,"design_2_top ram_w_0_uart_data_gnt_o", false,-1);
        tracep->declBus(c+499,"design_2_top ram_w_0_uart_data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+500,"design_2_top ram_w_0_uart_data_rvalid_o", false,-1);
        tracep->declBus(c+501,"design_2_top uart_to_mem_w_0_data_addr_o", false,-1, 11,0);
        tracep->declBus(c+502,"design_2_top uart_to_mem_w_0_data_be_o", false,-1, 3,0);
        tracep->declBit(c+503,"design_2_top uart_to_mem_w_0_data_req_o", false,-1);
        tracep->declBus(c+504,"design_2_top uart_to_mem_w_0_data_wdata_o", false,-1, 31,0);
        tracep->declBit(c+505,"design_2_top uart_to_mem_w_0_data_we_o", false,-1);
        tracep->declBit(c+453,"design_2_top cont_2_uart_i clk_i", false,-1);
        tracep->declBit(c+452,"design_2_top cont_2_uart_i rst_i", false,-1);
        tracep->declBit(c+229,"design_2_top cont_2_uart_i rx_i", false,-1);
        tracep->declBit(c+230,"design_2_top cont_2_uart_i tx_o", false,-1);
        tracep->declBus(c+472,"design_2_top cont_2_uart_i address", false,-1, 12,0);
        tracep->declBit(c+460,"design_2_top cont_2_uart_i start", false,-1);
        tracep->declBit(c+227,"design_2_top cont_2_uart_i complete", false,-1);
        tracep->declBus(c+462,"design_2_top cont_2_uart_i data", false,-1, 31,0);
        tracep->declBit(c+454,"design_2_top cont_2_uart_i we_i", false,-1);
        tracep->declBus(c+226,"design_2_top cont_2_uart_i read_data_o", false,-1, 31,0);
        tracep->declBit(c+231,"design_2_top cont_2_uart_i transmit", false,-1);
        tracep->declBus(c+232,"design_2_top cont_2_uart_i send", false,-1, 7,0);
        tracep->declBit(c+233,"design_2_top cont_2_uart_i received_o", false,-1);
        tracep->declBus(c+234,"design_2_top cont_2_uart_i rx_byte_o", false,-1, 7,0);
        tracep->declBit(c+235,"design_2_top cont_2_uart_i is_receiving_o", false,-1);
        tracep->declBit(c+236,"design_2_top cont_2_uart_i is_transmitting_o", false,-1);
        tracep->declBit(c+237,"design_2_top cont_2_uart_i recv_error_o", false,-1);
        tracep->declBus(c+506,"design_2_top cont_2_uart_i IDLE", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top cont_2_uart_i WAIT_CMD_CONFIRM", false,-1, 31,0);
        tracep->declBus(c+508,"design_2_top cont_2_uart_i WAIT_ADDR_CONFIRM", false,-1, 31,0);
        tracep->declBus(c+509,"design_2_top cont_2_uart_i WAIT_ADDR_TAIL_CONFIRM", false,-1, 31,0);
        tracep->declBus(c+510,"design_2_top cont_2_uart_i WRITE_DATA", false,-1, 31,0);
        tracep->declBus(c+511,"design_2_top cont_2_uart_i READ_DATA", false,-1, 31,0);
        tracep->declBus(c+512,"design_2_top cont_2_uart_i PKT_WRITE_CMD_CONFIRM", false,-1, 7,0);
        tracep->declBus(c+513,"design_2_top cont_2_uart_i PKT_WRITE_ADR_CONFIRM", false,-1, 7,0);
        tracep->declBus(c+514,"design_2_top cont_2_uart_i PKT_READ_CMD_CONFIRM", false,-1, 7,0);
        tracep->declBus(c+514,"design_2_top cont_2_uart_i PKT_READ_ADR_CONFIRM", false,-1, 7,0);
        tracep->declBus(c+515,"design_2_top cont_2_uart_i PKT_WRITE_CMD", false,-1, 7,0);
        tracep->declBus(c+513,"design_2_top cont_2_uart_i PKT_ADR", false,-1, 7,0);
        tracep->declBus(c+516,"design_2_top cont_2_uart_i PKT_READ_CMD", false,-1, 7,0);
        tracep->declBus(c+238,"design_2_top cont_2_uart_i UART_STATE", false,-1, 2,0);
        tracep->declBit(c+239,"design_2_top cont_2_uart_i trans_txn_ff2", false,-1);
        tracep->declBit(c+240,"design_2_top cont_2_uart_i trans_txn_ff", false,-1);
        tracep->declBus(c+241,"design_2_top cont_2_uart_i idle_count", false,-1, 3,0);
        tracep->declBus(c+242,"design_2_top cont_2_uart_i data_count", false,-1, 1,0);
        tracep->declBus(c+243,"design_2_top cont_2_uart_i read_count", false,-1, 1,0);
        tracep->declBit(c+453,"design_2_top cont_2_uart_i uart_i clk", false,-1);
        tracep->declBit(c+452,"design_2_top cont_2_uart_i uart_i rst", false,-1);
        tracep->declBit(c+229,"design_2_top cont_2_uart_i uart_i rx", false,-1);
        tracep->declBit(c+230,"design_2_top cont_2_uart_i uart_i tx", false,-1);
        tracep->declBit(c+231,"design_2_top cont_2_uart_i uart_i transmit", false,-1);
        tracep->declBus(c+232,"design_2_top cont_2_uart_i uart_i tx_byte", false,-1, 7,0);
        tracep->declBit(c+233,"design_2_top cont_2_uart_i uart_i received", false,-1);
        tracep->declBus(c+234,"design_2_top cont_2_uart_i uart_i rx_byte", false,-1, 7,0);
        tracep->declBit(c+235,"design_2_top cont_2_uart_i uart_i is_receiving", false,-1);
        tracep->declBit(c+236,"design_2_top cont_2_uart_i uart_i is_transmitting", false,-1);
        tracep->declBit(c+237,"design_2_top cont_2_uart_i uart_i recv_error", false,-1);
        tracep->declBus(c+517,"design_2_top cont_2_uart_i uart_i CLOCK_DIVIDE", false,-1, 31,0);
        tracep->declBus(c+506,"design_2_top cont_2_uart_i uart_i RX_IDLE", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top cont_2_uart_i uart_i RX_CHECK_START", false,-1, 31,0);
        tracep->declBus(c+508,"design_2_top cont_2_uart_i uart_i RX_READ_BITS", false,-1, 31,0);
        tracep->declBus(c+509,"design_2_top cont_2_uart_i uart_i RX_CHECK_STOP", false,-1, 31,0);
        tracep->declBus(c+510,"design_2_top cont_2_uart_i uart_i RX_DELAY_RESTART", false,-1, 31,0);
        tracep->declBus(c+511,"design_2_top cont_2_uart_i uart_i RX_ERROR", false,-1, 31,0);
        tracep->declBus(c+518,"design_2_top cont_2_uart_i uart_i RX_RECEIVED", false,-1, 31,0);
        tracep->declBus(c+506,"design_2_top cont_2_uart_i uart_i TX_IDLE", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top cont_2_uart_i uart_i TX_SENDING", false,-1, 31,0);
        tracep->declBus(c+508,"design_2_top cont_2_uart_i uart_i TX_DELAY_RESTART", false,-1, 31,0);
        tracep->declBus(c+244,"design_2_top cont_2_uart_i uart_i rx_clk_divider", false,-1, 10,0);
        tracep->declBus(c+245,"design_2_top cont_2_uart_i uart_i tx_clk_divider", false,-1, 10,0);
        tracep->declBus(c+246,"design_2_top cont_2_uart_i uart_i recv_state", false,-1, 2,0);
        tracep->declBus(c+247,"design_2_top cont_2_uart_i uart_i rx_countdown", false,-1, 5,0);
        tracep->declBus(c+248,"design_2_top cont_2_uart_i uart_i rx_bits_remaining", false,-1, 3,0);
        tracep->declBus(c+234,"design_2_top cont_2_uart_i uart_i rx_data", false,-1, 7,0);
        tracep->declBit(c+230,"design_2_top cont_2_uart_i uart_i tx_out", false,-1);
        tracep->declBus(c+249,"design_2_top cont_2_uart_i uart_i tx_state", false,-1, 1,0);
        tracep->declBus(c+250,"design_2_top cont_2_uart_i uart_i tx_countdown", false,-1, 5,0);
        tracep->declBus(c+251,"design_2_top cont_2_uart_i uart_i tx_bits_remaining", false,-1, 3,0);
        tracep->declBus(c+252,"design_2_top cont_2_uart_i uart_i tx_data", false,-1, 7,0);
        tracep->declBus(c+519,"design_2_top forte_soc_top_i ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i clk_i", false,-1);
        tracep->declBit(c+459,"design_2_top forte_soc_top_i debug_req_i", false,-1);
        tracep->declBit(c+465,"design_2_top forte_soc_top_i fetch_enable_i", false,-1);
        tracep->declBit(c+287,"design_2_top forte_soc_top_i irq_ack_o", false,-1);
        tracep->declBit(c+457,"design_2_top forte_soc_top_i irq_i", false,-1);
        tracep->declBus(c+456,"design_2_top forte_soc_top_i irq_id_i", false,-1, 4,0);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i irq_id_o", false,-1, 4,0);
        tracep->declBit(c+230,"design_2_top forte_soc_top_i rx_i", false,-1);
        tracep->declBit(c+229,"design_2_top forte_soc_top_i tx_o", false,-1);
        tracep->declBit(c+452,"design_2_top forte_soc_top_i reset", false,-1);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i eFPGA_operand_a_o", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i eFPGA_operand_b_o", false,-1, 31,0);
        tracep->declBus(c+468,"design_2_top forte_soc_top_i eFPGA_result_a_i", false,-1, 31,0);
        tracep->declBus(c+469,"design_2_top forte_soc_top_i eFPGA_result_b_i", false,-1, 31,0);
        tracep->declBus(c+470,"design_2_top forte_soc_top_i eFPGA_result_c_i", false,-1, 31,0);
        tracep->declBit(c+228,"design_2_top forte_soc_top_i uart_recv_error", false,-1);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_w_0_data_addr_o", false,-1, 31,0);
        tracep->declBus(c+209,"design_2_top forte_soc_top_i ibex_core_w_0_data_be_o", false,-1, 3,0);
        tracep->declBit(c+2,"design_2_top forte_soc_top_i ibex_core_w_0_data_req_o", false,-1);
        tracep->declBus(c+218,"design_2_top forte_soc_top_i ibex_core_w_0_data_wdata_o", false,-1, 31,0);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_w_0_data_we_o", false,-1);
        tracep->declBus(c+4,"design_2_top forte_soc_top_i ibex_core_w_0_instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_w_0_instr_req_o", false,-1);
        tracep->declBit(c+6,"design_2_top forte_soc_top_i ram_w_0_ibex_data_gnt_o", false,-1);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ram_w_0_ibex_data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+421,"design_2_top forte_soc_top_i ram_w_0_ibex_data_rvalid_o", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ram_w_0_instr_gnt_o", false,-1);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ram_w_0_instr_rdata_o", false,-1, 31,0);
        tracep->declBit(c+254,"design_2_top forte_soc_top_i ram_w_0_instr_rvalid_o", false,-1);
        tracep->declBit(c+422,"design_2_top forte_soc_top_i ram_w_0_uart_data_gnt_o", false,-1);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ram_w_0_uart_data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+255,"design_2_top forte_soc_top_i ram_w_0_uart_data_rvalid_o", false,-1);
        tracep->declBus(c+277,"design_2_top forte_soc_top_i uart_to_mem_w_0_data_addr_o", false,-1, 11,0);
        tracep->declBus(c+520,"design_2_top forte_soc_top_i uart_to_mem_w_0_data_be_o", false,-1, 3,0);
        tracep->declBit(c+422,"design_2_top forte_soc_top_i uart_to_mem_w_0_data_req_o", false,-1);
        tracep->declBus(c+278,"design_2_top forte_soc_top_i uart_to_mem_w_0_data_wdata_o", false,-1, 31,0);
        tracep->declBit(c+256,"design_2_top forte_soc_top_i uart_to_mem_w_0_data_we_o", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i reset_ni", false,-1);
        tracep->declBus(c+519,"design_2_top forte_soc_top_i uart_to_mem_i ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i uart_to_mem_i clk_i", false,-1);
        tracep->declBit(c+452,"design_2_top forte_soc_top_i uart_to_mem_i rst_i", false,-1);
        tracep->declBit(c+230,"design_2_top forte_soc_top_i uart_to_mem_i rx_i", false,-1);
        tracep->declBit(c+229,"design_2_top forte_soc_top_i uart_to_mem_i tx_o", false,-1);
        tracep->declBit(c+422,"design_2_top forte_soc_top_i uart_to_mem_i data_req_o", false,-1);
        tracep->declBus(c+277,"design_2_top forte_soc_top_i uart_to_mem_i data_addr_o", false,-1, 11,0);
        tracep->declBit(c+256,"design_2_top forte_soc_top_i uart_to_mem_i data_we_o", false,-1);
        tracep->declBus(c+520,"design_2_top forte_soc_top_i uart_to_mem_i data_be_o", false,-1, 3,0);
        tracep->declBus(c+278,"design_2_top forte_soc_top_i uart_to_mem_i data_wdata_o", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i uart_to_mem_i data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+255,"design_2_top forte_soc_top_i uart_to_mem_i data_rvalid_i", false,-1);
        tracep->declBit(c+422,"design_2_top forte_soc_top_i uart_to_mem_i data_gnt_i", false,-1);
        tracep->declBit(c+228,"design_2_top forte_soc_top_i uart_to_mem_i uart_error", false,-1);
        tracep->declBit(c+257,"design_2_top forte_soc_top_i uart_to_mem_i transmit_i", false,-1);
        tracep->declBus(c+279,"design_2_top forte_soc_top_i uart_to_mem_i tx_byte_i", false,-1, 7,0);
        tracep->declBit(c+258,"design_2_top forte_soc_top_i uart_to_mem_i received_o", false,-1);
        tracep->declBus(c+259,"design_2_top forte_soc_top_i uart_to_mem_i rx_byte_o", false,-1, 7,0);
        tracep->declBit(c+260,"design_2_top forte_soc_top_i uart_to_mem_i is_receiving_o", false,-1);
        tracep->declBit(c+261,"design_2_top forte_soc_top_i uart_to_mem_i is_transmitting_o", false,-1);
        tracep->declBit(c+228,"design_2_top forte_soc_top_i uart_to_mem_i recv_error_o", false,-1);
        tracep->declBus(c+506,"design_2_top forte_soc_top_i uart_to_mem_i IDLE", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i uart_to_mem_i WAIT_ADDR_HEAD", false,-1, 31,0);
        tracep->declBus(c+508,"design_2_top forte_soc_top_i uart_to_mem_i WAIT_ADDR_TAIL", false,-1, 31,0);
        tracep->declBus(c+509,"design_2_top forte_soc_top_i uart_to_mem_i RECEIVE_WRITE_DATA", false,-1, 31,0);
        tracep->declBus(c+510,"design_2_top forte_soc_top_i uart_to_mem_i SEND_READ_DATA", false,-1, 31,0);
        tracep->declBus(c+521,"design_2_top forte_soc_top_i uart_to_mem_i PKT_ALIVE", false,-1, 7,0);
        tracep->declBus(c+515,"design_2_top forte_soc_top_i uart_to_mem_i PKT_WRITE_CMD", false,-1, 7,0);
        tracep->declBus(c+513,"design_2_top forte_soc_top_i uart_to_mem_i PKT_ADR", false,-1, 7,0);
        tracep->declBus(c+516,"design_2_top forte_soc_top_i uart_to_mem_i PKT_READ_CMD", false,-1, 7,0);
        tracep->declBus(c+280,"design_2_top forte_soc_top_i uart_to_mem_i UART_STATE", false,-1, 2,0);
        tracep->declBus(c+278,"design_2_top forte_soc_top_i uart_to_mem_i DATA", false,-1, 31,0);
        tracep->declBus(c+423,"design_2_top forte_soc_top_i uart_to_mem_i DATA_READ", false,-1, 31,0);
        tracep->declBus(c+277,"design_2_top forte_soc_top_i uart_to_mem_i MEMORY_ADDRESS", false,-1, 11,0);
        tracep->declBit(c+281,"design_2_top forte_soc_top_i uart_to_mem_i transmit", false,-1);
        tracep->declBit(c+262,"design_2_top forte_soc_top_i uart_to_mem_i trans_txn_ff2", false,-1);
        tracep->declBit(c+263,"design_2_top forte_soc_top_i uart_to_mem_i trans_txn_ff", false,-1);
        tracep->declBus(c+282,"design_2_top forte_soc_top_i uart_to_mem_i data_count", false,-1, 2,0);
        tracep->declBit(c+283,"design_2_top forte_soc_top_i uart_to_mem_i we", false,-1);
        tracep->declBit(c+284,"design_2_top forte_soc_top_i uart_to_mem_i start_read", false,-1);
        tracep->declBit(c+424,"design_2_top forte_soc_top_i uart_to_mem_i read_issued", false,-1);
        tracep->declBit(c+264,"design_2_top forte_soc_top_i uart_to_mem_i read_registered", false,-1);
        tracep->declBit(c+425,"design_2_top forte_soc_top_i uart_to_mem_i read_complete", false,-1);
        tracep->declBit(c+265,"design_2_top forte_soc_top_i uart_to_mem_i write_issued", false,-1);
        tracep->declBus(c+266,"design_2_top forte_soc_top_i uart_to_mem_i baud_i", false,-1, 15,0);
        tracep->declBit(c+267,"design_2_top forte_soc_top_i uart_to_mem_i recv_ack_i", false,-1);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i uart_to_mem_i uart_i clk", false,-1);
        tracep->declBit(c+452,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rst", false,-1);
        tracep->declBit(c+230,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rx", false,-1);
        tracep->declBit(c+229,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx", false,-1);
        tracep->declBit(c+257,"design_2_top forte_soc_top_i uart_to_mem_i uart_i transmit", false,-1);
        tracep->declBus(c+279,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_byte", false,-1, 7,0);
        tracep->declBit(c+258,"design_2_top forte_soc_top_i uart_to_mem_i uart_i received", false,-1);
        tracep->declBus(c+259,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rx_byte", false,-1, 7,0);
        tracep->declBit(c+260,"design_2_top forte_soc_top_i uart_to_mem_i uart_i is_receiving", false,-1);
        tracep->declBit(c+261,"design_2_top forte_soc_top_i uart_to_mem_i uart_i is_transmitting", false,-1);
        tracep->declBit(c+228,"design_2_top forte_soc_top_i uart_to_mem_i uart_i recv_error", false,-1);
        tracep->declBus(c+517,"design_2_top forte_soc_top_i uart_to_mem_i uart_i CLOCK_DIVIDE", false,-1, 31,0);
        tracep->declBus(c+506,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_IDLE", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_CHECK_START", false,-1, 31,0);
        tracep->declBus(c+508,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_READ_BITS", false,-1, 31,0);
        tracep->declBus(c+509,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_CHECK_STOP", false,-1, 31,0);
        tracep->declBus(c+510,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_DELAY_RESTART", false,-1, 31,0);
        tracep->declBus(c+511,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_ERROR", false,-1, 31,0);
        tracep->declBus(c+518,"design_2_top forte_soc_top_i uart_to_mem_i uart_i RX_RECEIVED", false,-1, 31,0);
        tracep->declBus(c+506,"design_2_top forte_soc_top_i uart_to_mem_i uart_i TX_IDLE", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i uart_to_mem_i uart_i TX_SENDING", false,-1, 31,0);
        tracep->declBus(c+508,"design_2_top forte_soc_top_i uart_to_mem_i uart_i TX_DELAY_RESTART", false,-1, 31,0);
        tracep->declBus(c+268,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rx_clk_divider", false,-1, 10,0);
        tracep->declBus(c+269,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_clk_divider", false,-1, 10,0);
        tracep->declBus(c+270,"design_2_top forte_soc_top_i uart_to_mem_i uart_i recv_state", false,-1, 2,0);
        tracep->declBus(c+271,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rx_countdown", false,-1, 5,0);
        tracep->declBus(c+272,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rx_bits_remaining", false,-1, 3,0);
        tracep->declBus(c+259,"design_2_top forte_soc_top_i uart_to_mem_i uart_i rx_data", false,-1, 7,0);
        tracep->declBit(c+229,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_out", false,-1);
        tracep->declBus(c+273,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_state", false,-1, 1,0);
        tracep->declBus(c+274,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_countdown", false,-1, 5,0);
        tracep->declBus(c+275,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_bits_remaining", false,-1, 3,0);
        tracep->declBus(c+276,"design_2_top forte_soc_top_i uart_to_mem_i uart_i tx_data", false,-1, 7,0);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i ibex_core_i N_EXT_PERF_COUNTERS", false,-1, 31,0);
        tracep->declBit(c+522,"design_2_top forte_soc_top_i ibex_core_i RV32E", false,-1);
        tracep->declBit(c+523,"design_2_top forte_soc_top_i ibex_core_i RV32M", false,-1);
        tracep->declBus(c+524,"design_2_top forte_soc_top_i ibex_core_i DM_HALT_ADDRESS", false,-1, 31,0);
        tracep->declBus(c+525,"design_2_top forte_soc_top_i ibex_core_i DM_EXCEPTION_ADDRESS", false,-1, 31,0);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i ibex_core_i clk_i", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i rst_ni", false,-1);
        tracep->declBit(c+526,"design_2_top forte_soc_top_i ibex_core_i test_en_i", false,-1);
        tracep->declBus(c+527,"design_2_top forte_soc_top_i ibex_core_i core_id_i", false,-1, 3,0);
        tracep->declBus(c+528,"design_2_top forte_soc_top_i ibex_core_i cluster_id_i", false,-1, 5,0);
        tracep->declBus(c+529,"design_2_top forte_soc_top_i ibex_core_i boot_addr_i", false,-1, 31,0);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_i instr_req_o", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_i instr_gnt_i", false,-1);
        tracep->declBit(c+254,"design_2_top forte_soc_top_i ibex_core_i instr_rvalid_i", false,-1);
        tracep->declBus(c+4,"design_2_top forte_soc_top_i ibex_core_i instr_addr_o", false,-1, 31,0);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ibex_core_i instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+2,"design_2_top forte_soc_top_i ibex_core_i data_req_o", false,-1);
        tracep->declBit(c+6,"design_2_top forte_soc_top_i ibex_core_i data_gnt_i", false,-1);
        tracep->declBit(c+421,"design_2_top forte_soc_top_i ibex_core_i data_rvalid_i", false,-1);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i data_we_o", false,-1);
        tracep->declBus(c+209,"design_2_top forte_soc_top_i ibex_core_i data_be_o", false,-1, 3,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i data_addr_o", false,-1, 31,0);
        tracep->declBus(c+218,"design_2_top forte_soc_top_i ibex_core_i data_wdata_o", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ibex_core_i data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i data_err_i", false,-1);
        tracep->declBit(c+457,"design_2_top forte_soc_top_i ibex_core_i irq_i", false,-1);
        tracep->declBus(c+456,"design_2_top forte_soc_top_i ibex_core_i irq_id_i", false,-1, 4,0);
        tracep->declBit(c+287,"design_2_top forte_soc_top_i ibex_core_i irq_ack_o", false,-1);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i irq_id_o", false,-1, 4,0);
        tracep->declBit(c+459,"design_2_top forte_soc_top_i ibex_core_i debug_req_i", false,-1);
        tracep->declBit(c+465,"design_2_top forte_soc_top_i ibex_core_i fetch_enable_i", false,-1);
        tracep->declBus(c+530,"design_2_top forte_soc_top_i ibex_core_i ext_perf_counters_i", false,-1, 0,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i eFPGA_operand_a_o", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i eFPGA_operand_b_o", false,-1, 31,0);
        tracep->declBus(c+468,"design_2_top forte_soc_top_i ibex_core_i eFPGA_result_a_i", false,-1, 31,0);
        tracep->declBus(c+469,"design_2_top forte_soc_top_i ibex_core_i eFPGA_result_b_i", false,-1, 31,0);
        tracep->declBus(c+470,"design_2_top forte_soc_top_i ibex_core_i eFPGA_result_c_i", false,-1, 31,0);
        tracep->declBit(c+288,"design_2_top forte_soc_top_i ibex_core_i instr_valid_id", false,-1);
        tracep->declBus(c+432,"design_2_top forte_soc_top_i ibex_core_i instr_rdata_id", false,-1, 31,0);
        tracep->declBit(c+289,"design_2_top forte_soc_top_i ibex_core_i is_compressed_id", false,-1);
        tracep->declBit(c+290,"design_2_top forte_soc_top_i ibex_core_i illegal_c_insn_id", false,-1);
        tracep->declBus(c+433,"design_2_top forte_soc_top_i ibex_core_i pc_if", false,-1, 31,0);
        tracep->declBus(c+434,"design_2_top forte_soc_top_i ibex_core_i pc_id", false,-1, 31,0);
        tracep->declBit(c+7,"design_2_top forte_soc_top_i ibex_core_i clear_instr_valid", false,-1);
        tracep->declBit(c+8,"design_2_top forte_soc_top_i ibex_core_i pc_set", false,-1);
        tracep->declBus(c+9,"design_2_top forte_soc_top_i ibex_core_i pc_mux_id", false,-1, 2,0);
        tracep->declBus(c+10,"design_2_top forte_soc_top_i ibex_core_i exc_pc_mux_id", false,-1, 2,0);
        tracep->declBus(c+11,"design_2_top forte_soc_top_i ibex_core_i exc_cause", false,-1, 5,0);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i lsu_load_err", false,-1);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i lsu_store_err", false,-1);
        tracep->declBit(c+12,"design_2_top forte_soc_top_i ibex_core_i is_decoding", false,-1);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i data_misaligned", false,-1);
        tracep->declBus(c+291,"design_2_top forte_soc_top_i ibex_core_i misaligned_addr", false,-1, 31,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i jump_target_ex", false,-1, 31,0);
        tracep->declBit(c+14,"design_2_top forte_soc_top_i ibex_core_i branch_decision", false,-1);
        tracep->declBit(c+292,"design_2_top forte_soc_top_i ibex_core_i ctrl_busy", false,-1);
        tracep->declBit(c+210,"design_2_top forte_soc_top_i ibex_core_i if_busy", false,-1);
        tracep->declBit(c+211,"design_2_top forte_soc_top_i ibex_core_i lsu_busy", false,-1);
        tracep->declBit(c+474,"design_2_top forte_soc_top_i ibex_core_i core_busy", false,-1);
        tracep->declBit(c+293,"design_2_top forte_soc_top_i ibex_core_i core_ctrl_firstfetch", false,-1);
        tracep->declBit(c+212,"design_2_top forte_soc_top_i ibex_core_i core_busy_int", false,-1);
        tracep->declBit(c+285,"design_2_top forte_soc_top_i ibex_core_i core_busy_q", false,-1);
        tracep->declBus(c+15,"design_2_top forte_soc_top_i ibex_core_i alu_operator_ex", false,-1, 4,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i alu_operand_a_ex", false,-1, 31,0);
        tracep->declBus(c+17,"design_2_top forte_soc_top_i ibex_core_i alu_operand_b_ex", false,-1, 31,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i alu_adder_result_ex", false,-1, 31,0);
        tracep->declBus(c+475,"design_2_top forte_soc_top_i ibex_core_i regfile_wdata_ex", false,-1, 31,0);
        tracep->declBit(c+18,"design_2_top forte_soc_top_i ibex_core_i mult_en_ex", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i div_en_ex", false,-1);
        tracep->declBus(c+20,"design_2_top forte_soc_top_i ibex_core_i multdiv_operator_ex", false,-1, 1,0);
        tracep->declBus(c+21,"design_2_top forte_soc_top_i ibex_core_i multdiv_signed_mode_ex", false,-1, 1,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i multdiv_operand_a_ex", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i multdiv_operand_b_ex", false,-1, 31,0);
        tracep->declBit(c+22,"design_2_top forte_soc_top_i ibex_core_i csr_access_ex", false,-1);
        tracep->declBus(c+23,"design_2_top forte_soc_top_i ibex_core_i csr_op_ex", false,-1, 1,0);
        tracep->declBit(c+22,"design_2_top forte_soc_top_i ibex_core_i csr_access", false,-1);
        tracep->declBus(c+23,"design_2_top forte_soc_top_i ibex_core_i csr_op", false,-1, 1,0);
        tracep->declBus(c+24,"design_2_top forte_soc_top_i ibex_core_i csr_addr", false,-1, 11,0);
        tracep->declBus(c+25,"design_2_top forte_soc_top_i ibex_core_i csr_rdata", false,-1, 31,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i csr_wdata", false,-1, 31,0);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i data_we_ex", false,-1);
        tracep->declBus(c+26,"design_2_top forte_soc_top_i ibex_core_i data_type_ex", false,-1, 1,0);
        tracep->declBit(c+27,"design_2_top forte_soc_top_i ibex_core_i data_sign_ext_ex", false,-1);
        tracep->declBus(c+531,"design_2_top forte_soc_top_i ibex_core_i data_reg_offset_ex", false,-1, 1,0);
        tracep->declBit(c+28,"design_2_top forte_soc_top_i ibex_core_i data_req_ex", false,-1);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i data_wdata_ex", false,-1, 31,0);
        tracep->declBus(c+476,"design_2_top forte_soc_top_i ibex_core_i regfile_wdata_lsu", false,-1, 31,0);
        tracep->declBit(c+29,"design_2_top forte_soc_top_i ibex_core_i halt_if", false,-1);
        tracep->declBit(c+30,"design_2_top forte_soc_top_i ibex_core_i id_ready", false,-1);
        tracep->declBit(c+31,"design_2_top forte_soc_top_i ibex_core_i ex_ready", false,-1);
        tracep->declBit(c+32,"design_2_top forte_soc_top_i ibex_core_i if_valid", false,-1);
        tracep->declBit(c+33,"design_2_top forte_soc_top_i ibex_core_i id_valid", false,-1);
        tracep->declBit(c+34,"design_2_top forte_soc_top_i ibex_core_i data_valid_lsu", false,-1);
        tracep->declBit(c+294,"design_2_top forte_soc_top_i ibex_core_i instr_req_int", false,-1);
        tracep->declBit(c+295,"design_2_top forte_soc_top_i ibex_core_i m_irq_enable", false,-1);
        tracep->declBus(c+296,"design_2_top forte_soc_top_i ibex_core_i mepc", false,-1, 31,0);
        tracep->declBus(c+297,"design_2_top forte_soc_top_i ibex_core_i depc", false,-1, 31,0);
        tracep->declBit(c+35,"design_2_top forte_soc_top_i ibex_core_i csr_save_cause", false,-1);
        tracep->declBit(c+298,"design_2_top forte_soc_top_i ibex_core_i csr_save_if", false,-1);
        tracep->declBit(c+36,"design_2_top forte_soc_top_i ibex_core_i csr_save_id", false,-1);
        tracep->declBus(c+37,"design_2_top forte_soc_top_i ibex_core_i csr_cause", false,-1, 5,0);
        tracep->declBit(c+38,"design_2_top forte_soc_top_i ibex_core_i csr_restore_mret_id", false,-1);
        tracep->declBit(c+39,"design_2_top forte_soc_top_i ibex_core_i csr_restore_dret_id", false,-1);
        tracep->declBus(c+40,"design_2_top forte_soc_top_i ibex_core_i debug_cause", false,-1, 2,0);
        tracep->declBit(c+41,"design_2_top forte_soc_top_i ibex_core_i debug_csr_save", false,-1);
        tracep->declBit(c+299,"design_2_top forte_soc_top_i ibex_core_i debug_single_step", false,-1);
        tracep->declBit(c+300,"design_2_top forte_soc_top_i ibex_core_i debug_ebreakm", false,-1);
        tracep->declBit(c+42,"design_2_top forte_soc_top_i ibex_core_i perf_imiss", false,-1);
        tracep->declBit(c+43,"design_2_top forte_soc_top_i ibex_core_i perf_jump", false,-1);
        tracep->declBit(c+44,"design_2_top forte_soc_top_i ibex_core_i perf_branch", false,-1);
        tracep->declBit(c+45,"design_2_top forte_soc_top_i ibex_core_i perf_tbranch", false,-1);
        tracep->declBit(c+46,"design_2_top forte_soc_top_i ibex_core_i eFPGA_en", false,-1);
        tracep->declBus(c+47,"design_2_top forte_soc_top_i ibex_core_i eFPGA_operator", false,-1, 1,0);
        tracep->declBus(c+48,"design_2_top forte_soc_top_i ibex_core_i eFPGA_delay", false,-1, 3,0);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i clk", false,-1);
        tracep->declBit(c+477,"design_2_top forte_soc_top_i ibex_core_i clock_en", false,-1);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i ibex_core_i core_clock_gate_i clk_i", false,-1);
        tracep->declBit(c+477,"design_2_top forte_soc_top_i ibex_core_i core_clock_gate_i en_i", false,-1);
        tracep->declBit(c+526,"design_2_top forte_soc_top_i ibex_core_i core_clock_gate_i test_en_i", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i core_clock_gate_i clk_o", false,-1);
        tracep->declBit(c+50,"design_2_top forte_soc_top_i ibex_core_i core_clock_gate_i clk_en", false,-1);
        tracep->declBus(c+524,"design_2_top forte_soc_top_i ibex_core_i if_stage_i DM_HALT_ADDRESS", false,-1, 31,0);
        tracep->declBus(c+525,"design_2_top forte_soc_top_i ibex_core_i if_stage_i DM_EXCEPTION_ADDRESS", false,-1, 31,0);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i if_stage_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i if_stage_i rst_n", false,-1);
        tracep->declBus(c+529,"design_2_top forte_soc_top_i ibex_core_i if_stage_i boot_addr_i", false,-1, 31,0);
        tracep->declBit(c+294,"design_2_top forte_soc_top_i ibex_core_i if_stage_i req_i", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_req_o", false,-1);
        tracep->declBus(c+4,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_addr_o", false,-1, 31,0);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_gnt_i", false,-1);
        tracep->declBit(c+254,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_rvalid_i", false,-1);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+288,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_valid_id_o", false,-1);
        tracep->declBus(c+432,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_rdata_id_o", false,-1, 31,0);
        tracep->declBit(c+289,"design_2_top forte_soc_top_i ibex_core_i if_stage_i is_compressed_id_o", false,-1);
        tracep->declBit(c+290,"design_2_top forte_soc_top_i ibex_core_i if_stage_i illegal_c_insn_id_o", false,-1);
        tracep->declBus(c+433,"design_2_top forte_soc_top_i ibex_core_i if_stage_i pc_if_o", false,-1, 31,0);
        tracep->declBus(c+434,"design_2_top forte_soc_top_i ibex_core_i if_stage_i pc_id_o", false,-1, 31,0);
        tracep->declBit(c+7,"design_2_top forte_soc_top_i ibex_core_i if_stage_i clear_instr_valid_i", false,-1);
        tracep->declBit(c+8,"design_2_top forte_soc_top_i ibex_core_i if_stage_i pc_set_i", false,-1);
        tracep->declBus(c+296,"design_2_top forte_soc_top_i ibex_core_i if_stage_i exception_pc_reg_i", false,-1, 31,0);
        tracep->declBus(c+297,"design_2_top forte_soc_top_i ibex_core_i if_stage_i depc_i", false,-1, 31,0);
        tracep->declBus(c+9,"design_2_top forte_soc_top_i ibex_core_i if_stage_i pc_mux_i", false,-1, 2,0);
        tracep->declBus(c+10,"design_2_top forte_soc_top_i ibex_core_i if_stage_i exc_pc_mux_i", false,-1, 2,0);
        tracep->declBus(c+11,"design_2_top forte_soc_top_i ibex_core_i if_stage_i exc_vec_pc_mux_i", false,-1, 5,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i if_stage_i jump_target_ex_i", false,-1, 31,0);
        tracep->declBit(c+29,"design_2_top forte_soc_top_i ibex_core_i if_stage_i halt_if_i", false,-1);
        tracep->declBit(c+30,"design_2_top forte_soc_top_i ibex_core_i if_stage_i id_ready_i", false,-1);
        tracep->declBit(c+32,"design_2_top forte_soc_top_i ibex_core_i if_stage_i if_valid_o", false,-1);
        tracep->declBit(c+210,"design_2_top forte_soc_top_i ibex_core_i if_stage_i if_busy_o", false,-1);
        tracep->declBit(c+42,"design_2_top forte_soc_top_i ibex_core_i if_stage_i perf_imiss_o", false,-1);
        tracep->declBit(c+51,"design_2_top forte_soc_top_i ibex_core_i if_stage_i offset_in_init_d", false,-1);
        tracep->declBit(c+301,"design_2_top forte_soc_top_i ibex_core_i if_stage_i offset_in_init_q", false,-1);
        tracep->declBit(c+52,"design_2_top forte_soc_top_i ibex_core_i if_stage_i valid", false,-1);
        tracep->declBit(c+53,"design_2_top forte_soc_top_i ibex_core_i if_stage_i if_ready", false,-1);
        tracep->declBit(c+210,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_busy", false,-1);
        tracep->declBit(c+54,"design_2_top forte_soc_top_i ibex_core_i if_stage_i branch_req", false,-1);
        tracep->declBus(c+55,"design_2_top forte_soc_top_i ibex_core_i if_stage_i fetch_addr_n", false,-1, 31,0);
        tracep->declBit(c+56,"design_2_top forte_soc_top_i ibex_core_i if_stage_i fetch_valid", false,-1);
        tracep->declBit(c+57,"design_2_top forte_soc_top_i ibex_core_i if_stage_i fetch_ready", false,-1);
        tracep->declBus(c+448,"design_2_top forte_soc_top_i ibex_core_i if_stage_i fetch_rdata", false,-1, 31,0);
        tracep->declBus(c+433,"design_2_top forte_soc_top_i ibex_core_i if_stage_i fetch_addr", false,-1, 31,0);
        tracep->declBus(c+58,"design_2_top forte_soc_top_i ibex_core_i if_stage_i exc_pc", false,-1, 31,0);
        tracep->declBus(c+449,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_decompressed", false,-1, 31,0);
        tracep->declBit(c+450,"design_2_top forte_soc_top_i ibex_core_i if_stage_i illegal_c_insn", false,-1);
        tracep->declBit(c+451,"design_2_top forte_soc_top_i ibex_core_i if_stage_i instr_compressed_int", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i rst_n", false,-1);
        tracep->declBit(c+294,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i req_i", false,-1);
        tracep->declBit(c+54,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i branch_i", false,-1);
        tracep->declBus(c+59,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i addr_i", false,-1, 31,0);
        tracep->declBit(c+57,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i ready_i", false,-1);
        tracep->declBit(c+56,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i valid_o", false,-1);
        tracep->declBus(c+448,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i rdata_o", false,-1, 31,0);
        tracep->declBus(c+433,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i addr_o", false,-1, 31,0);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i instr_req_o", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i instr_gnt_i", false,-1);
        tracep->declBus(c+4,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i instr_addr_o", false,-1, 31,0);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+254,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i instr_rvalid_i", false,-1);
        tracep->declBit(c+210,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i busy_o", false,-1);
        tracep->declBus(c+302,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i CS", false,-1, 1,0);
        tracep->declBus(c+60,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i NS", false,-1, 1,0);
        tracep->declBus(c+303,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i instr_addr_q", false,-1, 31,0);
        tracep->declBus(c+304,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fetch_addr", false,-1, 31,0);
        tracep->declBit(c+61,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i addr_valid", false,-1);
        tracep->declBit(c+62,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_valid", false,-1);
        tracep->declBit(c+305,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_ready", false,-1);
        tracep->declBit(c+54,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_clear", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i rst_n", false,-1);
        tracep->declBit(c+54,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i clear_i", false,-1);
        tracep->declBus(c+303,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i in_addr_i", false,-1, 31,0);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i in_rdata_i", false,-1, 31,0);
        tracep->declBit(c+62,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i in_valid_i", false,-1);
        tracep->declBit(c+305,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i in_ready_o", false,-1);
        tracep->declBit(c+56,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i out_valid_o", false,-1);
        tracep->declBit(c+57,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i out_ready_i", false,-1);
        tracep->declBus(c+448,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i out_rdata_o", false,-1, 31,0);
        tracep->declBus(c+433,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i out_addr_o", false,-1, 31,0);
        tracep->declBit(c+478,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i out_valid_stored_o", false,-1);
        tracep->declBus(c+509,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i DEPTH", false,-1, 31,0);
        tracep->declArray(c+63,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i addr_n", false,-1, 95,0);
        tracep->declArray(c+66,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i addr_int", false,-1, 95,0);
        tracep->declArray(c+306,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i addr_Q", false,-1, 95,0);
        tracep->declArray(c+69,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i rdata_n", false,-1, 95,0);
        tracep->declArray(c+72,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i rdata_int", false,-1, 95,0);
        tracep->declArray(c+309,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i rdata_Q", false,-1, 95,0);
        tracep->declBus(c+75,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i valid_n", false,-1, 2,0);
        tracep->declBus(c+76,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i valid_int", false,-1, 2,0);
        tracep->declBus(c+312,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i valid_Q", false,-1, 2,0);
        tracep->declBus(c+77,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i addr_next", false,-1, 31,2);
        tracep->declBus(c+426,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i rdata", false,-1, 31,0);
        tracep->declBus(c+479,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i rdata_unaligned", false,-1, 31,0);
        tracep->declBit(c+78,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i valid", false,-1);
        tracep->declBit(c+213,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i valid_unaligned", false,-1);
        tracep->declBit(c+427,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i aligned_is_compressed", false,-1);
        tracep->declBit(c+428,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i unaligned_is_compressed", false,-1);
        tracep->declBit(c+313,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i unaligned_is_compressed_st", false,-1);
        tracep->declBus(c+79,"design_2_top forte_soc_top_i ibex_core_i if_stage_i prefetch_buffer_i fifo_i unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+448,"design_2_top forte_soc_top_i ibex_core_i if_stage_i compressed_decoder_i instr_i", false,-1, 31,0);
        tracep->declBus(c+449,"design_2_top forte_soc_top_i ibex_core_i if_stage_i compressed_decoder_i instr_o", false,-1, 31,0);
        tracep->declBit(c+451,"design_2_top forte_soc_top_i ibex_core_i if_stage_i compressed_decoder_i is_compressed_o", false,-1);
        tracep->declBit(c+450,"design_2_top forte_soc_top_i ibex_core_i if_stage_i compressed_decoder_i illegal_instr_o", false,-1);
        tracep->declBit(c+523,"design_2_top forte_soc_top_i ibex_core_i id_stage_i RV32M", false,-1);
        tracep->declBit(c+522,"design_2_top forte_soc_top_i ibex_core_i id_stage_i RV32E", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i id_stage_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i id_stage_i rst_n", false,-1);
        tracep->declBit(c+526,"design_2_top forte_soc_top_i ibex_core_i id_stage_i test_en_i", false,-1);
        tracep->declBit(c+465,"design_2_top forte_soc_top_i ibex_core_i id_stage_i fetch_enable_i", false,-1);
        tracep->declBit(c+292,"design_2_top forte_soc_top_i ibex_core_i id_stage_i ctrl_busy_o", false,-1);
        tracep->declBit(c+293,"design_2_top forte_soc_top_i ibex_core_i id_stage_i core_ctrl_firstfetch_o", false,-1);
        tracep->declBit(c+12,"design_2_top forte_soc_top_i ibex_core_i id_stage_i is_decoding_o", false,-1);
        tracep->declBit(c+288,"design_2_top forte_soc_top_i ibex_core_i id_stage_i instr_valid_i", false,-1);
        tracep->declBus(c+432,"design_2_top forte_soc_top_i ibex_core_i id_stage_i instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+294,"design_2_top forte_soc_top_i ibex_core_i id_stage_i instr_req_o", false,-1);
        tracep->declBit(c+14,"design_2_top forte_soc_top_i ibex_core_i id_stage_i branch_decision_i", false,-1);
        tracep->declBit(c+7,"design_2_top forte_soc_top_i ibex_core_i id_stage_i clear_instr_valid_o", false,-1);
        tracep->declBit(c+8,"design_2_top forte_soc_top_i ibex_core_i id_stage_i pc_set_o", false,-1);
        tracep->declBus(c+9,"design_2_top forte_soc_top_i ibex_core_i id_stage_i pc_mux_o", false,-1, 2,0);
        tracep->declBus(c+10,"design_2_top forte_soc_top_i ibex_core_i id_stage_i exc_pc_mux_o", false,-1, 2,0);
        tracep->declBit(c+290,"design_2_top forte_soc_top_i ibex_core_i id_stage_i illegal_c_insn_i", false,-1);
        tracep->declBit(c+289,"design_2_top forte_soc_top_i ibex_core_i id_stage_i is_compressed_i", false,-1);
        tracep->declBus(c+434,"design_2_top forte_soc_top_i ibex_core_i id_stage_i pc_id_i", false,-1, 31,0);
        tracep->declBit(c+29,"design_2_top forte_soc_top_i ibex_core_i id_stage_i halt_if_o", false,-1);
        tracep->declBit(c+30,"design_2_top forte_soc_top_i ibex_core_i id_stage_i id_ready_o", false,-1);
        tracep->declBit(c+31,"design_2_top forte_soc_top_i ibex_core_i id_stage_i ex_ready_i", false,-1);
        tracep->declBit(c+33,"design_2_top forte_soc_top_i ibex_core_i id_stage_i id_valid_o", false,-1);
        tracep->declBus(c+15,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_operator_ex_o", false,-1, 4,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_operand_a_ex_o", false,-1, 31,0);
        tracep->declBus(c+17,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_operand_b_ex_o", false,-1, 31,0);
        tracep->declBit(c+18,"design_2_top forte_soc_top_i ibex_core_i id_stage_i mult_en_ex_o", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i id_stage_i div_en_ex_o", false,-1);
        tracep->declBus(c+20,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_operator_ex_o", false,-1, 1,0);
        tracep->declBus(c+21,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_signed_mode_ex_o", false,-1, 1,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_operand_a_ex_o", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_operand_b_ex_o", false,-1, 31,0);
        tracep->declBit(c+46,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_en_o", false,-1);
        tracep->declBus(c+47,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_operator_o", false,-1, 1,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_operand_a_o", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_operand_b_o", false,-1, 31,0);
        tracep->declBus(c+48,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_delay_o", false,-1, 3,0);
        tracep->declBit(c+22,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_access_ex_o", false,-1);
        tracep->declBus(c+23,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_op_ex_o", false,-1, 1,0);
        tracep->declBus(c+37,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_cause_o", false,-1, 5,0);
        tracep->declBit(c+298,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_save_if_o", false,-1);
        tracep->declBit(c+36,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_save_id_o", false,-1);
        tracep->declBit(c+38,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_restore_mret_id_o", false,-1);
        tracep->declBit(c+39,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_restore_dret_id_o", false,-1);
        tracep->declBit(c+35,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_save_cause_o", false,-1);
        tracep->declBit(c+28,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_req_ex_o", false,-1);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_we_ex_o", false,-1);
        tracep->declBus(c+26,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_type_ex_o", false,-1, 1,0);
        tracep->declBit(c+27,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_sign_ext_ex_o", false,-1);
        tracep->declBus(c+531,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_reg_offset_ex_o", false,-1, 1,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_wdata_ex_o", false,-1, 31,0);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_misaligned_i", false,-1);
        tracep->declBus(c+291,"design_2_top forte_soc_top_i ibex_core_i id_stage_i misaligned_addr_i", false,-1, 31,0);
        tracep->declBit(c+457,"design_2_top forte_soc_top_i ibex_core_i id_stage_i irq_i", false,-1);
        tracep->declBus(c+456,"design_2_top forte_soc_top_i ibex_core_i id_stage_i irq_id_i", false,-1, 4,0);
        tracep->declBit(c+295,"design_2_top forte_soc_top_i ibex_core_i id_stage_i m_irq_enable_i", false,-1);
        tracep->declBit(c+287,"design_2_top forte_soc_top_i ibex_core_i id_stage_i irq_ack_o", false,-1);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i id_stage_i irq_id_o", false,-1, 4,0);
        tracep->declBus(c+11,"design_2_top forte_soc_top_i ibex_core_i id_stage_i exc_cause_o", false,-1, 5,0);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i id_stage_i lsu_load_err_i", false,-1);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i id_stage_i lsu_store_err_i", false,-1);
        tracep->declBus(c+40,"design_2_top forte_soc_top_i ibex_core_i id_stage_i debug_cause_o", false,-1, 2,0);
        tracep->declBit(c+41,"design_2_top forte_soc_top_i ibex_core_i id_stage_i debug_csr_save_o", false,-1);
        tracep->declBit(c+459,"design_2_top forte_soc_top_i ibex_core_i id_stage_i debug_req_i", false,-1);
        tracep->declBit(c+299,"design_2_top forte_soc_top_i ibex_core_i id_stage_i debug_single_step_i", false,-1);
        tracep->declBit(c+300,"design_2_top forte_soc_top_i ibex_core_i id_stage_i debug_ebreakm_i", false,-1);
        tracep->declBus(c+476,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_wdata_lsu_i", false,-1, 31,0);
        tracep->declBus(c+475,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_wdata_ex_i", false,-1, 31,0);
        tracep->declBus(c+25,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+43,"design_2_top forte_soc_top_i ibex_core_i id_stage_i perf_jump_o", false,-1);
        tracep->declBit(c+44,"design_2_top forte_soc_top_i ibex_core_i id_stage_i perf_branch_o", false,-1);
        tracep->declBit(c+45,"design_2_top forte_soc_top_i ibex_core_i id_stage_i perf_tbranch_o", false,-1);
        tracep->declBus(c+432,"design_2_top forte_soc_top_i ibex_core_i id_stage_i instr", false,-1, 31,0);
        tracep->declBit(c+80,"design_2_top forte_soc_top_i ibex_core_i id_stage_i deassert_we", false,-1);
        tracep->declBit(c+81,"design_2_top forte_soc_top_i ibex_core_i id_stage_i illegal_insn_dec", false,-1);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i id_stage_i illegal_reg_rv32e", false,-1);
        tracep->declBit(c+82,"design_2_top forte_soc_top_i ibex_core_i id_stage_i ebrk_insn", false,-1);
        tracep->declBit(c+83,"design_2_top forte_soc_top_i ibex_core_i id_stage_i mret_insn_dec", false,-1);
        tracep->declBit(c+84,"design_2_top forte_soc_top_i ibex_core_i id_stage_i dret_insn_dec", false,-1);
        tracep->declBit(c+85,"design_2_top forte_soc_top_i ibex_core_i id_stage_i ecall_insn_dec", false,-1);
        tracep->declBit(c+86,"design_2_top forte_soc_top_i ibex_core_i id_stage_i pipe_flush_dec", false,-1);
        tracep->declBit(c+87,"design_2_top forte_soc_top_i ibex_core_i id_stage_i branch_in_id", false,-1);
        tracep->declBit(c+88,"design_2_top forte_soc_top_i ibex_core_i id_stage_i branch_set_n", false,-1);
        tracep->declBit(c+314,"design_2_top forte_soc_top_i ibex_core_i id_stage_i branch_set_q", false,-1);
        tracep->declBit(c+315,"design_2_top forte_soc_top_i ibex_core_i id_stage_i branch_mux_dec", false,-1);
        tracep->declBit(c+89,"design_2_top forte_soc_top_i ibex_core_i id_stage_i jump_set", false,-1);
        tracep->declBit(c+316,"design_2_top forte_soc_top_i ibex_core_i id_stage_i jump_mux_dec", false,-1);
        tracep->declBit(c+90,"design_2_top forte_soc_top_i ibex_core_i id_stage_i jump_in_id", false,-1);
        tracep->declBit(c+91,"design_2_top forte_soc_top_i ibex_core_i id_stage_i instr_multicyle", false,-1);
        tracep->declBit(c+92,"design_2_top forte_soc_top_i ibex_core_i id_stage_i load_stall", false,-1);
        tracep->declBit(c+93,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_stall", false,-1);
        tracep->declBit(c+94,"design_2_top forte_soc_top_i ibex_core_i id_stage_i branch_stall", false,-1);
        tracep->declBit(c+95,"design_2_top forte_soc_top_i ibex_core_i id_stage_i jump_stall", false,-1);
        tracep->declBit(c+96,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_stall", false,-1);
        tracep->declBit(c+97,"design_2_top forte_soc_top_i ibex_core_i id_stage_i halt_id", false,-1);
        tracep->declBit(c+98,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_we", false,-1);
        tracep->declBit(c+99,"design_2_top forte_soc_top_i ibex_core_i id_stage_i select_data_rf", false,-1);
        tracep->declBus(c+435,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_i_type", false,-1, 31,0);
        tracep->declBus(c+436,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_s_type", false,-1, 31,0);
        tracep->declBus(c+437,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_b_type", false,-1, 31,0);
        tracep->declBus(c+438,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_u_type", false,-1, 31,0);
        tracep->declBus(c+439,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_j_type", false,-1, 31,0);
        tracep->declBus(c+440,"design_2_top forte_soc_top_i ibex_core_i id_stage_i zimm_rs1_type", false,-1, 31,0);
        tracep->declBus(c+219,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_a", false,-1, 31,0);
        tracep->declBus(c+100,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_b", false,-1, 31,0);
        tracep->declBit(c+317,"design_2_top forte_soc_top_i ibex_core_i id_stage_i irq_req_ctrl", false,-1);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i id_stage_i irq_id_ctrl", false,-1, 4,0);
        tracep->declBit(c+318,"design_2_top forte_soc_top_i ibex_core_i id_stage_i exc_ack", false,-1);
        tracep->declBit(c+101,"design_2_top forte_soc_top_i ibex_core_i id_stage_i exc_kill", false,-1);
        tracep->declBus(c+441,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_addr_ra_id", false,-1, 4,0);
        tracep->declBus(c+442,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_addr_rb_id", false,-1, 4,0);
        tracep->declBus(c+443,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_alu_waddr_id", false,-1, 4,0);
        tracep->declBit(c+102,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_we_id", false,-1);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_data_ra_id", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_data_rb_id", false,-1, 31,0);
        tracep->declBus(c+15,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_operator", false,-1, 4,0);
        tracep->declBus(c+103,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_op_a_mux_sel", false,-1, 1,0);
        tracep->declBit(c+104,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_op_b_mux_sel", false,-1);
        tracep->declBit(c+105,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_a_mux_sel", false,-1);
        tracep->declBus(c+106,"design_2_top forte_soc_top_i ibex_core_i id_stage_i imm_b_mux_sel", false,-1, 2,0);
        tracep->declBit(c+18,"design_2_top forte_soc_top_i ibex_core_i id_stage_i mult_int_en", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i id_stage_i div_int_en", false,-1);
        tracep->declBit(c+107,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_int_en", false,-1);
        tracep->declBus(c+20,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_operator", false,-1, 1,0);
        tracep->declBus(c+21,"design_2_top forte_soc_top_i ibex_core_i id_stage_i multdiv_signed_mode", false,-1, 1,0);
        tracep->declBit(c+532,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_en", false,-1);
        tracep->declBit(c+46,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_int_en", false,-1);
        tracep->declBus(c+47,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_operator", false,-1, 1,0);
        tracep->declBus(c+48,"design_2_top forte_soc_top_i ibex_core_i id_stage_i eFPGA_delay", false,-1, 3,0);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_we_id", false,-1);
        tracep->declBus(c+26,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_type_id", false,-1, 1,0);
        tracep->declBit(c+27,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_sign_ext_id", false,-1);
        tracep->declBus(c+531,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_reg_offset_id", false,-1, 1,0);
        tracep->declBit(c+28,"design_2_top forte_soc_top_i ibex_core_i id_stage_i data_req_id", false,-1);
        tracep->declBit(c+22,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_access", false,-1);
        tracep->declBus(c+23,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_op", false,-1, 1,0);
        tracep->declBit(c+108,"design_2_top forte_soc_top_i ibex_core_i id_stage_i csr_status", false,-1);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i id_stage_i operand_a_fw_mux_sel", false,-1);
        tracep->declBus(c+109,"design_2_top forte_soc_top_i ibex_core_i id_stage_i operand_a_fw_id", false,-1, 31,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_operand_a", false,-1, 31,0);
        tracep->declBus(c+17,"design_2_top forte_soc_top_i ibex_core_i id_stage_i alu_operand_b", false,-1, 31,0);
        tracep->declBus(c+110,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_wdata_mux", false,-1, 31,0);
        tracep->declBit(c+98,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_we_mux", false,-1);
        tracep->declBus(c+443,"design_2_top forte_soc_top_i ibex_core_i id_stage_i regfile_waddr_mux", false,-1, 4,0);
        tracep->declBit(c+319,"design_2_top forte_soc_top_i ibex_core_i id_stage_i id_wb_fsm_cs", false,-1);
        tracep->declBit(c+111,"design_2_top forte_soc_top_i ibex_core_i id_stage_i id_wb_fsm_ns", false,-1);
        tracep->declBit(c+522,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i RV32E", false,-1);
        tracep->declBus(c+533,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i rst_n", false,-1);
        tracep->declBit(c+526,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i test_en_i", false,-1);
        tracep->declBus(c+441,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i raddr_a_i", false,-1, 4,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i rdata_a_o", false,-1, 31,0);
        tracep->declBus(c+442,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i raddr_b_i", false,-1, 4,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i rdata_b_o", false,-1, 31,0);
        tracep->declBus(c+443,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i waddr_a_i", false,-1, 4,0);
        tracep->declBus(c+110,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i wdata_a_i", false,-1, 31,0);
        tracep->declBit(c+98,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i we_a_i", false,-1);
        tracep->declBus(c+511,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+533,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i NUM_WORDS", false,-1, 31,0);
        tracep->declArray(c+320,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i rf_reg", false,-1, 1023,0);
        tracep->declArray(c+352,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i rf_reg_tmp", false,-1, 991,0);
        tracep->declBus(c+112,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i we_a_dec", false,-1, 31,1);
        tracep->declBus(c+534,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i we_a_decoder unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+383,"design_2_top forte_soc_top_i ibex_core_i id_stage_i registers_i unnamedblk2 r", false,-1, 31,0);
        tracep->declBit(c+523,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i RV32M", false,-1);
        tracep->declBit(c+80,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i deassert_we_i", false,-1);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_misaligned_i", false,-1);
        tracep->declBit(c+315,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i branch_mux_i", false,-1);
        tracep->declBit(c+316,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i jump_mux_i", false,-1);
        tracep->declBit(c+81,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i illegal_insn_o", false,-1);
        tracep->declBit(c+82,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i ebrk_insn_o", false,-1);
        tracep->declBit(c+83,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i mret_insn_o", false,-1);
        tracep->declBit(c+84,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i dret_insn_o", false,-1);
        tracep->declBit(c+85,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i ecall_insn_o", false,-1);
        tracep->declBit(c+86,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i pipe_flush_o", false,-1);
        tracep->declBus(c+432,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+290,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i illegal_c_insn_i", false,-1);
        tracep->declBus(c+15,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i alu_operator_o", false,-1, 4,0);
        tracep->declBus(c+103,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i alu_op_a_mux_sel_o", false,-1, 1,0);
        tracep->declBit(c+104,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i alu_op_b_mux_sel_o", false,-1);
        tracep->declBit(c+105,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i imm_a_mux_sel_o", false,-1);
        tracep->declBus(c+106,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i imm_b_mux_sel_o", false,-1, 2,0);
        tracep->declBit(c+18,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i mult_int_en_o", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i div_int_en_o", false,-1);
        tracep->declBus(c+20,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i multdiv_operator_o", false,-1, 1,0);
        tracep->declBus(c+21,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i multdiv_signed_mode_o", false,-1, 1,0);
        tracep->declBit(c+102,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i regfile_we_o", false,-1);
        tracep->declBit(c+22,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i csr_access_o", false,-1);
        tracep->declBus(c+23,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i csr_op_o", false,-1, 1,0);
        tracep->declBit(c+108,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i csr_status_o", false,-1);
        tracep->declBit(c+28,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_req_o", false,-1);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_we_o", false,-1);
        tracep->declBus(c+26,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_type_o", false,-1, 1,0);
        tracep->declBit(c+27,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_sign_extension_o", false,-1);
        tracep->declBus(c+531,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_reg_offset_o", false,-1, 1,0);
        tracep->declBit(c+90,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i jump_in_id_o", false,-1);
        tracep->declBit(c+87,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i branch_in_id_o", false,-1);
        tracep->declBus(c+47,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i eFPGA_operator_o", false,-1, 1,0);
        tracep->declBit(c+46,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i eFPGA_int_en_o", false,-1);
        tracep->declBus(c+48,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i eFPGA_delay_o", false,-1, 3,0);
        tracep->declBit(c+113,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i regfile_we", false,-1);
        tracep->declBit(c+114,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i data_req", false,-1);
        tracep->declBit(c+115,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i mult_int_en", false,-1);
        tracep->declBit(c+116,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i div_int_en", false,-1);
        tracep->declBit(c+117,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i branch_in_id", false,-1);
        tracep->declBit(c+118,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i jump_in_id", false,-1);
        tracep->declBit(c+119,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i eFPGA_int_en", false,-1);
        tracep->declBus(c+120,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i csr_op", false,-1, 1,0);
        tracep->declBit(c+121,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i csr_illegal", false,-1);
        tracep->declBus(c+122,"design_2_top forte_soc_top_i ibex_core_i id_stage_i decoder_i opcode", false,-1, 6,0);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i rst_n", false,-1);
        tracep->declBit(c+465,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i fetch_enable_i", false,-1);
        tracep->declBit(c+292,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i ctrl_busy_o", false,-1);
        tracep->declBit(c+293,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i first_fetch_o", false,-1);
        tracep->declBit(c+12,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i is_decoding_o", false,-1);
        tracep->declBit(c+80,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i deassert_we_o", false,-1);
        tracep->declBit(c+81,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i illegal_insn_i", false,-1);
        tracep->declBit(c+85,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i ecall_insn_i", false,-1);
        tracep->declBit(c+83,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i mret_insn_i", false,-1);
        tracep->declBit(c+84,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i dret_insn_i", false,-1);
        tracep->declBit(c+86,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i pipe_flush_i", false,-1);
        tracep->declBit(c+82,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i ebrk_insn_i", false,-1);
        tracep->declBit(c+108,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_status_i", false,-1);
        tracep->declBit(c+288,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i instr_valid_i", false,-1);
        tracep->declBit(c+294,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i instr_req_o", false,-1);
        tracep->declBit(c+8,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i pc_set_o", false,-1);
        tracep->declBus(c+9,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i pc_mux_o", false,-1, 2,0);
        tracep->declBus(c+10,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i exc_pc_mux_o", false,-1, 2,0);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i data_misaligned_i", false,-1);
        tracep->declBit(c+87,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i branch_in_id_i", false,-1);
        tracep->declBit(c+314,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i branch_set_i", false,-1);
        tracep->declBit(c+89,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i jump_set_i", false,-1);
        tracep->declBit(c+91,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i instr_multicyle_i", false,-1);
        tracep->declBit(c+457,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i irq_i", false,-1);
        tracep->declBit(c+317,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i irq_req_ctrl_i", false,-1);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i irq_id_ctrl_i", false,-1, 4,0);
        tracep->declBit(c+295,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i m_IE_i", false,-1);
        tracep->declBit(c+287,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i irq_ack_o", false,-1);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i irq_id_o", false,-1, 4,0);
        tracep->declBus(c+11,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i exc_cause_o", false,-1, 5,0);
        tracep->declBit(c+318,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i exc_ack_o", false,-1);
        tracep->declBit(c+101,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i exc_kill_o", false,-1);
        tracep->declBit(c+459,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_req_i", false,-1);
        tracep->declBus(c+40,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_cause_o", false,-1, 2,0);
        tracep->declBit(c+41,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_csr_save_o", false,-1);
        tracep->declBit(c+299,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_single_step_i", false,-1);
        tracep->declBit(c+300,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_ebreakm_i", false,-1);
        tracep->declBit(c+298,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_save_if_o", false,-1);
        tracep->declBit(c+36,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_save_id_o", false,-1);
        tracep->declBus(c+37,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_cause_o", false,-1, 5,0);
        tracep->declBit(c+38,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_restore_mret_id_o", false,-1);
        tracep->declBit(c+39,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_restore_dret_id_o", false,-1);
        tracep->declBit(c+35,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i csr_save_cause_o", false,-1);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i operand_a_fw_mux_sel_o", false,-1);
        tracep->declBit(c+29,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i halt_if_o", false,-1);
        tracep->declBit(c+97,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i halt_id_o", false,-1);
        tracep->declBit(c+30,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i id_ready_i", false,-1);
        tracep->declBit(c+43,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i perf_jump_o", false,-1);
        tracep->declBit(c+45,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i perf_tbranch_o", false,-1);
        tracep->declBus(c+384,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i ctrl_fsm_cs", false,-1, 3,0);
        tracep->declBus(c+123,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i ctrl_fsm_ns", false,-1, 3,0);
        tracep->declBit(c+124,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i irq_enable_int", false,-1);
        tracep->declBit(c+385,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_mode_q", false,-1);
        tracep->declBit(c+125,"design_2_top forte_soc_top_i ibex_core_i id_stage_i controller_i debug_mode_n", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i rst_n", false,-1);
        tracep->declBit(c+317,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_req_ctrl_o", false,-1);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_id_ctrl_o", false,-1, 4,0);
        tracep->declBit(c+318,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i ctrl_ack_i", false,-1);
        tracep->declBit(c+101,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i ctrl_kill_i", false,-1);
        tracep->declBit(c+457,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_i", false,-1);
        tracep->declBus(c+456,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_id_i", false,-1, 4,0);
        tracep->declBit(c+295,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i m_IE_i", false,-1);
        tracep->declBus(c+126,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i exc_ctrl_ns", false,-1, 1,0);
        tracep->declBus(c+386,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i exc_ctrl_cs", false,-1, 1,0);
        tracep->declBit(c+295,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_enable_ext", false,-1);
        tracep->declBus(c+127,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_id_d", false,-1, 4,0);
        tracep->declBus(c+286,"design_2_top forte_soc_top_i ibex_core_i id_stage_i int_controller_i irq_id_q", false,-1, 4,0);
        tracep->declBit(c+523,"design_2_top forte_soc_top_i ibex_core_i ex_block_i RV32M", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i ex_block_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i ex_block_i rst_n", false,-1);
        tracep->declBus(c+15,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_operator_i", false,-1, 4,0);
        tracep->declBus(c+20,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_operator_i", false,-1, 1,0);
        tracep->declBit(c+18,"design_2_top forte_soc_top_i ibex_core_i ex_block_i mult_en_i", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i ex_block_i div_en_i", false,-1);
        tracep->declBit(c+46,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_en_i", false,-1);
        tracep->declBus(c+47,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_operator_i", false,-1, 1,0);
        tracep->declBus(c+468,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_result_a_i", false,-1, 31,0);
        tracep->declBus(c+469,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_result_b_i", false,-1, 31,0);
        tracep->declBus(c+470,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_result_c_i", false,-1, 31,0);
        tracep->declBus(c+48,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_delay_i", false,-1, 3,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_operand_a_i", false,-1, 31,0);
        tracep->declBus(c+17,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_operand_b_i", false,-1, 31,0);
        tracep->declBus(c+21,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_signed_mode_i", false,-1, 1,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_operand_a_i", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_operand_b_i", false,-1, 31,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_adder_result_ex_o", false,-1, 31,0);
        tracep->declBus(c+475,"design_2_top forte_soc_top_i ibex_core_i ex_block_i regfile_wdata_ex_o", false,-1, 31,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i ex_block_i jump_target_o", false,-1, 31,0);
        tracep->declBit(c+14,"design_2_top forte_soc_top_i ibex_core_i ex_block_i branch_decision_o", false,-1);
        tracep->declBit(c+28,"design_2_top forte_soc_top_i ibex_core_i ex_block_i lsu_en_i", false,-1);
        tracep->declBit(c+34,"design_2_top forte_soc_top_i ibex_core_i ex_block_i lsu_ready_ex_i", false,-1);
        tracep->declBit(c+31,"design_2_top forte_soc_top_i ibex_core_i ex_block_i ex_ready_o", false,-1);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i ibex_core_i ex_block_i MULT_TYPE", false,-1, 31,0);
        tracep->declBus(c+128,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_result", false,-1, 31,0);
        tracep->declBus(c+214,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_result", false,-1, 31,0);
        tracep->declBus(c+416,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_result", false,-1, 31,0);
        tracep->declQuad(c+444,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_alu_operand_b", false,-1, 32,0);
        tracep->declQuad(c+387,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_alu_operand_a", false,-1, 32,0);
        tracep->declQuad(c+129,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_adder_result_ext", false,-1, 33,0);
        tracep->declBit(c+14,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_cmp_result", false,-1);
        tracep->declBit(c+131,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_is_equal_result", false,-1);
        tracep->declBit(c+215,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_ready", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_en_sel", false,-1);
        tracep->declBit(c+107,"design_2_top forte_soc_top_i ibex_core_i ex_block_i multdiv_en", false,-1);
        tracep->declBit(c+417,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_ready", false,-1);
        tracep->declBus(c+15,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i operator_i", false,-1, 4,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i operand_a_i", false,-1, 31,0);
        tracep->declBus(c+17,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i operand_b_i", false,-1, 31,0);
        tracep->declQuad(c+387,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i multdiv_operand_a_i", false,-1, 32,0);
        tracep->declQuad(c+444,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i multdiv_operand_b_i", false,-1, 32,0);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i multdiv_en_i", false,-1);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i adder_result_o", false,-1, 31,0);
        tracep->declQuad(c+129,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i adder_result_ext_o", false,-1, 33,0);
        tracep->declBus(c+128,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i result_o", false,-1, 31,0);
        tracep->declBit(c+14,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i comparison_result_o", false,-1);
        tracep->declBit(c+131,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i is_equal_result_o", false,-1);
        tracep->declBus(c+132,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i operand_a_rev", false,-1, 31,0);
        tracep->declQuad(c+133,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i operand_b_neg", false,-1, 32,0);
        tracep->declBit(c+135,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i adder_op_b_negate", false,-1);
        tracep->declQuad(c+216,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i adder_in_a", false,-1, 32,0);
        tracep->declQuad(c+220,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i adder_in_b", false,-1, 32,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i adder_result", false,-1, 31,0);
        tracep->declBit(c+136,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_left", false,-1);
        tracep->declBit(c+137,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_arithmetic", false,-1);
        tracep->declBus(c+138,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_amt", false,-1, 4,0);
        tracep->declBus(c+139,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_op_a", false,-1, 31,0);
        tracep->declBus(c+140,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_result", false,-1, 31,0);
        tracep->declBus(c+141,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_right_result", false,-1, 31,0);
        tracep->declBus(c+142,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_left_result", false,-1, 31,0);
        tracep->declQuad(c+143,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_op_a_32", false,-1, 32,0);
        tracep->declQuad(c+145,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i shift_right_result_signed", false,-1, 32,0);
        tracep->declBit(c+131,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i is_equal", false,-1);
        tracep->declBit(c+147,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i is_greater_equal", false,-1);
        tracep->declBit(c+148,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i cmp_signed", false,-1);
        tracep->declBit(c+14,"design_2_top forte_soc_top_i ibex_core_i ex_block_i alu_i cmp_result", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i rst_n", false,-1);
        tracep->declBit(c+46,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i en_i", false,-1);
        tracep->declBus(c+47,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i operator_i", false,-1, 1,0);
        tracep->declBit(c+417,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i ready_o", false,-1);
        tracep->declBus(c+416,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i endresult_o", false,-1, 31,0);
        tracep->declBus(c+468,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i result_a_i", false,-1, 31,0);
        tracep->declBus(c+469,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i result_b_i", false,-1, 31,0);
        tracep->declBus(c+470,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i result_c_i", false,-1, 31,0);
        tracep->declBus(c+48,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i delay_i", false,-1, 3,0);
        tracep->declBus(c+418,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i eFPGA_fsm_r", false,-1, 1,0);
        tracep->declBus(c+419,"design_2_top forte_soc_top_i ibex_core_i ex_block_i eFPGA_i count", false,-1, 3,0);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i rst_n", false,-1);
        tracep->declBit(c+18,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mult_en_i", false,-1);
        tracep->declBit(c+19,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i div_en_i", false,-1);
        tracep->declBus(c+20,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i operator_i", false,-1, 1,0);
        tracep->declBus(c+21,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i signed_mode_i", false,-1, 1,0);
        tracep->declBus(c+430,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_a_i", false,-1, 31,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_b_i", false,-1, 31,0);
        tracep->declQuad(c+129,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i alu_adder_ext_i", false,-1, 33,0);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i alu_adder_i", false,-1, 31,0);
        tracep->declBit(c+131,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i equal_to_zero", false,-1);
        tracep->declQuad(c+387,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i alu_operand_a_o", false,-1, 32,0);
        tracep->declQuad(c+444,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i alu_operand_b_o", false,-1, 32,0);
        tracep->declBus(c+214,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i multdiv_result_o", false,-1, 31,0);
        tracep->declBit(c+215,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i ready_o", false,-1);
        tracep->declBus(c+389,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i div_counter_q", false,-1, 4,0);
        tracep->declBus(c+149,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i div_counter_n", false,-1, 4,0);
        tracep->declBus(c+390,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mult_state_q", false,-1, 1,0);
        tracep->declBus(c+150,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mult_state_n", false,-1, 1,0);
        tracep->declBus(c+391,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i divcurr_state_q", false,-1, 2,0);
        tracep->declBus(c+151,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i divcurr_state_n", false,-1, 2,0);
        tracep->declQuad(c+222,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mac_res_ext", false,-1, 34,0);
        tracep->declQuad(c+392,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mac_res_q", false,-1, 33,0);
        tracep->declQuad(c+152,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mac_res_n", false,-1, 33,0);
        tracep->declQuad(c+224,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mac_res", false,-1, 33,0);
        tracep->declQuad(c+154,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_reminder_n", false,-1, 33,0);
        tracep->declBus(c+446,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mult_op_a", false,-1, 15,0);
        tracep->declBus(c+447,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mult_op_b", false,-1, 15,0);
        tracep->declQuad(c+156,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i accum", false,-1, 33,0);
        tracep->declBit(c+158,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i sign_a", false,-1);
        tracep->declBit(c+159,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i sign_b", false,-1);
        tracep->declBit(c+160,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i div_sign_a", false,-1);
        tracep->declBit(c+161,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i div_sign_b", false,-1);
        tracep->declBit(c+162,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i signed_mult", false,-1);
        tracep->declBit(c+163,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i is_greater_equal", false,-1);
        tracep->declBit(c+164,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i div_change_sign", false,-1);
        tracep->declBit(c+160,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i rem_change_sign", false,-1);
        tracep->declBus(c+394,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i one_shift", false,-1, 31,0);
        tracep->declBus(c+395,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_denominator_q", false,-1, 31,0);
        tracep->declBus(c+396,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_numerator_q", false,-1, 31,0);
        tracep->declBus(c+397,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_quotient_q", false,-1, 31,0);
        tracep->declBus(c+165,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_denominator_n", false,-1, 31,0);
        tracep->declBus(c+166,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_numerator_n", false,-1, 31,0);
        tracep->declBus(c+167,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i op_quotient_n", false,-1, 31,0);
        tracep->declBus(c+168,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i next_reminder", false,-1, 31,0);
        tracep->declQuad(c+169,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i next_quotient", false,-1, 32,0);
        tracep->declQuad(c+171,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i res_adder_h", false,-1, 32,0);
        tracep->declBit(c+173,"design_2_top forte_soc_top_i ibex_core_i ex_block_i gen_multdiv_fast multdiv_i mult_is_ready", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i rst_n", false,-1);
        tracep->declBit(c+2,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_req_o", false,-1);
        tracep->declBit(c+6,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_gnt_i", false,-1);
        tracep->declBit(c+421,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_rvalid_i", false,-1);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_err_i", false,-1);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_addr_o", false,-1, 31,0);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_we_o", false,-1);
        tracep->declBus(c+209,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_be_o", false,-1, 3,0);
        tracep->declBus(c+218,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_wdata_o", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_we_ex_i", false,-1);
        tracep->declBus(c+26,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_type_ex_i", false,-1, 1,0);
        tracep->declBus(c+431,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_wdata_ex_i", false,-1, 31,0);
        tracep->declBus(c+531,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_reg_offset_ex_i", false,-1, 1,0);
        tracep->declBit(c+27,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_sign_ext_ex_i", false,-1);
        tracep->declBus(c+476,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_rdata_ex_o", false,-1, 31,0);
        tracep->declBit(c+28,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_req_ex_i", false,-1);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i adder_result_ex_i", false,-1, 31,0);
        tracep->declBit(c+13,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_misaligned_o", false,-1);
        tracep->declBus(c+291,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i misaligned_addr_o", false,-1, 31,0);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i load_err_o", false,-1);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i store_err_o", false,-1);
        tracep->declBit(c+174,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i lsu_update_addr_o", false,-1);
        tracep->declBit(c+34,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_valid_o", false,-1);
        tracep->declBit(c+211,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i busy_o", false,-1);
        tracep->declBus(c+1,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_addr_int", false,-1, 31,0);
        tracep->declBus(c+398,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_type_q", false,-1, 1,0);
        tracep->declBus(c+399,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i rdata_offset_q", false,-1, 1,0);
        tracep->declBit(c+400,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_sign_ext_q", false,-1);
        tracep->declBit(c+401,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_we_q", false,-1);
        tracep->declBus(c+175,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i wdata_offset", false,-1, 1,0);
        tracep->declBus(c+209,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_be", false,-1, 3,0);
        tracep->declBus(c+218,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_wdata", false,-1, 31,0);
        tracep->declBit(c+402,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i misaligned_st", false,-1);
        tracep->declBit(c+176,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_misaligned", false,-1);
        tracep->declBit(c+402,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_misaligned_q", false,-1);
        tracep->declBit(c+177,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i increase_address", false,-1);
        tracep->declBus(c+403,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i CS", false,-1, 2,0);
        tracep->declBus(c+178,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i NS", false,-1, 2,0);
        tracep->declBus(c+404,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+429,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i data_rdata_ext", false,-1, 31,0);
        tracep->declBus(c+480,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i rdata_w_ext", false,-1, 31,0);
        tracep->declBus(c+481,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i rdata_h_ext", false,-1, 31,0);
        tracep->declBus(c+482,"design_2_top forte_soc_top_i ibex_core_i load_store_unit_i rdata_b_ext", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i N_EXT_CNT", false,-1, 31,0);
        tracep->declBit(c+522,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i RV32E", false,-1);
        tracep->declBit(c+523,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i RV32M", false,-1);
        tracep->declBit(c+49,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i clk", false,-1);
        tracep->declBit(c+473,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i rst_n", false,-1);
        tracep->declBus(c+527,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i core_id_i", false,-1, 3,0);
        tracep->declBus(c+528,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i cluster_id_i", false,-1, 5,0);
        tracep->declBus(c+529,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i boot_addr_i", false,-1, 31,0);
        tracep->declBit(c+22,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_access_i", false,-1);
        tracep->declBus(c+24,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_addr_i", false,-1, 11,0);
        tracep->declBus(c+16,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_wdata_i", false,-1, 31,0);
        tracep->declBus(c+23,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_op_i", false,-1, 1,0);
        tracep->declBus(c+25,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_rdata_o", false,-1, 31,0);
        tracep->declBit(c+295,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i m_irq_enable_o", false,-1);
        tracep->declBus(c+296,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mepc_o", false,-1, 31,0);
        tracep->declBus(c+40,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i debug_cause_i", false,-1, 2,0);
        tracep->declBit(c+41,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i debug_csr_save_i", false,-1);
        tracep->declBus(c+297,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i depc_o", false,-1, 31,0);
        tracep->declBit(c+299,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i debug_single_step_o", false,-1);
        tracep->declBit(c+300,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i debug_ebreakm_o", false,-1);
        tracep->declBus(c+433,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i pc_if_i", false,-1, 31,0);
        tracep->declBus(c+434,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i pc_id_i", false,-1, 31,0);
        tracep->declBit(c+298,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_save_if_i", false,-1);
        tracep->declBit(c+36,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_save_id_i", false,-1);
        tracep->declBit(c+38,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_restore_mret_i", false,-1);
        tracep->declBit(c+39,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_restore_dret_i", false,-1);
        tracep->declBus(c+37,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_cause_i", false,-1, 5,0);
        tracep->declBit(c+35,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_save_cause_i", false,-1);
        tracep->declBit(c+32,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i if_valid_i", false,-1);
        tracep->declBit(c+33,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i id_valid_i", false,-1);
        tracep->declBit(c+289,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i is_compressed_i", false,-1);
        tracep->declBit(c+12,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i is_decoding_i", false,-1);
        tracep->declBit(c+42,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i imiss_i", false,-1);
        tracep->declBit(c+8,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i pc_set_i", false,-1);
        tracep->declBit(c+43,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i jump_i", false,-1);
        tracep->declBit(c+44,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i branch_i", false,-1);
        tracep->declBit(c+45,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i branch_taken_i", false,-1);
        tracep->declBit(c+179,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mem_load_i", false,-1);
        tracep->declBit(c+180,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mem_store_i", false,-1);
        tracep->declBus(c+530,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i ext_counters_i", false,-1, 0,0);
        tracep->declBus(c+535,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i MXL", false,-1, 1,0);
        tracep->declBus(c+536,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i MISA_VALUE", false,-1, 31,0);
        tracep->declBus(c+519,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i N_PERF_COUNTERS", false,-1, 31,0);
        tracep->declBus(c+507,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i N_PERF_REGS", false,-1, 31,0);
        tracep->declBus(c+181,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCCR_in", false,-1, 11,0);
        tracep->declBus(c+182,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCCR_inc", false,-1, 11,0);
        tracep->declBus(c+405,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCCR_inc_q", false,-1, 11,0);
        tracep->declBus(c+406,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCCR_q", false,-1, 31,0);
        tracep->declBus(c+183,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCCR_n", false,-1, 31,0);
        tracep->declBus(c+184,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCMR_n", false,-1, 1,0);
        tracep->declBus(c+407,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCMR_q", false,-1, 1,0);
        tracep->declBus(c+185,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCER_n", false,-1, 11,0);
        tracep->declBus(c+408,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i PCER_q", false,-1, 11,0);
        tracep->declBus(c+186,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i perf_rdata", false,-1, 31,0);
        tracep->declBus(c+187,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i pccr_index", false,-1, 4,0);
        tracep->declBit(c+188,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i pccr_all_sel", false,-1);
        tracep->declBit(c+189,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i is_pccr", false,-1);
        tracep->declBit(c+190,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i is_pcer", false,-1);
        tracep->declBit(c+191,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i is_pcmr", false,-1);
        tracep->declBus(c+192,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_wdata_int", false,-1, 31,0);
        tracep->declBus(c+193,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_rdata_int", false,-1, 31,0);
        tracep->declBit(c+194,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_we_int", false,-1);
        tracep->declBus(c+296,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mepc_q", false,-1, 31,0);
        tracep->declBus(c+195,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mepc_n", false,-1, 31,0);
        tracep->declBus(c+409,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i dcsr_q", false,-1, 31,0);
        tracep->declBus(c+196,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i dcsr_n", false,-1, 31,0);
        tracep->declBus(c+297,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i depc_q", false,-1, 31,0);
        tracep->declBus(c+197,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i depc_n", false,-1, 31,0);
        tracep->declBus(c+410,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i dscratch0_q", false,-1, 31,0);
        tracep->declBus(c+198,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i dscratch0_n", false,-1, 31,0);
        tracep->declBus(c+411,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i dscratch1_q", false,-1, 31,0);
        tracep->declBus(c+199,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i dscratch1_n", false,-1, 31,0);
        tracep->declBus(c+412,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mcause_q", false,-1, 5,0);
        tracep->declBus(c+200,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mcause_n", false,-1, 5,0);
        tracep->declBus(c+413,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mstatus_q", false,-1, 3,0);
        tracep->declBus(c+201,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i mstatus_n", false,-1, 3,0);
        tracep->declBus(c+202,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i exception_pc", false,-1, 31,0);
        tracep->declBus(c+24,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i csr_addr", false,-1, 11,0);
        tracep->declBus(c+414,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i unnamedblk2 r", false,-1, 31,0);
        tracep->declBus(c+415,"design_2_top forte_soc_top_i ibex_core_i cs_registers_i unnamedblk1 r", false,-1, 31,0);
        tracep->declBus(c+519,"design_2_top forte_soc_top_i ram_0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i ram_0 clk", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ram_0 instr_req_i", false,-1);
        tracep->declBus(c+203,"design_2_top forte_soc_top_i ram_0 instr_addr_i", false,-1, 11,0);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ram_0 instr_rdata_o", false,-1, 31,0);
        tracep->declBit(c+254,"design_2_top forte_soc_top_i ram_0 instr_rvalid_o", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ram_0 instr_gnt_o", false,-1);
        tracep->declBit(c+2,"design_2_top forte_soc_top_i ram_0 ibex_data_req_i", false,-1);
        tracep->declBus(c+204,"design_2_top forte_soc_top_i ram_0 ibex_data_addr_i", false,-1, 11,0);
        tracep->declBit(c+3,"design_2_top forte_soc_top_i ram_0 ibex_data_we_i", false,-1);
        tracep->declBus(c+209,"design_2_top forte_soc_top_i ram_0 ibex_data_be_i", false,-1, 3,0);
        tracep->declBus(c+218,"design_2_top forte_soc_top_i ram_0 ibex_data_wdata_i", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ram_0 ibex_data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+421,"design_2_top forte_soc_top_i ram_0 ibex_data_rvalid_o", false,-1);
        tracep->declBit(c+6,"design_2_top forte_soc_top_i ram_0 ibex_data_gnt_o", false,-1);
        tracep->declBit(c+422,"design_2_top forte_soc_top_i ram_0 uart_data_req_i", false,-1);
        tracep->declBus(c+277,"design_2_top forte_soc_top_i ram_0 uart_data_addr_i", false,-1, 11,0);
        tracep->declBit(c+256,"design_2_top forte_soc_top_i ram_0 uart_data_we_i", false,-1);
        tracep->declBus(c+520,"design_2_top forte_soc_top_i ram_0 uart_data_be_i", false,-1, 3,0);
        tracep->declBus(c+278,"design_2_top forte_soc_top_i ram_0 uart_data_wdata_i", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ram_0 uart_data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+255,"design_2_top forte_soc_top_i ram_0 uart_data_rvalid_o", false,-1);
        tracep->declBit(c+422,"design_2_top forte_soc_top_i ram_0 uart_data_gnt_o", false,-1);
        tracep->declBit(c+205,"design_2_top forte_soc_top_i ram_0 data_req_i", false,-1);
        tracep->declBus(c+206,"design_2_top forte_soc_top_i ram_0 data_addr_i", false,-1, 11,0);
        tracep->declBus(c+207,"design_2_top forte_soc_top_i ram_0 data_wdata_i", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ram_0 data_rdata_o", false,-1, 31,0);
        tracep->declBit(c+483,"design_2_top forte_soc_top_i ram_0 data_we_i", false,-1);
        tracep->declBus(c+484,"design_2_top forte_soc_top_i ram_0 data_be_i", false,-1, 3,0);
        tracep->declBus(c+510,"design_2_top forte_soc_top_i ram_0 dp_ram_i NUM_COL", false,-1, 31,0);
        tracep->declBus(c+537,"design_2_top forte_soc_top_i ram_0 dp_ram_i COL_WIDTH", false,-1, 31,0);
        tracep->declBus(c+519,"design_2_top forte_soc_top_i ram_0 dp_ram_i ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+533,"design_2_top forte_soc_top_i ram_0 dp_ram_i DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+453,"design_2_top forte_soc_top_i ram_0 dp_ram_i clk", false,-1);
        tracep->declBit(c+5,"design_2_top forte_soc_top_i ram_0 dp_ram_i en_a_i", false,-1);
        tracep->declBus(c+520,"design_2_top forte_soc_top_i ram_0 dp_ram_i o_be_a_i", false,-1, 3,0);
        tracep->declBus(c+203,"design_2_top forte_soc_top_i ram_0 dp_ram_i addr_a_i", false,-1, 11,0);
        tracep->declBus(c+529,"design_2_top forte_soc_top_i ram_0 dp_ram_i wdata_a_i", false,-1, 31,0);
        tracep->declBus(c+253,"design_2_top forte_soc_top_i ram_0 dp_ram_i rdata_a_o", false,-1, 31,0);
        tracep->declBit(c+530,"design_2_top forte_soc_top_i ram_0 dp_ram_i we_a_i", false,-1);
        tracep->declBit(c+205,"design_2_top forte_soc_top_i ram_0 dp_ram_i en_b_i", false,-1);
        tracep->declBus(c+484,"design_2_top forte_soc_top_i ram_0 dp_ram_i o_be_b_i", false,-1, 3,0);
        tracep->declBus(c+206,"design_2_top forte_soc_top_i ram_0 dp_ram_i addr_b_i", false,-1, 11,0);
        tracep->declBus(c+207,"design_2_top forte_soc_top_i ram_0 dp_ram_i wdata_b_i", false,-1, 31,0);
        tracep->declBus(c+420,"design_2_top forte_soc_top_i ram_0 dp_ram_i rdata_b_o", false,-1, 31,0);
        tracep->declBit(c+483,"design_2_top forte_soc_top_i ram_0 dp_ram_i we_b_i", false,-1);
        tracep->declBus(c+208,"design_2_top forte_soc_top_i ram_0 dp_ram_i be_b_i", false,-1, 3,0);
        tracep->declBus(c+527,"design_2_top forte_soc_top_i ram_0 dp_ram_i be_a_i", false,-1, 3,0);
    }
}

void Vdesign_2_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vdesign_2_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vdesign_2_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vdesign_2_top__Syms* __restrict vlSymsp = static_cast<Vdesign_2_top__Syms*>(userp);
    Vdesign_2_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,((IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U))),32);
        tracep->fullBit(oldp+2,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o));
        tracep->fullBit(oldp+3,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id));
        tracep->fullIData(oldp+4,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o),32);
        tracep->fullBit(oldp+5,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o));
        tracep->fullBit(oldp+6,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o));
        tracep->fullBit(oldp+7,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready) 
                                 | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id))));
        tracep->fullBit(oldp+8,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_set));
        tracep->fullCData(oldp+9,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_mux_id),3);
        tracep->fullCData(oldp+10,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_pc_mux_id),3);
        tracep->fullCData(oldp+11,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__exc_cause),6);
        tracep->fullBit(oldp+12,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_decoding));
        tracep->fullBit(oldp+13,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_misaligned));
        tracep->fullBit(oldp+14,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        tracep->fullCData(oldp+15,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator),5);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b),32);
        tracep->fullBit(oldp+18,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mult_int_en));
        tracep->fullBit(oldp+19,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en));
        tracep->fullCData(oldp+20,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_operator),2);
        tracep->fullCData(oldp+21,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        tracep->fullBit(oldp+22,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_access));
        tracep->fullCData(oldp+23,(vlSymsp->TOP__design_2_top__forte_soc_top_i.ibex_core_i__DOT__id_stage_i__DOT____Vcellout__decoder_i__csr_op_o),2);
        tracep->fullSData(oldp+24,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_addr),12);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_rdata),32);
        tracep->fullCData(oldp+26,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id),2);
        tracep->fullBit(oldp+27,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_sign_ext_id));
        tracep->fullBit(oldp+28,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_req_id));
        tracep->fullBit(oldp+29,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__halt_if));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready));
        tracep->fullBit(oldp+31,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_ready));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_valid));
        tracep->fullBit(oldp+33,(((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id)) 
                                  & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready))));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__data_valid_lsu));
        tracep->fullBit(oldp+35,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_cause));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_id));
        tracep->fullCData(oldp+37,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_cause),6);
        tracep->fullBit(oldp+38,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_mret_id));
        tracep->fullBit(oldp+39,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_restore_dret_id));
        tracep->fullCData(oldp+40,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_cause),3);
        tracep->fullBit(oldp+41,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__debug_csr_save));
        tracep->fullBit(oldp+42,((1U & ((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                                        | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req)))));
        tracep->fullBit(oldp+43,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_jump));
        tracep->fullBit(oldp+44,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_branch));
        tracep->fullBit(oldp+45,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__perf_tbranch));
        tracep->fullBit(oldp+46,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en));
        tracep->fullCData(oldp+47,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_operator),2);
        tracep->fullCData(oldp+48,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_delay),4);
        tracep->fullBit(oldp+49,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__clk));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_clock_gate_i__DOT__clk_en));
        tracep->fullBit(oldp+51,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_d));
        tracep->fullBit(oldp+52,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__valid));
        tracep->fullBit(oldp+53,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__valid) 
                                  & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_ready))));
        tracep->fullBit(oldp+54,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__branch_req));
        tracep->fullIData(oldp+55,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n),32);
        tracep->fullBit(oldp+56,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_valid));
        tracep->fullBit(oldp+57,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_ready));
        tracep->fullIData(oldp+58,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__exc_pc),32);
        tracep->fullIData(oldp+59,((0xfffffffeU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        tracep->fullCData(oldp+60,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__NS),2);
        tracep->fullBit(oldp+61,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__addr_valid));
        tracep->fullBit(oldp+62,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid));
        tracep->fullWData(oldp+63,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_n),96);
        tracep->fullWData(oldp+66,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int),96);
        tracep->fullWData(oldp+69,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_n),96);
        tracep->fullWData(oldp+72,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_int),96);
        tracep->fullCData(oldp+75,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_n),3);
        tracep->fullCData(oldp+76,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_int),3);
        tracep->fullIData(oldp+77,((0x3fffffffU & ((IData)(1U) 
                                                   + 
                                                   ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[1U] 
                                                     << 0x1eU) 
                                                    | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_int[0U] 
                                                       >> 2U))))),30);
        tracep->fullBit(oldp+78,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        tracep->fullIData(oldp+79,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unnamedblk1__DOT__j),32);
        tracep->fullBit(oldp+80,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__deassert_we));
        tracep->fullBit(oldp+81,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__illegal_insn_dec));
        tracep->fullBit(oldp+82,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ebrk_insn));
        tracep->fullBit(oldp+83,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__mret_insn_dec));
        tracep->fullBit(oldp+84,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__dret_insn_dec));
        tracep->fullBit(oldp+85,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__ecall_insn_dec));
        tracep->fullBit(oldp+86,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__pipe_flush_dec));
        tracep->fullBit(oldp+87,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_in_id));
        tracep->fullBit(oldp+88,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_n));
        tracep->fullBit(oldp+89,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_set));
        tracep->fullBit(oldp+90,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_in_id));
        tracep->fullBit(oldp+91,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__instr_multicyle));
        tracep->fullBit(oldp+92,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__load_stall));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_stall));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_stall));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_stall));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_stall));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__halt_id));
        tracep->fullBit(oldp+98,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we));
        tracep->fullBit(oldp+99,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__select_data_rf));
        tracep->fullIData(oldp+100,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b),32);
        tracep->fullBit(oldp+101,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_kill));
        tracep->fullBit(oldp+102,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_we_id));
        tracep->fullCData(oldp+103,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        tracep->fullBit(oldp+104,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel));
        tracep->fullBit(oldp+105,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
        tracep->fullCData(oldp+106,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en));
        tracep->fullBit(oldp+108,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__csr_status));
        tracep->fullIData(oldp+109,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__operand_a_fw_id),32);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_wdata_mux),32);
        tracep->fullBit(oldp+111,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_ns));
        tracep->fullIData(oldp+112,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__we_a_dec),31);
        tracep->fullBit(oldp+113,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_we));
        tracep->fullBit(oldp+114,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
        tracep->fullBit(oldp+115,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
        tracep->fullBit(oldp+116,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__div_int_en));
        tracep->fullBit(oldp+117,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_id));
        tracep->fullBit(oldp+118,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_id));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__eFPGA_int_en));
        tracep->fullCData(oldp+120,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        tracep->fullBit(oldp+121,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        tracep->fullCData(oldp+122,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        tracep->fullCData(oldp+123,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        tracep->fullBit(oldp+124,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_enable_int));
        tracep->fullBit(oldp+125,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
        tracep->fullCData(oldp+126,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_ns),2);
        tracep->fullCData(oldp+127,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_d),5);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result),32);
        tracep->fullQData(oldp+129,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        tracep->fullBit(oldp+131,((0U == (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)))));
        tracep->fullIData(oldp+132,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        tracep->fullQData(oldp+133,((0x1ffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                         << 1U) ^ (- (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)))))),33);
        tracep->fullBit(oldp+135,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        tracep->fullBit(oldp+136,((7U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))));
        tracep->fullBit(oldp+137,((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator))));
        tracep->fullCData(oldp+138,((0x1fU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)),5);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        tracep->fullIData(oldp+141,((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed)),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left_result),32);
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      ((5U 
                                                        == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operator)) 
                                                       & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a 
                                                          >> 0x1fU)))) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_op_a)))),33);
        tracep->fullQData(oldp+145,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_right_result_signed),33);
        tracep->fullBit(oldp+147,((1U & ((0x80000000U 
                                          & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->fullBit(oldp+148,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        tracep->fullCData(oldp+149,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_n),5);
        tracep->fullCData(oldp+150,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_n),2);
        tracep->fullCData(oldp+151,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_n),3);
        tracep->fullQData(oldp+152,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n),34);
        tracep->fullQData(oldp+154,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_reminder_n),34);
        tracep->fullQData(oldp+156,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        tracep->fullBit(oldp+158,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        tracep->fullBit(oldp+159,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        tracep->fullBit(oldp+160,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        tracep->fullBit(oldp+162,((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        tracep->fullBit(oldp+163,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        tracep->fullBit(oldp+164,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                   ^ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b))));
        tracep->fullIData(oldp+165,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_n),32);
        tracep->fullIData(oldp+166,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_n),32);
        tracep->fullIData(oldp+167,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_n),32);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_reminder),32);
        tracep->fullQData(oldp+169,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        tracep->fullQData(oldp+171,((0x1ffffffffULL 
                                     & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                        >> 1U))),33);
        tracep->fullBit(oldp+173,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready));
        tracep->fullBit(oldp+174,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__lsu_update_addr_o));
        tracep->fullCData(oldp+175,((3U & (IData)((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U)))),2);
        tracep->fullBit(oldp+176,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned));
        tracep->fullBit(oldp+177,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__increase_address));
        tracep->fullCData(oldp+178,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__NS),3);
        tracep->fullBit(oldp+179,((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o) 
                                    & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o)) 
                                   & (~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id)))));
        tracep->fullBit(oldp+180,((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o) 
                                    & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_gnt_o)) 
                                   & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id))));
        tracep->fullSData(oldp+181,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_in),12);
        tracep->fullSData(oldp+182,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc),12);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_n),32);
        tracep->fullCData(oldp+184,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_n),2);
        tracep->fullSData(oldp+185,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_n),12);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__perf_rdata),32);
        tracep->fullCData(oldp+187,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_index),5);
        tracep->fullBit(oldp+188,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__pccr_all_sel));
        tracep->fullBit(oldp+189,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pccr));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcer));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__is_pcmr));
        tracep->fullIData(oldp+192,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->fullBit(oldp+194,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__csr_we_int));
        tracep->fullIData(oldp+195,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_n),32);
        tracep->fullIData(oldp+196,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_n),32);
        tracep->fullIData(oldp+197,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_n),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_n),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_n),32);
        tracep->fullCData(oldp+200,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_n),6);
        tracep->fullCData(oldp+201,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_n),4);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__exception_pc),32);
        tracep->fullSData(oldp+203,((0xfffU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_addr_o)),12);
        tracep->fullSData(oldp+204,((0xfffU & (IData)(
                                                      (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),12);
        tracep->fullBit(oldp+205,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_req_i));
        tracep->fullSData(oldp+206,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_addr_i),12);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__data_wdata_i),32);
        tracep->fullCData(oldp+208,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__be_b_i),4);
        tracep->fullCData(oldp+209,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                                      ? ((1U & (IData)(
                                                       (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? 8U : 4U)
                                          : ((1U & (IData)(
                                                           (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? 2U : 1U))
                                      : ((1U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
                                          ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q)
                                              ? 1U : 
                                             ((1U & (IData)(
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
                                              ? ((1U 
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
                                              : ((1U 
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
        tracep->fullBit(oldp+210,(((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS)) 
                                   | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o))));
        tracep->fullBit(oldp+211,(((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                   | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o))));
        tracep->fullBit(oldp+212,(((((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS)) 
                                     | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_instr_req_o)) 
                                    | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy)) 
                                   | ((4U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS)) 
                                      | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_w_0_data_req_o)))));
        tracep->fullBit(oldp+213,((1U & (((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                          >> 1U) | 
                                         ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                          & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->fullIData(oldp+214,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                      ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)
                                      : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n))),32);
        tracep->fullBit(oldp+215,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_is_ready) 
                                   | (6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q)))));
        tracep->fullQData(oldp+216,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                      ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->fullIData(oldp+218,(((1U & (IData)(
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
        tracep->fullIData(oldp+219,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->fullQData(oldp+220,((0x1ffffffffULL 
                                     & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                         ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                         : (((QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             << 1U) 
                                            ^ (- (QData)((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate))))))),33);
        tracep->fullQData(oldp+222,((0x7ffffffffULL 
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
        tracep->fullQData(oldp+224,((0x3ffffffffULL 
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
        tracep->fullIData(oldp+226,(vlSymsp->TOP__design_2_top.cont_2_uart_w_0_read_data_o),32);
        tracep->fullBit(oldp+227,(vlSymsp->TOP__design_2_top.cont_2_uart_w_0_complete));
        tracep->fullBit(oldp+228,((5U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))));
        tracep->fullBit(oldp+229,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_out));
        tracep->fullBit(oldp+230,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_out));
        tracep->fullBit(oldp+231,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__transmit));
        tracep->fullCData(oldp+232,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__send),8);
        tracep->fullBit(oldp+233,((6U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))));
        tracep->fullCData(oldp+234,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_data),8);
        tracep->fullBit(oldp+235,((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))));
        tracep->fullBit(oldp+236,((0U != (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state))));
        tracep->fullBit(oldp+237,((5U == (IData)(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state))));
        tracep->fullCData(oldp+238,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__UART_STATE),3);
        tracep->fullBit(oldp+239,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff2));
        tracep->fullBit(oldp+240,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__trans_txn_ff));
        tracep->fullCData(oldp+241,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__idle_count),4);
        tracep->fullCData(oldp+242,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__data_count),2);
        tracep->fullCData(oldp+243,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__read_count),2);
        tracep->fullSData(oldp+244,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_clk_divider),11);
        tracep->fullSData(oldp+245,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_clk_divider),11);
        tracep->fullCData(oldp+246,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__recv_state),3);
        tracep->fullCData(oldp+247,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_countdown),6);
        tracep->fullCData(oldp+248,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__rx_bits_remaining),4);
        tracep->fullCData(oldp+249,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_state),2);
        tracep->fullCData(oldp+250,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_countdown),6);
        tracep->fullCData(oldp+251,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_bits_remaining),4);
        tracep->fullCData(oldp+252,(vlSymsp->TOP__design_2_top.__PVT__cont_2_uart_i__DOT__uart_i__DOT__tx_data),8);
        tracep->fullIData(oldp+253,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_a_o),32);
        tracep->fullBit(oldp+254,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__instr_rvalid_o));
        tracep->fullBit(oldp+255,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__uart_data_rvalid_o));
        tracep->fullBit(oldp+256,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o));
        tracep->fullBit(oldp+257,(((~ (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff2)) 
                                   & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff))));
        tracep->fullBit(oldp+258,((6U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))));
        tracep->fullCData(oldp+259,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_data),8);
        tracep->fullBit(oldp+260,((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state))));
        tracep->fullBit(oldp+261,((0U != (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state))));
        tracep->fullBit(oldp+262,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff2));
        tracep->fullBit(oldp+263,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__trans_txn_ff));
        tracep->fullBit(oldp+264,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_registered));
        tracep->fullBit(oldp+265,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__write_issued));
        tracep->fullSData(oldp+266,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__baud_i),16);
        tracep->fullBit(oldp+267,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__recv_ack_i));
        tracep->fullSData(oldp+268,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_clk_divider),11);
        tracep->fullSData(oldp+269,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_clk_divider),11);
        tracep->fullCData(oldp+270,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__recv_state),3);
        tracep->fullCData(oldp+271,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_countdown),6);
        tracep->fullCData(oldp+272,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__rx_bits_remaining),4);
        tracep->fullCData(oldp+273,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_state),2);
        tracep->fullCData(oldp+274,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_countdown),6);
        tracep->fullCData(oldp+275,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_bits_remaining),4);
        tracep->fullCData(oldp+276,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__uart_i__DOT__tx_data),8);
        tracep->fullSData(oldp+277,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__MEMORY_ADDRESS),12);
        tracep->fullIData(oldp+278,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA),32);
        tracep->fullCData(oldp+279,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__tx_byte_i),8);
        tracep->fullCData(oldp+280,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__UART_STATE),3);
        tracep->fullBit(oldp+281,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__transmit));
        tracep->fullCData(oldp+282,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__data_count),3);
        tracep->fullBit(oldp+283,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__we));
        tracep->fullBit(oldp+284,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__start_read));
        tracep->fullBit(oldp+285,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q));
        tracep->fullCData(oldp+286,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_q),5);
        tracep->fullBit(oldp+287,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__irq_ack_o));
        tracep->fullBit(oldp+288,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_valid_id));
        tracep->fullBit(oldp+289,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__is_compressed_id));
        tracep->fullBit(oldp+290,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__illegal_c_insn_id));
        tracep->fullIData(oldp+291,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__misaligned_addr),32);
        tracep->fullBit(oldp+292,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ctrl_busy));
        tracep->fullBit(oldp+293,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch));
        tracep->fullBit(oldp+294,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_req_int));
        tracep->fullBit(oldp+295,((1U & ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                         >> 3U))));
        tracep->fullIData(oldp+296,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mepc_q),32);
        tracep->fullIData(oldp+297,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__depc_q),32);
        tracep->fullBit(oldp+298,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__csr_save_if));
        tracep->fullBit(oldp+299,((1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                         >> 2U))));
        tracep->fullBit(oldp+300,((1U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                         >> 0xfU))));
        tracep->fullBit(oldp+301,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__offset_in_init_q));
        tracep->fullCData(oldp+302,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__CS),2);
        tracep->fullIData(oldp+303,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q),32);
        tracep->fullIData(oldp+304,(((IData)(4U) + 
                                     (0xfffffffcU & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_q))),32);
        tracep->fullBit(oldp+305,((1U & (~ ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                            >> 1U)))));
        tracep->fullWData(oldp+306,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_Q),96);
        tracep->fullWData(oldp+309,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q),96);
        tracep->fullCData(oldp+312,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q),3);
        tracep->fullBit(oldp+313,((3U != (3U & ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                                                   >> 0x10U))))));
        tracep->fullBit(oldp+314,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_set_q));
        tracep->fullBit(oldp+315,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__branch_mux_dec));
        tracep->fullBit(oldp+316,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__jump_mux_dec));
        tracep->fullBit(oldp+317,((1U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs))));
        tracep->fullBit(oldp+318,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__exc_ack));
        tracep->fullBit(oldp+319,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__id_wb_fsm_cs));
        tracep->fullWData(oldp+320,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg),1024);
        tracep->fullWData(oldp+352,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__rf_reg_tmp),992);
        tracep->fullIData(oldp+383,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__registers_i__DOT__unnamedblk2__DOT__r),32);
        tracep->fullCData(oldp+384,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        tracep->fullBit(oldp+385,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        tracep->fullCData(oldp+386,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__exc_ctrl_cs),2);
        tracep->fullQData(oldp+387,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        tracep->fullCData(oldp+389,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        tracep->fullCData(oldp+390,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_state_q),2);
        tracep->fullCData(oldp+391,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__divcurr_state_q),3);
        tracep->fullQData(oldp+392,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q),34);
        tracep->fullIData(oldp+394,(((IData)(1U) << (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        tracep->fullIData(oldp+395,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_q),32);
        tracep->fullIData(oldp+396,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        tracep->fullIData(oldp+397,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        tracep->fullCData(oldp+398,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_type_q),2);
        tracep->fullCData(oldp+399,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        tracep->fullBit(oldp+400,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        tracep->fullBit(oldp+401,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_we_q));
        tracep->fullBit(oldp+402,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_misaligned_q));
        tracep->fullCData(oldp+403,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__CS),3);
        tracep->fullIData(oldp+404,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q),32);
        tracep->fullSData(oldp+405,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_inc_q),12);
        tracep->fullIData(oldp+406,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCCR_q),32);
        tracep->fullCData(oldp+407,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCMR_q),2);
        tracep->fullSData(oldp+408,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__PCER_q),12);
        tracep->fullIData(oldp+409,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dcsr_q),32);
        tracep->fullIData(oldp+410,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch0_q),32);
        tracep->fullIData(oldp+411,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__dscratch1_q),32);
        tracep->fullCData(oldp+412,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mcause_q),6);
        tracep->fullCData(oldp+413,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__mstatus_q),4);
        tracep->fullIData(oldp+414,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk2__DOT__r),32);
        tracep->fullIData(oldp+415,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__cs_registers_i__DOT__unnamedblk1__DOT__r),32);
        tracep->fullIData(oldp+416,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result),32);
        tracep->fullBit(oldp+417,((2U == (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r))));
        tracep->fullCData(oldp+418,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__eFPGA_fsm_r),2);
        tracep->fullCData(oldp+419,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_i__DOT__count),4);
        tracep->fullIData(oldp+420,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__PVT__rdata_b_o),32);
        tracep->fullBit(oldp+421,(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o));
        tracep->fullBit(oldp+422,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o));
        tracep->fullIData(oldp+423,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__DATA_READ),32);
        tracep->fullBit(oldp+424,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_issued));
        tracep->fullBit(oldp+425,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_i__DOT__read_complete));
        tracep->fullIData(oldp+426,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        tracep->fullBit(oldp+427,((3U != (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata))));
        tracep->fullBit(oldp+428,((3U != (3U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                >> 0x10U)))));
        tracep->fullIData(oldp+429,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        tracep->fullIData(oldp+430,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_ra_id),32);
        tracep->fullIData(oldp+431,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__regfile_data_rb_id),32);
        tracep->fullIData(oldp+432,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id),32);
        tracep->fullIData(oldp+433,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr),32);
        tracep->fullIData(oldp+434,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__pc_id),32);
        tracep->fullIData(oldp+435,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__imm_i_type),32);
        tracep->fullIData(oldp+436,(((0xfffff000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                                     ((0xfe0U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
        tracep->fullIData(oldp+437,(((0xffffe000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                                     ((0x1000U & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 0x13U)) 
                                      | ((0x800U & 
                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                  >> 7U))))))),32);
        tracep->fullIData(oldp+438,((0xfffff000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id)),32);
        tracep->fullIData(oldp+439,(((0xfff00000U & 
                                      ((- (IData)((1U 
                                                   & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0x14U)) | 
                                     ((0xff000U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id) 
                                      | ((0x800U & 
                                          (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                               >> 0x14U)))))),32);
        tracep->fullIData(oldp+440,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                              >> 0xfU))),32);
        tracep->fullCData(oldp+441,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+442,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+443,((0x1fU & (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__instr_rdata_id 
                                              >> 7U))),5);
        tracep->fullQData(oldp+444,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        tracep->fullSData(oldp+446,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_a),16);
        tracep->fullSData(oldp+447,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_op_b),16);
        tracep->fullIData(oldp+448,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata),32);
        tracep->fullIData(oldp+449,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__instr_decompressed),32);
        tracep->fullBit(oldp+450,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__illegal_c_insn));
        tracep->fullBit(oldp+451,((3U != (3U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_rdata))));
        tracep->fullBit(oldp+452,(vlTOPp->reset));
        tracep->fullBit(oldp+453,(vlTOPp->clk));
        tracep->fullBit(oldp+454,(vlTOPp->we_i));
        tracep->fullCData(oldp+455,(vlTOPp->irq_id_o),5);
        tracep->fullCData(oldp+456,(vlTOPp->irq_id_i),5);
        tracep->fullBit(oldp+457,(vlTOPp->irq_i));
        tracep->fullBit(oldp+458,(vlTOPp->irq_ack_o));
        tracep->fullBit(oldp+459,(vlTOPp->debug_req_i));
        tracep->fullBit(oldp+460,(vlTOPp->start));
        tracep->fullIData(oldp+461,(vlTOPp->cont_2_uart_w_0_read_data_o),32);
        tracep->fullIData(oldp+462,(vlTOPp->data),32);
        tracep->fullSData(oldp+463,(vlTOPp->address),12);
        tracep->fullBit(oldp+464,(vlTOPp->cont_2_uart_w_0_complete));
        tracep->fullBit(oldp+465,(vlTOPp->start_ibex));
        tracep->fullIData(oldp+466,(vlTOPp->eFPGA_operand_a_o),32);
        tracep->fullIData(oldp+467,(vlTOPp->eFPGA_operand_b_o),32);
        tracep->fullIData(oldp+468,(vlTOPp->eFPGA_result_a_i),32);
        tracep->fullIData(oldp+469,(vlTOPp->eFPGA_result_b_i),32);
        tracep->fullIData(oldp+470,(vlTOPp->eFPGA_result_c_i),32);
        tracep->fullBit(oldp+471,(vlTOPp->uart_recv_error));
        tracep->fullSData(oldp+472,(vlTOPp->address),13);
        tracep->fullBit(oldp+473,((1U & (~ (IData)(vlTOPp->reset)))));
        tracep->fullBit(oldp+474,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch) 
                                   | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q))));
        tracep->fullIData(oldp+475,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__multdiv_int_en)
                                      ? ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__div_int_en)
                                          ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_q)
                                          : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_n))
                                      : ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_int_en)
                                          ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__eFPGA_result
                                          : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_result))),32);
        tracep->fullIData(oldp+476,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i__ram_0.__PVT__ibex_data_rvalid_o)
                                      ? vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
                                      : vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_q)),32);
        tracep->fullBit(oldp+477,(((((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_ctrl_firstfetch) 
                                     | (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__core_busy_q)) 
                                    | (IData)(vlTOPp->irq_i)) 
                                   | (IData)(vlTOPp->debug_req_i))));
        tracep->fullBit(oldp+478,((1U & ((2U & vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__fetch_addr)
                                          ? ((3U != 
                                              (3U & 
                                               ((vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_Q[0U] 
                                                   >> 0x10U)))) 
                                             | ((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q) 
                                                >> 1U))
                                          : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q)))));
        tracep->fullIData(oldp+479,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_Q))
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
        tracep->fullIData(oldp+480,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->fullIData(oldp+481,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->fullIData(oldp+482,(((2U & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->fullBit(oldp+483,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
                                    ? (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_we_o)
                                    : (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_we_id))));
        tracep->fullCData(oldp+484,(((IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__uart_to_mem_w_0_data_req_o)
                                      ? 0xfU : ((2U 
                                                 & (IData)(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__data_type_id))
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
                                                   ? 8U
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)))
                                                   ? 2U
                                                   : 1U))
                                                 : 
                                                ((1U 
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
        tracep->fullIData(oldp+485,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_data_addr_o),32);
        tracep->fullCData(oldp+486,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_data_be_o),4);
        tracep->fullBit(oldp+487,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_data_req_o));
        tracep->fullIData(oldp+488,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_data_wdata_o),32);
        tracep->fullBit(oldp+489,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_data_we_o));
        tracep->fullIData(oldp+490,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_instr_addr_o),32);
        tracep->fullBit(oldp+491,(vlSymsp->TOP__design_2_top.__PVT__ibex_core_w_0_instr_req_o));
        tracep->fullBit(oldp+492,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_ibex_data_gnt_o));
        tracep->fullIData(oldp+493,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_ibex_data_rdata_o),32);
        tracep->fullBit(oldp+494,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_ibex_data_rvalid_o));
        tracep->fullBit(oldp+495,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_instr_gnt_o));
        tracep->fullIData(oldp+496,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_instr_rdata_o),32);
        tracep->fullBit(oldp+497,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_instr_rvalid_o));
        tracep->fullBit(oldp+498,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_uart_data_gnt_o));
        tracep->fullIData(oldp+499,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_uart_data_rdata_o),32);
        tracep->fullBit(oldp+500,(vlSymsp->TOP__design_2_top.__PVT__ram_w_0_uart_data_rvalid_o));
        tracep->fullSData(oldp+501,(vlSymsp->TOP__design_2_top.__PVT__uart_to_mem_w_0_data_addr_o),12);
        tracep->fullCData(oldp+502,(vlSymsp->TOP__design_2_top.__PVT__uart_to_mem_w_0_data_be_o),4);
        tracep->fullBit(oldp+503,(vlSymsp->TOP__design_2_top.__PVT__uart_to_mem_w_0_data_req_o));
        tracep->fullIData(oldp+504,(vlSymsp->TOP__design_2_top.__PVT__uart_to_mem_w_0_data_wdata_o),32);
        tracep->fullBit(oldp+505,(vlSymsp->TOP__design_2_top.__PVT__uart_to_mem_w_0_data_we_o));
        tracep->fullIData(oldp+506,(0U),32);
        tracep->fullIData(oldp+507,(1U),32);
        tracep->fullIData(oldp+508,(2U),32);
        tracep->fullIData(oldp+509,(3U),32);
        tracep->fullIData(oldp+510,(4U),32);
        tracep->fullIData(oldp+511,(5U),32);
        tracep->fullCData(oldp+512,(0x40U),8);
        tracep->fullCData(oldp+513,(0x60U),8);
        tracep->fullCData(oldp+514,(0x80U),8);
        tracep->fullCData(oldp+515,(0x41U),8);
        tracep->fullCData(oldp+516,(0x42U),8);
        tracep->fullIData(oldp+517,(0x516U),32);
        tracep->fullIData(oldp+518,(6U),32);
        tracep->fullIData(oldp+519,(0xcU),32);
        tracep->fullCData(oldp+520,(0xfU),4);
        tracep->fullCData(oldp+521,(0x20U),8);
        tracep->fullBit(oldp+522,(0U));
        tracep->fullBit(oldp+523,(1U));
        tracep->fullIData(oldp+524,(0xff8U),32);
        tracep->fullIData(oldp+525,(0xffcU),32);
        tracep->fullBit(oldp+526,(1U));
        tracep->fullCData(oldp+527,(0U),4);
        tracep->fullCData(oldp+528,(0U),6);
        tracep->fullIData(oldp+529,(0U),32);
        tracep->fullBit(oldp+530,(0U));
        tracep->fullCData(oldp+531,(0U),2);
        tracep->fullBit(oldp+532,(vlSymsp->TOP__design_2_top__forte_soc_top_i.__PVT__ibex_core_i__DOT__id_stage_i__DOT__eFPGA_en));
        tracep->fullIData(oldp+533,(0x20U),32);
        tracep->fullIData(oldp+534,(0x20U),32);
        tracep->fullCData(oldp+535,(1U),2);
        tracep->fullIData(oldp+536,(0x40001104U),32);
        tracep->fullIData(oldp+537,(8U),32);
    }
}
