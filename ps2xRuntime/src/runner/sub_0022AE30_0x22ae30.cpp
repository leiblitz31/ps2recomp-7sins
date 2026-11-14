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

// Function: sub_0022AE30
// Address: 0x22ae30 - 0x22b480
void sub_0022AE30_0x22ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AE30_0x22ae30");
#endif

    switch (ctx->pc) {
        case 0x22ae80u: goto label_22ae80;
        case 0x22ae9cu: goto label_22ae9c;
        case 0x22aeacu: goto label_22aeac;
        case 0x22aec4u: goto label_22aec4;
        case 0x22aed8u: goto label_22aed8;
        case 0x22aef0u: goto label_22aef0;
        case 0x22af20u: goto label_22af20;
        case 0x22af3cu: goto label_22af3c;
        case 0x22af50u: goto label_22af50;
        case 0x22af68u: goto label_22af68;
        case 0x22af88u: goto label_22af88;
        case 0x22afa0u: goto label_22afa0;
        case 0x22afacu: goto label_22afac;
        case 0x22afe8u: goto label_22afe8;
        case 0x22b004u: goto label_22b004;
        case 0x22b014u: goto label_22b014;
        case 0x22b02cu: goto label_22b02c;
        case 0x22b044u: goto label_22b044;
        case 0x22b078u: goto label_22b078;
        case 0x22b0a4u: goto label_22b0a4;
        case 0x22b0c4u: goto label_22b0c4;
        case 0x22b0d4u: goto label_22b0d4;
        case 0x22b100u: goto label_22b100;
        case 0x22b10cu: goto label_22b10c;
        case 0x22b120u: goto label_22b120;
        case 0x22b138u: goto label_22b138;
        case 0x22b14cu: goto label_22b14c;
        case 0x22b170u: goto label_22b170;
        case 0x22b190u: goto label_22b190;
        case 0x22b1a0u: goto label_22b1a0;
        case 0x22b1b8u: goto label_22b1b8;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1e8u: goto label_22b1e8;
        case 0x22b200u: goto label_22b200;
        case 0x22b218u: goto label_22b218;
        case 0x22b22cu: goto label_22b22c;
        case 0x22b244u: goto label_22b244;
        case 0x22b258u: goto label_22b258;
        case 0x22b284u: goto label_22b284;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b2d4u: goto label_22b2d4;
        case 0x22b2e0u: goto label_22b2e0;
        case 0x22b304u: goto label_22b304;
        case 0x22b318u: goto label_22b318;
        case 0x22b330u: goto label_22b330;
        case 0x22b368u: goto label_22b368;
        case 0x22b378u: goto label_22b378;
        case 0x22b390u: goto label_22b390;
        case 0x22b3a8u: goto label_22b3a8;
        case 0x22b3dcu: goto label_22b3dc;
        case 0x22b408u: goto label_22b408;
        case 0x22b434u: goto label_22b434;
        case 0x22b450u: goto label_22b450;
        case 0x22b460u: goto label_22b460;
        default: break;
    }

    ctx->pc = 0x22ae30u;

    // 0x22ae30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x22ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x22ae34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ae38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ae3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ae40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ae44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ae44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ae48: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x22ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x22ae4c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x22ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x22ae50: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x22ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x22ae54: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x22ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x22ae58: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22ae5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ae60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22ae64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ae68: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22ae6c: 0x1462009b  bne         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x22AE6Cu;
    {
        const bool branch_taken_0x22ae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ae6c) {
            ctx->pc = 0x22B0DCu;
            goto label_22b0dc;
        }
    }
    ctx->pc = 0x22AE74u;
    // 0x22ae74: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22ae78: 0xc08ad58  jal         func_22B560
    ctx->pc = 0x22AE78u;
    SET_GPR_U32(ctx, 31, 0x22AE80u);
    ctx->pc = 0x22B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B560u, 0x22AE78u, 0x22AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE80u;
