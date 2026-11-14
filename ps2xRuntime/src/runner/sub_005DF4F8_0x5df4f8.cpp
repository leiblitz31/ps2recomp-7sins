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

// Function: sub_005DF4F8
// Address: 0x5df4f8 - 0x5df508
void sub_005DF4F8_0x5df4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF4F8_0x5df4f8");
#endif

    ctx->pc = 0x5df4f8u;

    // 0x5df4f8: 0x55637464  bnel        $t3, $v1, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DF4F8u;
    {
        const bool branch_taken_0x5df4f8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x5df4f8) {
            ctx->pc = 0x5DF4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF4F8u;
            // 0x5df4fc: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC68Cu;
            return;
        }
    }
    ctx->pc = 0x5DF500u;
    // 0x5df500: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df500u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF500 raw=0x7070632E");
    // 0x5df504: 0x0  nop
    ctx->pc = 0x5df504u;
    // NOP
    ctx->pc = 0x5df508u;
}
