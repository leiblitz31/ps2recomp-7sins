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

// Function: sub_0013A600
// Address: 0x13a600 - 0x13a860
void sub_0013A600_0x13a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A600_0x13a600");
#endif

    switch (ctx->pc) {
        case 0x13a67cu: goto label_13a67c;
        case 0x13a6a0u: goto label_13a6a0;
        case 0x13a6acu: goto label_13a6ac;
        case 0x13a6b8u: goto label_13a6b8;
        case 0x13a6c4u: goto label_13a6c4;
        case 0x13a6d8u: goto label_13a6d8;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a704u: goto label_13a704;
        case 0x13a710u: goto label_13a710;
        case 0x13a724u: goto label_13a724;
        case 0x13a73cu: goto label_13a73c;
        case 0x13a758u: goto label_13a758;
        case 0x13a768u: goto label_13a768;
        case 0x13a788u: goto label_13a788;
        case 0x13a7a0u: goto label_13a7a0;
        case 0x13a7c0u: goto label_13a7c0;
        case 0x13a7d0u: goto label_13a7d0;
        case 0x13a7ecu: goto label_13a7ec;
        case 0x13a800u: goto label_13a800;
        case 0x13a814u: goto label_13a814;
        case 0x13a824u: goto label_13a824;
        default: break;
    }

    ctx->pc = 0x13a600u;

    // 0x13a600: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x13a604: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13a608: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13a60c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13a60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13a610: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13a610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13a614: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13a618: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a61c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a62c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x13a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x13a630: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13a634: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A634u;
    {
        const bool branch_taken_0x13a634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a634) {
            ctx->pc = 0x13A648u;
            goto label_13a648;
        }
    }
    ctx->pc = 0x13A63Cu;
    // 0x13a63c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a640: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x13A640u;
    {
        const bool branch_taken_0x13a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a640) {
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A648u;
label_13a648:
    // 0x13a648: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13a64c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a650: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A650u;
    {
        const bool branch_taken_0x13a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a650) {
            ctx->pc = 0x13A664u;
            goto label_13a664;
        }
    }
    ctx->pc = 0x13A658u;
    // 0x13a658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a65c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x13A65Cu;
    {
        const bool branch_taken_0x13a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a65c) {
            ctx->pc = 0x13A828u;
            goto label_13a828;
        }
    }
    ctx->pc = 0x13A664u;
label_13a664:
    // 0x13a664: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13a664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a668: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x13a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a66c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x13a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13a670: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13A670u;
    {
        const bool branch_taken_0x13a670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a670) {
            ctx->pc = 0x13A698u;
            goto label_13a698;
        }
    }
    ctx->pc = 0x13A678u;
    // 0x13a678: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x13a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_13a67c:
    // 0x13a67c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x13a67cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a680: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13a684: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13a688: 0x0  nop
    ctx->pc = 0x13a688u;
    // NOP
    // 0x13a68c: 0x0  nop
    ctx->pc = 0x13a68cu;
    // NOP
    // 0x13a690: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13A690u;
    {
        const bool branch_taken_0x13a690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a690) {
            ctx->pc = 0x13A67Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a67c;
        }
    }
    ctx->pc = 0x13A698u;
