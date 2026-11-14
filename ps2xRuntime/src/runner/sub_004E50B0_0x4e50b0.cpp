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

// Function: sub_004E50B0
// Address: 0x4e50b0 - 0x4e5110
void sub_004E50B0_0x4e50b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E50B0_0x4e50b0");
#endif

    switch (ctx->pc) {
        case 0x4e50e0u: goto label_4e50e0;
        case 0x4e50fcu: goto label_4e50fc;
        case 0x4e510cu: goto label_4e510c;
        default: break;
    }

    ctx->pc = 0x4e50b0u;

    // 0x4e50b0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E50B0u;
    {
        const bool branch_taken_0x4e50b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e50b0) {
            ctx->pc = 0x4E50B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E50B0u;
            // 0x4e50b4: 0x72726163  .word       0x72726163                   # INVALID     $s3, $s2, 0x6163 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E50B4 raw=0x72726163");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50223Cu;
            return;
        }
    }
    ctx->pc = 0x4E50B8u;
    // 0x4e50b8: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e50b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e50bc: 0x0  nop
    ctx->pc = 0x4e50bcu;
    // NOP
    // 0x4e50c0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E50C0u;
    {
        const bool branch_taken_0x4e50c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e50c0) {
            ctx->pc = 0x4E50C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E50C0u;
            // 0x4e50c4: 0x63616c62  daddi       $at, $k1, 0x6C62 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27746; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500668u;
            return;
        }
    }
    ctx->pc = 0x4E50C8u;
    // 0x4e50c8: 0x6365726b  daddi       $a1, $k1, 0x726B
    ctx->pc = 0x4e50c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29291; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e50cc: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e50ccu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e50d0: 0x0  nop
    ctx->pc = 0x4e50d0u;
    // NOP
    // 0x4e50d4: 0x0  nop
    ctx->pc = 0x4e50d4u;
    // NOP
    // 0x4e50d8: 0x0  nop
    ctx->pc = 0x4e50d8u;
    // NOP
    // 0x4e50dc: 0x0  nop
    ctx->pc = 0x4e50dcu;
    // NOP
label_4e50e0:
    // 0x4e50e0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E50E0u;
    {
        const bool branch_taken_0x4e50e0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e50e0) {
            ctx->pc = 0x4E50E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E50E0u;
            // 0x4e50e4: 0x61657261  daddi       $a1, $t3, 0x7261 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500688u;
            return;
        }
    }
    ctx->pc = 0x4E50E8u;
    // 0x4e50e8: 0x0  nop
    ctx->pc = 0x4e50e8u;
    // NOP
    // 0x4e50ec: 0x0  nop
    ctx->pc = 0x4e50ecu;
    // NOP
    // 0x4e50f0: 0x0  nop
    ctx->pc = 0x4e50f0u;
    // NOP
    // 0x4e50f4: 0x0  nop
    ctx->pc = 0x4e50f4u;
    // NOP
    // 0x4e50f8: 0x0  nop
    ctx->pc = 0x4e50f8u;
    // NOP
label_4e50fc:
    // 0x4e50fc: 0x0  nop
    ctx->pc = 0x4e50fcu;
    // NOP
    // 0x4e5100: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5100u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e5104: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5104u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e5108: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5108u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e510c:
    // 0x4e510c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e510cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x4e5110u;
}
