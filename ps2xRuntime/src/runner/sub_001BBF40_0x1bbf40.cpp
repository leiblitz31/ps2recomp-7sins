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

// Function: sub_001BBF40
// Address: 0x1bbf40 - 0x1bc210
void sub_001BBF40_0x1bbf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBF40_0x1bbf40");
#endif

    switch (ctx->pc) {
        case 0x1bbf80u: goto label_1bbf80;
        case 0x1bbf8cu: goto label_1bbf8c;
        case 0x1bbfa4u: goto label_1bbfa4;
        case 0x1bbfb0u: goto label_1bbfb0;
        case 0x1bbfc8u: goto label_1bbfc8;
        case 0x1bbfd4u: goto label_1bbfd4;
        case 0x1bbff4u: goto label_1bbff4;
        case 0x1bc004u: goto label_1bc004;
        case 0x1bc04cu: goto label_1bc04c;
        case 0x1bc060u: goto label_1bc060;
        case 0x1bc074u: goto label_1bc074;
        case 0x1bc0a4u: goto label_1bc0a4;
        case 0x1bc0b4u: goto label_1bc0b4;
        case 0x1bc0d4u: goto label_1bc0d4;
        case 0x1bc128u: goto label_1bc128;
        case 0x1bc140u: goto label_1bc140;
        case 0x1bc158u: goto label_1bc158;
        case 0x1bc19cu: goto label_1bc19c;
        case 0x1bc1b8u: goto label_1bc1b8;
        case 0x1bc1d8u: goto label_1bc1d8;
        default: break;
    }

    ctx->pc = 0x1bbf40u;

    // 0x1bbf40: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1bbf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x1bbf44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bbf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bbf48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bbf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bbf4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bbf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bbf50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bbf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bbf54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bbf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bbf58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bbf5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bbf60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbf64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbf68: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
    // 0x1bbf6c: 0xa3a502f0  sb          $a1, 0x2F0($sp)
    ctx->pc = 0x1bbf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 752), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bbf70: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x1bbf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x1bbf74: 0xafa002d8  sw          $zero, 0x2D8($sp)
    ctx->pc = 0x1bbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 0));
    // 0x1bbf78: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1bbf78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bbf7c: 0x27b30210  addiu       $s3, $sp, 0x210
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1bbf80:
    // 0x1bbf80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bbf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf84: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BBF84u;
    SET_GPR_U32(ctx, 31, 0x1BBF8Cu);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BBF84u, 0x1BBF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF8Cu;
label_1bbf8c:
    // 0x1bbf8c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1bbf8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1bbf90: 0x27a202d0  addiu       $v0, $sp, 0x2D0
    ctx->pc = 0x1bbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1bbf94: 0x0  nop
    ctx->pc = 0x1bbf94u;
    // NOP
    // 0x1bbf98: 0x1662fff9  bne         $s3, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BBF98u;
    {
        const bool branch_taken_0x1bbf98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbf98) {
            ctx->pc = 0x1BBF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbf80;
        }
    }
    ctx->pc = 0x1BBFA0u;
    // 0x1bbfa0: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x1bbfa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1bbfa4:
    // 0x1bbfa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfa8: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BBFA8u;
    SET_GPR_U32(ctx, 31, 0x1BBFB0u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BBFA8u, 0x1BBFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFB0u;
label_1bbfb0:
    // 0x1bbfb0: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1bbfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1bbfb4: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x1bbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1bbfb8: 0x0  nop
    ctx->pc = 0x1bbfb8u;
    // NOP
    // 0x1bbfbc: 0x1642fff9  bne         $s2, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BBFBCu;
    {
        const bool branch_taken_0x1bbfbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbfbc) {
            ctx->pc = 0x1BBFA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbfa4;
        }
    }
    ctx->pc = 0x1BBFC4u;
    // 0x1bbfc4: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x1bbfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1bbfc8:
    // 0x1bbfc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bbfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfcc: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BBFCCu;
    SET_GPR_U32(ctx, 31, 0x1BBFD4u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BBFCCu, 0x1BBFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFD4u;
label_1bbfd4:
    // 0x1bbfd4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1bbfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1bbfd8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x1bbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bbfdc: 0x0  nop
    ctx->pc = 0x1bbfdcu;
    // NOP
    // 0x1bbfe0: 0x1622fff9  bne         $s1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BBFE0u;
    {
        const bool branch_taken_0x1bbfe0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bbfe0) {
            ctx->pc = 0x1BBFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbfc8;
        }
    }
    ctx->pc = 0x1BBFE8u;
    // 0x1bbfe8: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bbfec: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BBFECu;
    SET_GPR_U32(ctx, 31, 0x1BBFF4u);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BBFECu, 0x1BBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFF4u;
