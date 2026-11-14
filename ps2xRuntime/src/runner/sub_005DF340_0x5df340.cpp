#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005DF340
// Address: 0x5df340 - 0x5df360
void sub_005DF340_0x5df340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF340_0x5df340");
#endif

    ctx->pc = 0x5df340u;

    // 0x5df340: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df340u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF340 raw=0x4D637464");
    // 0x5df344: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df344u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DF344 raw=0x726F6D65");
    // 0x5df348: 0x72614379  .word       0x72614379                   # INVALID     $s3, $at, 0x4379 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df348u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x5DF348 raw=0x72614379");
    // 0x5df34c: 0x463a3a64  .word       0x463A3A64                   # INVALID     $s1, $k0, 0x3A64 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df34cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x24 at 0x5DF34C raw=0x463A3A64");
    // 0x5df350: 0x46646e69  .word       0x46646E69                   # INVALID     $s3, $a0, 0x6E69 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df350u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x29 at 0x5DF350 raw=0x46646E69");
    // 0x5df354: 0x3a656c69  xori        $a1, $s3, 0x6C69
    ctx->pc = 0x5df354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)27753);
    // 0x5df358: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5df358u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5df35c: 0x0  nop
    ctx->pc = 0x5df35cu;
    // NOP
    ctx->pc = 0x5df360u;
}
