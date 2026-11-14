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

// Function: sub_004E4FD8
// Address: 0x4e4fd8 - 0x4e4fe8
void sub_004E4FD8_0x4e4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4FD8_0x4e4fd8");
#endif

    ctx->pc = 0x4e4fd8u;

    // 0x4e4fd8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4FD8u;
    {
        const bool branch_taken_0x4e4fd8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4fd8) {
            ctx->pc = 0x4E4FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4FD8u;
            // 0x4e4fdc: 0x64697270  daddiu      $t1, $v1, 0x7270 (Delay Slot)
            SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29296);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9074u;
            return;
        }
    }
    ctx->pc = 0x4E4FE0u;
    // 0x4e4fe0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4fe0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4fe4: 0x0  nop
    ctx->pc = 0x4e4fe4u;
    // NOP
    ctx->pc = 0x4e4fe8u;
}
