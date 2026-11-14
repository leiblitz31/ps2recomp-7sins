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

// Function: sub_004E1250
// Address: 0x4e1250 - 0x4e1260
void sub_004E1250_0x4e1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1250_0x4e1250");
#endif

    ctx->pc = 0x4e1250u;

    // 0x4e1250: 0x53454c53  beql        $k0, $a1, . + 4 + (0x4C53 << 2)
    ctx->pc = 0x4E1250u;
    {
        const bool branch_taken_0x4e1250 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e1250) {
            ctx->pc = 0x4E1254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1250u;
            // 0x4e1254: 0x3233352d  andi        $s3, $s1, 0x352D (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)13613);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F43A0u;
            return;
        }
    }
    ctx->pc = 0x4E1258u;
    // 0x4e1258: 0x3739  .word       0x00003739                   # INVALID     $zero, $zero, 0x3739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e1258u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E1258 raw=0x00003739");
    // 0x4e125c: 0x0  nop
    ctx->pc = 0x4e125cu;
    // NOP
    ctx->pc = 0x4e1260u;
}
