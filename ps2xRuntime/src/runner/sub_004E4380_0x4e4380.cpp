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

// Function: sub_004E4380
// Address: 0x4e4380 - 0x4e4390
void sub_004E4380_0x4e4380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4380_0x4e4380");
#endif

    ctx->pc = 0x4e4380u;

    // 0x4e4380: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4380u;
    {
        const bool branch_taken_0x4e4380 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4380) {
            ctx->pc = 0x4E4384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4380u;
            // 0x4e4384: 0x3230256c  andi        $s0, $s1, 0x256C (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9580);
            ctx->in_delay_slot = false;
            ctx->pc = 0x502554u;
            return;
        }
    }
    ctx->pc = 0x4E4388u;
    // 0x4e4388: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4388u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e438c: 0x0  nop
    ctx->pc = 0x4e438cu;
    // NOP
    ctx->pc = 0x4e4390u;
}
