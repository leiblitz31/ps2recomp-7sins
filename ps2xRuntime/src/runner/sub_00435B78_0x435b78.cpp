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

// Function: sub_00435B78
// Address: 0x435b78 - 0x435bd0
void sub_00435B78_0x435b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435B78_0x435b78");
#endif

    ctx->pc = 0x435b78u;

    // 0x435b78: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x435b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x435b7c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x435b7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x435b80: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x435b80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x435b84: 0x9ca10000  lwu         $at, 0x0($a1)
    ctx->pc = 0x435b84u;
    SET_GPR_ZE32(ctx, 1, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x435b88: 0x9ca20004  lwu         $v0, 0x4($a1)
    ctx->pc = 0x435b88u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x435b8c: 0x9ca30008  lwu         $v1, 0x8($a1)
    ctx->pc = 0x435b8cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x435b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x435b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x435b94: 0x411025  or          $v0, $v0, $at
    ctx->pc = 0x435b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 1));
    // 0x435b98: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x435b98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x435b9c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x435b9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x435ba0: 0x4bc409bc  vmulax.xyz  $ACC, $vf1, $vf4x
    ctx->pc = 0x435ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435ba4: 0x4bc410bd  vmadday.xyz $ACC, $vf2, $vf4y
    ctx->pc = 0x435ba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435ba8: 0x4bc4190a  vmaddz.xyz  $vf4, $vf3, $vf4z
    ctx->pc = 0x435ba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x435bac: 0x48212000  qmfc2.ni    $at, $vf4
    ctx->pc = 0x435bacu;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x435bb0: 0x1103e  dsrl32      $v0, $at, 0
    ctx->pc = 0x435bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 0));
    // 0x435bb4: 0x70211ba9  pcpyud      $v1, $at, $at
    ctx->pc = 0x435bb4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 1)));
    // 0x435bb8: 0xac810000  sw          $at, 0x0($a0)
    ctx->pc = 0x435bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 1));
    // 0x435bbc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x435bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x435bc0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x435bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x435bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x435BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435BC4u;
        // 0x435bc8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435BCCu;
    // 0x435bcc: 0x0  nop
    ctx->pc = 0x435bccu;
    // NOP
    ctx->pc = 0x435bd0u;
}
