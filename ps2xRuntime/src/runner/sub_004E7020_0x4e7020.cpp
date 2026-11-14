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

// Function: sub_004E7020
// Address: 0x4e7020 - 0x4e7040
void sub_004E7020_0x4e7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7020_0x4e7020");
#endif

    switch (ctx->pc) {
        case 0x4e7038u: goto label_4e7038;
        default: break;
    }

    ctx->pc = 0x4e7020u;

    // 0x4e7020: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E7020u;
    {
        const bool branch_taken_0x4e7020 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e7020) {
            ctx->pc = 0x4E7024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7020u;
            // 0x4e7024: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5025C8u;
            return;
        }
    }
    ctx->pc = 0x4E7028u;
    // 0x4e7028: 0x4155515f  .word       0x4155515F                   # INVALID     $t2, $s5, 0x515F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e7028u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E7028 raw=0x4155515F");
    // 0x4e702c: 0x52455452  beql        $s2, $a1, . + 4 + (0x5452 << 2)
    ctx->pc = 0x4E702Cu;
    {
        const bool branch_taken_0x4e702c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e702c) {
            ctx->pc = 0x4E7030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E702Cu;
            // 0x4e7030: 0x32  tlt         $zero, $zero, 0 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC178u;
            return;
        }
    }
    ctx->pc = 0x4E7034u;
    // 0x4e7034: 0x0  nop
    ctx->pc = 0x4e7034u;
    // NOP
label_4e7038:
    // 0x4e7038: 0x0  nop
    ctx->pc = 0x4e7038u;
    // NOP
    // 0x4e703c: 0x0  nop
    ctx->pc = 0x4e703cu;
    // NOP
    ctx->pc = 0x4e7040u;
}
