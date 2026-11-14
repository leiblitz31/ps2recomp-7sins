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

// Function: sub_004E4570
// Address: 0x4e4570 - 0x4e4588
void sub_004E4570_0x4e4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4570_0x4e4570");
#endif

    switch (ctx->pc) {
        case 0x4e4578u: goto label_4e4578;
        default: break;
    }

    ctx->pc = 0x4e4570u;

    // 0x4e4570: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4570u;
    {
        const bool branch_taken_0x4e4570 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4570) {
            ctx->pc = 0x4E4574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4570u;
            // 0x4e4574: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z (Delay Slot)
            { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFB18u;
            return;
        }
    }
    ctx->pc = 0x4E4578u;
label_4e4578:
    // 0x4e4578: 0x4e41505f  .word       0x4E41505F                   # INVALID     $s2, $at, 0x505F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4578u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4578 raw=0x4E41505F");
    // 0x4e457c: 0x5f4c454e  .word       0x5F4C454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E457Cu;
    {
        const bool branch_taken_0x4e457c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e457c) {
            ctx->pc = 0x4E4580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E457Cu;
            // 0x4e4580: 0x534d5f4d  beql        $k0, $t5, . + 4 + (0x5F4D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E4580 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5AB8u;
            return;
        }
    }
    ctx->pc = 0x4E4584u;
    // 0x4e4584: 0x0  nop
    ctx->pc = 0x4e4584u;
    // NOP
    ctx->pc = 0x4e4588u;
}
