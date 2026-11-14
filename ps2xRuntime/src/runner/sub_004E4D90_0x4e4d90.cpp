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

// Function: sub_004E4D90
// Address: 0x4e4d90 - 0x4e4de0
void sub_004E4D90_0x4e4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4D90_0x4e4d90");
#endif

    switch (ctx->pc) {
        case 0x4e4db8u: goto label_4e4db8;
        case 0x4e4dc0u: goto label_4e4dc0;
        default: break;
    }

    ctx->pc = 0x4e4d90u;

    // 0x4e4d90: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4D90u;
    {
        const bool branch_taken_0x4e4d90 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4d90) {
            ctx->pc = 0x4E4D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4D90u;
            // 0x4e4d94: 0x3025706f  andi        $a1, $at, 0x706F (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)28783);
            ctx->in_delay_slot = false;
            ctx->pc = 0x502F64u;
            return;
        }
    }
    ctx->pc = 0x4E4D98u;
    // 0x4e4d98: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e4d98u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4d9c: 0x0  nop
    ctx->pc = 0x4e4d9cu;
    // NOP
    // 0x4e4da0: 0x6f727261  ldr         $s2, 0x7261($k1)
    ctx->pc = 0x4e4da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x4e4da4: 0x66656c77  daddiu      $a1, $s3, 0x6C77
    ctx->pc = 0x4e4da4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)27767);
    // 0x4e4da8: 0x615f74  teq         $v1, $at, 381
    ctx->pc = 0x4e4da8u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4dac: 0x0  nop
    ctx->pc = 0x4e4dacu;
    // NOP
    // 0x4e4db0: 0x0  nop
    ctx->pc = 0x4e4db0u;
    // NOP
    // 0x4e4db4: 0x0  nop
    ctx->pc = 0x4e4db4u;
    // NOP
label_4e4db8:
    // 0x4e4db8: 0x0  nop
    ctx->pc = 0x4e4db8u;
    // NOP
    // 0x4e4dbc: 0x0  nop
    ctx->pc = 0x4e4dbcu;
    // NOP
label_4e4dc0:
    // 0x4e4dc0: 0x6f727261  ldr         $s2, 0x7261($k1)
    ctx->pc = 0x4e4dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x4e4dc4: 0x67697277  daddiu      $t1, $k1, 0x7277
    ctx->pc = 0x4e4dc4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29303);
    // 0x4e4dc8: 0x615f7468  daddi       $ra, $t2, 0x7468
    ctx->pc = 0x4e4dc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29800; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x4e4dcc: 0x0  nop
    ctx->pc = 0x4e4dccu;
    // NOP
    // 0x4e4dd0: 0x0  nop
    ctx->pc = 0x4e4dd0u;
    // NOP
    // 0x4e4dd4: 0x0  nop
    ctx->pc = 0x4e4dd4u;
    // NOP
    // 0x4e4dd8: 0x0  nop
    ctx->pc = 0x4e4dd8u;
    // NOP
    // 0x4e4ddc: 0x0  nop
    ctx->pc = 0x4e4ddcu;
    // NOP
    ctx->pc = 0x4e4de0u;
}
