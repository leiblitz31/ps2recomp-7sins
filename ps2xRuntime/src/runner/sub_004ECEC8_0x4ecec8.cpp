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

// Function: sub_004ECEC8
// Address: 0x4ecec8 - 0x4ecee0
void sub_004ECEC8_0x4ecec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECEC8_0x4ecec8");
#endif

    ctx->pc = 0x4ecec8u;

    // 0x4ecec8: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x4ecec8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4ececc: 0x47415453  .word       0x47415453                   # INVALID     $k0, $at, 0x5453 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4ececcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x13 at 0x4ECECC raw=0x47415453");
    // 0x4eced0: 0x524547  .word       0x00524547                   # srav        $t0, $s2, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4eced0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x4eced4: 0x0  nop
    ctx->pc = 0x4eced4u;
    // NOP
    // 0x4eced8: 0x0  nop
    ctx->pc = 0x4eced8u;
    // NOP
    // 0x4ecedc: 0x0  nop
    ctx->pc = 0x4ecedcu;
    // NOP
    ctx->pc = 0x4ecee0u;
}
