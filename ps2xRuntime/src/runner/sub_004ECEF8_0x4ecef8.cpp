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

// Function: sub_004ECEF8
// Address: 0x4ecef8 - 0x4ecf08
void sub_004ECEF8_0x4ecef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECEF8_0x4ecef8");
#endif

    switch (ctx->pc) {
        case 0x4ecf00u: goto label_4ecf00;
        default: break;
    }

    ctx->pc = 0x4ecef8u;

    // 0x4ecef8: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ecef8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4ecefc: 0x45455053  .word       0x45455053                   # INVALID     $t2, $a1, 0x5053 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ecefcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x4ECEFC raw=0x45455053");
label_4ecf00:
    // 0x4ecf00: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecf00u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x4ecf04: 0x0  nop
    ctx->pc = 0x4ecf04u;
    // NOP
    ctx->pc = 0x4ecf08u;
}
