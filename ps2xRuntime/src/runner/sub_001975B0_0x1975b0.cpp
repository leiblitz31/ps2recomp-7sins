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

// Function: sub_001975B0
// Address: 0x1975b0 - 0x197680
void sub_001975B0_0x1975b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001975B0_0x1975b0");
#endif

    switch (ctx->pc) {
        case 0x1975d8u: goto label_1975d8;
        case 0x1975f0u: goto label_1975f0;
        case 0x197610u: goto label_197610;
        case 0x197624u: goto label_197624;
        case 0x197638u: goto label_197638;
        case 0x197648u: goto label_197648;
        case 0x197664u: goto label_197664;
        default: break;
    }

    ctx->pc = 0x1975b0u;

    // 0x1975b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1975b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1975b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1975b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1975b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1975bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1975bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1975c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1975c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1975c4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1975c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1975c8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1975cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1975d0: 0xc065e2c  jal         func_1978B0
    ctx->pc = 0x1975D0u;
    SET_GPR_U32(ctx, 31, 0x1975D8u);
    ctx->pc = 0x1978B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1978B0u, 0x1975D0u, 0x1975D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975D8u;
label_1975d8:
    // 0x1975d8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1975d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1975dc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1975DCu;
    {
        const bool branch_taken_0x1975dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1975dc) {
            ctx->pc = 0x19762Cu;
            goto label_19762c;
        }
    }
    ctx->pc = 0x1975E4u;
    // 0x1975e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1975e8: 0xc065d50  jal         func_197540
    ctx->pc = 0x1975E8u;
    SET_GPR_U32(ctx, 31, 0x1975F0u);
    ctx->pc = 0x197540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197540u, 0x1975E8u, 0x1975F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975F0u;
label_1975f0:
    // 0x1975f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1975f4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1975f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1975f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1975f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1975fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1975fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197600: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x197600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197604: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x197604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197608: 0xc065e24  jal         func_197890
    ctx->pc = 0x197608u;
    SET_GPR_U32(ctx, 31, 0x197610u);
    ctx->pc = 0x197890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197890u, 0x197608u, 0x197610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197610u;
label_197610:
    // 0x197610: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x197610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x197614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197618: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x197618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19761c: 0xc065db0  jal         func_1976C0
    ctx->pc = 0x19761Cu;
    SET_GPR_U32(ctx, 31, 0x197624u);
    ctx->pc = 0x1976C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1976C0u, 0x19761Cu, 0x197624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197624u;
label_197624:
    // 0x197624: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x197624u;
    {
        const bool branch_taken_0x197624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197624) {
            ctx->pc = 0x197664u;
            goto label_197664;
        }
    }
    ctx->pc = 0x19762Cu;
label_19762c:
    // 0x19762c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197630: 0xc065e24  jal         func_197890
    ctx->pc = 0x197630u;
    SET_GPR_U32(ctx, 31, 0x197638u);
    ctx->pc = 0x197890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197890u, 0x197630u, 0x197638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197638u;
label_197638:
    // 0x197638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19763c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197640: 0xc065e2c  jal         func_1978B0
    ctx->pc = 0x197640u;
    SET_GPR_U32(ctx, 31, 0x197648u);
    ctx->pc = 0x1978B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1978B0u, 0x197640u, 0x197648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197648u;
label_197648:
    // 0x197648: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x197648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19764c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x19764cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197650: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x197650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197654: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x197654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197658: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x197658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19765c: 0xc065da0  jal         func_197680
    ctx->pc = 0x19765Cu;
    SET_GPR_U32(ctx, 31, 0x197664u);
    ctx->pc = 0x197680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197680u, 0x19765Cu, 0x197664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197664u;
label_197664:
    // 0x197664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19766c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19766cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197670: 0x3e00008  jr          $ra
    ctx->pc = 0x197670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197678u;
    // 0x197678: 0x0  nop
    ctx->pc = 0x197678u;
    // NOP
    // 0x19767c: 0x0  nop
    ctx->pc = 0x19767cu;
    // NOP
    ctx->pc = 0x197680u;
}
