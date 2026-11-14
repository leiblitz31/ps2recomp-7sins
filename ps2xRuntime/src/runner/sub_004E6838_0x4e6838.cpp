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

// Function: sub_004E6838
// Address: 0x4e6838 - 0x4e6848
void sub_004E6838_0x4e6838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6838_0x4e6838");
#endif

    ctx->pc = 0x4e6838u;

    // 0x4e6838: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6838u;
    {
        const bool branch_taken_0x4e6838 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6838) {
            ctx->pc = 0x4E683Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6838u;
            // 0x4e683c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E683C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501DE0u;
            return;
        }
    }
    ctx->pc = 0x4E6840u;
    // 0x4e6840: 0x4a565f45  vsuby.z     $vf29, $vf11, $vf22y
    ctx->pc = 0x4e6840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x4e6844: 0x0  nop
    ctx->pc = 0x4e6844u;
    // NOP
    ctx->pc = 0x4e6848u;
}
