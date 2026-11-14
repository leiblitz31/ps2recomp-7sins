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

// Function: sub_004E4390
// Address: 0x4e4390 - 0x4e43b0
void sub_004E4390_0x4e4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4390_0x4e4390");
#endif

    switch (ctx->pc) {
        case 0x4e43a0u: goto label_4e43a0;
        case 0x4e43a4u: goto label_4e43a4;
        default: break;
    }

    ctx->pc = 0x4e4390u;

    // 0x4e4390: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4390u;
    {
        const bool branch_taken_0x4e4390 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4390) {
            ctx->pc = 0x4E4394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4390u;
            // 0x4e4394: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF938u;
            return;
        }
    }
    ctx->pc = 0x4E4398u;
    // 0x4e4398: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4398u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4398 raw=0x4E41505F");
    // 0x4e439c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_4e43a0:
    if (ctx->pc == 0x4E43A0u) {
        ctx->pc = 0x4E43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E439Cu;
        // 0x4e43a0: 0x534d5f4d  beql        $k0, $t5, . + 4 + (0x5F4D << 2) (Delay Slot)
        // Likely branch instruction at 0x4E43A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E43A4u;
        goto label_4e43a4;
    }
    ctx->pc = 0x4E439Cu;
    {
        const bool branch_taken_0x4e439c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e439c) {
            ctx->pc = 0x4E43A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E439Cu;
            // 0x4e43a0: 0x534d5f4d  beql        $k0, $t5, . + 4 + (0x5F4D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E43A0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F58D8u;
            return;
        }
    }
    ctx->pc = 0x4E43A4u;
label_4e43a4:
    // 0x4e43a4: 0x0  nop
    ctx->pc = 0x4e43a4u;
    // NOP
    // 0x4e43a8: 0x0  nop
    ctx->pc = 0x4e43a8u;
    // NOP
    // 0x4e43ac: 0x0  nop
    ctx->pc = 0x4e43acu;
    // NOP
    ctx->pc = 0x4e43b0u;
}
