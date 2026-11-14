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

// Function: sub_004E66C8
// Address: 0x4e66c8 - 0x4e66d8
void sub_004E66C8_0x4e66c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E66C8_0x4e66c8");
#endif

    ctx->pc = 0x4e66c8u;

    // 0x4e66c8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E66C8u;
    {
        const bool branch_taken_0x4e66c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e66c8) {
            ctx->pc = 0x4E66CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E66C8u;
            // 0x4e66cc: 0x736e6563  .word       0x736E6563                   # INVALID     $k1, $t6, 0x6563 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E66CC raw=0x736E6563");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C70u;
            return;
        }
    }
    ctx->pc = 0x4E66D0u;
    // 0x4e66d0: 0x6465726f  daddiu      $a1, $v1, 0x726F
    ctx->pc = 0x4e66d0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29295);
    // 0x4e66d4: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e66d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4e66d8u;
}
