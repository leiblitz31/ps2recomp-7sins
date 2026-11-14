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

// Function: sub_0022E7F0
// Address: 0x22e7f0 - 0x22eb60
void sub_0022E7F0_0x22e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E7F0_0x22e7f0");
#endif

    switch (ctx->pc) {
        case 0x22e838u: goto label_22e838;
        case 0x22e89cu: goto label_22e89c;
        case 0x22e8acu: goto label_22e8ac;
        case 0x22e8c4u: goto label_22e8c4;
        case 0x22e8d8u: goto label_22e8d8;
        case 0x22e8e8u: goto label_22e8e8;
        case 0x22e920u: goto label_22e920;
        case 0x22e934u: goto label_22e934;
        case 0x22e944u: goto label_22e944;
        case 0x22e95cu: goto label_22e95c;
        case 0x22e978u: goto label_22e978;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e99cu: goto label_22e99c;
        case 0x22e9d0u: goto label_22e9d0;
        case 0x22e9e4u: goto label_22e9e4;
        case 0x22e9f4u: goto label_22e9f4;
        case 0x22ea0cu: goto label_22ea0c;
        case 0x22ea20u: goto label_22ea20;
        case 0x22ea30u: goto label_22ea30;
        case 0x22ea48u: goto label_22ea48;
        case 0x22ea58u: goto label_22ea58;
        case 0x22ea74u: goto label_22ea74;
        case 0x22ea84u: goto label_22ea84;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eb38u: goto label_22eb38;
        default: break;
    }

    ctx->pc = 0x22e7f0u;

    // 0x22e7f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x22e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x22e7f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22e7f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22e7fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22e800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e808: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x22e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x22e80c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x22e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x22e810: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x22e810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x22e814: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x22e814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x22e818: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x22e818u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x22e81c: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x22e81cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x22e820: 0xafa800f0  sw          $t0, 0xF0($sp)
    ctx->pc = 0x22e820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 8));
    // 0x22e824: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x22e824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
    // 0x22e828: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x22e828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22e82c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22e830: 0xc08c200  jal         func_230800
    ctx->pc = 0x22E830u;
    SET_GPR_U32(ctx, 31, 0x22E838u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x22E830u, 0x22E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E838u;
label_22e838:
    // 0x22e838: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x22E838u;
    {
        const bool branch_taken_0x22e838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e838) {
            ctx->pc = 0x22EB38u;
            goto label_22eb38;
        }
    }
    ctx->pc = 0x22E840u;
    // 0x22e840: 0xa3a0006c  sb          $zero, 0x6C($sp)
    ctx->pc = 0x22e840u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e844: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22e848: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x22e848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x22e84c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22e850: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x22e850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x22e854: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x22e854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22e858: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x22e858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x22e85c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x22e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22e860: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x22e860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x22e864: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22e868: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x22e868u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22e86c: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
    ctx->pc = 0x22E86Cu;
    {
        const bool branch_taken_0x22e86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e86c) {
            ctx->pc = 0x22EAA4u;
            goto label_22eaa4;
        }
    }
    ctx->pc = 0x22E874u;
    // 0x22e874: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22e874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x22e878: 0x24848900  addiu       $a0, $a0, -0x7700
    ctx->pc = 0x22e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
    // 0x22e87c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22e884: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e888: 0x600008  jr          $v1
    ctx->pc = 0x22E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E890u: goto label_22e890;
            case 0x22E8CCu: goto label_22e8cc;
            case 0x22E928u: goto label_22e928;
            case 0x22E980u: goto label_22e980;
            case 0x22E9D8u: goto label_22e9d8;
            case 0x22EA14u: goto label_22ea14;
            case 0x22EA68u: goto label_22ea68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E888u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E890u;
