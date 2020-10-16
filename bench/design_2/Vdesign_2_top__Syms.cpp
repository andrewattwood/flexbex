// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdesign_2_top__Syms.h"
#include "Vdesign_2_top.h"
#include "Vdesign_2_top_design_2_top.h"
#include "Vdesign_2_top_forte_soc_top.h"
#include "Vdesign_2_top___024unit.h"
#include "Vdesign_2_top_ram.h"
#include "Vdesign_2_top_dp_ram.h"



// FUNCTIONS
Vdesign_2_top__Syms::Vdesign_2_top__Syms(Vdesign_2_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__design_2_top(Verilated::catName(topp->name(), "design_2_top"))
    , TOP__design_2_top__forte_soc_top_i(Verilated::catName(topp->name(), "design_2_top.forte_soc_top_i"))
    , TOP__design_2_top__forte_soc_top_i__ram_0(Verilated::catName(topp->name(), "design_2_top.forte_soc_top_i.ram_0"))
    , TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i(Verilated::catName(topp->name(), "design_2_top.forte_soc_top_i.ram_0.dp_ram_i"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->design_2_top = &TOP__design_2_top;
    TOPp->design_2_top->forte_soc_top_i = &TOP__design_2_top__forte_soc_top_i;
    TOPp->design_2_top->forte_soc_top_i->ram_0 = &TOP__design_2_top__forte_soc_top_i__ram_0;
    TOPp->design_2_top->forte_soc_top_i->ram_0->dp_ram_i = &TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__design_2_top.__Vconfigure(this, true);
    TOP__design_2_top__forte_soc_top_i.__Vconfigure(this, true);
    TOP__design_2_top__forte_soc_top_i__ram_0.__Vconfigure(this, true);
    TOP__design_2_top__forte_soc_top_i__ram_0__dp_ram_i.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