label_13a698:
    // 0x13a698: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x13A698u;
    SET_GPR_U32(ctx, 31, 0x13A6A0u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x13A698u, 0x13A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6A0u;
label_13a6a0:
    // 0x13a6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6a4: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x13A6A4u;
    SET_GPR_U32(ctx, 31, 0x13A6ACu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x13A6A4u, 0x13A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6ACu;
label_13a6ac:
    // 0x13a6ac: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13a6acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6b0: 0xc090864  jal         func_242190
    ctx->pc = 0x13A6B0u;
    SET_GPR_U32(ctx, 31, 0x13A6B8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13A6B0u, 0x13A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6B8u;
label_13a6b8:
    // 0x13a6b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6bc: 0xc090590  jal         func_241640
    ctx->pc = 0x13A6BCu;
    SET_GPR_U32(ctx, 31, 0x13A6C4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13A6BCu, 0x13A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6C4u;
label_13a6c4:
    // 0x13a6c4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x13a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x13a6c8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x13a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13a6cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13a6d0: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x13A6D0u;
    SET_GPR_U32(ctx, 31, 0x13A6D8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x13A6D0u, 0x13A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6D8u;
label_13a6d8:
    // 0x13a6d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13a6d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13a6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13a6e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a6e8: 0x8c510020  lw          $s1, 0x20($v0)
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a6ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6f0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x13A6F0u;
    SET_GPR_U32(ctx, 31, 0x13A6F8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x13A6F0u, 0x13A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6F8u;
label_13a6f8:
    // 0x13a6f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13a6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13A6FCu;
    {
        const bool branch_taken_0x13a6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6fc) {
            ctx->pc = 0x13A78Cu;
            goto label_13a78c;
        }
    }
    ctx->pc = 0x13A704u;
label_13a704:
    // 0x13a704: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13a704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a708: 0xc09138c  jal         func_244E30
    ctx->pc = 0x13A708u;
    SET_GPR_U32(ctx, 31, 0x13A710u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x13A708u, 0x13A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A710u;
label_13a710:
    // 0x13a710: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13a710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a714: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13a718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a71c: 0xc044da4  jal         func_113690
    ctx->pc = 0x13A71Cu;
    SET_GPR_U32(ctx, 31, 0x13A724u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x13A71Cu, 0x13A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A724u;
label_13a724:
    // 0x13a724: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13a724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a728: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x13A728u;
    {
        const bool branch_taken_0x13a728 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a728) {
            ctx->pc = 0x13A788u;
            goto label_13a788;
        }
    }
    ctx->pc = 0x13A730u;
    // 0x13a730: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a734: 0xc0457e0  jal         func_115F80
    ctx->pc = 0x13A734u;
    SET_GPR_U32(ctx, 31, 0x13A73Cu);
    ctx->pc = 0x115F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F80u, 0x13A734u, 0x13A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A73Cu;
label_13a73c:
    // 0x13a73c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13a73cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a740: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x13A740u;
    {
        const bool branch_taken_0x13a740 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a740) {
            ctx->pc = 0x13A788u;
            goto label_13a788;
        }
    }
    ctx->pc = 0x13A748u;
    // 0x13a748: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13a74c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13a74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a750: 0xc040304  jal         func_100C10
    ctx->pc = 0x13A750u;
    SET_GPR_U32(ctx, 31, 0x13A758u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13A750u, 0x13A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A758u;
label_13a758:
    // 0x13a758: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13a75c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13a75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13a760: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x13A760u;
    SET_GPR_U32(ctx, 31, 0x13A768u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x13A760u, 0x13A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A768u;
label_13a768:
    // 0x13a768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A768u;
    {
        const bool branch_taken_0x13a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a768) {
            ctx->pc = 0x13A778u;
            goto label_13a778;
        }
    }
    ctx->pc = 0x13A770u;
    // 0x13a770: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x13a770u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a774: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x13a774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a778:
    // 0x13a778: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13a77c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a780: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13A780u;
    SET_GPR_U32(ctx, 31, 0x13A788u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13A780u, 0x13A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A788u;
label_13a788:
    // 0x13a788: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13a788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13a78c:
    // 0x13a78c: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A78Cu;
    {
        const bool branch_taken_0x13a78c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a78c) {
            ctx->pc = 0x13A7A8u;
            goto label_13a7a8;
        }
    }
    ctx->pc = 0x13A794u;
    // 0x13a794: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a798: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x13A798u;
    SET_GPR_U32(ctx, 31, 0x13A7A0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x13A798u, 0x13A7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7A0u;
label_13a7a0:
    // 0x13a7a0: 0x1602ffd8  bne         $s0, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13A7A0u;
    {
        const bool branch_taken_0x13a7a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a7a0) {
            ctx->pc = 0x13A704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a704;
        }
    }
    ctx->pc = 0x13A7A8u;
label_13a7a8:
    // 0x13a7a8: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x13A7A8u;
    {
        const bool branch_taken_0x13a7a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a7a8) {
            ctx->pc = 0x13A7F0u;
            goto label_13a7f0;
        }
    }
    ctx->pc = 0x13A7B0u;
    // 0x13a7b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x13a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7b4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13a7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13a7b8: 0xc044edc  jal         func_113B70
    ctx->pc = 0x13A7B8u;
    SET_GPR_U32(ctx, 31, 0x13A7C0u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x13A7B8u, 0x13A7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7C0u;
label_13a7c0:
    // 0x13a7c0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x13a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x13a7c4: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x13a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13a7c8: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x13A7C8u;
    SET_GPR_U32(ctx, 31, 0x13A7D0u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x13A7C8u, 0x13A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7D0u;
label_13a7d0:
    // 0x13a7d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13a7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7d8: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x13a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a7dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13a7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7e4: 0xc043448  jal         func_10D120
    ctx->pc = 0x13A7E4u;
    SET_GPR_U32(ctx, 31, 0x13A7ECu);
    ctx->pc = 0x10D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D120u, 0x13A7E4u, 0x13A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A7ECu;
label_13a7ec:
    // 0x13a7ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13a7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a7f0:
    // 0x13a7f0: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x13a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13a7f4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x13a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x13a7f8: 0xc040304  jal         func_100C10
    ctx->pc = 0x13A7F8u;
    SET_GPR_U32(ctx, 31, 0x13A800u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13A7F8u, 0x13A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A800u;
label_13a800:
    // 0x13a800: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13a800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13a804: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x13a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13a808: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13a808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a80c: 0xc04eec0  jal         func_13BB00
    ctx->pc = 0x13A80Cu;
    SET_GPR_U32(ctx, 31, 0x13A814u);
    ctx->pc = 0x13BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB00u, 0x13A80Cu, 0x13A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A814u;
label_13a814:
    // 0x13a814: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x13a814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13a818: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a81c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13A81Cu;
    SET_GPR_U32(ctx, 31, 0x13A824u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13A81Cu, 0x13A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A824u;
label_13a824:
    // 0x13a824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a828:
    // 0x13a828: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a82c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13a82cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a830: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13a830u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a834: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13a834u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a838: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a83c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a83cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a840: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a84c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a850: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13a854: 0x3e00008  jr          $ra
    ctx->pc = 0x13A854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A85Cu;
    // 0x13a85c: 0x0  nop
    ctx->pc = 0x13a85cu;
    // NOP
    ctx->pc = 0x13a860u;
}
