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

// Function: sub_0032B448
// Address: 0x32b448 - 0x32bf98
void sub_0032B448_0x32b448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B448_0x32b448");
#endif

    switch (ctx->pc) {
        case 0x32b4a4u: goto label_32b4a4;
        case 0x32b4ccu: goto label_32b4cc;
        case 0x32b4d8u: goto label_32b4d8;
        case 0x32b518u: goto label_32b518;
        case 0x32b5f8u: goto label_32b5f8;
        case 0x32b6d8u: goto label_32b6d8;
        case 0x32b7c0u: goto label_32b7c0;
        case 0x32b7c8u: goto label_32b7c8;
        case 0x32b8a0u: goto label_32b8a0;
        case 0x32b978u: goto label_32b978;
        case 0x32ba50u: goto label_32ba50;
        case 0x32bb54u: goto label_32bb54;
        case 0x32bbe4u: goto label_32bbe4;
        case 0x32bbf4u: goto label_32bbf4;
        case 0x32bc1cu: goto label_32bc1c;
        case 0x32be28u: goto label_32be28;
        default: break;
    }

    ctx->pc = 0x32b448u;

    // 0x32b448: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x32b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x32b44c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x32b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x32b450: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x32b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x32b454: 0x2463ac48  addiu       $v1, $v1, -0x53B8
    ctx->pc = 0x32b454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945864));
    // 0x32b458: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x32b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x32b45c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32b45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b460: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x32b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x32b464: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b468: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x32b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x32b46c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x32b46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x32b470: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x32b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x32b474: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x32b474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x32b478: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x32b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x32b47c: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x32b47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x32b480: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x32b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x32b484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b484u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5DAC4Cu));
    // 0x32b488: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32b48c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32b48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b490: 0x1200020f  beqz        $s0, . + 4 + (0x20F << 2)
    ctx->pc = 0x32B490u;
    {
        const bool branch_taken_0x32b490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B490u;
        // 0x32b494: 0x8c77000c  lw          $s7, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b490) {
            ctx->pc = 0x32BCD0u;
            goto label_32bcd0;
        }
    }
    ctx->pc = 0x32B498u;
    // 0x32b498: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x32b498u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32b49c: 0xc0de64c  jal         func_379930
    ctx->pc = 0x32B49Cu;
    SET_GPR_U32(ctx, 31, 0x32B4A4u);
    ctx->pc = 0x32B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B49Cu;
    // 0x32b4a0: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379930u, 0x32B49Cu, 0x32B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4A4u;
label_32b4a4:
    // 0x32b4a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b4a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x32b4a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4ac: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x32b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32b4b0: 0x104001a1  beqz        $v0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x32B4B0u;
    {
        const bool branch_taken_0x32b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4B0u;
        // 0x32b4b4: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4b0) {
            ctx->pc = 0x32BB38u;
            goto label_32bb38;
        }
    }
    ctx->pc = 0x32B4B8u;
    // 0x32b4b8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x32b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32b4bc: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x32b4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32b4c0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x32b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x32b4c4: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B4C4u;
    SET_GPR_U32(ctx, 31, 0x32B4CCu);
    ctx->pc = 0x32B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4C4u;
    // 0x32b4c8: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B4C4u, 0x32B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4CCu;
label_32b4cc:
    // 0x32b4cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4d0: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x32B4D0u;
    SET_GPR_U32(ctx, 31, 0x32B4D8u);
    ctx->pc = 0x32B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4D0u;
    // 0x32b4d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x32B4D0u, 0x32B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4D8u;
label_32b4d8:
    // 0x32b4d8: 0x1a4002a1  blez        $s2, . + 4 + (0x2A1 << 2)
    ctx->pc = 0x32B4D8u;
    {
        const bool branch_taken_0x32b4d8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x32B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4D8u;
        // 0x32b4dc: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4d8) {
            ctx->pc = 0x32BF60u;
            goto label_32bf60;
        }
    }
    ctx->pc = 0x32B4E0u;
    // 0x32b4e0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x32b4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32b4e4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x32b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x32b4e8: 0x2e0a82d  daddu       $s5, $s7, $zero
    ctx->pc = 0x32b4e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4ec: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x32b4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4f0: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x32b4f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4f4: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x32B4F4u;
    {
        const bool branch_taken_0x32b4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4F4u;
        // 0x32b4f8: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4f4) {
            ctx->pc = 0x32B7B8u;
            goto label_32b7b8;
        }
    }
    ctx->pc = 0x32B4FCu;
    // 0x32b4fc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x32b4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32b500: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x32B500u;
    {
        const bool branch_taken_0x32b500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B500u;
        // 0x32b504: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b500) {
            ctx->pc = 0x32B6D0u;
            goto label_32b6d0;
        }
    }
    ctx->pc = 0x32B508u;
    // 0x32b508: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x32B508u;
    {
        const bool branch_taken_0x32b508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b508) {
            ctx->pc = 0x32B5F0u;
            goto label_32b5f0;
        }
    }
    ctx->pc = 0x32B510u;
    // 0x32b510: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B510u;
    SET_GPR_U32(ctx, 31, 0x32B518u);
    ctx->pc = 0x32B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B510u;
    // 0x32b514: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B510u, 0x32B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B518u;
