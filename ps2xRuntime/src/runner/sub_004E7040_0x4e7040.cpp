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

// Function: sub_004E7040
// Address: 0x4e7040 - 0x4e7058
void sub_004E7040_0x4e7040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7040_0x4e7040");
#endif

    ctx->pc = 0x4e7040u;

    // 0x4e7040: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E7040u;
    {
        const bool branch_taken_0x4e7040 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e7040) {
            ctx->pc = 0x4E7044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7040u;
            // 0x4e7044: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5025E8u;
            return;
        }
    }
    ctx->pc = 0x4E7048u;
    // 0x4e7048: 0x4155515f  .word       0x4155515F                   # INVALID     $t2, $s5, 0x515F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e7048u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E7048 raw=0x4155515F");
    // 0x4e704c: 0x52455452  beql        $s2, $a1, . + 4 + (0x5452 << 2)
    ctx->pc = 0x4E704Cu;
    {
        const bool branch_taken_0x4e704c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e704c) {
            ctx->pc = 0x4E7050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E704Cu;
            // 0x4e7050: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC198u;
            return;
        }
    }
    ctx->pc = 0x4E7054u;
    // 0x4e7054: 0x0  nop
    ctx->pc = 0x4e7054u;
    // NOP
    ctx->pc = 0x4e7058u;
}
