// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdesign_2_top.h for the primary calling header

#include "Vdesign_2_top_dp_ram.h"
#include "Vdesign_2_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vdesign_2_top_dp_ram) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vdesign_2_top_dp_ram::__Vconfigure(Vdesign_2_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vdesign_2_top_dp_ram::~Vdesign_2_top_dp_ram() {
}

void Vdesign_2_top_dp_ram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdesign_2_top_dp_ram::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__en_a_i = VL_RAND_RESET_I(1);
    __PVT__o_be_a_i = VL_RAND_RESET_I(4);
    __PVT__addr_a_i = VL_RAND_RESET_I(12);
    __PVT__wdata_a_i = VL_RAND_RESET_I(32);
    __PVT__rdata_a_o = VL_RAND_RESET_I(32);
    __PVT__we_a_i = VL_RAND_RESET_I(1);
    __PVT__en_b_i = VL_RAND_RESET_I(1);
    __PVT__o_be_b_i = VL_RAND_RESET_I(4);
    __PVT__addr_b_i = VL_RAND_RESET_I(12);
    __PVT__wdata_b_i = VL_RAND_RESET_I(32);
    __PVT__rdata_b_o = VL_RAND_RESET_I(32);
    __PVT__we_b_i = VL_RAND_RESET_I(1);
    __PVT__be_b_i = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            __PVT__ram_block[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdlyvdim0__ram_block__v0 = 0;
    __Vdlyvlsb__ram_block__v0 = 0;
    __Vdlyvval__ram_block__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__ram_block__v0 = 0;
    __Vdlyvdim0__ram_block__v1 = 0;
    __Vdlyvlsb__ram_block__v1 = 0;
    __Vdlyvval__ram_block__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__ram_block__v1 = 0;
    __Vdlyvdim0__ram_block__v2 = 0;
    __Vdlyvlsb__ram_block__v2 = 0;
    __Vdlyvval__ram_block__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__ram_block__v2 = 0;
    __Vdlyvdim0__ram_block__v3 = 0;
    __Vdlyvlsb__ram_block__v3 = 0;
    __Vdlyvval__ram_block__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__ram_block__v3 = 0;
}