label_32b518:
    // 0x32b518: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x32b518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32b51c: 0xda820010  lqc2        $vf2, 0x10($s4)
    ctx->pc = 0x32b51cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x32b520: 0xda830020  lqc2        $vf3, 0x20($s4)
    ctx->pc = 0x32b520u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x32b524: 0xda840030  lqc2        $vf4, 0x30($s4)
    ctx->pc = 0x32b524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x32b528: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32b528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b52c: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32b52cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32b530: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32b530u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b534: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32b534u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32b538: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b53c: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b53cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b540: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b540u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b544: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b548: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b54c: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b54cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b550: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b554: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b554u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b558: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b558u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b55c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b560: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b564: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b568: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b56c: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b570: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32b570u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b574: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32b574u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b578: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32b578u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b57c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32b57cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b580: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32b580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32b584: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32b584u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32b588: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32b588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32b58c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32b58cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b590: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32b590u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b594: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32b594u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b598: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32b598u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b59c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b59cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5a0: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b5a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5a4: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b5a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b5a8: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b5a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5ac: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b5acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5b0: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b5b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b5b4: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b5b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5b8: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b5b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5bc: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b5bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b5c0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b5c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5c4: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b5c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5c8: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b5c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b5cc: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b5d0: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x32b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b5d4: 0xfaaa0010  sqc2        $vf10, 0x10($s5)
    ctx->pc = 0x32b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b5d8: 0xfaab0020  sqc2        $vf11, 0x20($s5)
    ctx->pc = 0x32b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b5dc: 0xfaac0030  sqc2        $vf12, 0x30($s5)
    ctx->pc = 0x32b5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b5e0: 0x26f50040  addiu       $s5, $s7, 0x40
    ctx->pc = 0x32b5e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x32b5e4: 0x26d40040  addiu       $s4, $s6, 0x40
    ctx->pc = 0x32b5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x32b5e8: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x32b5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x32b5ec: 0x265effff  addiu       $fp, $s2, -0x1
    ctx->pc = 0x32b5ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_32b5f0:
    // 0x32b5f0: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B5F0u;
    SET_GPR_U32(ctx, 31, 0x32B5F8u);
    ctx->pc = 0x32B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5F0u;
    // 0x32b5f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B5F0u, 0x32B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5F8u;
label_32b5f8:
    // 0x32b5f8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x32b5f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32b5fc: 0xda820010  lqc2        $vf2, 0x10($s4)
    ctx->pc = 0x32b5fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x32b600: 0xda830020  lqc2        $vf3, 0x20($s4)
    ctx->pc = 0x32b600u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x32b604: 0xda840030  lqc2        $vf4, 0x30($s4)
    ctx->pc = 0x32b604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x32b608: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32b608u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b60c: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32b60cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32b610: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32b610u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b614: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32b614u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32b618: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b61c: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b620: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b624: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b628: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b62c: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b630: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b634: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b638: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b63c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b63cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b640: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b640u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b644: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b644u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b648: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b64c: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b650: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32b650u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b654: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32b654u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b658: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32b658u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b65c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32b65cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b660: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32b660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32b664: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32b664u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32b668: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32b668u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32b66c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32b66cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b670: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32b670u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b674: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32b674u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b678: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32b678u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b67c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b680: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b684: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b688: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b688u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b68c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b68cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b690: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b690u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b694: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b698: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b698u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b69c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b69cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b6a0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b6a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b6a4: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b6a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b6a8: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b6a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b6ac: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b6b0: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x32b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b6b4: 0xfaaa0010  sqc2        $vf10, 0x10($s5)
    ctx->pc = 0x32b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b6b8: 0xfaab0020  sqc2        $vf11, 0x20($s5)
    ctx->pc = 0x32b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b6bc: 0xfaac0030  sqc2        $vf12, 0x30($s5)
    ctx->pc = 0x32b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b6c0: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x32b6c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x32b6c4: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x32b6c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x32b6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32b6cc: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x32b6ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_32b6d0:
    // 0x32b6d0: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B6D0u;
    SET_GPR_U32(ctx, 31, 0x32B6D8u);
    ctx->pc = 0x32B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6D0u;
    // 0x32b6d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B6D0u, 0x32B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6D8u;
label_32b6d8:
    // 0x32b6d8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x32b6d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32b6dc: 0xda820010  lqc2        $vf2, 0x10($s4)
    ctx->pc = 0x32b6dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x32b6e0: 0xda830020  lqc2        $vf3, 0x20($s4)
    ctx->pc = 0x32b6e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x32b6e4: 0xda840030  lqc2        $vf4, 0x30($s4)
    ctx->pc = 0x32b6e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x32b6e8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32b6e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b6ec: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32b6ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32b6f0: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32b6f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b6f4: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32b6f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32b6f8: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b6fc: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b6fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b700: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b700u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b704: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b708: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b708u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b70c: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b70cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b710: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b714: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b714u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b718: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b71c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b71cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b720: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b724: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b728: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b72c: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b730: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32b730u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b734: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32b734u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b738: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32b738u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b73c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32b73cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b740: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32b740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32b744: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32b744u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32b748: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32b748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32b74c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32b74cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b750: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32b750u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b754: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32b754u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b758: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32b758u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b75c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b75cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b760: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b760u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b764: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b764u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b768: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b76c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b76cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b770: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b774: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b778: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b778u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b77c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b77cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b780: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b784: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b788: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b78c: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b78cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b790: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x32b790u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b794: 0xfaaa0010  sqc2        $vf10, 0x10($s5)
    ctx->pc = 0x32b794u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b798: 0xfaab0020  sqc2        $vf11, 0x20($s5)
    ctx->pc = 0x32b798u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b79c: 0xfaac0030  sqc2        $vf12, 0x30($s5)
    ctx->pc = 0x32b79cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b7a0: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x32b7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x32b7a4: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x32b7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x32b7a8: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x32b7a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x32b7ac: 0x13c001ec  beqz        $fp, . + 4 + (0x1EC << 2)
    ctx->pc = 0x32B7ACu;
    {
        const bool branch_taken_0x32b7ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7ACu;
        // 0x32b7b0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7ac) {
            ctx->pc = 0x32BF60u;
            goto label_32bf60;
        }
    }
    ctx->pc = 0x32B7B4u;
    // 0x32b7b4: 0x0  nop
    ctx->pc = 0x32b7b4u;
    // NOP