label_1bbff4:
    // 0x1bbff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbff8: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bbff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bbffc: 0xc0704c0  jal         func_1C1300
    ctx->pc = 0x1BBFFCu;
    SET_GPR_U32(ctx, 31, 0x1BC004u);
    ctx->pc = 0x1C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1300u, 0x1BBFFCu, 0x1BC004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC004u;
label_1bc004:
    // 0x1bc004: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC004u;
    {
        const bool branch_taken_0x1bc004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc004) {
            ctx->pc = 0x1BC024u;
            goto label_1bc024;
        }
    }
    ctx->pc = 0x1BC00Cu;
    // 0x1bc00c: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x1bc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc010: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x1bc010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1bc014: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC014u;
    {
        const bool branch_taken_0x1bc014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc014) {
            ctx->pc = 0x1BC024u;
            goto label_1bc024;
        }
    }
    ctx->pc = 0x1BC01Cu;
    // 0x1bc01c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC01Cu;
    {
        const bool branch_taken_0x1bc01c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc01c) {
            ctx->pc = 0x1BC02Cu;
            goto label_1bc02c;
        }
    }
    ctx->pc = 0x1BC024u;
label_1bc024:
    // 0x1bc024: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1BC024u;
    {
        const bool branch_taken_0x1bc024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc024) {
            ctx->pc = 0x1BC1D8u;
            goto label_1bc1d8;
        }
    }
    ctx->pc = 0x1BC02Cu;
label_1bc02c:
    // 0x1bc02c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bc02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc030: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc034: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc038: 0x27a70210  addiu       $a3, $sp, 0x210
    ctx->pc = 0x1bc038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1bc03c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bc03cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc040: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc044: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BC044u;
    SET_GPR_U32(ctx, 31, 0x1BC04Cu);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1BC044u, 0x1BC04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC04Cu;
label_1bc04c:
    // 0x1bc04c: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc050: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1bc050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1bc054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc058: 0xc06fdf0  jal         func_1BF7C0
    ctx->pc = 0x1BC058u;
    SET_GPR_U32(ctx, 31, 0x1BC060u);
    ctx->pc = 0x1BF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF7C0u, 0x1BC058u, 0x1BC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC060u;
label_1bc060:
    // 0x1bc060: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1bc060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc064: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1bc064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1bc068: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1bc068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1bc06c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x1BC06Cu;
    SET_GPR_U32(ctx, 31, 0x1BC074u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x1BC06Cu, 0x1BC074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC074u;
label_1bc074:
    // 0x1bc074: 0x93a202f0  lbu         $v0, 0x2F0($sp)
    ctx->pc = 0x1bc074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1bc078: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC078u;
    {
        const bool branch_taken_0x1bc078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc078) {
            ctx->pc = 0x1BC08Cu;
            goto label_1bc08c;
        }
    }
    ctx->pc = 0x1BC080u;
    // 0x1bc080: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc084: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC084u;
    {
        const bool branch_taken_0x1bc084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc084) {
            ctx->pc = 0x1BC090u;
            goto label_1bc090;
        }
    }
    ctx->pc = 0x1BC08Cu;
label_1bc08c:
    // 0x1bc08c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1bc08cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bc090:
    // 0x1bc090: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc094: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1bc094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc098: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bc098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc09c: 0xc07040c  jal         func_1C1030
    ctx->pc = 0x1BC09Cu;
    SET_GPR_U32(ctx, 31, 0x1BC0A4u);
    ctx->pc = 0x1C1030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1030u, 0x1BC09Cu, 0x1BC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0A4u;
label_1bc0a4:
    // 0x1bc0a4: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc0a8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc0ac: 0xc070498  jal         func_1C1260
    ctx->pc = 0x1BC0ACu;
    SET_GPR_U32(ctx, 31, 0x1BC0B4u);
    ctx->pc = 0x1C1260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1260u, 0x1BC0ACu, 0x1BC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0B4u;
label_1bc0b4:
    // 0x1bc0b4: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc0b8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1bc0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc0bc: 0x27a602dc  addiu       $a2, $sp, 0x2DC
    ctx->pc = 0x1bc0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
    // 0x1bc0c0: 0x27a702d8  addiu       $a3, $sp, 0x2D8
    ctx->pc = 0x1bc0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1bc0c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc0c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc0c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0cc: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1BC0CCu;
    SET_GPR_U32(ctx, 31, 0x1BC0D4u);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1BC0CCu, 0x1BC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0D4u;
