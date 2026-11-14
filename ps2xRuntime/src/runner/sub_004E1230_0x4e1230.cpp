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

// Function: sub_004E1230
// Address: 0x4e1230 - 0x4e1240
void sub_004E1230_0x4e1230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1230_0x4e1230");
#endif

    switch (ctx->pc) {
        case 0x4e1234u: goto label_4e1234;
        default: break;
    }

    ctx->pc = 0x4e1230u;

    // 0x4e1230: 0x4b434142  vaddz.xz    $vf5, $vf8, $vf3z
    ctx->pc = 0x4e1230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_4e1234:
    // 0x4e1234: 0x554f5247  bnel        $t2, $t7, . + 4 + (0x5247 << 2)
    ctx->pc = 0x4E1234u;
    {
        const bool branch_taken_0x4e1234 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        if (branch_taken_0x4e1234) {
            ctx->pc = 0x4E1238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E1234u;
            // 0x4e1238: 0x4f20444e  .word       0x4F20444E                   # INVALID     $t9, $zero, 0x444E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1238 raw=0x4F20444E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5B54u;
            return;
        }
    }
    ctx->pc = 0x4E123Cu;
    // 0x4e123c: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e123cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E123C raw=0x00000A4E");
    ctx->pc = 0x4e1240u;
}
