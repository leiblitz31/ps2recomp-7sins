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

// Function: sub_0026DF60
// Address: 0x26df60 - 0x26e780
void sub_0026DF60_0x26df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DF60_0x26df60");
#endif

    switch (ctx->pc) {
        case 0x26df88u: goto label_26df88;
        case 0x26df9cu: goto label_26df9c;
        case 0x26dfb4u: goto label_26dfb4;
        case 0x26dfc0u: goto label_26dfc0;
        case 0x26dfdcu: goto label_26dfdc;
        case 0x26dff4u: goto label_26dff4;
        case 0x26e00cu: goto label_26e00c;
        case 0x26e020u: goto label_26e020;
        case 0x26e03cu: goto label_26e03c;
        case 0x26e058u: goto label_26e058;
        case 0x26e06cu: goto label_26e06c;
        case 0x26e088u: goto label_26e088;
        case 0x26e094u: goto label_26e094;
        case 0x26e0a4u: goto label_26e0a4;
        case 0x26e0b0u: goto label_26e0b0;
        case 0x26e0ccu: goto label_26e0cc;
        case 0x26e0e4u: goto label_26e0e4;
        case 0x26e0fcu: goto label_26e0fc;
        case 0x26e110u: goto label_26e110;
        case 0x26e12cu: goto label_26e12c;
        case 0x26e148u: goto label_26e148;
        case 0x26e15cu: goto label_26e15c;
        case 0x26e178u: goto label_26e178;
        case 0x26e184u: goto label_26e184;
        case 0x26e194u: goto label_26e194;
        case 0x26e1a0u: goto label_26e1a0;
        case 0x26e1bcu: goto label_26e1bc;
        case 0x26e1d4u: goto label_26e1d4;
        case 0x26e1ecu: goto label_26e1ec;
        case 0x26e200u: goto label_26e200;
        case 0x26e21cu: goto label_26e21c;
        case 0x26e238u: goto label_26e238;
        case 0x26e24cu: goto label_26e24c;
        case 0x26e268u: goto label_26e268;
        case 0x26e274u: goto label_26e274;
        case 0x26e284u: goto label_26e284;
        case 0x26e290u: goto label_26e290;
        case 0x26e2acu: goto label_26e2ac;
        case 0x26e2c4u: goto label_26e2c4;
        case 0x26e2dcu: goto label_26e2dc;
        case 0x26e2f0u: goto label_26e2f0;
        case 0x26e30cu: goto label_26e30c;
        case 0x26e328u: goto label_26e328;
        case 0x26e33cu: goto label_26e33c;
        case 0x26e358u: goto label_26e358;
        case 0x26e364u: goto label_26e364;
        case 0x26e374u: goto label_26e374;
        case 0x26e380u: goto label_26e380;
        case 0x26e39cu: goto label_26e39c;
        case 0x26e3b4u: goto label_26e3b4;
        case 0x26e3ccu: goto label_26e3cc;
        case 0x26e3e0u: goto label_26e3e0;
        case 0x26e3fcu: goto label_26e3fc;
        case 0x26e418u: goto label_26e418;
        case 0x26e42cu: goto label_26e42c;
        case 0x26e448u: goto label_26e448;
        case 0x26e454u: goto label_26e454;
        case 0x26e464u: goto label_26e464;
        case 0x26e470u: goto label_26e470;
        case 0x26e48cu: goto label_26e48c;
        case 0x26e4a4u: goto label_26e4a4;
        case 0x26e4bcu: goto label_26e4bc;
        case 0x26e4d0u: goto label_26e4d0;
        case 0x26e4ecu: goto label_26e4ec;
        case 0x26e508u: goto label_26e508;
        case 0x26e51cu: goto label_26e51c;
        case 0x26e538u: goto label_26e538;
        case 0x26e544u: goto label_26e544;
        case 0x26e554u: goto label_26e554;
        case 0x26e560u: goto label_26e560;
        case 0x26e57cu: goto label_26e57c;
        case 0x26e594u: goto label_26e594;
        case 0x26e5acu: goto label_26e5ac;
        case 0x26e5c0u: goto label_26e5c0;
        case 0x26e5dcu: goto label_26e5dc;
        case 0x26e5f8u: goto label_26e5f8;
        case 0x26e60cu: goto label_26e60c;
        case 0x26e628u: goto label_26e628;
        case 0x26e634u: goto label_26e634;
        case 0x26e644u: goto label_26e644;
        case 0x26e650u: goto label_26e650;
        case 0x26e66cu: goto label_26e66c;
        case 0x26e684u: goto label_26e684;
        case 0x26e69cu: goto label_26e69c;
        case 0x26e6b4u: goto label_26e6b4;
        case 0x26e6d8u: goto label_26e6d8;
        case 0x26e6f4u: goto label_26e6f4;
        case 0x26e714u: goto label_26e714;
        case 0x26e738u: goto label_26e738;
        case 0x26e748u: goto label_26e748;
        case 0x26e75cu: goto label_26e75c;
        default: break;
    }

    ctx->pc = 0x26df60u;

    // 0x26df60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26df64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26df68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26df6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26df70: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x26df70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x26df74: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x26df74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x26df78: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x26df78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x26df7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26df80: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26DF80u;
    SET_GPR_U32(ctx, 31, 0x26DF88u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26DF80u, 0x26DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF88u;
label_26df88:
    // 0x26df88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26df88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26df8c: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x26df90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26df90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df94: 0xc0905a0  jal         func_241680
    ctx->pc = 0x26DF94u;
    SET_GPR_U32(ctx, 31, 0x26DF9Cu);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x26DF94u, 0x26DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DF9Cu;
label_26df9c:
    // 0x26df9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26df9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfa0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26dfa4: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x26dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x26dfa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26dfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfac: 0xc04809c  jal         func_120270
    ctx->pc = 0x26DFACu;
    SET_GPR_U32(ctx, 31, 0x26DFB4u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26DFACu, 0x26DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFB4u;
label_26dfb4:
    // 0x26dfb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26dfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfb8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26DFB8u;
    {
        const bool branch_taken_0x26dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfb8) {
            ctx->pc = 0x26E05Cu;
            goto label_26e05c;
        }
    }
    ctx->pc = 0x26DFC0u;
label_26dfc0:
    // 0x26dfc0: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26dfc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26dfc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26DFC4u;
    {
        const bool branch_taken_0x26dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfc4) {
            ctx->pc = 0x26DFF4u;
            goto label_26dff4;
        }
    }
    ctx->pc = 0x26DFCCu;
    // 0x26dfcc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26dfd0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x26dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x26dfd4: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26DFD4u;
    SET_GPR_U32(ctx, 31, 0x26DFDCu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26DFD4u, 0x26DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFDCu;
label_26dfdc:
    // 0x26dfdc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26dfe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26dfe4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26dfe8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26dfe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfec: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26DFECu;
    SET_GPR_U32(ctx, 31, 0x26DFF4u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26DFECu, 0x26DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DFF4u;
label_26dff4:
    // 0x26dff4: 0x93a50060  lbu         $a1, 0x60($sp)
    ctx->pc = 0x26dff4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26dff8: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26DFF8u;
    {
        const bool branch_taken_0x26dff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dff8) {
            ctx->pc = 0x26E044u;
            goto label_26e044;
        }
    }
    ctx->pc = 0x26E000u;
    // 0x26e000: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e004: 0xc048094  jal         func_120250
    ctx->pc = 0x26E004u;
    SET_GPR_U32(ctx, 31, 0x26E00Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E004u, 0x26E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E00Cu;
label_26e00c:
    // 0x26e00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e010: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e018: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E018u;
    SET_GPR_U32(ctx, 31, 0x26E020u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E018u, 0x26E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E020u;
label_26e020:
    // 0x26e020: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e024: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E024u;
    {
        const bool branch_taken_0x26e024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e024) {
            ctx->pc = 0x26E044u;
            goto label_26e044;
        }
    }
    ctx->pc = 0x26E02Cu;
    // 0x26e02c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e034: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E034u;
    SET_GPR_U32(ctx, 31, 0x26E03Cu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E034u, 0x26E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E03Cu;
label_26e03c:
    // 0x26e03c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E03Cu;
    {
        const bool branch_taken_0x26e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e03c) {
            ctx->pc = 0x26E058u;
            goto label_26e058;
        }
    }
    ctx->pc = 0x26E044u;
label_26e044:
    // 0x26e044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e048: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e04c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e050: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E050u;
    SET_GPR_U32(ctx, 31, 0x26E058u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E050u, 0x26E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E058u;
label_26e058:
    // 0x26e058: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e05c:
    // 0x26e05c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e060: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26e060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26e064: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E064u;
    SET_GPR_U32(ctx, 31, 0x26E06Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E064u, 0x26E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E06Cu;
label_26e06c:
    // 0x26e06c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E06Cu;
    {
        const bool branch_taken_0x26e06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e06c) {
            ctx->pc = 0x26DFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26dfc0;
        }
    }
    ctx->pc = 0x26E074u;
    // 0x26e074: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e078: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26e078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26e07c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e080: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E080u;
    SET_GPR_U32(ctx, 31, 0x26E088u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E080u, 0x26E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E088u;
label_26e088:
    // 0x26e088: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e08c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E08Cu;
    SET_GPR_U32(ctx, 31, 0x26E094u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E08Cu, 0x26E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E094u;
label_26e094:
    // 0x26e094: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e098: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26e098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26e09c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E09Cu;
    SET_GPR_U32(ctx, 31, 0x26E0A4u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E09Cu, 0x26E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0A4u;
label_26e0a4:
    // 0x26e0a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0a8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E0A8u;
    {
        const bool branch_taken_0x26e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0a8) {
            ctx->pc = 0x26E14Cu;
            goto label_26e14c;
        }
    }
    ctx->pc = 0x26E0B0u;
label_26e0b0:
    // 0x26e0b0: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26e0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e0b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E0B4u;
    {
        const bool branch_taken_0x26e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0b4) {
            ctx->pc = 0x26E0E4u;
            goto label_26e0e4;
        }
    }
    ctx->pc = 0x26E0BCu;
    // 0x26e0bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e0c0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e0c4: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E0C4u;
    SET_GPR_U32(ctx, 31, 0x26E0CCu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E0C4u, 0x26E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0CCu;
label_26e0cc:
    // 0x26e0cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e0d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e0d4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e0d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0dc: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E0DCu;
    SET_GPR_U32(ctx, 31, 0x26E0E4u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E0DCu, 0x26E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0E4u;
label_26e0e4:
    // 0x26e0e4: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e0e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E0E8u;
    {
        const bool branch_taken_0x26e0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e0e8) {
            ctx->pc = 0x26E134u;
            goto label_26e134;
        }
    }
    ctx->pc = 0x26E0F0u;
    // 0x26e0f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e0f4: 0xc048094  jal         func_120250
    ctx->pc = 0x26E0F4u;
    SET_GPR_U32(ctx, 31, 0x26E0FCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E0F4u, 0x26E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0FCu;
label_26e0fc:
    // 0x26e0fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e100: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e108: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E108u;
    SET_GPR_U32(ctx, 31, 0x26E110u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E108u, 0x26E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E110u;
label_26e110:
    // 0x26e110: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e114: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E114u;
    {
        const bool branch_taken_0x26e114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e114) {
            ctx->pc = 0x26E134u;
            goto label_26e134;
        }
    }
    ctx->pc = 0x26E11Cu;
    // 0x26e11c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e124: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E124u;
    SET_GPR_U32(ctx, 31, 0x26E12Cu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E124u, 0x26E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E12Cu;
label_26e12c:
    // 0x26e12c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E12Cu;
    {
        const bool branch_taken_0x26e12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e12c) {
            ctx->pc = 0x26E148u;
            goto label_26e148;
        }
    }
    ctx->pc = 0x26E134u;
label_26e134:
    // 0x26e134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e138: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e140: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E140u;
    SET_GPR_U32(ctx, 31, 0x26E148u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E140u, 0x26E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E148u;
label_26e148:
    // 0x26e148: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e14c:
    // 0x26e14c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e150: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26e154: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E154u;
    SET_GPR_U32(ctx, 31, 0x26E15Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E154u, 0x26E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E15Cu;
label_26e15c:
    // 0x26e15c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E15Cu;
    {
        const bool branch_taken_0x26e15c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e15c) {
            ctx->pc = 0x26E0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e0b0;
        }
    }
    ctx->pc = 0x26E164u;
    // 0x26e164: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e168: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26e168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26e16c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e170: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E170u;
    SET_GPR_U32(ctx, 31, 0x26E178u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E170u, 0x26E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E178u;
label_26e178:
    // 0x26e178: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e17c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E17Cu;
    SET_GPR_U32(ctx, 31, 0x26E184u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E17Cu, 0x26E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E184u;
label_26e184:
    // 0x26e184: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e188: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26e188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26e18c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E18Cu;
    SET_GPR_U32(ctx, 31, 0x26E194u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E18Cu, 0x26E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E194u;
label_26e194:
    // 0x26e194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e198: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E198u;
    {
        const bool branch_taken_0x26e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e198) {
            ctx->pc = 0x26E23Cu;
            goto label_26e23c;
        }
    }
    ctx->pc = 0x26E1A0u;
label_26e1a0:
    // 0x26e1a0: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26e1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e1a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E1A4u;
    {
        const bool branch_taken_0x26e1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1a4) {
            ctx->pc = 0x26E1D4u;
            goto label_26e1d4;
        }
    }
    ctx->pc = 0x26E1ACu;
    // 0x26e1ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e1b0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e1b4: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E1B4u;
    SET_GPR_U32(ctx, 31, 0x26E1BCu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E1B4u, 0x26E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1BCu;
label_26e1bc:
    // 0x26e1bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e1c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e1c4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26e1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e1c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1cc: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E1CCu;
    SET_GPR_U32(ctx, 31, 0x26E1D4u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E1CCu, 0x26E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1D4u;
label_26e1d4:
    // 0x26e1d4: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e1d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E1D8u;
    {
        const bool branch_taken_0x26e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e1d8) {
            ctx->pc = 0x26E224u;
            goto label_26e224;
        }
    }
    ctx->pc = 0x26E1E0u;
    // 0x26e1e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e1e4: 0xc048094  jal         func_120250
    ctx->pc = 0x26E1E4u;
    SET_GPR_U32(ctx, 31, 0x26E1ECu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E1E4u, 0x26E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1ECu;
label_26e1ec:
    // 0x26e1ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1f0: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1f8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E1F8u;
    SET_GPR_U32(ctx, 31, 0x26E200u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E1F8u, 0x26E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E200u;
label_26e200:
    // 0x26e200: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e204: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E204u;
    {
        const bool branch_taken_0x26e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e204) {
            ctx->pc = 0x26E224u;
            goto label_26e224;
        }
    }
    ctx->pc = 0x26E20Cu;
    // 0x26e20c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e214: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E214u;
    SET_GPR_U32(ctx, 31, 0x26E21Cu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E214u, 0x26E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E21Cu;
label_26e21c:
    // 0x26e21c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E21Cu;
    {
        const bool branch_taken_0x26e21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e21c) {
            ctx->pc = 0x26E238u;
            goto label_26e238;
        }
    }
    ctx->pc = 0x26E224u;
label_26e224:
    // 0x26e224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e228: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e230: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E230u;
    SET_GPR_U32(ctx, 31, 0x26E238u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E230u, 0x26E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E238u;
label_26e238:
    // 0x26e238: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e23c:
    // 0x26e23c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e240: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26e244: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E244u;
    SET_GPR_U32(ctx, 31, 0x26E24Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E244u, 0x26E24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E24Cu;
label_26e24c:
    // 0x26e24c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E24Cu;
    {
        const bool branch_taken_0x26e24c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e24c) {
            ctx->pc = 0x26E1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e1a0;
        }
    }
    ctx->pc = 0x26E254u;
    // 0x26e254: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e258: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26e25c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e260: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E260u;
    SET_GPR_U32(ctx, 31, 0x26E268u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E260u, 0x26E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E268u;
label_26e268:
    // 0x26e268: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e26c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E26Cu;
    SET_GPR_U32(ctx, 31, 0x26E274u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E26Cu, 0x26E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E274u;
label_26e274:
    // 0x26e274: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e278: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26e278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26e27c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E27Cu;
    SET_GPR_U32(ctx, 31, 0x26E284u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E27Cu, 0x26E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E284u;
label_26e284:
    // 0x26e284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e288: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E288u;
    {
        const bool branch_taken_0x26e288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e288) {
            ctx->pc = 0x26E32Cu;
            goto label_26e32c;
        }
    }
    ctx->pc = 0x26E290u;
label_26e290:
    // 0x26e290: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26e290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e294: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E294u;
    {
        const bool branch_taken_0x26e294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e294) {
            ctx->pc = 0x26E2C4u;
            goto label_26e2c4;
        }
    }
    ctx->pc = 0x26E29Cu;
    // 0x26e29c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e2a0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e2a4: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E2A4u;
    SET_GPR_U32(ctx, 31, 0x26E2ACu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E2A4u, 0x26E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2ACu;
label_26e2ac:
    // 0x26e2ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e2b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e2b4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e2b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2bc: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E2BCu;
    SET_GPR_U32(ctx, 31, 0x26E2C4u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E2BCu, 0x26E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2C4u;
label_26e2c4:
    // 0x26e2c4: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e2c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E2C8u;
    {
        const bool branch_taken_0x26e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e2c8) {
            ctx->pc = 0x26E314u;
            goto label_26e314;
        }
    }
    ctx->pc = 0x26E2D0u;
    // 0x26e2d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e2d4: 0xc048094  jal         func_120250
    ctx->pc = 0x26E2D4u;
    SET_GPR_U32(ctx, 31, 0x26E2DCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E2D4u, 0x26E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2DCu;
label_26e2dc:
    // 0x26e2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2e0: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2e8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E2E8u;
    SET_GPR_U32(ctx, 31, 0x26E2F0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E2E8u, 0x26E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2F0u;
label_26e2f0:
    // 0x26e2f0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e2f4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E2F4u;
    {
        const bool branch_taken_0x26e2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e2f4) {
            ctx->pc = 0x26E314u;
            goto label_26e314;
        }
    }
    ctx->pc = 0x26E2FCu;
    // 0x26e2fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e300: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e304: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E304u;
    SET_GPR_U32(ctx, 31, 0x26E30Cu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E304u, 0x26E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E30Cu;
label_26e30c:
    // 0x26e30c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E30Cu;
    {
        const bool branch_taken_0x26e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e30c) {
            ctx->pc = 0x26E328u;
            goto label_26e328;
        }
    }
    ctx->pc = 0x26E314u;
label_26e314:
    // 0x26e314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e318: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e320: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E320u;
    SET_GPR_U32(ctx, 31, 0x26E328u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E320u, 0x26E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E328u;
label_26e328:
    // 0x26e328: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e32c:
    // 0x26e32c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e330: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26e334: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E334u;
    SET_GPR_U32(ctx, 31, 0x26E33Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E334u, 0x26E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E33Cu;
label_26e33c:
    // 0x26e33c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E33Cu;
    {
        const bool branch_taken_0x26e33c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e33c) {
            ctx->pc = 0x26E290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e290;
        }
    }
    ctx->pc = 0x26E344u;
    // 0x26e344: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e348: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26e34c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e350: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E350u;
    SET_GPR_U32(ctx, 31, 0x26E358u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E350u, 0x26E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E358u;
label_26e358:
    // 0x26e358: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e35c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E35Cu;
    SET_GPR_U32(ctx, 31, 0x26E364u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E35Cu, 0x26E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E364u;
label_26e364:
    // 0x26e364: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e368: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26e36c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E36Cu;
    SET_GPR_U32(ctx, 31, 0x26E374u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E36Cu, 0x26E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E374u;
label_26e374:
    // 0x26e374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e378: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E378u;
    {
        const bool branch_taken_0x26e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e378) {
            ctx->pc = 0x26E41Cu;
            goto label_26e41c;
        }
    }
    ctx->pc = 0x26E380u;
label_26e380:
    // 0x26e380: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26e380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e384: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E384u;
    {
        const bool branch_taken_0x26e384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e384) {
            ctx->pc = 0x26E3B4u;
            goto label_26e3b4;
        }
    }
    ctx->pc = 0x26E38Cu;
    // 0x26e38c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e390: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e394: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E394u;
    SET_GPR_U32(ctx, 31, 0x26E39Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E394u, 0x26E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E39Cu;
label_26e39c:
    // 0x26e39c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e3a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e3a4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e3a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3ac: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E3ACu;
    SET_GPR_U32(ctx, 31, 0x26E3B4u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E3ACu, 0x26E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3B4u;
label_26e3b4:
    // 0x26e3b4: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e3b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E3B8u;
    {
        const bool branch_taken_0x26e3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e3b8) {
            ctx->pc = 0x26E404u;
            goto label_26e404;
        }
    }
    ctx->pc = 0x26E3C0u;
    // 0x26e3c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e3c4: 0xc048094  jal         func_120250
    ctx->pc = 0x26E3C4u;
    SET_GPR_U32(ctx, 31, 0x26E3CCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E3C4u, 0x26E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3CCu;
label_26e3cc:
    // 0x26e3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3d0: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3d8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E3D8u;
    SET_GPR_U32(ctx, 31, 0x26E3E0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E3D8u, 0x26E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3E0u;
label_26e3e0:
    // 0x26e3e0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e3e4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E3E4u;
    {
        const bool branch_taken_0x26e3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e3e4) {
            ctx->pc = 0x26E404u;
            goto label_26e404;
        }
    }
    ctx->pc = 0x26E3ECu;
    // 0x26e3ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3f4: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E3F4u;
    SET_GPR_U32(ctx, 31, 0x26E3FCu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E3F4u, 0x26E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3FCu;
label_26e3fc:
    // 0x26e3fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E3FCu;
    {
        const bool branch_taken_0x26e3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e3fc) {
            ctx->pc = 0x26E418u;
            goto label_26e418;
        }
    }
    ctx->pc = 0x26E404u;
label_26e404:
    // 0x26e404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e408: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e40c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e410: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E410u;
    SET_GPR_U32(ctx, 31, 0x26E418u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E410u, 0x26E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E418u;
label_26e418:
    // 0x26e418: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e41c:
    // 0x26e41c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e420: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26e420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26e424: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E424u;
    SET_GPR_U32(ctx, 31, 0x26E42Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E424u, 0x26E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E42Cu;
label_26e42c:
    // 0x26e42c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E42Cu;
    {
        const bool branch_taken_0x26e42c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e42c) {
            ctx->pc = 0x26E380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e380;
        }
    }
    ctx->pc = 0x26E434u;
    // 0x26e434: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e438: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x26e438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x26e43c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e440: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E440u;
    SET_GPR_U32(ctx, 31, 0x26E448u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E440u, 0x26E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E448u;
label_26e448:
    // 0x26e448: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e44c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E44Cu;
    SET_GPR_U32(ctx, 31, 0x26E454u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E44Cu, 0x26E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E454u;
label_26e454:
    // 0x26e454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e458: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26e45c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E45Cu;
    SET_GPR_U32(ctx, 31, 0x26E464u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E45Cu, 0x26E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E464u;
label_26e464:
    // 0x26e464: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e468: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E468u;
    {
        const bool branch_taken_0x26e468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e468) {
            ctx->pc = 0x26E50Cu;
            goto label_26e50c;
        }
    }
    ctx->pc = 0x26E470u;
label_26e470:
    // 0x26e470: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26e470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e474: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E474u;
    {
        const bool branch_taken_0x26e474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e474) {
            ctx->pc = 0x26E4A4u;
            goto label_26e4a4;
        }
    }
    ctx->pc = 0x26E47Cu;
    // 0x26e47c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e480: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e484: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E484u;
    SET_GPR_U32(ctx, 31, 0x26E48Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E484u, 0x26E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E48Cu;
label_26e48c:
    // 0x26e48c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e490: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e494: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e498: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e49c: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E49Cu;
    SET_GPR_U32(ctx, 31, 0x26E4A4u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E49Cu, 0x26E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4A4u;
label_26e4a4:
    // 0x26e4a4: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e4a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E4A8u;
    {
        const bool branch_taken_0x26e4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4a8) {
            ctx->pc = 0x26E4F4u;
            goto label_26e4f4;
        }
    }
    ctx->pc = 0x26E4B0u;
    // 0x26e4b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e4b4: 0xc048094  jal         func_120250
    ctx->pc = 0x26E4B4u;
    SET_GPR_U32(ctx, 31, 0x26E4BCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E4B4u, 0x26E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4BCu;
label_26e4bc:
    // 0x26e4bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4c0: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e4c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4c8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E4C8u;
    SET_GPR_U32(ctx, 31, 0x26E4D0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E4C8u, 0x26E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4D0u;
label_26e4d0:
    // 0x26e4d0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e4d4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E4D4u;
    {
        const bool branch_taken_0x26e4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e4d4) {
            ctx->pc = 0x26E4F4u;
            goto label_26e4f4;
        }
    }
    ctx->pc = 0x26E4DCu;
    // 0x26e4dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4e4: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E4E4u;
    SET_GPR_U32(ctx, 31, 0x26E4ECu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E4E4u, 0x26E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E4ECu;
label_26e4ec:
    // 0x26e4ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E4ECu;
    {
        const bool branch_taken_0x26e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4ec) {
            ctx->pc = 0x26E508u;
            goto label_26e508;
        }
    }
    ctx->pc = 0x26E4F4u;
label_26e4f4:
    // 0x26e4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e4fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e500: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E500u;
    SET_GPR_U32(ctx, 31, 0x26E508u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E500u, 0x26E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E508u;
label_26e508:
    // 0x26e508: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e50c:
    // 0x26e50c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e510: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26e514: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E514u;
    SET_GPR_U32(ctx, 31, 0x26E51Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E514u, 0x26E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E51Cu;
label_26e51c:
    // 0x26e51c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E51Cu;
    {
        const bool branch_taken_0x26e51c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e51c) {
            ctx->pc = 0x26E470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e470;
        }
    }
    ctx->pc = 0x26E524u;
    // 0x26e524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e528: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x26e528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x26e52c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e530: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E530u;
    SET_GPR_U32(ctx, 31, 0x26E538u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E530u, 0x26E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E538u;
label_26e538:
    // 0x26e538: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e53c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E53Cu;
    SET_GPR_U32(ctx, 31, 0x26E544u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E53Cu, 0x26E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E544u;
label_26e544:
    // 0x26e544: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e548: 0x2444007c  addiu       $a0, $v0, 0x7C
    ctx->pc = 0x26e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x26e54c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E54Cu;
    SET_GPR_U32(ctx, 31, 0x26E554u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E54Cu, 0x26E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E554u;
label_26e554:
    // 0x26e554: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e558: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E558u;
    {
        const bool branch_taken_0x26e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e558) {
            ctx->pc = 0x26E5FCu;
            goto label_26e5fc;
        }
    }
    ctx->pc = 0x26E560u;
label_26e560:
    // 0x26e560: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x26e560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e564: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E564u;
    {
        const bool branch_taken_0x26e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e564) {
            ctx->pc = 0x26E594u;
            goto label_26e594;
        }
    }
    ctx->pc = 0x26E56Cu;
    // 0x26e56c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e570: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e574: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E574u;
    SET_GPR_U32(ctx, 31, 0x26E57Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E574u, 0x26E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E57Cu;
label_26e57c:
    // 0x26e57c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e580: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e584: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x26e584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x26e588: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e58c: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E58Cu;
    SET_GPR_U32(ctx, 31, 0x26E594u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E58Cu, 0x26E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E594u;
label_26e594:
    // 0x26e594: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e598: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E598u;
    {
        const bool branch_taken_0x26e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e598) {
            ctx->pc = 0x26E5E4u;
            goto label_26e5e4;
        }
    }
    ctx->pc = 0x26E5A0u;
    // 0x26e5a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e5a4: 0xc048094  jal         func_120250
    ctx->pc = 0x26E5A4u;
    SET_GPR_U32(ctx, 31, 0x26E5ACu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E5A4u, 0x26E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5ACu;
label_26e5ac:
    // 0x26e5ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5b0: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e5b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5b8: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E5B8u;
    SET_GPR_U32(ctx, 31, 0x26E5C0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E5B8u, 0x26E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5C0u;
label_26e5c0:
    // 0x26e5c0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e5c4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E5C4u;
    {
        const bool branch_taken_0x26e5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e5c4) {
            ctx->pc = 0x26E5E4u;
            goto label_26e5e4;
        }
    }
    ctx->pc = 0x26E5CCu;
    // 0x26e5cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e5d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5d4: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E5D4u;
    SET_GPR_U32(ctx, 31, 0x26E5DCu);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E5D4u, 0x26E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5DCu;
label_26e5dc:
    // 0x26e5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E5DCu;
    {
        const bool branch_taken_0x26e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e5dc) {
            ctx->pc = 0x26E5F8u;
            goto label_26e5f8;
        }
    }
    ctx->pc = 0x26E5E4u;
label_26e5e4:
    // 0x26e5e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e5ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5f0: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E5F0u;
    SET_GPR_U32(ctx, 31, 0x26E5F8u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E5F0u, 0x26E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5F8u;
label_26e5f8:
    // 0x26e5f8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26e5fc:
    // 0x26e5fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e600: 0x2444007c  addiu       $a0, $v0, 0x7C
    ctx->pc = 0x26e600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x26e604: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E604u;
    SET_GPR_U32(ctx, 31, 0x26E60Cu);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E604u, 0x26E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E60Cu;
label_26e60c:
    // 0x26e60c: 0x1602ffd4  bne         $s0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x26E60Cu;
    {
        const bool branch_taken_0x26e60c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e60c) {
            ctx->pc = 0x26E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e560;
        }
    }
    ctx->pc = 0x26E614u;
    // 0x26e614: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e618: 0x2444007c  addiu       $a0, $v0, 0x7C
    ctx->pc = 0x26e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
    // 0x26e61c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e620: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E620u;
    SET_GPR_U32(ctx, 31, 0x26E628u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E620u, 0x26E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E628u;
label_26e628:
    // 0x26e628: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e62c: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E62Cu;
    SET_GPR_U32(ctx, 31, 0x26E634u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E62Cu, 0x26E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E634u;
label_26e634:
    // 0x26e634: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e638: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x26e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x26e63c: 0xc04809c  jal         func_120270
    ctx->pc = 0x26E63Cu;
    SET_GPR_U32(ctx, 31, 0x26E644u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x26E63Cu, 0x26E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E644u;
label_26e644:
    // 0x26e644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e648: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26E648u;
    {
        const bool branch_taken_0x26e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e648) {
            ctx->pc = 0x26E700u;
            goto label_26e700;
        }
    }
    ctx->pc = 0x26E650u;
label_26e650:
    // 0x26e650: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x26e650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e654: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x26E654u;
    {
        const bool branch_taken_0x26e654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e654) {
            ctx->pc = 0x26E684u;
            goto label_26e684;
        }
    }
    ctx->pc = 0x26E65Cu;
    // 0x26e65c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e660: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26e664: 0xc09138c  jal         func_244E30
    ctx->pc = 0x26E664u;
    SET_GPR_U32(ctx, 31, 0x26E66Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x26E664u, 0x26E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E66Cu;
label_26e66c:
    // 0x26e66c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e670: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e674: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e678: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x26e678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26e67c: 0xc099e5c  jal         func_267970
    ctx->pc = 0x26E67Cu;
    SET_GPR_U32(ctx, 31, 0x26E684u);
    ctx->pc = 0x267970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267970u, 0x26E67Cu, 0x26E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E684u;
label_26e684:
    // 0x26e684: 0x93a20060  lbu         $v0, 0x60($sp)
    ctx->pc = 0x26e684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e688: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E688u;
    {
        const bool branch_taken_0x26e688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e688) {
            ctx->pc = 0x26E6E0u;
            goto label_26e6e0;
        }
    }
    ctx->pc = 0x26E690u;
    // 0x26e690: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e694: 0xc048094  jal         func_120250
    ctx->pc = 0x26E694u;
    SET_GPR_U32(ctx, 31, 0x26E69Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26E694u, 0x26E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E69Cu;
label_26e69c:
    // 0x26e69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6a0: 0x24020480  addiu       $v0, $zero, 0x480
    ctx->pc = 0x26e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26e6a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6ac: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x26E6ACu;
    SET_GPR_U32(ctx, 31, 0x26E6B4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x26E6ACu, 0x26E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6B4u;
label_26e6b4:
    // 0x26e6b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26e6b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6b8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x26e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26e6bc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E6BCu;
    {
        const bool branch_taken_0x26e6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x26e6bc) {
            ctx->pc = 0x26E6E0u;
            goto label_26e6e0;
        }
    }
    ctx->pc = 0x26E6C4u;
    // 0x26e6c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e6c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6d0: 0xc09a42c  jal         func_2690B0
    ctx->pc = 0x26E6D0u;
    SET_GPR_U32(ctx, 31, 0x26E6D8u);
    ctx->pc = 0x2690B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690B0u, 0x26E6D0u, 0x26E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6D8u;
label_26e6d8:
    // 0x26e6d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26E6D8u;
    {
        const bool branch_taken_0x26e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e6d8) {
            ctx->pc = 0x26E6F8u;
            goto label_26e6f8;
        }
    }
    ctx->pc = 0x26E6E0u;
label_26e6e0:
    // 0x26e6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26e6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6ec: 0xc09a5a8  jal         func_2696A0
    ctx->pc = 0x26E6ECu;
    SET_GPR_U32(ctx, 31, 0x26E6F4u);
    ctx->pc = 0x2696A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2696A0u, 0x26E6ECu, 0x26E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6F4u;
label_26e6f4:
    // 0x26e6f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e6f8:
    // 0x26e6f8: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x26e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26e6fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e700:
    // 0x26e700: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x26e700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e704: 0x24a200ac  addiu       $v0, $a1, 0xAC
    ctx->pc = 0x26e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 172));
    // 0x26e708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e70c: 0xc04808c  jal         func_120230
    ctx->pc = 0x26E70Cu;
    SET_GPR_U32(ctx, 31, 0x26E714u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x26E70Cu, 0x26E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E714u;
label_26e714:
    // 0x26e714: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26e714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e718: 0x1603ffcd  bne         $s0, $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x26E718u;
    {
        const bool branch_taken_0x26e718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e718) {
            ctx->pc = 0x26E650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e650;
        }
    }
    ctx->pc = 0x26E720u;
    // 0x26e720: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x26e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e724: 0x248200ac  addiu       $v0, $a0, 0xAC
    ctx->pc = 0x26e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
    // 0x26e728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e72c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e730: 0xc09b9e0  jal         func_26E780
    ctx->pc = 0x26E730u;
    SET_GPR_U32(ctx, 31, 0x26E738u);
    ctx->pc = 0x26E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E780u, 0x26E730u, 0x26E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E738u;
label_26e738:
    // 0x26e738: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x26e738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e73c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e740: 0xc068454  jal         func_1A1150
    ctx->pc = 0x26E740u;
    SET_GPR_U32(ctx, 31, 0x26E748u);
    ctx->pc = 0x1A1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1150u, 0x26E740u, 0x26E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E748u;
label_26e748:
    // 0x26e748: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26e74c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e754: 0xc048004  jal         func_120010
    ctx->pc = 0x26E754u;
    SET_GPR_U32(ctx, 31, 0x26E75Cu);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x26E754u, 0x26E75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E75Cu;
label_26e75c:
    // 0x26e75c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e768: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26e76c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E774u;
    // 0x26e774: 0x0  nop
    ctx->pc = 0x26e774u;
    // NOP
    // 0x26e778: 0x0  nop
    ctx->pc = 0x26e778u;
    // NOP
    // 0x26e77c: 0x0  nop
    ctx->pc = 0x26e77cu;
    // NOP
    ctx->pc = 0x26e780u;
}