label_1bc0d4:
    // 0x1bc0d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc0d8: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x1bc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x1bc0dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc0e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc0e4: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1bc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bc0e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1bc0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bc0ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC0ECu;
    {
        const bool branch_taken_0x1bc0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc0ec) {
            ctx->pc = 0x1BC108u;
            goto label_1bc108;
        }
    }
    ctx->pc = 0x1BC0F4u;
    // 0x1bc0f4: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x1bc0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc0f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc0fc: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x1bc100: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bc104: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bc104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1bc108:
    // 0x1bc108: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc10c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1bc10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc110: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc114: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1bc114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bc118: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc11c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc11cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc120: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BC120u;
    SET_GPR_U32(ctx, 31, 0x1BC128u);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1BC120u, 0x1BC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC128u;
label_1bc128:
    // 0x1bc128: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1bc128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bc12c: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1bc12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bc130: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc134: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1bc134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc138: 0xc070194  jal         func_1C0650
    ctx->pc = 0x1BC138u;
    SET_GPR_U32(ctx, 31, 0x1BC140u);
    ctx->pc = 0x1C0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0650u, 0x1BC138u, 0x1BC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC140u;
label_1bc140:
    // 0x1bc140: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1bc140u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bc144: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc148: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bc148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bc14c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1bc14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc150: 0xc06ef34  jal         func_1BBCD0
    ctx->pc = 0x1BC150u;
    SET_GPR_U32(ctx, 31, 0x1BC158u);
    ctx->pc = 0x1BBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCD0u, 0x1BC150u, 0x1BC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC158u;
label_1bc158:
    // 0x1bc158: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1bc158u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bc15c: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x1bc15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1bc160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC160u;
    {
        const bool branch_taken_0x1bc160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc160) {
            ctx->pc = 0x1BC178u;
            goto label_1bc178;
        }
    }
    ctx->pc = 0x1BC168u;
    // 0x1bc168: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x1bc168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1bc16c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc170: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC170u;
    {
        const bool branch_taken_0x1bc170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc170) {
            ctx->pc = 0x1BC1A4u;
            goto label_1bc1a4;
        }
    }
    ctx->pc = 0x1BC178u;
label_1bc178:
    // 0x1bc178: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bc178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc17c: 0x12820002  beq         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC17Cu;
    {
        const bool branch_taken_0x1bc17c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc17c) {
            ctx->pc = 0x1BC188u;
            goto label_1bc188;
        }
    }
    ctx->pc = 0x1BC184u;
    // 0x1bc184: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1bc184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_1bc188:
    // 0x1bc188: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc18c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1bc190: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc194: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1BC194u;
    SET_GPR_U32(ctx, 31, 0x1BC19Cu);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1BC194u, 0x1BC19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC19Cu;
label_1bc19c:
    // 0x1bc19c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BC19Cu;
    {
        const bool branch_taken_0x1bc19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc19c) {
            ctx->pc = 0x1BC1D8u;
            goto label_1bc1d8;
        }
    }
    ctx->pc = 0x1BC1A4u;
label_1bc1a4:
    // 0x1bc1a4: 0x8fa402e0  lw          $a0, 0x2E0($sp)
    ctx->pc = 0x1bc1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1bc1a8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1bc1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1bc1ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bc1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc1b0: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1BC1B0u;
    SET_GPR_U32(ctx, 31, 0x1BC1B8u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1BC1B0u, 0x1BC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1B8u;
label_1bc1b8:
    // 0x1bc1b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bc1bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bc1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc1c0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1bc1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1bc1c4: 0x278595b8  addiu       $a1, $gp, -0x6A48
    ctx->pc = 0x1bc1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940088));
    // 0x1bc1c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bc1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1bc1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc1d0: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1BC1D0u;
    SET_GPR_U32(ctx, 31, 0x1BC1D8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1BC1D0u, 0x1BC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1D8u;
label_1bc1d8:
    // 0x1bc1d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bc1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bc1dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bc1dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc1e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bc1e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc1e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc1e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc1e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc1e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc1ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc1ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc1f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc1f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc1fc: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x1bc1fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1bc200: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC208u;
    // 0x1bc208: 0x0  nop
    ctx->pc = 0x1bc208u;
    // NOP
    // 0x1bc20c: 0x0  nop
    ctx->pc = 0x1bc20cu;
    // NOP
    ctx->pc = 0x1bc210u;
}
