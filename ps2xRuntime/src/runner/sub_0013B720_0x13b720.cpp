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

// Function: sub_0013B720
// Address: 0x13b720 - 0x13b910
void sub_0013B720_0x13b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B720_0x13b720");
#endif

    switch (ctx->pc) {
        case 0x13b758u: goto label_13b758;
        case 0x13b768u: goto label_13b768;
        case 0x13b77cu: goto label_13b77c;
        case 0x13b790u: goto label_13b790;
        case 0x13b7b0u: goto label_13b7b0;
        case 0x13b7b8u: goto label_13b7b8;
        case 0x13b7c4u: goto label_13b7c4;
        case 0x13b7d8u: goto label_13b7d8;
        case 0x13b7ecu: goto label_13b7ec;
        case 0x13b7f8u: goto label_13b7f8;
        case 0x13b804u: goto label_13b804;
        case 0x13b81cu: goto label_13b81c;
        case 0x13b82cu: goto label_13b82c;
        case 0x13b838u: goto label_13b838;
        case 0x13b848u: goto label_13b848;
        case 0x13b874u: goto label_13b874;
        case 0x13b894u: goto label_13b894;
        case 0x13b8a4u: goto label_13b8a4;
        case 0x13b8b8u: goto label_13b8b8;
        case 0x13b8ccu: goto label_13b8cc;
        case 0x13b8e0u: goto label_13b8e0;
        default: break;
    }

    ctx->pc = 0x13b720u;

    // 0x13b720: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13b724: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13b728: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13b72c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b730: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b734: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b744: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x13b744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x13b748: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x13b748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x13b74c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13b750: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13B750u;
    SET_GPR_U32(ctx, 31, 0x13B758u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B750u, 0x13B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B758u;
label_13b758:
    // 0x13b758: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13b758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b75c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b760: 0xc040304  jal         func_100C10
    ctx->pc = 0x13B760u;
    SET_GPR_U32(ctx, 31, 0x13B768u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13B760u, 0x13B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B768u;
label_13b768:
    // 0x13b768: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13b76c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x13b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x13b770: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13b770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b774: 0xc04ecac  jal         func_13B2B0
    ctx->pc = 0x13B774u;
    SET_GPR_U32(ctx, 31, 0x13B77Cu);
    ctx->pc = 0x13B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B0u, 0x13B774u, 0x13B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B77Cu;
label_13b77c:
    // 0x13b77c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13b77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b780: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13b780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b784: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b788: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B788u;
    SET_GPR_U32(ctx, 31, 0x13B790u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B788u, 0x13B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B790u;
label_13b790:
    // 0x13b790: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B790u;
    {
        const bool branch_taken_0x13b790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b790) {
            ctx->pc = 0x13B7A4u;
            goto label_13b7a4;
        }
    }
    ctx->pc = 0x13B798u;
    // 0x13b798: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13b798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b79c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x13B79Cu;
    {
        const bool branch_taken_0x13b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b79c) {
            ctx->pc = 0x13B8E4u;
            goto label_13b8e4;
        }
    }
    ctx->pc = 0x13B7A4u;
label_13b7a4:
    // 0x13b7a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13b7a8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x13B7A8u;
    SET_GPR_U32(ctx, 31, 0x13B7B0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x13B7A8u, 0x13B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7B0u;
label_13b7b0:
    // 0x13b7b0: 0xc090864  jal         func_242190
    ctx->pc = 0x13B7B0u;
    SET_GPR_U32(ctx, 31, 0x13B7B8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13B7B0u, 0x13B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7B8u;
label_13b7b8:
    // 0x13b7b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7bc: 0xc090590  jal         func_241640
    ctx->pc = 0x13B7BCu;
    SET_GPR_U32(ctx, 31, 0x13B7C4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13B7BCu, 0x13B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7C4u;
label_13b7c4:
    // 0x13b7c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13b7c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13b7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b7d0: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x13B7D0u;
    SET_GPR_U32(ctx, 31, 0x13B7D8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x13B7D0u, 0x13B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7D8u;
label_13b7d8:
    // 0x13b7d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13b7d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13b7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7e4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x13B7E4u;
    SET_GPR_U32(ctx, 31, 0x13B7ECu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x13B7E4u, 0x13B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B7ECu;
label_13b7ec:
    // 0x13b7ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13B7F0u;
    {
        const bool branch_taken_0x13b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b7f0) {
            ctx->pc = 0x13B860u;
            goto label_13b860;
        }
    }
    ctx->pc = 0x13B7F8u;
label_13b7f8:
    // 0x13b7f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b7fc: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x13B7FCu;
    SET_GPR_U32(ctx, 31, 0x13B804u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x13B7FCu, 0x13B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B804u;
label_13b804:
    // 0x13b804: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13b804u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b808: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13b808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b80c: 0x2405055d  addiu       $a1, $zero, 0x55D
    ctx->pc = 0x13b80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1373));
    // 0x13b810: 0x27868c70  addiu       $a2, $gp, -0x7390
    ctx->pc = 0x13b810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x13b814: 0xc041a50  jal         func_106940
    ctx->pc = 0x13B814u;
    SET_GPR_U32(ctx, 31, 0x13B81Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x13B814u, 0x13B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B81Cu;
label_13b81c:
    // 0x13b81c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13b820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b824: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x13B824u;
    SET_GPR_U32(ctx, 31, 0x13B82Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x13B824u, 0x13B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B82Cu;
label_13b82c:
    // 0x13b82c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13b830: 0xc041874  jal         func_1061D0
    ctx->pc = 0x13B830u;
    SET_GPR_U32(ctx, 31, 0x13B838u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x13B830u, 0x13B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B838u;
label_13b838:
    // 0x13b838: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13b83c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b840: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x13B840u;
    SET_GPR_U32(ctx, 31, 0x13B848u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x13B840u, 0x13B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B848u;
label_13b848:
    // 0x13b848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B848u;
    {
        const bool branch_taken_0x13b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b848) {
            ctx->pc = 0x13B85Cu;
            goto label_13b85c;
        }
    }
    ctx->pc = 0x13B850u;
    // 0x13b850: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B854u;
    {
        const bool branch_taken_0x13b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b854) {
            ctx->pc = 0x13B860u;
            goto label_13b860;
        }
    }
    ctx->pc = 0x13B85Cu;
label_13b85c:
    // 0x13b85c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13b85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_13b860:
    // 0x13b860: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B860u;
    {
        const bool branch_taken_0x13b860 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b860) {
            ctx->pc = 0x13B87Cu;
            goto label_13b87c;
        }
    }
    ctx->pc = 0x13B868u;
    // 0x13b868: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b86c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x13B86Cu;
    SET_GPR_U32(ctx, 31, 0x13B874u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x13B86Cu, 0x13B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B874u;
label_13b874:
    // 0x13b874: 0x1602ffe0  bne         $s0, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x13B874u;
    {
        const bool branch_taken_0x13b874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13b874) {
            ctx->pc = 0x13B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b7f8;
        }
    }
    ctx->pc = 0x13B87Cu;
label_13b87c:
    // 0x13b87c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13B87Cu;
    {
        const bool branch_taken_0x13b87c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b87c) {
            ctx->pc = 0x13B888u;
            goto label_13b888;
        }
    }
    ctx->pc = 0x13B884u;
    // 0x13b884: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x13b884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b888:
    // 0x13b888: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13b888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13b88c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13B88Cu;
    SET_GPR_U32(ctx, 31, 0x13B894u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B88Cu, 0x13B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B894u;
label_13b894:
    // 0x13b894: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b89c: 0xc040304  jal         func_100C10
    ctx->pc = 0x13B89Cu;
    SET_GPR_U32(ctx, 31, 0x13B8A4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13B89Cu, 0x13B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8A4u;
label_13b8a4:
    // 0x13b8a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13b8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13b8a8: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x13b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x13b8ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b8b0: 0xc04ecac  jal         func_13B2B0
    ctx->pc = 0x13B8B0u;
    SET_GPR_U32(ctx, 31, 0x13B8B8u);
    ctx->pc = 0x13B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B0u, 0x13B8B0u, 0x13B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8B8u;
label_13b8b8:
    // 0x13b8b8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x13b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x13b8bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b8c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b8c4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B8C4u;
    SET_GPR_U32(ctx, 31, 0x13B8CCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B8C4u, 0x13B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8CCu;
label_13b8cc:
    // 0x13b8cc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13b8ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13b8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13b8d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b8d8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B8D8u;
    SET_GPR_U32(ctx, 31, 0x13B8E0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B8D8u, 0x13B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B8E0u;
label_13b8e0:
    // 0x13b8e0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x13b8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13b8e4:
    // 0x13b8e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b8e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13b8e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b8ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13b8ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b8f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13b8f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b8f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13b8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b8f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13b8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b904: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x13b904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13b908: 0x3e00008  jr          $ra
    ctx->pc = 0x13B908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B910u;
}