label_32b7b8:
    // 0x32b7b8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x32b7b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b7bc: 0x0  nop
    ctx->pc = 0x32b7bcu;
    // NOP
label_32b7c0:
    // 0x32b7c0: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B7C0u;
    SET_GPR_U32(ctx, 31, 0x32B7C8u);
    ctx->pc = 0x32B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7C0u;
    // 0x32b7c4: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B7C0u, 0x32B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B7C8u;
label_32b7c8:
    // 0x32b7c8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x32b7c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32b7cc: 0xda820010  lqc2        $vf2, 0x10($s4)
    ctx->pc = 0x32b7ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x32b7d0: 0xda830020  lqc2        $vf3, 0x20($s4)
    ctx->pc = 0x32b7d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x32b7d4: 0xda840030  lqc2        $vf4, 0x30($s4)
    ctx->pc = 0x32b7d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x32b7d8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32b7d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b7dc: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32b7dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32b7e0: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32b7e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b7e4: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32b7e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32b7e8: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b7e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b7ec: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b7ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b7f0: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b7f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b7f4: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b7f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b7f8: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b7f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b7fc: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b7fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b800: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b804: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b808: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b80c: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b80cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b810: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b814: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b814u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b818: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b81c: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32b81cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b820: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32b820u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b824: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32b824u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b828: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32b828u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b82c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32b82cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b830: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32b830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32b834: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32b834u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32b838: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32b838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32b83c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32b83cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b840: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32b840u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b844: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32b844u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b848: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32b848u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b84c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b84cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b850: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b850u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b854: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b854u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b858: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b85c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b860: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b864: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b868: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b86c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b86cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b870: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b874: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b874u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b878: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b878u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b87c: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b87cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b880: 0xfaa90000  sqc2        $vf9, 0x0($s5)
    ctx->pc = 0x32b880u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b884: 0xfaaa0010  sqc2        $vf10, 0x10($s5)
    ctx->pc = 0x32b884u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b888: 0xfaab0020  sqc2        $vf11, 0x20($s5)
    ctx->pc = 0x32b888u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b88c: 0xfaac0030  sqc2        $vf12, 0x30($s5)
    ctx->pc = 0x32b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b890: 0x26b10040  addiu       $s1, $s5, 0x40
    ctx->pc = 0x32b890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x32b894: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x32b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x32b898: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B898u;
    SET_GPR_U32(ctx, 31, 0x32B8A0u);
    ctx->pc = 0x32B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B898u;
    // 0x32b89c: 0x26900040  addiu       $s0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B898u, 0x32B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8A0u;
label_32b8a0:
    // 0x32b8a0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32b8a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b8a4: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x32b8a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32b8a8: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x32b8a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32b8ac: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x32b8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32b8b0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32b8b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b8b4: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32b8b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32b8b8: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32b8b8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b8bc: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32b8bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32b8c0: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b8c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8c4: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b8c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8c8: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b8c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b8cc: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b8ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8d0: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b8d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8d4: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b8d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b8d8: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b8d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8dc: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b8dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8e0: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b8e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b8e4: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b8e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8e8: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b8e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8ec: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b8ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b8f0: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b8f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b8f4: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b8f8: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b8fc: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b900: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32b900u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b904: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32b904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b908: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32b908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32b90c: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32b90cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32b910: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32b910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32b914: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32b914u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b918: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32b918u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b91c: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32b91cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b920: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32b920u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b924: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b928: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b92c: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b92cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b930: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b934: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b938: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b93c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b93cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b940: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b944: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b944u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b948: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b94c: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b94cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b950: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b954: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b958: 0xfa290000  sqc2        $vf9, 0x0($s1)
    ctx->pc = 0x32b958u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b95c: 0xfa2a0010  sqc2        $vf10, 0x10($s1)
    ctx->pc = 0x32b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b960: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x32b960u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b964: 0xfa2c0030  sqc2        $vf12, 0x30($s1)
    ctx->pc = 0x32b964u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b968: 0x26b20080  addiu       $s2, $s5, 0x80
    ctx->pc = 0x32b968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x32b96c: 0x8ec40020  lw          $a0, 0x20($s6)
    ctx->pc = 0x32b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x32b970: 0xc106784  jal         func_419E10
    ctx->pc = 0x32B970u;
    SET_GPR_U32(ctx, 31, 0x32B978u);
    ctx->pc = 0x32B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B970u;
    // 0x32b974: 0x26900080  addiu       $s0, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32B970u, 0x32B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B978u;