label_22e890:
    // 0x22e890: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22e890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e894: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22E894u;
    SET_GPR_U32(ctx, 31, 0x22E89Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22E894u, 0x22E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E89Cu;
label_22e89c:
    // 0x22e89c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e8a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8a4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22E8A4u;
    SET_GPR_U32(ctx, 31, 0x22E8ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22E8A4u, 0x22E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8ACu;
label_22e8ac:
    // 0x22e8ac: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x22e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x22e8b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e8b4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22e8b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22e8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e8bc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22E8BCu;
    SET_GPR_U32(ctx, 31, 0x22E8C4u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22E8BCu, 0x22E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8C4u;
label_22e8c4:
    // 0x22e8c4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x22E8C4u;
    {
        const bool branch_taken_0x22e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8c4) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22E8CCu;
label_22e8cc:
    // 0x22e8cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e8d0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22E8D0u;
    SET_GPR_U32(ctx, 31, 0x22E8D8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22E8D0u, 0x22E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8D8u;
label_22e8d8:
    // 0x22e8d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e8dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e8e0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22E8E0u;
    SET_GPR_U32(ctx, 31, 0x22E8E8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22E8E0u, 0x22E8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8E8u;
label_22e8e8:
    // 0x22e8e8: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x22e8ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E8ECu;
    {
        const bool branch_taken_0x22e8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e8ec) {
            ctx->pc = 0x22E900u;
            goto label_22e900;
        }
    }
    ctx->pc = 0x22E8F4u;
    // 0x22e8f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22e8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e8f8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22e8fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x22e8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_22e900:
    // 0x22e900: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x22e900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x22e904: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x22e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22e908: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x22e908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x22e90c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e910: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22e910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22e914: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22e914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22e918: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22E918u;
    SET_GPR_U32(ctx, 31, 0x22E920u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22E918u, 0x22E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E920u;
label_22e920:
    // 0x22e920: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x22E920u;
    {
        const bool branch_taken_0x22e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e920) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22E928u;
label_22e928:
    // 0x22e928: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22e92c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22E92Cu;
    SET_GPR_U32(ctx, 31, 0x22E934u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22E92Cu, 0x22E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E934u;
label_22e934:
    // 0x22e934: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22e938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e93c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22E93Cu;
    SET_GPR_U32(ctx, 31, 0x22E944u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22E93Cu, 0x22E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E944u;
label_22e944:
    // 0x22e944: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e948: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E948u;
    {
        const bool branch_taken_0x22e948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e948) {
            ctx->pc = 0x22E960u;
            goto label_22e960;
        }
    }
    ctx->pc = 0x22E950u;
    // 0x22e950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22e950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e954: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x22E954u;
    SET_GPR_U32(ctx, 31, 0x22E95Cu);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x22E954u, 0x22E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E95Cu;
label_22e95c:
    // 0x22e95c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22e95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e960:
    // 0x22e960: 0xafb10058  sw          $s1, 0x58($sp)
    ctx->pc = 0x22e960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 17));
    // 0x22e964: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e968: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22e968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22e96c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x22e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22e970: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22E970u;
    SET_GPR_U32(ctx, 31, 0x22E978u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22E970u, 0x22E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E978u;
label_22e978:
    // 0x22e978: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x22E978u;
    {
        const bool branch_taken_0x22e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e978) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22E980u;
label_22e980:
    // 0x22e980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e984: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22E984u;
    SET_GPR_U32(ctx, 31, 0x22E98Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22E984u, 0x22E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E98Cu;
label_22e98c:
    // 0x22e98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e994: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22E994u;
    SET_GPR_U32(ctx, 31, 0x22E99Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22E994u, 0x22E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E99Cu;
label_22e99c:
    // 0x22e99c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x22e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x22e9a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E9A0u;
    {
        const bool branch_taken_0x22e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9a0) {
            ctx->pc = 0x22E9B0u;
            goto label_22e9b0;
        }
    }
    ctx->pc = 0x22E9A8u;
    // 0x22e9a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22e9ac: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x22e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_22e9b0:
    // 0x22e9b0: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x22e9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x22e9b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e9b8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x22e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x22e9bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e9c0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22e9c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22e9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e9c8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22E9C8u;
    SET_GPR_U32(ctx, 31, 0x22E9D0u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22E9C8u, 0x22E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9D0u;
label_22e9d0:
    // 0x22e9d0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x22E9D0u;
    {
        const bool branch_taken_0x22e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e9d0) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22E9D8u;
label_22e9d8:
    // 0x22e9d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e9dc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22E9DCu;
    SET_GPR_U32(ctx, 31, 0x22E9E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22E9DCu, 0x22E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9E4u;
label_22e9e4:
    // 0x22e9e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22e9e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22e9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22E9ECu;
    SET_GPR_U32(ctx, 31, 0x22E9F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22E9ECu, 0x22E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9F4u;
label_22e9f4:
    // 0x22e9f4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x22e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x22e9f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e9fc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22ea00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22ea04: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22EA04u;
    SET_GPR_U32(ctx, 31, 0x22EA0Cu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22EA04u, 0x22EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA0Cu;
label_22ea0c:
    // 0x22ea0c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22EA0Cu;
    {
        const bool branch_taken_0x22ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea0c) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22EA14u;
label_22ea14:
    // 0x22ea14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ea18: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22EA18u;
    SET_GPR_U32(ctx, 31, 0x22EA20u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22EA18u, 0x22EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA20u;
label_22ea20:
    // 0x22ea20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ea24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ea24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea28: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22EA28u;
    SET_GPR_U32(ctx, 31, 0x22EA30u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22EA28u, 0x22EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA30u;
label_22ea30:
    // 0x22ea30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ea30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea34: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22EA34u;
    {
        const bool branch_taken_0x22ea34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea34) {
            ctx->pc = 0x22EA5Cu;
            goto label_22ea5c;
        }
    }
    ctx->pc = 0x22EA3Cu;
    // 0x22ea3c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22ea40: 0xc04e240  jal         func_138900
    ctx->pc = 0x22EA40u;
    SET_GPR_U32(ctx, 31, 0x22EA48u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x22EA40u, 0x22EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA48u;
label_22ea48:
    // 0x22ea48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea50: 0xc065170  jal         func_1945C0
    ctx->pc = 0x22EA50u;
    SET_GPR_U32(ctx, 31, 0x22EA58u);
    ctx->pc = 0x1945C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1945C0u, 0x22EA50u, 0x22EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA58u;
label_22ea58:
    // 0x22ea58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ea58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ea5c:
    // 0x22ea5c: 0xafb00058  sw          $s0, 0x58($sp)
    ctx->pc = 0x22ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
    // 0x22ea60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22EA60u;
    {
        const bool branch_taken_0x22ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea60) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22EA68u;
label_22ea68:
    // 0x22ea68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ea6c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22EA6Cu;
    SET_GPR_U32(ctx, 31, 0x22EA74u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22EA6Cu, 0x22EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA74u;
label_22ea74:
    // 0x22ea74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ea78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22ea78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea7c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22EA7Cu;
    SET_GPR_U32(ctx, 31, 0x22EA84u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22EA7Cu, 0x22EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA84u;
label_22ea84:
    // 0x22ea84: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x22ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x22ea88: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22ea8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22ea90: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22ea94: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22EA94u;
    SET_GPR_U32(ctx, 31, 0x22EA9Cu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22EA94u, 0x22EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA9Cu;
label_22ea9c:
    // 0x22ea9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22EA9Cu;
    {
        const bool branch_taken_0x22ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea9c) {
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22EAA4u;
label_22eaa4:
    // 0x22eaa4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22EAA4u;
    {
        const bool branch_taken_0x22eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22eaa4) {
            ctx->pc = 0x22EB38u;
            goto label_22eb38;
        }
    }
    ctx->pc = 0x22EAACu;
label_22eaac:
    // 0x22eaac: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x22eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x22eab0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x22eab4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x22eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eab8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x22eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22eabc: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x22eabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eac4: 0x0  nop
    ctx->pc = 0x22eac4u;
    // NOP
    // 0x22eac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22eac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eacc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x22EACCu;
    {
        const bool branch_taken_0x22eacc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eacc) {
            ctx->pc = 0x22EAE0u;
            goto label_22eae0;
        }
    }
    ctx->pc = 0x22EAD4u;
    // 0x22ead4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ead4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ead8: 0x0  nop
    ctx->pc = 0x22ead8u;
    // NOP
    // 0x22eadc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x22eadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22eae0:
    // 0x22eae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eae4: 0x0  nop
    ctx->pc = 0x22eae4u;
    // NOP
    // 0x22eae8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x22eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22eaec: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x22eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eaf0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22eaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22eaf4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x22eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eaf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eaf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eafc: 0x0  nop
    ctx->pc = 0x22eafcu;
    // NOP
    // 0x22eb00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22eb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eb04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x22EB04u;
    {
        const bool branch_taken_0x22eb04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eb04) {
            ctx->pc = 0x22EB18u;
            goto label_22eb18;
        }
    }
    ctx->pc = 0x22EB0Cu;
    // 0x22eb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eb10: 0x0  nop
    ctx->pc = 0x22eb10u;
    // NOP
    // 0x22eb14: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22eb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_22eb18:
    // 0x22eb18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eb1c: 0x0  nop
    ctx->pc = 0x22eb1cu;
    // NOP
    // 0x22eb20: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22eb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22eb24: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22eb28: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22eb2c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22eb30: 0xc08bad8  jal         func_22EB60
    ctx->pc = 0x22EB30u;
    SET_GPR_U32(ctx, 31, 0x22EB38u);
    ctx->pc = 0x22EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB60u, 0x22EB30u, 0x22EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB38u;
label_22eb38:
    // 0x22eb38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22eb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22eb3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22eb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eb40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22eb40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eb44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22eb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eb48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22eb48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eb4c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22eb50: 0x3e00008  jr          $ra
    ctx->pc = 0x22EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EB58u;
    // 0x22eb58: 0x0  nop
    ctx->pc = 0x22eb58u;
    // NOP
    // 0x22eb5c: 0x0  nop
    ctx->pc = 0x22eb5cu;
    // NOP
    ctx->pc = 0x22eb60u;
}
