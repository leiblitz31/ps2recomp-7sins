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

// Function: sub_004E4A40
// Address: 0x4e4a40 - 0x4e4a50
void sub_004E4A40_0x4e4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A40_0x4e4a40");
#endif

    ctx->pc = 0x4e4a40u;

    // 0x4e4a40: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4A40u;
    {
        const bool branch_taken_0x4e4a40 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4a40) {
            ctx->pc = 0x4E4A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4A40u;
            // 0x4e4a44: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500BFCu;
            return;
        }
    }
    ctx->pc = 0x4E4A48u;
    // 0x4e4a48: 0x65665f65  daddiu      $a2, $t3, 0x5F65
    ctx->pc = 0x4e4a48u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e4a4c: 0x627261  .word       0x00627261                   # addu        $t6, $v1, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x4e4a50u;
}
