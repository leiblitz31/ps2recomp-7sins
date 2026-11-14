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

// Function: sub_004E4468
// Address: 0x4e4468 - 0x4e4478
void sub_004E4468_0x4e4468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4468_0x4e4468");
#endif

    ctx->pc = 0x4e4468u;

    // 0x4e4468: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4468u;
    {
        const bool branch_taken_0x4e4468 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4468) {
            ctx->pc = 0x4E446Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4468u;
            // 0x4e446c: 0x64616f6c  daddiu      $at, $v1, 0x6F6C (Delay Slot)
            SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8504u;
            return;
        }
    }
    ctx->pc = 0x4E4470u;
    // 0x4e4470: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e4470u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4e4474: 0x0  nop
    ctx->pc = 0x4e4474u;
    // NOP
    ctx->pc = 0x4e4478u;
}
