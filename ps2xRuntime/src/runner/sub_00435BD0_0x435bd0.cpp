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

// Function: sub_00435BD0
// Address: 0x435bd0 - 0x435c58
void sub_00435BD0_0x435bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435BD0_0x435bd0");
#endif

    switch (ctx->pc) {
        case 0x435bfcu: goto label_435bfc;
        default: break;
    }

    ctx->pc = 0x435bd0u;

    // 0x435bd0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x435bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435bd4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x435bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x435bd8: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x435bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x435bdc: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x435bdcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x435be0: 0x9cb80000  lwu         $t8, 0x0($a1)
    ctx->pc = 0x435be0u;
    SET_GPR_ZE32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x435be4: 0x9cae0004  lwu         $t6, 0x4($a1)
    ctx->pc = 0x435be4u;
    SET_GPR_ZE32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x435be8: 0x9caf0008  lwu         $t7, 0x8($a1)
    ctx->pc = 0x435be8u;
    SET_GPR_ZE32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x435bec: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x435becu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x435bf0: 0x1d87025  or          $t6, $t6, $t8
    ctx->pc = 0x435bf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x435bf4: 0x71ee7b89  pcpyld      $t7, $t7, $t6
    ctx->pc = 0x435bf4u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x435bf8: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x435bf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
label_435bfc:
    // 0x435bfc: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x435BFCu;
    {
        const bool branch_taken_0x435bfc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x435C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435BFCu;
        // 0x435c00: 0x20a5000c  addi        $a1, $a1, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435bfc) {
            ctx->pc = 0x435C50u;
            goto label_435c50;
        }
    }
    ctx->pc = 0x435C04u;
    // 0x435c04: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x435c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435c08: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x435c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435c0c: 0x4bc5198a  vmaddz.xyz  $vf6, $vf3, $vf5z
    ctx->pc = 0x435c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x435c10: 0x9cb80000  lwu         $t8, 0x0($a1)
    ctx->pc = 0x435c10u;
    SET_GPR_ZE32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x435c14: 0x9cae0004  lwu         $t6, 0x4($a1)
    ctx->pc = 0x435c14u;
    SET_GPR_ZE32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x435c18: 0x9caf0008  lwu         $t7, 0x8($a1)
    ctx->pc = 0x435c18u;
    SET_GPR_ZE32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x435c1c: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x435c1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x435c20: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x435c20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x435c24: 0x1d87025  or          $t6, $t6, $t8
    ctx->pc = 0x435c24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 24));
    // 0x435c28: 0x71ee7b89  pcpyld      $t7, $t7, $t6
    ctx->pc = 0x435c28u;
    SET_GPR_VEC(ctx, 15, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x435c2c: 0x48af2800  qmtc2.ni    $t7, $vf5
    ctx->pc = 0x435c2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x435c30: 0x48393000  qmfc2.ni    $t9, $vf6
    ctx->pc = 0x435c30u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x435c34: 0x19103e  dsrl32      $v0, $t9, 0
    ctx->pc = 0x435c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x435c38: 0x73391ba9  pcpyud      $v1, $t9, $t9
    ctx->pc = 0x435c38u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x435c3c: 0xac990000  sw          $t9, 0x0($a0)
    ctx->pc = 0x435c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 25));
    // 0x435c40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x435c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x435c44: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x435c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x435c48: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x435C48u;
    {
        const bool branch_taken_0x435c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C48u;
        // 0x435c4c: 0x2084000c  addi        $a0, $a0, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c48) {
            ctx->pc = 0x435BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435bfc;
        }
    }
    ctx->pc = 0x435C50u;
label_435c50:
    // 0x435c50: 0x3e00008  jr          $ra
    ctx->pc = 0x435C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C50u;
        // 0x435c54: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435C58u;
}