label_32b978:
    // 0x32b978: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32b978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b97c: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x32b97cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32b980: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x32b980u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32b984: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x32b984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32b988: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32b988u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b98c: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32b98cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32b990: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32b990u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b994: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32b994u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32b998: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b99c: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32b99cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9a0: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32b9a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32b9a4: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32b9a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9a8: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32b9a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9ac: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32b9acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32b9b0: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32b9b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9b4: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32b9b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9b8: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32b9b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32b9bc: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32b9bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9c0: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32b9c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9c4: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32b9c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32b9c8: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32b9c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32b9cc: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32b9d0: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32b9d4: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32b9d8: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32b9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32b9dc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32b9dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32b9e0: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32b9e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32b9e4: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32b9e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32b9e8: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32b9e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32b9ec: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32b9ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b9f0: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32b9f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b9f4: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32b9f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b9f8: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32b9f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b9fc: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32b9fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba00: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32ba00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba04: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32ba04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32ba08: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32ba08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba0c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32ba0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba10: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32ba10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32ba14: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32ba14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba18: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32ba18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba1c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32ba1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32ba20: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32ba20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba24: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32ba24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba28: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32ba28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba2c: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32ba2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32ba30: 0xfa490000  sqc2        $vf9, 0x0($s2)
    ctx->pc = 0x32ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32ba34: 0xfa4a0010  sqc2        $vf10, 0x10($s2)
    ctx->pc = 0x32ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32ba38: 0xfa4b0020  sqc2        $vf11, 0x20($s2)
    ctx->pc = 0x32ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32ba3c: 0xfa4c0030  sqc2        $vf12, 0x30($s2)
    ctx->pc = 0x32ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32ba40: 0x26b100c0  addiu       $s1, $s5, 0xC0
    ctx->pc = 0x32ba40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x32ba44: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x32ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x32ba48: 0xc106784  jal         func_419E10
    ctx->pc = 0x32BA48u;
    SET_GPR_U32(ctx, 31, 0x32BA50u);
    ctx->pc = 0x32BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA48u;
    // 0x32ba4c: 0x269000c0  addiu       $s0, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32BA48u, 0x32BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA50u;
label_32ba50:
    // 0x32ba50: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32ba50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32ba54: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x32ba54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32ba58: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x32ba58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32ba5c: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x32ba5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32ba60: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x32ba60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ba64: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x32ba64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32ba68: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x32ba68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32ba6c: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x32ba6cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x32ba70: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32ba70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba74: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32ba74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba78: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32ba78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32ba7c: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32ba7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba80: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32ba80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba84: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32ba84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32ba88: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32ba88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba8c: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32ba8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba90: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32ba90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32ba94: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32ba94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba98: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32ba98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32ba9c: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32ba9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32baa0: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32baa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32baa4: 0xfa690000  sqc2        $vf9, 0x0($s3)
    ctx->pc = 0x32baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32baa8: 0xfa6a0010  sqc2        $vf10, 0x10($s3)
    ctx->pc = 0x32baa8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32baac: 0xfa6b0020  sqc2        $vf11, 0x20($s3)
    ctx->pc = 0x32baacu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32bab0: 0xfa6c0030  sqc2        $vf12, 0x30($s3)
    ctx->pc = 0x32bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32bab4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x32bab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32bab8: 0xda620010  lqc2        $vf2, 0x10($s3)
    ctx->pc = 0x32bab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x32babc: 0xda630020  lqc2        $vf3, 0x20($s3)
    ctx->pc = 0x32babcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x32bac0: 0xda640030  lqc2        $vf4, 0x30($s3)
    ctx->pc = 0x32bac0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x32bac4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x32bac4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bac8: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x32bac8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bacc: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x32baccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bad0: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x32bad0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bad4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32bad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bad8: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32bad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32badc: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32badcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32bae0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32bae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bae4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32bae4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bae8: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32bae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32baec: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32baecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32baf0: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32baf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32baf4: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32baf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32baf8: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32baf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bafc: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32bafcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb00: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32bb00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb04: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32bb04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32bb08: 0xfa290000  sqc2        $vf9, 0x0($s1)
    ctx->pc = 0x32bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32bb0c: 0xfa2a0010  sqc2        $vf10, 0x10($s1)
    ctx->pc = 0x32bb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32bb10: 0xfa2b0020  sqc2        $vf11, 0x20($s1)
    ctx->pc = 0x32bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32bb14: 0xfa2c0030  sqc2        $vf12, 0x30($s1)
    ctx->pc = 0x32bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32bb18: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x32bb18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x32bb1c: 0x26940100  addiu       $s4, $s4, 0x100
    ctx->pc = 0x32bb1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x32bb20: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x32bb20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x32bb24: 0x17c0ff26  bnez        $fp, . + 4 + (-0xDA << 2)
    ctx->pc = 0x32BB24u;
    {
        const bool branch_taken_0x32bb24 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB24u;
        // 0x32bb28: 0x26d60040  addiu       $s6, $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb24) {
            ctx->pc = 0x32B7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b7c0;
        }
    }
    ctx->pc = 0x32BB2Cu;
    // 0x32bb2c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x32BB2Cu;
    {
        const bool branch_taken_0x32bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB2Cu;
        // 0x32bb30: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb2c) {
            ctx->pc = 0x32BF64u;
            goto label_32bf64;
        }
    }
    ctx->pc = 0x32BB34u;
    // 0x32bb34: 0x0  nop
    ctx->pc = 0x32bb34u;
    // NOP
