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

// Function: sub_0029E700
// Address: 0x29e700 - 0x29e9b0
void sub_0029E700_0x29e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E700_0x29e700");
#endif

    switch (ctx->pc) {
        case 0x29e920u: goto label_29e920;
        case 0x29e93cu: goto label_29e93c;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e988u: goto label_29e988;
        default: break;
    }

    ctx->pc = 0x29e700u;

    // 0x29e700: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29e704: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29e708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e70c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e714: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x29e714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x29e718: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x29e718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x29e71c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x29e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x29e720: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e724: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x29e724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e72c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29E72Cu;
    {
        const bool branch_taken_0x29e72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29e72c) {
            ctx->pc = 0x29E774u;
            goto label_29e774;
        }
    }
    ctx->pc = 0x29E734u;
    // 0x29e734: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E734u;
    {
        const bool branch_taken_0x29e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e734) {
            ctx->pc = 0x29E744u;
            goto label_29e744;
        }
    }
    ctx->pc = 0x29E73Cu;
    // 0x29e73c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29E73Cu;
    {
        const bool branch_taken_0x29e73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e73c) {
            ctx->pc = 0x29E79Cu;
            goto label_29e79c;
        }
    }
    ctx->pc = 0x29E744u;
label_29e744:
    // 0x29e744: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x29e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E748u;
    {
        const bool branch_taken_0x29e748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e748) {
            ctx->pc = 0x29E760u;
            goto label_29e760;
        }
    }
    ctx->pc = 0x29E750u;
    // 0x29e750: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x29e750u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x29e754: 0x26528b80  addiu       $s2, $s2, -0x7480
    ctx->pc = 0x29e754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937472));
    // 0x29e758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29E758u;
    {
        const bool branch_taken_0x29e758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e758) {
            ctx->pc = 0x29E768u;
            goto label_29e768;
        }
    }
    ctx->pc = 0x29E760u;
label_29e760:
    // 0x29e760: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x29e760u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x29e764: 0x26528b90  addiu       $s2, $s2, -0x7470
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937488));
label_29e768:
    // 0x29e768: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x29e768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e76c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29E76Cu;
    {
        const bool branch_taken_0x29e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e76c) {
            ctx->pc = 0x29E79Cu;
            goto label_29e79c;
        }
    }
    ctx->pc = 0x29E774u;
label_29e774:
    // 0x29e774: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x29e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e778: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E778u;
    {
        const bool branch_taken_0x29e778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e778) {
            ctx->pc = 0x29E790u;
            goto label_29e790;
        }
    }
    ctx->pc = 0x29E780u;
    // 0x29e780: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x29e780u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x29e784: 0x26318ba0  addiu       $s1, $s1, -0x7460
    ctx->pc = 0x29e784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937504));
    // 0x29e788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29E788u;
    {
        const bool branch_taken_0x29e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e788) {
            ctx->pc = 0x29E798u;
            goto label_29e798;
        }
    }
    ctx->pc = 0x29E790u;
label_29e790:
    // 0x29e790: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x29e790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x29e794: 0x26318bb0  addiu       $s1, $s1, -0x7450
    ctx->pc = 0x29e794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937520));
label_29e798:
    // 0x29e798: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x29e798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e79c:
    // 0x29e79c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29e7a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e7a4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e7a8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e7ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e7b4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x29e7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x29e7b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e7bc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e7c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e7c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e7c8: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x29e7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x29e7cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e7d0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e7d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e7dc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x29e7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x29e7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29e7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e7e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e7e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e7ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e7f4: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x29e7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x29e7f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e7fc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e800: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e808: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x29e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x29e80c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e810: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e814: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e81c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x29e81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x29e820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29e820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e824: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e828: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e82c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e834: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x29e834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x29e838: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e83c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e840: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e848: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x29e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x29e84c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e850: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e854: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e85c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x29e85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x29e860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29e860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e864: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e868: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e86c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e874: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x29e874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x29e878: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e87c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e880: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e888: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x29e888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x29e88c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e890: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e89c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x29e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x29e8a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e8a4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e8a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e8b0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x29e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29e8b4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x29e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x29e8b8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x29e8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x29e8bc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x29e8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29e8c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e8c4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e8c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e8d0: 0xac44005c  sw          $a0, 0x5C($v0)
    ctx->pc = 0x29e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
    // 0x29e8d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x29e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e8d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29E8D8u;
    {
        const bool branch_taken_0x29e8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e8d8) {
            ctx->pc = 0x29E93Cu;
            goto label_29e93c;
        }
    }
    ctx->pc = 0x29E8E0u;
    // 0x29e8e0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x29e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x29e8e4: 0x2484d910  addiu       $a0, $a0, -0x26F0
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957328));
    // 0x29e8e8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x29e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29e8ec: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x29e8ecu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4ED910u));
    // 0x29e8f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x29e8f0u;
    { uint32_t bits = FAST_READ32(0x4ED918u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e8f4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x29e8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x29e8f8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x29e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29e8fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e900: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e904: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e90c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x29e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29e910: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29e910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29e914: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29e914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e918: 0xc103c86  jal         func_40F218
    ctx->pc = 0x29E918u;
    SET_GPR_U32(ctx, 31, 0x29E920u);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x29E918u, 0x29E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E920u;
label_29e920:
    // 0x29e920: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e924: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e928: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e92c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e930: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29e934: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x29E934u;
    SET_GPR_U32(ctx, 31, 0x29E93Cu);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x29E934u, 0x29E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E93Cu;
label_29e93c:
    // 0x29e93c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x29e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e944: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E944u;
    {
        const bool branch_taken_0x29e944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29e944) {
            ctx->pc = 0x29E96Cu;
            goto label_29e96c;
        }
    }
    ctx->pc = 0x29E94Cu;
    // 0x29e94c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e950: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e954: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e95c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x29e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29e960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e964: 0xc041d58  jal         func_107560
    ctx->pc = 0x29E964u;
    SET_GPR_U32(ctx, 31, 0x29E96Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x29E964u, 0x29E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E96Cu;
label_29e96c:
    // 0x29e96c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e970: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29e970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29e974: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e97c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x29e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x29e980: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x29E980u;
    SET_GPR_U32(ctx, 31, 0x29E988u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x29E980u, 0x29E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E988u;
label_29e988:
    // 0x29e988: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e998: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x29e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29e99c: 0x3e00008  jr          $ra
    ctx->pc = 0x29E99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E9A4u;
    // 0x29e9a4: 0x0  nop
    ctx->pc = 0x29e9a4u;
    // NOP
    // 0x29e9a8: 0x0  nop
    ctx->pc = 0x29e9a8u;
    // NOP
    // 0x29e9ac: 0x0  nop
    ctx->pc = 0x29e9acu;
    // NOP
    ctx->pc = 0x29e9b0u;
}
