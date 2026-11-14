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

// Function: sub_004E6FE0
// Address: 0x4e6fe0 - 0x4e7000
void sub_004E6FE0_0x4e6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6FE0_0x4e6fe0");
#endif

    switch (ctx->pc) {
        case 0x4e6ff4u: goto label_4e6ff4;
        default: break;
    }

    ctx->pc = 0x4e6fe0u;

    // 0x4e6fe0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6FE0u;
    {
        const bool branch_taken_0x4e6fe0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6fe0) {
            ctx->pc = 0x4E6FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FE0u;
            // 0x4e6fe4: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x502588u;
            return;
        }
    }
    ctx->pc = 0x4E6FE8u;
    // 0x4e6fe8: 0x4155515f  .word       0x4155515F                   # INVALID     $t2, $s5, 0x515F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6fe8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E6FE8 raw=0x4155515F");
    // 0x4e6fec: 0x52455452  beql        $s2, $a1, . + 4 + (0x5452 << 2)
    ctx->pc = 0x4E6FECu;
    {
        const bool branch_taken_0x4e6fec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e6fec) {
            ctx->pc = 0x4E6FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6FECu;
            // 0x4e6ff0: 0x30  tge         $zero, $zero, 0 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC138u;
            return;
        }
    }
    ctx->pc = 0x4E6FF4u;
label_4e6ff4:
    // 0x4e6ff4: 0x0  nop
    ctx->pc = 0x4e6ff4u;
    // NOP
    // 0x4e6ff8: 0x0  nop
    ctx->pc = 0x4e6ff8u;
    // NOP
    // 0x4e6ffc: 0x0  nop
    ctx->pc = 0x4e6ffcu;
    // NOP
    ctx->pc = 0x4e7000u;
}
