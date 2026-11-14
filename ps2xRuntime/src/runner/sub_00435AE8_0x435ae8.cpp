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

// Function: sub_00435AE8
// Address: 0x435ae8 - 0x435b78
void sub_00435AE8_0x435ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435AE8_0x435ae8");
#endif

    switch (ctx->pc) {
        case 0x435b18u: goto label_435b18;
        default: break;
    }

    ctx->pc = 0x435ae8u;

    // 0x435ae8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x435ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435aec: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x435aecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x435af0: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x435af0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x435af4: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x435af4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x435af8: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x435af8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x435afc: 0x9cad0000  lwu         $t5, 0x0($a1)
    ctx->pc = 0x435afcu;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x435b00: 0x9cab0004  lwu         $t3, 0x4($a1)
    ctx->pc = 0x435b00u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x435b04: 0x9cac0008  lwu         $t4, 0x8($a1)
    ctx->pc = 0x435b04u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x435b08: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x435b08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x435b0c: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x435b0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x435b10: 0x718b6389  pcpyld      $t4, $t4, $t3
    ctx->pc = 0x435b10u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x435b14: 0x48ac2800  qmtc2.ni    $t4, $vf5
    ctx->pc = 0x435b14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
label_435b18:
    // 0x435b18: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x435B18u;
    {
        const bool branch_taken_0x435b18 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x435B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B18u;
        // 0x435b1c: 0x20a5000c  addi        $a1, $a1, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435b18) {
            ctx->pc = 0x435B70u;
            goto label_435b70;
        }
    }
    ctx->pc = 0x435B20u;
    // 0x435b20: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x435b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435b24: 0x4bc510bd  vmadday.xyz $ACC, $vf2, $vf5y
    ctx->pc = 0x435b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435b28: 0x4bc518be  vmaddaz.xyz $ACC, $vf3, $vf5z
    ctx->pc = 0x435b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x435b2c: 0x4bc0218b  vmaddw.xyz  $vf6, $vf4, $vf0w
    ctx->pc = 0x435b2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x435b30: 0x9cad0000  lwu         $t5, 0x0($a1)
    ctx->pc = 0x435b30u;
    SET_GPR_ZE32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x435b34: 0x9cab0004  lwu         $t3, 0x4($a1)
    ctx->pc = 0x435b34u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x435b38: 0x9cac0008  lwu         $t4, 0x8($a1)
    ctx->pc = 0x435b38u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x435b3c: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x435b3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x435b40: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x435b40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x435b44: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x435b44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x435b48: 0x718b6389  pcpyld      $t4, $t4, $t3
    ctx->pc = 0x435b48u;
    SET_GPR_VEC(ctx, 12, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 11)));
    // 0x435b4c: 0x48ac2800  qmtc2.ni    $t4, $vf5
    ctx->pc = 0x435b4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x435b50: 0x48393000  qmfc2.ni    $t9, $vf6
    ctx->pc = 0x435b50u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x435b54: 0x19103e  dsrl32      $v0, $t9, 0
    ctx->pc = 0x435b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x435b58: 0x73391ba9  pcpyud      $v1, $t9, $t9
    ctx->pc = 0x435b58u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x435b5c: 0xac990000  sw          $t9, 0x0($a0)
    ctx->pc = 0x435b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 25));
    // 0x435b60: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x435b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x435b64: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x435b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x435b68: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x435B68u;
    {
        const bool branch_taken_0x435b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B68u;
        // 0x435b6c: 0x2084000c  addi        $a0, $a0, 0xC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)12, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435b68) {
            ctx->pc = 0x435B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435b18;
        }
    }
    ctx->pc = 0x435B70u;
label_435b70:
    // 0x435b70: 0x3e00008  jr          $ra
    ctx->pc = 0x435B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B70u;
        // 0x435b74: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435B78u;
}
