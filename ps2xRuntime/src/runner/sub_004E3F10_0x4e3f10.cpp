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

// Function: sub_004E3F10
// Address: 0x4e3f10 - 0x4e3f20
void sub_004E3F10_0x4e3f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F10_0x4e3f10");
#endif

    ctx->pc = 0x4e3f10u;

    // 0x4e3f10: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3F10u;
    {
        const bool branch_taken_0x4e3f10 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3f10) {
            ctx->pc = 0x4E3F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3F10u;
            // 0x4e3f14: 0x65646e69  daddiu      $a0, $t3, 0x6E69 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5020E4u;
            return;
        }
    }
    ctx->pc = 0x4E3F18u;
    // 0x4e3f18: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4e3f18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    // 0x4e3f1c: 0x0  nop
    ctx->pc = 0x4e3f1cu;
    // NOP
    ctx->pc = 0x4e3f20u;
}
