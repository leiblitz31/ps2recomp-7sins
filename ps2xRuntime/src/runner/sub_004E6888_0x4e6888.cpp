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

// Function: sub_004E6888
// Address: 0x4e6888 - 0x4e6898
void sub_004E6888_0x4e6888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6888_0x4e6888");
#endif

    ctx->pc = 0x4e6888u;

    // 0x4e6888: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6888u;
    {
        const bool branch_taken_0x4e6888 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6888) {
            ctx->pc = 0x4E688Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6888u;
            // 0x4e688c: 0x47554147  .word       0x47554147                   # INVALID     $k0, $s5, 0x4147 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x7 at 0x4E688C raw=0x47554147");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E30u;
            return;
        }
    }
    ctx->pc = 0x4E6890u;
    // 0x4e6890: 0x4a565f45  vsuby.z     $vf29, $vf11, $vf22y
    ctx->pc = 0x4e6890u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x4e6894: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e6894u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e6898u;
}