label_32bb38:
    // 0x32bb38: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32BB38u;
    {
        const bool branch_taken_0x32bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB38u;
        // 0x32bb3c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb38) {
            ctx->pc = 0x32BBD8u;
            goto label_32bbd8;
        }
    }
    ctx->pc = 0x32BB40u;
    // 0x32bb40: 0x2420818  mult        $at, $s2, $v0
    ctx->pc = 0x32bb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x32bb44: 0x2c02820  add         $a1, $s6, $zero
    ctx->pc = 0x32bb44u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x32bb48: 0x2202020  add         $a0, $s1, $zero
    ctx->pc = 0x32bb48u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x32bb4c: 0x2e01820  add         $v1, $s7, $zero
    ctx->pc = 0x32bb4cu;
    {     int32_t rs_val = GPR_S32(ctx, 23);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x32bb50: 0x610820  add         $at, $v1, $at
    ctx->pc = 0x32bb50u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_32bb54:
    // 0x32bb54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32bb54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32bb58: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x32bb58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32bb5c: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x32bb5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x32bb60: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x32bb60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x32bb64: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x32bb64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bb68: 0xd8860010  lqc2        $vf6, 0x10($a0)
    ctx->pc = 0x32bb68u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32bb6c: 0xd8870020  lqc2        $vf7, 0x20($a0)
    ctx->pc = 0x32bb6cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x32bb70: 0xd8880030  lqc2        $vf8, 0x30($a0)
    ctx->pc = 0x32bb70u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x32bb74: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32bb74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb78: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32bb78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb7c: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32bb7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32bb80: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32bb80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb84: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32bb84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb88: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32bb88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32bb8c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32bb8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb90: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32bb90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb94: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32bb94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32bb98: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32bb98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bb9c: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32bb9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bba0: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32bba0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bba4: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32bba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32bba8: 0xf8690000  sqc2        $vf9, 0x0($v1)
    ctx->pc = 0x32bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x32bbac: 0xf86a0010  sqc2        $vf10, 0x10($v1)
    ctx->pc = 0x32bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x32bbb0: 0xf86b0020  sqc2        $vf11, 0x20($v1)
    ctx->pc = 0x32bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x32bbb4: 0xf86c0030  sqc2        $vf12, 0x30($v1)
    ctx->pc = 0x32bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x32bbb8: 0x20630040  addi        $v1, $v1, 0x40
    ctx->pc = 0x32bbb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x32bbbc: 0xa22820  add         $a1, $a1, $v0
    ctx->pc = 0x32bbbcu;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x32bbc0: 0x822020  add         $a0, $a0, $v0
    ctx->pc = 0x32bbc0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x32bbc4: 0x1423ffe3  bne         $at, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x32BBC4u;
    {
        const bool branch_taken_0x32bbc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 3));
        if (branch_taken_0x32bbc4) {
            ctx->pc = 0x32BB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32bb54;
        }
    }
    ctx->pc = 0x32BBCCu;
    // 0x32bbcc: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x32BBCCu;
    {
        const bool branch_taken_0x32bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBCCu;
        // 0x32bbd0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbcc) {
            ctx->pc = 0x32BF64u;
            goto label_32bf64;
        }
    }
    ctx->pc = 0x32BBD4u;
    // 0x32bbd4: 0x0  nop
    ctx->pc = 0x32bbd4u;
    // NOP
label_32bbd8:
    // 0x32bbd8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x32bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32bbdc: 0xc106784  jal         func_419E10
    ctx->pc = 0x32BBDCu;
    SET_GPR_U32(ctx, 31, 0x32BBE4u);
    ctx->pc = 0x32BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBDCu;
    // 0x32bbe0: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32BBDCu, 0x32BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBE4u;
label_32bbe4:
    // 0x32bbe4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x32bbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x32bbe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32bbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbec: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x32BBECu;
    SET_GPR_U32(ctx, 31, 0x32BBF4u);
    ctx->pc = 0x32BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BBECu;
    // 0x32bbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x32BBECu, 0x32BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BBF4u;
