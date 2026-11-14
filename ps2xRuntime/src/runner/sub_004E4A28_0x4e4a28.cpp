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

// Function: sub_004E4A28
// Address: 0x4e4a28 - 0x4e4a40
void sub_004E4A28_0x4e4a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A28_0x4e4a28");
#endif

    ctx->pc = 0x4e4a28u;

    // 0x4e4a28: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4A28u;
    {
        const bool branch_taken_0x4e4a28 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4a28) {
            ctx->pc = 0x4E4A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4A28u;
            // 0x4e4a2c: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x500BE4u;
            return;
        }
    }
    ctx->pc = 0x4E4A30u;
    // 0x4e4a30: 0x65665f65  daddiu      $a2, $t3, 0x5F65
    ctx->pc = 0x4e4a30u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24421);
    // 0x4e4a34: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4a34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4e4a38: 0x0  nop
    ctx->pc = 0x4e4a38u;
    // NOP
    // 0x4e4a3c: 0x0  nop
    ctx->pc = 0x4e4a3cu;
    // NOP
    ctx->pc = 0x4e4a40u;
}
