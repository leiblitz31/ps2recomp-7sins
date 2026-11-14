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

// Function: sub_00606000
// Address: 0x606000 - 0x606060
void sub_00606000_0x606000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00606000_0x606000");
#endif

    ctx->pc = 0x606000u;

    // 0x606000: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606000u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x606004: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606004u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x606008: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606008u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60600c: 0x2909d0  .word       0x002909D0                   # mfhi        $at # 002901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60600cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
    // 0x606010: 0x290db0  tge         $at, $t1, 54
    ctx->pc = 0x606010u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
    // 0x606014: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606014u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x606018: 0x290df0  tge         $at, $t1, 55
    ctx->pc = 0x606018u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
    // 0x60601c: 0x0  nop
    ctx->pc = 0x60601cu;
    // NOP
    // 0x606020: 0x0  nop
    ctx->pc = 0x606020u;
    // NOP
    // 0x606024: 0x0  nop
    ctx->pc = 0x606024u;
    // NOP
    // 0x606028: 0x290d70  tge         $at, $t1, 53
    ctx->pc = 0x606028u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
    // 0x60602c: 0x290c90  .word       0x00290C90                   # mfhi        $at # 00290480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60602cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
    // 0x606030: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606030u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x606034: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606034u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x606038: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606038u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
    // 0x60603c: 0x291f00  .word       0x00291F00                   # sll         $v1, $t1, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60603cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 28));
    // 0x606040: 0x290db0  tge         $at, $t1, 54
    ctx->pc = 0x606040u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
    // 0x606044: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606044u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x606048: 0x291f90  .word       0x00291F90                   # mfhi        $v1 # 00290780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606048u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x60604c: 0x0  nop
    ctx->pc = 0x60604cu;
    // NOP
    // 0x606050: 0x0  nop
    ctx->pc = 0x606050u;
    // NOP
    // 0x606054: 0x0  nop
    ctx->pc = 0x606054u;
    // NOP
    // 0x606058: 0x294bd0  .word       0x00294BD0                   # mfhi        $t1 # 002903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606058u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x60605c: 0x294c50  .word       0x00294C50                   # mfhi        $t1 # 00290440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60605cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    ctx->pc = 0x606060u;
}
