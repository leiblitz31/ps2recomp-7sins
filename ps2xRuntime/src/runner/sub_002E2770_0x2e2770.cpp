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

// Function: sub_002E2770
// Address: 0x2e2770 - 0x2e2940
void sub_002E2770_0x2e2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2770_0x2e2770");
#endif

    switch (ctx->pc) {
        case 0x2e27e0u: goto label_2e27e0;
        case 0x2e27f4u: goto label_2e27f4;
        case 0x2e2808u: goto label_2e2808;
        case 0x2e281cu: goto label_2e281c;
        case 0x2e285cu: goto label_2e285c;
        case 0x2e2870u: goto label_2e2870;
        case 0x2e28b4u: goto label_2e28b4;
        case 0x2e28c8u: goto label_2e28c8;
        default: break;
    }

    ctx->pc = 0x2e2770u;

    // 0x2e2770: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2e2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2e2774: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e2774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e2778: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e277c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e2780: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e2780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e2784: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e2784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e2788: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e2788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e278c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e2790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e2794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e279c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2e279cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2e27a0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2e27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x2e27a4: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x2e27a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x2e27a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e27ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e27b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2e27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e27b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e27b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e27b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e27b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e27bc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27BCu;
    {
        const bool branch_taken_0x2e27bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e27bc) {
            ctx->pc = 0x2E27D0u;
            goto label_2e27d0;
        }
    }
    ctx->pc = 0x2E27C4u;
    // 0x2e27c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e27c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E27C8u;
    {
        const bool branch_taken_0x2e27c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e27c8) {
            ctx->pc = 0x2E2904u;
            goto label_2e2904;
        }
    }
    ctx->pc = 0x2E27D0u;
label_2e27d0:
    // 0x2e27d0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2e27d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e27d4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2e27d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e27d8: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x2E27D8u;
    SET_GPR_U32(ctx, 31, 0x2E27E0u);
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x2E27D8u, 0x2E27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27E0u;
label_2e27e0:
    // 0x2e27e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e27e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27e4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2e27e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e27e8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2e27e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e27ec: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E27ECu;
    SET_GPR_U32(ctx, 31, 0x2E27F4u);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E27ECu, 0x2E27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E27F4u;
label_2e27f4:
    // 0x2e27f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e27f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e27f8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2e27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e27fc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2e27fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e2800: 0xc0b828c  jal         func_2E0A30
    ctx->pc = 0x2E2800u;
    SET_GPR_U32(ctx, 31, 0x2E2808u);
    ctx->pc = 0x2E0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0A30u, 0x2E2800u, 0x2E2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2808u;
label_2e2808:
    // 0x2e2808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e280c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2e280cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2810: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2e2810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e2814: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E2814u;
    SET_GPR_U32(ctx, 31, 0x2E281Cu);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E2814u, 0x2E281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E281Cu;
label_2e281c:
    // 0x2e281c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e281cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2820: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x2e2820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2e2824: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2824u;
    {
        const bool branch_taken_0x2e2824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2824) {
            ctx->pc = 0x2E2838u;
            goto label_2e2838;
        }
    }
    ctx->pc = 0x2E282Cu;
    // 0x2e282c: 0xafb300ac  sw          $s3, 0xAC($sp)
    ctx->pc = 0x2e282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 19));
    // 0x2e2830: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2e2830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2834: 0x8fb000ac  lw          $s0, 0xAC($sp)
    ctx->pc = 0x2e2834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2e2838:
    // 0x2e2838: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x2e2838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e283c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E283Cu;
    {
        const bool branch_taken_0x2e283c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e283c) {
            ctx->pc = 0x2E2850u;
            goto label_2e2850;
        }
    }
    ctx->pc = 0x2E2844u;
    // 0x2e2844: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x2e2844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2848: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e2848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e284c: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x2e284cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e2850:
    // 0x2e2850: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2e2850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2854: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E2854u;
    {
        const bool branch_taken_0x2e2854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2854) {
            ctx->pc = 0x2E289Cu;
            goto label_2e289c;
        }
    }
    ctx->pc = 0x2E285Cu;
label_2e285c:
    // 0x2e285c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2e285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2860: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e2860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2864: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e2864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2868: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E2868u;
    SET_GPR_U32(ctx, 31, 0x2E2870u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E2868u, 0x2E2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2870u;
label_2e2870:
    // 0x2e2870: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2e2870u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2874: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2e2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2878: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2e2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e287c: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x2e287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e2880: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e2880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e2884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2884u;
    {
        const bool branch_taken_0x2e2884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2884) {
            ctx->pc = 0x2E2898u;
            goto label_2e2898;
        }
    }
    ctx->pc = 0x2E288Cu;
    // 0x2e288c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e288cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2890: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2E2890u;
    {
        const bool branch_taken_0x2e2890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2890) {
            ctx->pc = 0x2E2904u;
            goto label_2e2904;
        }
    }
    ctx->pc = 0x2E2898u;
label_2e2898:
    // 0x2e2898: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e2898u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2e289c:
    // 0x2e289c: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x2e289cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2e28a0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E28A0u;
    {
        const bool branch_taken_0x2e28a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e28a0) {
            ctx->pc = 0x2E285Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E28A8u;
    // 0x2e28a8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2e28a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E28ACu;
    {
        const bool branch_taken_0x2e28ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28ac) {
            ctx->pc = 0x2E28F4u;
            goto label_2e28f4;
        }
    }
    ctx->pc = 0x2E28B4u;
label_2e28b4:
    // 0x2e28b4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2e28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e28b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e28b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e28bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28c0: 0xc0b8390  jal         func_2E0E40
    ctx->pc = 0x2E28C0u;
    SET_GPR_U32(ctx, 31, 0x2E28C8u);
    ctx->pc = 0x2E0E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E40u, 0x2E28C0u, 0x2E28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E28C8u;
label_2e28c8:
    // 0x2e28c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e28c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2e28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e28d0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2e28d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e28d4: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x2e28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2e28d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e28d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e28dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E28DCu;
    {
        const bool branch_taken_0x2e28dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e28dc) {
            ctx->pc = 0x2E28F0u;
            goto label_2e28f0;
        }
    }
    ctx->pc = 0x2E28E4u;
    // 0x2e28e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e28e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e28e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E28E8u;
    {
        const bool branch_taken_0x2e28e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e28e8) {
            ctx->pc = 0x2E2904u;
            goto label_2e2904;
        }
    }
    ctx->pc = 0x2E28F0u;
label_2e28f0:
    // 0x2e28f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e28f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e28f4:
    // 0x2e28f4: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x2e28f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e28f8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E28F8u;
    {
        const bool branch_taken_0x2e28f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e28f8) {
            ctx->pc = 0x2E28B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e28b4;
        }
    }
    ctx->pc = 0x2E2900u;
    // 0x2e2900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e2904:
    // 0x2e2904: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e2904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e2908: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e2908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e290c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e290cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e2910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e2914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e2918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e2918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e291c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e291cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e2920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e2924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e2928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e292c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2e292cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e2930: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2938u;
    // 0x2e2938: 0x0  nop
    ctx->pc = 0x2e2938u;
    // NOP
    // 0x2e293c: 0x0  nop
    ctx->pc = 0x2e293cu;
    // NOP
    ctx->pc = 0x2e2940u;
}
