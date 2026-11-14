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

// Function: sub_005F5DA0
// Address: 0x5f5da0 - 0x5f5df8
void sub_005F5DA0_0x5f5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F5DA0_0x5f5da0");
#endif

    ctx->pc = 0x5f5da0u;

    // 0x5f5da0: 0x4ae170  tge         $v0, $t2, 901
    ctx->pc = 0x5f5da0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f5da4: 0x0  nop
    ctx->pc = 0x5f5da4u;
    // NOP
    // 0x5f5da8: 0x0  nop
    ctx->pc = 0x5f5da8u;
    // NOP
    // 0x5f5dac: 0x0  nop
    ctx->pc = 0x5f5dacu;
    // NOP
    // 0x5f5db0: 0xbf700000  cache       0x10, 0x0($k1)
    ctx->pc = 0x5f5db0u;
    // CACHE instruction (ignored)
    // 0x5f5db4: 0x0  nop
    ctx->pc = 0x5f5db4u;
    // NOP
    // 0x5f5db8: 0xbfe60000  cache       0x06, 0x0($ra)
    ctx->pc = 0x5f5db8u;
    // CACHE instruction (ignored)
    // 0x5f5dbc: 0x3f500000  .word       0x3F500000                   # lui         $s0, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
    // 0x5f5dc0: 0xbfc40000  cache       0x04, 0x0($fp)
    ctx->pc = 0x5f5dc0u;
    // CACHE instruction (ignored)
    // 0x5f5dc4: 0x3f5c0000  .word       0x3F5C0000                   # lui         $gp, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5dc4u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)0 << 16));
    // 0x5f5dc8: 0xbff40000  cache       0x14, 0x0($ra)
    ctx->pc = 0x5f5dc8u;
    // CACHE instruction (ignored)
    // 0x5f5dcc: 0x3f700000  .word       0x3F700000                   # lui         $s0, 0x0 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5dccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)0 << 16));
    // 0x5f5dd0: 0x0  nop
    ctx->pc = 0x5f5dd0u;
    // NOP
    // 0x5f5dd4: 0x0  nop
    ctx->pc = 0x5f5dd4u;
    // NOP
    // 0x5f5dd8: 0xf000  sll         $fp, $zero, 0
    ctx->pc = 0x5f5dd8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x5f5ddc: 0x0  nop
    ctx->pc = 0x5f5ddcu;
    // NOP
    // 0x5f5de0: 0x1cc00  sll         $t9, $at, 16
    ctx->pc = 0x5f5de0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
    // 0x5f5de4: 0xffff3000  sd          $ra, 0x3000($ra)
    ctx->pc = 0x5f5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 12288), GPR_U64(ctx, 31));
    // 0x5f5de8: 0x18800  sll         $s1, $at, 0
    ctx->pc = 0x5f5de8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x5f5dec: 0xffff2400  sd          $ra, 0x2400($ra)
    ctx->pc = 0x5f5decu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 9216), GPR_U64(ctx, 31));
    // 0x5f5df0: 0x1e800  sll         $sp, $at, 0
    ctx->pc = 0x5f5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x5f5df4: 0xffff1000  sd          $ra, 0x1000($ra)
    ctx->pc = 0x5f5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4096), GPR_U64(ctx, 31));
    ctx->pc = 0x5f5df8u;
}
