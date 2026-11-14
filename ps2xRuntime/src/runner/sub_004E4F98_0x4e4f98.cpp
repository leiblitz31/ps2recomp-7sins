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

// Function: sub_004E4F98
// Address: 0x4e4f98 - 0x4e4fa8
void sub_004E4F98_0x4e4f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F98_0x4e4f98");
#endif

    ctx->pc = 0x4e4f98u;

    // 0x4e4f98: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4F98u;
    {
        const bool branch_taken_0x4e4f98 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4f98) {
            ctx->pc = 0x4E4F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4F98u;
            // 0x4e4f9c: 0x72617661  .word       0x72617661                   # maddu1      $t6, $s3, $at # 00000640 <InstrIdType: R5900_MMI> (Delay Slot)
            { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 1); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9034u;
            return;
        }
    }
    ctx->pc = 0x4E4FA0u;
    // 0x4e4fa0: 0x656369  .word       0x00656369                   # mtsa        $v1 # 00056340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e4fa0u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4e4fa4: 0x0  nop
    ctx->pc = 0x4e4fa4u;
    // NOP
    ctx->pc = 0x4e4fa8u;
}