label_22ae80:
    // 0x22ae80: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22AE80u;
    {
        const bool branch_taken_0x22ae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ae80) {
            ctx->pc = 0x22AEB4u;
            goto label_22aeb4;
        }
    }
    ctx->pc = 0x22AE88u;
    // 0x22ae88: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x22ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22ae8c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22ae90: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22ae94: 0xc08ad90  jal         func_22B640
    ctx->pc = 0x22AE94u;
    SET_GPR_U32(ctx, 31, 0x22AE9Cu);
    ctx->pc = 0x22B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B640u, 0x22AE94u, 0x22AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE9Cu;
label_22ae9c:
    // 0x22ae9c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22aea0: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x22aea4: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22AEA4u;
    SET_GPR_U32(ctx, 31, 0x22AEACu);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22AEA4u, 0x22AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEACu;
label_22aeac:
    // 0x22aeac: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x22AEACu;
    {
        const bool branch_taken_0x22aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aeac) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AEB4u;
label_22aeb4:
    // 0x22aeb4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x22aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22aeb8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22aebc: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22AEBCu;
    SET_GPR_U32(ctx, 31, 0x22AEC4u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22AEBCu, 0x22AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEC4u;
label_22aec4:
    // 0x22aec4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22aec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aec8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22aecc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22aed0: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22AED0u;
    SET_GPR_U32(ctx, 31, 0x22AED8u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22AED0u, 0x22AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AED8u;
label_22aed8:
    // 0x22aed8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22aedc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22aee0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22aee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aee4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22aee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aee8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22AEE8u;
    SET_GPR_U32(ctx, 31, 0x22AEF0u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22AEE8u, 0x22AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEF0u;
label_22aef0:
    // 0x22aef0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22AEF0u;
    {
        const bool branch_taken_0x22aef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aef0) {
            ctx->pc = 0x22AF2Cu;
            goto label_22af2c;
        }
    }
    ctx->pc = 0x22AEF8u;
    // 0x22aef8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22aefc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22af00: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22af04: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22af08: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22af08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22af0c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x22af0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22af10: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22af10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22af14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22af14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af18: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22AF18u;
    SET_GPR_U32(ctx, 31, 0x22AF20u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22AF18u, 0x22AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF20u;
label_22af20:
    // 0x22af20: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22af24: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x22AF24u;
    {
        const bool branch_taken_0x22af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af24) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AF2Cu;
label_22af2c:
    // 0x22af2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22af30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22af34: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22AF34u;
    SET_GPR_U32(ctx, 31, 0x22AF3Cu);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22AF34u, 0x22AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF3Cu;
label_22af3c:
    // 0x22af3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22af3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af40: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x22af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x22af44: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22af44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22af48: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22AF48u;
    SET_GPR_U32(ctx, 31, 0x22AF50u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22AF48u, 0x22AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF50u;
label_22af50:
    // 0x22af50: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22af50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22af54: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22af58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22af5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af60: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22AF60u;
    SET_GPR_U32(ctx, 31, 0x22AF68u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22AF60u, 0x22AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF68u;
label_22af68:
    // 0x22af68: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x22af68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22af6c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x22af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x22af70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AF70u;
    {
        const bool branch_taken_0x22af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af70) {
            ctx->pc = 0x22AF90u;
            goto label_22af90;
        }
    }
    ctx->pc = 0x22AF78u;
    // 0x22af78: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22af78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22af7c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22af80: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22AF80u;
    SET_GPR_U32(ctx, 31, 0x22AF88u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22AF80u, 0x22AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF88u;
label_22af88:
    // 0x22af88: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x22AF88u;
    {
        const bool branch_taken_0x22af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af88) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AF90u;
label_22af90:
    // 0x22af90: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x22af90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x22af94: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22af94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22af98: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22AF98u;
    SET_GPR_U32(ctx, 31, 0x22AFA0u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22AF98u, 0x22AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFA0u;
label_22afa0:
    // 0x22afa0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x22afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x22afa4: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x22AFA4u;
    SET_GPR_U32(ctx, 31, 0x22AFACu);
    ctx->pc = 0x22B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4E0u, 0x22AFA4u, 0x22AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFACu;
label_22afac:
    // 0x22afac: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x22afacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x22afb0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22afb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22afb8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22AFB8u;
    {
        const bool branch_taken_0x22afb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22afb8) {
            ctx->pc = 0x22AFF4u;
            goto label_22aff4;
        }
    }
    ctx->pc = 0x22AFC0u;
    // 0x22afc0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22afc4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22afc8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22afcc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22afd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22afd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22afd4: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x22afd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22afd8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22afd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22afdc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x22afdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22afe0: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22AFE0u;
    SET_GPR_U32(ctx, 31, 0x22AFE8u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22AFE0u, 0x22AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFE8u;
label_22afe8:
    // 0x22afe8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22afe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22afec: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x22AFECu;
    {
        const bool branch_taken_0x22afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22afec) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22AFF4u;
label_22aff4:
    // 0x22aff4: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x22aff8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22affc: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22AFFCu;
    SET_GPR_U32(ctx, 31, 0x22B004u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22AFFCu, 0x22B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B004u;
label_22b004:
    // 0x22b004: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b008: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x22b008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x22b00c: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22B00Cu;
    SET_GPR_U32(ctx, 31, 0x22B014u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22B00Cu, 0x22B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B014u;
label_22b014:
    // 0x22b014: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b018: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b01c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b020: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b024: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B024u;
    SET_GPR_U32(ctx, 31, 0x22B02Cu);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B024u, 0x22B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B02Cu;
label_22b02c:
    // 0x22b02c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22B02Cu;
    {
        const bool branch_taken_0x22b02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b02c) {
            ctx->pc = 0x22B0B0u;
            goto label_22b0b0;
        }
    }
    ctx->pc = 0x22B034u;
    // 0x22b034: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b038: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b03c: 0xc08ad30  jal         func_22B4C0
    ctx->pc = 0x22B03Cu;
    SET_GPR_U32(ctx, 31, 0x22B044u);
    ctx->pc = 0x22B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4C0u, 0x22B03Cu, 0x22B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B044u;
label_22b044:
    // 0x22b044: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b048: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22B048u;
    {
        const bool branch_taken_0x22b048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b048) {
            ctx->pc = 0x22B084u;
            goto label_22b084;
        }
    }
    ctx->pc = 0x22B050u;
    // 0x22b050: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22b050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b054: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b058: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b05c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b064: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x22b064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b068: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b06c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x22b06cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b070: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B070u;
    SET_GPR_U32(ctx, 31, 0x22B078u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B070u, 0x22B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B078u;
label_22b078:
    // 0x22b078: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b07c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x22B07Cu;
    {
        const bool branch_taken_0x22b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b07c) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B084u;
label_22b084:
    // 0x22b084: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b088: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b08c: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x22b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x22b090: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x22b090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x22b094: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b094u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b098: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b09c: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B09Cu;
    SET_GPR_U32(ctx, 31, 0x22B0A4u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B09Cu, 0x22B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0A4u;
label_22b0a4:
    // 0x22b0a4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b0a8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x22B0A8u;
    {
        const bool branch_taken_0x22b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0a8) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B0B0u;
label_22b0b0:
    // 0x22b0b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22b0b4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b0b8: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x22b0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b0bc: 0xc08ad90  jal         func_22B640
    ctx->pc = 0x22B0BCu;
    SET_GPR_U32(ctx, 31, 0x22B0C4u);
    ctx->pc = 0x22B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B640u, 0x22B0BCu, 0x22B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0C4u;
label_22b0c4:
    // 0x22b0c4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b0c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22b0cc: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B0CCu;
    SET_GPR_U32(ctx, 31, 0x22B0D4u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B0CCu, 0x22B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0D4u;
label_22b0d4:
    // 0x22b0d4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x22B0D4u;
    {
        const bool branch_taken_0x22b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0d4) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B0DCu;
label_22b0dc:
    // 0x22b0dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b0e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b0e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b0e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b0ec: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22B0ECu;
    {
        const bool branch_taken_0x22b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b0ec) {
            ctx->pc = 0x22B1A8u;
            goto label_22b1a8;
        }
    }
    ctx->pc = 0x22B0F4u;
    // 0x22b0f4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x22b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b0f8: 0xc089e94  jal         func_227A50
    ctx->pc = 0x22B0F8u;
    SET_GPR_U32(ctx, 31, 0x22B100u);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x22B0F8u, 0x22B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B100u;
label_22b100:
    // 0x22b100: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b104: 0xc08a90c  jal         func_22A430
    ctx->pc = 0x22B104u;
    SET_GPR_U32(ctx, 31, 0x22B10Cu);
    ctx->pc = 0x22A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A430u, 0x22B104u, 0x22B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B10Cu;
label_22b10c:
    // 0x22b10c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b110: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x22b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x22b114: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22b114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b118: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B118u;
    SET_GPR_U32(ctx, 31, 0x22B120u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B118u, 0x22B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B120u;
label_22b120:
    // 0x22b120: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b124: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b128: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b12c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b130: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B130u;
    SET_GPR_U32(ctx, 31, 0x22B138u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B130u, 0x22B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B138u;
label_22b138:
    // 0x22b138: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22B138u;
    {
        const bool branch_taken_0x22b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b138) {
            ctx->pc = 0x22B17Cu;
            goto label_22b17c;
        }
    }
    ctx->pc = 0x22B140u;
    // 0x22b140: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x22b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b144: 0xc089e94  jal         func_227A50
    ctx->pc = 0x22B144u;
    SET_GPR_U32(ctx, 31, 0x22B14Cu);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x22B144u, 0x22B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B14Cu;
label_22b14c:
    // 0x22b14c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b150: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b154: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b15c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x22b15cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b160: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b164: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x22b164u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b168: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B168u;
    SET_GPR_U32(ctx, 31, 0x22B170u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B168u, 0x22B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B170u;
label_22b170:
    // 0x22b170: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b174: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x22B174u;
    {
        const bool branch_taken_0x22b174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b174) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B17Cu;
label_22b17c:
    // 0x22b17c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x22b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x22b180: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b184: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x22b184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b188: 0xc08ad90  jal         func_22B640
    ctx->pc = 0x22B188u;
    SET_GPR_U32(ctx, 31, 0x22B190u);
    ctx->pc = 0x22B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B640u, 0x22B188u, 0x22B190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B190u;
label_22b190:
    // 0x22b190: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b194: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x22b194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x22b198: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B198u;
    SET_GPR_U32(ctx, 31, 0x22B1A0u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B198u, 0x22B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1A0u;
label_22b1a0:
    // 0x22b1a0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x22B1A0u;
    {
        const bool branch_taken_0x22b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b1a0) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B1A8u;
label_22b1a8:
    // 0x22b1a8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x22b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x22b1ac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b1b0: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B1B0u;
    SET_GPR_U32(ctx, 31, 0x22B1B8u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B1B0u, 0x22B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1B8u;
label_22b1b8:
    // 0x22b1b8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x22b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x22b1bc: 0xc08ad20  jal         func_22B480
    ctx->pc = 0x22B1BCu;
    SET_GPR_U32(ctx, 31, 0x22B1C4u);
    ctx->pc = 0x22B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B480u, 0x22B1BCu, 0x22B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1C4u;
label_22b1c4:
    // 0x22b1c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22b1c8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b1cc: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B1CCu;
    SET_GPR_U32(ctx, 31, 0x22B1D4u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B1CCu, 0x22B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1D4u;
label_22b1d4:
    // 0x22b1d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b1dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b1e0: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22B1E0u;
    SET_GPR_U32(ctx, 31, 0x22B1E8u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22B1E0u, 0x22B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1E8u;
label_22b1e8:
    // 0x22b1e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b1ec: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b1f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B1F8u;
    SET_GPR_U32(ctx, 31, 0x22B200u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B1F8u, 0x22B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B200u;
label_22b200:
    // 0x22b200: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x22b200u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b204: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22B204u;
    {
        const bool branch_taken_0x22b204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b204) {
            ctx->pc = 0x22B2C4u;
            goto label_22b2c4;
        }
    }
    ctx->pc = 0x22B20Cu;
    // 0x22b20c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x22b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22b210: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22B210u;
    SET_GPR_U32(ctx, 31, 0x22B218u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22B210u, 0x22B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B218u;
label_22b218:
    // 0x22b218: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b21c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x22b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x22b220: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22b220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b224: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B224u;
    SET_GPR_U32(ctx, 31, 0x22B22Cu);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B224u, 0x22B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B22Cu;
label_22b22c:
    // 0x22b22c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b230: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b234: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b238: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b23c: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B23Cu;
    SET_GPR_U32(ctx, 31, 0x22B244u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B23Cu, 0x22B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B244u;
label_22b244:
    // 0x22b244: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22B244u;
    {
        const bool branch_taken_0x22b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b244) {
            ctx->pc = 0x22B2C4u;
            goto label_22b2c4;
        }
    }
    ctx->pc = 0x22B24Cu;
    // 0x22b24c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x22b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22b250: 0xc08ad30  jal         func_22B4C0
    ctx->pc = 0x22B250u;
    SET_GPR_U32(ctx, 31, 0x22B258u);
    ctx->pc = 0x22B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4C0u, 0x22B250u, 0x22B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B258u;
label_22b258:
    // 0x22b258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b25c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22B25Cu;
    {
        const bool branch_taken_0x22b25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b25c) {
            ctx->pc = 0x22B290u;
            goto label_22b290;
        }
    }
    ctx->pc = 0x22B264u;
    // 0x22b264: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b268: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b270: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x22b270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22b274: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b274u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b278: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x22b278u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x22b27c: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B27Cu;
    SET_GPR_U32(ctx, 31, 0x22B284u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B27Cu, 0x22B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B284u;
label_22b284:
    // 0x22b284: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b288: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x22B288u;
    {
        const bool branch_taken_0x22b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b288) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B290u;
label_22b290:
    // 0x22b290: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b294: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b298: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b29c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b2a0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22b2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b2a4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b2a8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b2ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b2acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b2b0: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B2B0u;
    SET_GPR_U32(ctx, 31, 0x22B2B8u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B2B0u, 0x22B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2B8u;
label_22b2b8:
    // 0x22b2b8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b2bc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x22B2BCu;
    {
        const bool branch_taken_0x22b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b2bc) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B2C4u;
label_22b2c4:
    // 0x22b2c4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x22b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x22b2c8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b2cc: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B2CCu;
    SET_GPR_U32(ctx, 31, 0x22B2D4u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B2CCu, 0x22B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2D4u;
label_22b2d4:
    // 0x22b2d4: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x22b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x22b2d8: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x22B2D8u;
    SET_GPR_U32(ctx, 31, 0x22B2E0u);
    ctx->pc = 0x22B4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4E0u, 0x22B2D8u, 0x22B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B2E0u;
label_22b2e0:
    // 0x22b2e0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x22b2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x22b2e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x22b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x22b2e8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x22b2e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b2ec: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22B2ECu;
    {
        const bool branch_taken_0x22b2ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b2ec) {
            ctx->pc = 0x22B334u;
            goto label_22b334;
        }
    }
    ctx->pc = 0x22B2F4u;
    // 0x22b2f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b2f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b2fc: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22B2FCu;
    SET_GPR_U32(ctx, 31, 0x22B304u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22B2FCu, 0x22B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B304u;
label_22b304:
    // 0x22b304: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b308: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x22b308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x22b30c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b310: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B310u;
    SET_GPR_U32(ctx, 31, 0x22B318u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B310u, 0x22B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B318u;
label_22b318:
    // 0x22b318: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b31c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b320: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b324: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b328: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B328u;
    SET_GPR_U32(ctx, 31, 0x22B330u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B328u, 0x22B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B330u;
label_22b330:
    // 0x22b330: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x22b330u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_22b334:
    // 0x22b334: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x22B334u;
    {
        const bool branch_taken_0x22b334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b334) {
            ctx->pc = 0x22B414u;
            goto label_22b414;
        }
    }
    ctx->pc = 0x22B33Cu;
    // 0x22b33c: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x22B33Cu;
    {
        const bool branch_taken_0x22b33c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b33c) {
            ctx->pc = 0x22B414u;
            goto label_22b414;
        }
    }
    ctx->pc = 0x22B344u;
    // 0x22b344: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x22b344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x22b348: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b34c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b350: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22B350u;
    {
        const bool branch_taken_0x22b350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b350) {
            ctx->pc = 0x22B398u;
            goto label_22b398;
        }
    }
    ctx->pc = 0x22B358u;
    // 0x22b358: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x22b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x22b35c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x22b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b360: 0xc08a91c  jal         func_22A470
    ctx->pc = 0x22B360u;
    SET_GPR_U32(ctx, 31, 0x22B368u);
    ctx->pc = 0x22A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A470u, 0x22B360u, 0x22B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B368u;
label_22b368:
    // 0x22b368: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22b368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b36c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x22b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x22b370: 0xc08ad48  jal         func_22B520
    ctx->pc = 0x22B370u;
    SET_GPR_U32(ctx, 31, 0x22B378u);
    ctx->pc = 0x22B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B520u, 0x22B370u, 0x22B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B378u;
label_22b378:
    // 0x22b378: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22b378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b37c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x22b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x22b380: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22b380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22b384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b388: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x22B388u;
    SET_GPR_U32(ctx, 31, 0x22B390u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x22B388u, 0x22B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B390u;
label_22b390:
    // 0x22b390: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22B390u;
    {
        const bool branch_taken_0x22b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b390) {
            ctx->pc = 0x22B414u;
            goto label_22b414;
        }
    }
    ctx->pc = 0x22B398u;
label_22b398:
    // 0x22b398: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b39c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b3a0: 0xc08ad30  jal         func_22B4C0
    ctx->pc = 0x22B3A0u;
    SET_GPR_U32(ctx, 31, 0x22B3A8u);
    ctx->pc = 0x22B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4C0u, 0x22B3A0u, 0x22B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3A8u;
label_22b3a8:
    // 0x22b3a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b3ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22B3ACu;
    {
        const bool branch_taken_0x22b3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b3ac) {
            ctx->pc = 0x22B3E8u;
            goto label_22b3e8;
        }
    }
    ctx->pc = 0x22B3B4u;
    // 0x22b3b4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b3b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b3bc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b3c0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b3c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22b3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b3c8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x22b3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b3cc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b3d0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x22b3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b3d4: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B3D4u;
    SET_GPR_U32(ctx, 31, 0x22B3DCu);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B3D4u, 0x22B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3DCu;
label_22b3dc:
    // 0x22b3dc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b3e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x22B3E0u;
    {
        const bool branch_taken_0x22b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3e0) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B3E8u;
label_22b3e8:
    // 0x22b3e8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b3ec: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b3f0: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x22b3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x22b3f4: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x22b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x22b3f8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x22b3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b3fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b3fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b400: 0xc08ae28  jal         func_22B8A0
    ctx->pc = 0x22B400u;
    SET_GPR_U32(ctx, 31, 0x22B408u);
    ctx->pc = 0x22B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B8A0u, 0x22B400u, 0x22B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B408u;
label_22b408:
    // 0x22b408: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22b408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b40c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22B40Cu;
    {
        const bool branch_taken_0x22b40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b40c) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B414u;
label_22b414:
    // 0x22b414: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x22b414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x22b418: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x22b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x22b41c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B41Cu;
    {
        const bool branch_taken_0x22b41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b41c) {
            ctx->pc = 0x22B43Cu;
            goto label_22b43c;
        }
    }
    ctx->pc = 0x22B424u;
    // 0x22b424: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b428: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22b42c: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B42Cu;
    SET_GPR_U32(ctx, 31, 0x22B434u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B42Cu, 0x22B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B434u;
label_22b434:
    // 0x22b434: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22B434u;
    {
        const bool branch_taken_0x22b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b434) {
            ctx->pc = 0x22B460u;
            goto label_22b460;
        }
    }
    ctx->pc = 0x22B43Cu;
label_22b43c:
    // 0x22b43c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b440: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x22b440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22b444: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x22b444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22b448: 0xc08ad90  jal         func_22B640
    ctx->pc = 0x22B448u;
    SET_GPR_U32(ctx, 31, 0x22B450u);
    ctx->pc = 0x22B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B640u, 0x22B448u, 0x22B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B450u;
label_22b450:
    // 0x22b450: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22b454: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b458: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22B458u;
    SET_GPR_U32(ctx, 31, 0x22B460u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22B458u, 0x22B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B460u;
label_22b460:
    // 0x22b460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22b460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b464: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b474: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x22b474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x22b478: 0x3e00008  jr          $ra
    ctx->pc = 0x22B478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B480u;
}