label_32bbf4:
    // 0x32bbf4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x32bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x32bbf8: 0x2430818  mult        $at, $s2, $v1
    ctx->pc = 0x32bbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    // 0x32bbfc: 0x2c02820  add         $a1, $s6, $zero
    ctx->pc = 0x32bbfcu;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x32bc00: 0x2202020  add         $a0, $s1, $zero
    ctx->pc = 0x32bc00u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x32bc04: 0x2e01020  add         $v0, $s7, $zero
    ctx->pc = 0x32bc04u;
    {     int32_t rs_val = GPR_S32(ctx, 23);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x32bc08: 0xda0d0000  lqc2        $vf13, 0x0($s0)
    ctx->pc = 0x32bc08u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32bc0c: 0xda0e0010  lqc2        $vf14, 0x10($s0)
    ctx->pc = 0x32bc0cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32bc10: 0xda0f0020  lqc2        $vf15, 0x20($s0)
    ctx->pc = 0x32bc10u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x32bc14: 0xda100030  lqc2        $vf16, 0x30($s0)
    ctx->pc = 0x32bc14u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x32bc18: 0x410820  add         $at, $v0, $at
    ctx->pc = 0x32bc18u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_32bc1c:
    // 0x32bc1c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32bc1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32bc20: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x32bc20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32bc24: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x32bc24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x32bc28: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x32bc28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x32bc2c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x32bc2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bc30: 0xd8860010  lqc2        $vf6, 0x10($a0)
    ctx->pc = 0x32bc30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32bc34: 0xd8870020  lqc2        $vf7, 0x20($a0)
    ctx->pc = 0x32bc34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x32bc38: 0xd8880030  lqc2        $vf8, 0x30($a0)
    ctx->pc = 0x32bc38u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x32bc3c: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x32bc3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc40: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x32bc40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc44: 0x4be13a4a  vmaddz.xyzw $vf9, $vf7, $vf1z
    ctx->pc = 0x32bc44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x32bc48: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x32bc48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc4c: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x32bc4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc50: 0x4be23a8a  vmaddz.xyzw $vf10, $vf7, $vf2z
    ctx->pc = 0x32bc50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x32bc54: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x32bc54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc58: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x32bc58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc5c: 0x4be33aca  vmaddz.xyzw $vf11, $vf7, $vf3z
    ctx->pc = 0x32bc5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x32bc60: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x32bc60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc64: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x32bc64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc68: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x32bc68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc6c: 0x4be0430b  vmaddw.xyzw $vf12, $vf8, $vf0w
    ctx->pc = 0x32bc6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x32bc70: 0x4be969bc  vmulax.xyzw $ACC, $vf13, $vf9x
    ctx->pc = 0x32bc70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc74: 0x4be970bd  vmadday.xyzw $ACC, $vf14, $vf9y
    ctx->pc = 0x32bc74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc78: 0x4be9784a  vmaddz.xyzw $vf1, $vf15, $vf9z
    ctx->pc = 0x32bc78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32bc7c: 0x4bea69bc  vmulax.xyzw $ACC, $vf13, $vf10x
    ctx->pc = 0x32bc7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc80: 0x4bea70bd  vmadday.xyzw $ACC, $vf14, $vf10y
    ctx->pc = 0x32bc80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc84: 0x4bea788a  vmaddz.xyzw $vf2, $vf15, $vf10z
    ctx->pc = 0x32bc84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32bc88: 0x4beb69bc  vmulax.xyzw $ACC, $vf13, $vf11x
    ctx->pc = 0x32bc88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc8c: 0x4beb70bd  vmadday.xyzw $ACC, $vf14, $vf11y
    ctx->pc = 0x32bc8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc90: 0x4beb78ca  vmaddz.xyzw $vf3, $vf15, $vf11z
    ctx->pc = 0x32bc90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32bc94: 0x4bec69bc  vmulax.xyzw $ACC, $vf13, $vf12x
    ctx->pc = 0x32bc94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc98: 0x4bec70bd  vmadday.xyzw $ACC, $vf14, $vf12y
    ctx->pc = 0x32bc98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bc9c: 0x4bec78be  vmaddaz.xyzw $ACC, $vf15, $vf12z
    ctx->pc = 0x32bc9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32bca0: 0x4be0810b  vmaddw.xyzw $vf4, $vf16, $vf0w
    ctx->pc = 0x32bca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32bca4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32bca8: 0xf8420010  sqc2        $vf2, 0x10($v0)
    ctx->pc = 0x32bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x32bcac: 0xf8430020  sqc2        $vf3, 0x20($v0)
    ctx->pc = 0x32bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x32bcb0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x32bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x32bcb4: 0x20420040  addi        $v0, $v0, 0x40
    ctx->pc = 0x32bcb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x32bcb8: 0xa32820  add         $a1, $a1, $v1
    ctx->pc = 0x32bcb8u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x32bcbc: 0x832020  add         $a0, $a0, $v1
    ctx->pc = 0x32bcbcu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x32bcc0: 0x1422ffd6  bne         $at, $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x32BCC0u;
    {
        const bool branch_taken_0x32bcc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 2));
        if (branch_taken_0x32bcc0) {
            ctx->pc = 0x32BC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32bc1c;
        }
    }
    ctx->pc = 0x32BCC8u;
    // 0x32bcc8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x32BCC8u;
    {
        const bool branch_taken_0x32bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCC8u;
        // 0x32bccc: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcc8) {
            ctx->pc = 0x32BF64u;
            goto label_32bf64;
        }
    }
    ctx->pc = 0x32BCD0u;
label_32bcd0:
    // 0x32bcd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bcd4: 0x108000a2  beqz        $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x32BCD4u;
    {
        const bool branch_taken_0x32bcd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCD4u;
        // 0x32bcd8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcd4) {
            ctx->pc = 0x32BF60u;
            goto label_32bf60;
        }
    }
    ctx->pc = 0x32BCDCu;
    // 0x32bcdc: 0x3c130002  lui         $s3, 0x2
    ctx->pc = 0x32bcdcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2 << 16));
    // 0x32bce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32bce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32bce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32bce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bcec: 0x36730003  ori         $s3, $s3, 0x3
    ctx->pc = 0x32bcecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x32bcf0: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x32bcf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcf4: 0x1880002a  blez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x32BCF4u;
    {
        const bool branch_taken_0x32bcf4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x32BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCF4u;
        // 0x32bcf8: 0x30860003  andi        $a2, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcf4) {
            ctx->pc = 0x32BDA0u;
            goto label_32bda0;
        }
    }
    ctx->pc = 0x32BCFCu;
    // 0x32bcfc: 0x10c0003c  beqz        $a2, . + 4 + (0x3C << 2)
    ctx->pc = 0x32BCFCu;
    {
        const bool branch_taken_0x32bcfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCFCu;
        // 0x32bd00: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcfc) {
            ctx->pc = 0x32BDF0u;
            goto label_32bdf0;
        }
    }
    ctx->pc = 0x32BD04u;
    // 0x32bd04: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x32BD04u;
    {
        const bool branch_taken_0x32bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bd04) {
            ctx->pc = 0x32BD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BD04u;
            // 0x32bd08: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BDA8u;
            goto label_32bda8;
        }
    }
    ctx->pc = 0x32BD0Cu;
    // 0x32bd0c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x32bd0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32bd10: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x32BD10u;
    {
        const bool branch_taken_0x32bd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bd10) {
            ctx->pc = 0x32BD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BD10u;
            // 0x32bd14: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BD60u;
            goto label_32bd60;
        }
    }
    ctx->pc = 0x32BD18u;
    // 0x32bd18: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x32bd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x32bd1c: 0xe6e10028  swc1        $f1, 0x28($s7)
    ctx->pc = 0x32bd1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 40), bits); }
    // 0x32bd20: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32bd24: 0xe6e10014  swc1        $f1, 0x14($s7)
    ctx->pc = 0x32bd24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 20), bits); }
    // 0x32bd28: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x32bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
    // 0x32bd2c: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x32bd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x32bd30: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x32bd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x32bd34: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x32bd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x32bd38: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x32bd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x32bd3c: 0xe6e00024  swc1        $f0, 0x24($s7)
    ctx->pc = 0x32bd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 36), bits); }
    // 0x32bd40: 0xe6e00020  swc1        $f0, 0x20($s7)
    ctx->pc = 0x32bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 32), bits); }
    // 0x32bd44: 0xe6e00018  swc1        $f0, 0x18($s7)
    ctx->pc = 0x32bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 24), bits); }
    // 0x32bd48: 0xe6e00038  swc1        $f0, 0x38($s7)
    ctx->pc = 0x32bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 56), bits); }
    // 0x32bd4c: 0xe6e00034  swc1        $f0, 0x34($s7)
    ctx->pc = 0x32bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 52), bits); }
    // 0x32bd50: 0xe6e00030  swc1        $f0, 0x30($s7)
    ctx->pc = 0x32bd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 48), bits); }
    // 0x32bd54: 0x26e30040  addiu       $v1, $s7, 0x40
    ctx->pc = 0x32bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x32bd58: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x32bd58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bd5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32bd60:
    // 0x32bd60: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x32bd60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x32bd64: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32bd68: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x32bd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x32bd6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x32bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x32bd70: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x32bd70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x32bd74: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x32bd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x32bd78: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32bd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x32bd7c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x32bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32bd80: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x32bd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x32bd84: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x32bd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x32bd88: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x32bd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x32bd8c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x32bd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x32bd90: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x32bd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x32bd94: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x32bd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x32bd98: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x32bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x32bd9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32bd9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_32bda0:
    // 0x32bda0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x32bda4: 0x0  nop
    ctx->pc = 0x32bda4u;
    // NOP
