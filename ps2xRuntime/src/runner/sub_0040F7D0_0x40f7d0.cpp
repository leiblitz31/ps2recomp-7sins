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

// Function: sub_0040F7D0
// Address: 0x40f7d0 - 0x40f990
void sub_0040F7D0_0x40f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F7D0_0x40f7d0");
#endif

    switch (ctx->pc) {
        case 0x40f96cu: goto label_40f96c;
        case 0x40f978u: goto label_40f978;
        default: break;
    }

    ctx->pc = 0x40f7d0u;

    // 0x40f7d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x40f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x40f7d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x40f7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40f7dc: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x40F7DCu;
    {
        const bool branch_taken_0x40f7dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7DCu;
        // 0x40f7e0: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f7dc) {
            ctx->pc = 0x40F820u;
            goto label_40f820;
        }
    }
    ctx->pc = 0x40F7E4u;
    // 0x40f7e4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x40F7E4u;
    {
        const bool branch_taken_0x40f7e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7E4u;
        // 0x40f7e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f7e4) {
            ctx->pc = 0x40F7FCu;
            goto label_40f7fc;
        }
    }
    ctx->pc = 0x40F7ECu;
    // 0x40f7ec: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x40F7ECu;
    {
        const bool branch_taken_0x40f7ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x40F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7ECu;
        // 0x40f7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f7ec) {
            ctx->pc = 0x40F8B8u;
            goto label_40f8b8;
        }
    }
    ctx->pc = 0x40F7F4u;
    // 0x40f7f4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x40F7F4u;
    {
        const bool branch_taken_0x40f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F7F4u;
        // 0x40f7f8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f7f4) {
            ctx->pc = 0x40F958u;
            goto label_40f958;
        }
    }
    ctx->pc = 0x40F7FCu;
label_40f7fc:
    // 0x40f7fc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x40f7fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40f800: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x40f800u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x40f804: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x40f804u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x40f808: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x40f808u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x40f80c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x40f80cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x40f810: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x40f810u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x40f814: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x40f814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x40f818: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x40F818u;
    {
        const bool branch_taken_0x40f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F818u;
        // 0x40f81c: 0x7ce30030  sq          $v1, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f818) {
            ctx->pc = 0x40F980u;
            goto label_40f980;
        }
    }
    ctx->pc = 0x40F820u;
label_40f820:
    // 0x40f820: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x40f820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40f824: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x40f824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x40f828: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x40f828u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x40f82c: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x40f82cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x40f830: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x40f830u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x40f834: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x40f834u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40f838: 0xd8e60010  lqc2        $vf6, 0x10($a3)
    ctx->pc = 0x40f838u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x40f83c: 0xd8e70020  lqc2        $vf7, 0x20($a3)
    ctx->pc = 0x40f83cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x40f840: 0xd8e80030  lqc2        $vf8, 0x30($a3)
    ctx->pc = 0x40f840u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x40f844: 0x9ce3000c  lwu         $v1, 0xC($a3)
    ctx->pc = 0x40f844u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40f848: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x40f848u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f84c: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x40f84cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f850: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x40f850u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x40f854: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x40f854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f858: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x40f858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f85c: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x40f85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x40f860: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x40f860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f864: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x40f864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f868: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x40f868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x40f86c: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x40f86cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f870: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x40f870u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f874: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x40f874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f878: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x40f878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x40f87c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x40f87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x40f880: 0xfba90000  sqc2        $vf9, 0x0($sp)
    ctx->pc = 0x40f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x40f884: 0xfbaa0010  sqc2        $vf10, 0x10($sp)
    ctx->pc = 0x40f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x40f888: 0xfbab0020  sqc2        $vf11, 0x20($sp)
    ctx->pc = 0x40f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x40f88c: 0xfbac0030  sqc2        $vf12, 0x30($sp)
    ctx->pc = 0x40f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x40f890: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x40f890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x40f894: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x40f894u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40f898: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x40f898u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x40f89c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x40f89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40f8a0: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x40f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x40f8a4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x40f8a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40f8a8: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x40f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x40f8ac: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x40f8acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40f8b0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x40F8B0u;
    {
        const bool branch_taken_0x40f8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F8B0u;
        // 0x40f8b4: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f8b0) {
            ctx->pc = 0x40F980u;
            goto label_40f980;
        }
    }
    ctx->pc = 0x40F8B8u;
label_40f8b8:
    // 0x40f8b8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x40f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40f8bc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x40f8bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40f8c0: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x40f8c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x40f8c4: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x40f8c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x40f8c8: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x40f8c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x40f8cc: 0x9ce4000c  lwu         $a0, 0xC($a3)
    ctx->pc = 0x40f8ccu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40f8d0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x40f8d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40f8d4: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x40f8d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x40f8d8: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x40f8d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x40f8dc: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x40f8dcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x40f8e0: 0x9ca3000c  lwu         $v1, 0xC($a1)
    ctx->pc = 0x40f8e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x40f8e4: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x40f8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f8e8: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x40f8e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f8ec: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x40f8ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x40f8f0: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x40f8f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f8f4: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x40f8f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f8f8: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x40f8f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x40f8fc: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x40f8fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f900: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x40f900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f904: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x40f904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x40f908: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x40f908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f90c: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x40f90cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f910: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x40f910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x40f914: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x40f914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x40f918: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x40f918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x40f91c: 0xf8490000  sqc2        $vf9, 0x0($v0)
    ctx->pc = 0x40f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x40f920: 0xf84a0010  sqc2        $vf10, 0x10($v0)
    ctx->pc = 0x40f920u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x40f924: 0xf84b0020  sqc2        $vf11, 0x20($v0)
    ctx->pc = 0x40f924u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x40f928: 0xf84c0030  sqc2        $vf12, 0x30($v0)
    ctx->pc = 0x40f928u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x40f92c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x40f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x40f930: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x40f930u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40f934: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x40f934u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x40f938: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x40f938u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40f93c: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x40f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x40f940: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x40f940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40f944: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x40f944u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x40f948: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x40f948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40f94c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x40F94Cu;
    {
        const bool branch_taken_0x40f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F94Cu;
        // 0x40f950: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f94c) {
            ctx->pc = 0x40F980u;
            goto label_40f980;
        }
    }
    ctx->pc = 0x40F954u;
    // 0x40f954: 0x0  nop
    ctx->pc = 0x40f954u;
    // NOP
label_40f958:
    // 0x40f958: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40f958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40f95c: 0x24a50628  addiu       $a1, $a1, 0x628
    ctx->pc = 0x40f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1576));
    // 0x40f960: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x40f960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x40f964: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40F964u;
    SET_GPR_U32(ctx, 31, 0x40F96Cu);
    ctx->pc = 0x40F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F964u;
    // 0x40f968: 0x34840003  ori         $a0, $a0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40F964u, 0x40F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F96Cu;
label_40f96c:
    // 0x40f96c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x40f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x40f970: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40F970u;
    SET_GPR_U32(ctx, 31, 0x40F978u);
    ctx->pc = 0x40F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F970u;
    // 0x40f974: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40F970u, 0x40F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F978u;
label_40f978:
    // 0x40f978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f97c: 0x0  nop
    ctx->pc = 0x40f97cu;
    // NOP
label_40f980:
    // 0x40f980: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40f984: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x40f984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f988: 0x3e00008  jr          $ra
    ctx->pc = 0x40F988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F988u;
        // 0x40f98c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40F988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40F990u;
}