label_32bda8:
    // 0x32bda8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x32bda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x32bdac: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32bdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32bdb0: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x32bdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x32bdb4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x32bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x32bdb8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x32bdb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x32bdbc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x32bdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x32bdc0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x32bdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x32bdc4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x32bdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32bdc8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x32bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x32bdcc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x32bdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x32bdd0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x32bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x32bdd4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x32bdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x32bdd8: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x32bdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x32bddc: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x32bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x32bde0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32bde0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x32bde4: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x32bde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x32bde8: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x32BDE8u;
    {
        const bool branch_taken_0x32bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDE8u;
        // 0x32bdec: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bde8) {
            ctx->pc = 0x32BF60u;
            goto label_32bf60;
        }
    }
    ctx->pc = 0x32BDF0u;
label_32bdf0:
    // 0x32bdf0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x32bdf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdf4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x32bdf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdf8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x32bdf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdfc: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x32bdfcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be00: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x32be00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be04: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x32be04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be08: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x32be08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be0c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x32be0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be10: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x32be10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be14: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x32be14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be18: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x32be18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be1c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x32be1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be20: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x32be20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be24: 0x0  nop
    ctx->pc = 0x32be24u;
    // NOP
label_32be28:
    // 0x32be28: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x32be28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x32be2c: 0xe4e10014  swc1        $f1, 0x14($a3)
    ctx->pc = 0x32be2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x32be30: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x32be30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x32be34: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x32be34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x32be38: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x32be38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x32be3c: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x32be3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x32be40: 0xe5800024  swc1        $f0, 0x24($t4)
    ctx->pc = 0x32be40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 36), bits); }
    // 0x32be44: 0xe5a00020  swc1        $f0, 0x20($t5)
    ctx->pc = 0x32be44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 32), bits); }
    // 0x32be48: 0xe5c00018  swc1        $f0, 0x18($t6)
    ctx->pc = 0x32be48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 24), bits); }
    // 0x32be4c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x32be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32be50: 0xe5e00038  swc1        $f0, 0x38($t7)
    ctx->pc = 0x32be50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 56), bits); }
    // 0x32be54: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32be54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32be58: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32be5c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x32be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x32be60: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x32be60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x32be64: 0xe4c10068  swc1        $f1, 0x68($a2)
    ctx->pc = 0x32be64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x32be68: 0xe4e10054  swc1        $f1, 0x54($a3)
    ctx->pc = 0x32be68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
    // 0x32be6c: 0xe5010040  swc1        $f1, 0x40($t0)
    ctx->pc = 0x32be6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x32be70: 0xe5200050  swc1        $f0, 0x50($t1)
    ctx->pc = 0x32be70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 80), bits); }
    // 0x32be74: 0xe5400048  swc1        $f0, 0x48($t2)
    ctx->pc = 0x32be74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 72), bits); }
    // 0x32be78: 0xe5600044  swc1        $f0, 0x44($t3)
    ctx->pc = 0x32be78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 68), bits); }
    // 0x32be7c: 0xe5800064  swc1        $f0, 0x64($t4)
    ctx->pc = 0x32be7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 100), bits); }
    // 0x32be80: 0xe5a00060  swc1        $f0, 0x60($t5)
    ctx->pc = 0x32be80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x32be84: 0xe5c00058  swc1        $f0, 0x58($t6)
    ctx->pc = 0x32be84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 88), bits); }
    // 0x32be88: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x32be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x32be8c: 0xe5e00078  swc1        $f0, 0x78($t7)
    ctx->pc = 0x32be8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 120), bits); }
    // 0x32be90: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32be90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32be94: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x32be94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x32be98: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x32be98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x32be9c: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x32be9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x32bea0: 0xe4c100a8  swc1        $f1, 0xA8($a2)
    ctx->pc = 0x32bea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
    // 0x32bea4: 0xe4e10094  swc1        $f1, 0x94($a3)
    ctx->pc = 0x32bea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 148), bits); }
    // 0x32bea8: 0xe5010080  swc1        $f1, 0x80($t0)
    ctx->pc = 0x32bea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 128), bits); }
    // 0x32beac: 0xe5200090  swc1        $f0, 0x90($t1)
    ctx->pc = 0x32beacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 144), bits); }
    // 0x32beb0: 0xe5400088  swc1        $f0, 0x88($t2)
    ctx->pc = 0x32beb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 136), bits); }
    // 0x32beb4: 0xe5600084  swc1        $f0, 0x84($t3)
    ctx->pc = 0x32beb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 132), bits); }
    // 0x32beb8: 0xe58000a4  swc1        $f0, 0xA4($t4)
    ctx->pc = 0x32beb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 164), bits); }
    // 0x32bebc: 0xe5a000a0  swc1        $f0, 0xA0($t5)
    ctx->pc = 0x32bebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 160), bits); }
    // 0x32bec0: 0xe5c00098  swc1        $f0, 0x98($t6)
    ctx->pc = 0x32bec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 152), bits); }
    // 0x32bec4: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x32bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x32bec8: 0xe5e000b8  swc1        $f0, 0xB8($t7)
    ctx->pc = 0x32bec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 184), bits); }
    // 0x32becc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32beccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32bed0: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x32bed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x32bed4: 0xac62008c  sw          $v0, 0x8C($v1)
    ctx->pc = 0x32bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
    // 0x32bed8: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x32bed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x32bedc: 0xe4c100e8  swc1        $f1, 0xE8($a2)
    ctx->pc = 0x32bedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 232), bits); }
    // 0x32bee0: 0xe4e100d4  swc1        $f1, 0xD4($a3)
    ctx->pc = 0x32bee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
    // 0x32bee4: 0xe50100c0  swc1        $f1, 0xC0($t0)
    ctx->pc = 0x32bee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 192), bits); }
    // 0x32bee8: 0xe52000d0  swc1        $f0, 0xD0($t1)
    ctx->pc = 0x32bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 208), bits); }
    // 0x32beec: 0xe54000c8  swc1        $f0, 0xC8($t2)
    ctx->pc = 0x32beecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 200), bits); }
    // 0x32bef0: 0xe56000c4  swc1        $f0, 0xC4($t3)
    ctx->pc = 0x32bef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 196), bits); }
    // 0x32bef4: 0xe58000e4  swc1        $f0, 0xE4($t4)
    ctx->pc = 0x32bef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 228), bits); }
    // 0x32bef8: 0xe5a000e0  swc1        $f0, 0xE0($t5)
    ctx->pc = 0x32bef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 224), bits); }
    // 0x32befc: 0xe5c000d8  swc1        $f0, 0xD8($t6)
    ctx->pc = 0x32befcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 216), bits); }
    // 0x32bf00: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x32bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x32bf04: 0xe5e000f8  swc1        $f0, 0xF8($t7)
    ctx->pc = 0x32bf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 248), bits); }
    // 0x32bf08: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x32bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x32bf0c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x32bf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x32bf10: 0xac6200cc  sw          $v0, 0xCC($v1)
    ctx->pc = 0x32bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 2));
    // 0x32bf14: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x32bf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x32bf18: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x32bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x32bf1c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x32bf1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x32bf20: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x32bf20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x32bf24: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x32bf24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x32bf28: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x32bf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x32bf2c: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x32bf2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x32bf30: 0x25ce0100  addiu       $t6, $t6, 0x100
    ctx->pc = 0x32bf30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 256));
    // 0x32bf34: 0x25ad0100  addiu       $t5, $t5, 0x100
    ctx->pc = 0x32bf34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 256));
    // 0x32bf38: 0x258c0100  addiu       $t4, $t4, 0x100
    ctx->pc = 0x32bf38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 256));
    // 0x32bf3c: 0x256b0100  addiu       $t3, $t3, 0x100
    ctx->pc = 0x32bf3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
    // 0x32bf40: 0x254a0100  addiu       $t2, $t2, 0x100
    ctx->pc = 0x32bf40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 256));
    // 0x32bf44: 0x25290100  addiu       $t1, $t1, 0x100
    ctx->pc = 0x32bf44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
    // 0x32bf48: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x32bf48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x32bf4c: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x32bf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x32bf50: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x32bf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x32bf54: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x32BF54u;
    {
        const bool branch_taken_0x32bf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF54u;
        // 0x32bf58: 0x24c60100  addiu       $a2, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bf54) {
            ctx->pc = 0x32BE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32be28;
        }
    }
    ctx->pc = 0x32BF5Cu;
    // 0x32bf5c: 0x0  nop
    ctx->pc = 0x32bf5cu;
    // NOP
label_32bf60:
    // 0x32bf60: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x32bf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32bf64:
    // 0x32bf64: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x32bf64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x32bf68: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x32bf68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x32bf6c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x32bf6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x32bf70: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x32bf70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32bf74: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x32bf74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x32bf78: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x32bf78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32bf7c: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x32bf7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32bf80: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x32bf80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32bf84: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x32bf84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32bf88: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x32bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32bf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF8Cu;
        // 0x32bf90: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BF94u;
    // 0x32bf94: 0x0  nop
    ctx->pc = 0x32bf94u;
    // NOP
    ctx->pc = 0x32bf98u;
}
