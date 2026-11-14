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

// Function: sub_0046AE40
// Address: 0x46ae40 - 0x46af30
void sub_0046AE40_0x46ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AE40_0x46ae40");
#endif

    switch (ctx->pc) {
        case 0x46ae64u: goto label_46ae64;
        case 0x46ae80u: goto label_46ae80;
        case 0x46aeb4u: goto label_46aeb4;
        case 0x46aec4u: goto label_46aec4;
        case 0x46aee4u: goto label_46aee4;
        case 0x46af0cu: goto label_46af0c;
        default: break;
    }

    ctx->pc = 0x46ae40u;

    // 0x46ae40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46ae44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46ae48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46ae4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46ae50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46ae54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x46ae58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ae5c: 0xc11abe8  jal         func_46AFA0
    ctx->pc = 0x46AE5Cu;
    SET_GPR_U32(ctx, 31, 0x46AE64u);
    ctx->pc = 0x46AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AFA0u, 0x46AE5Cu, 0x46AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AE64u;
label_46ae64:
    // 0x46ae64: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46ae68: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x46ae68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x46ae6c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x46AE6Cu;
    {
        const bool branch_taken_0x46ae6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ae6c) {
            ctx->pc = 0x46AF0Cu;
            goto label_46af0c;
        }
    }
    ctx->pc = 0x46AE74u;
    // 0x46ae74: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ae78: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46AE78u;
    SET_GPR_U32(ctx, 31, 0x46AE80u);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46AE78u, 0x46AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AE80u;
label_46ae80:
    // 0x46ae80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46ae80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ae84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ae88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46ae8c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x46AE8Cu;
    {
        const bool branch_taken_0x46ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ae8c) {
            ctx->pc = 0x46AECCu;
            goto label_46aecc;
        }
    }
    ctx->pc = 0x46AE94u;
    // 0x46ae94: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ae98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ae9c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46aea0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x46aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46aea4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x46aea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46aea8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x46aea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46aeac: 0xc11abcc  jal         func_46AF30
    ctx->pc = 0x46AEACu;
    SET_GPR_U32(ctx, 31, 0x46AEB4u);
    ctx->pc = 0x46AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AF30u, 0x46AEACu, 0x46AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AEB4u;
label_46aeb4:
    // 0x46aeb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46aeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aeb8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46aebc: 0xc11ab70  jal         func_46ADC0
    ctx->pc = 0x46AEBCu;
    SET_GPR_U32(ctx, 31, 0x46AEC4u);
    ctx->pc = 0x46ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46ADC0u, 0x46AEBCu, 0x46AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AEC4u;
label_46aec4:
    // 0x46aec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x46AEC4u;
    {
        const bool branch_taken_0x46aec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46aec4) {
            ctx->pc = 0x46AEE8u;
            goto label_46aee8;
        }
    }
    ctx->pc = 0x46AECCu;
label_46aecc:
    // 0x46aecc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46aed0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46aed4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x46aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46aed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46aed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46aedc: 0xc11ad20  jal         func_46B480
    ctx->pc = 0x46AEDCu;
    SET_GPR_U32(ctx, 31, 0x46AEE4u);
    ctx->pc = 0x46B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B480u, 0x46AEDCu, 0x46AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AEE4u;
label_46aee4:
    // 0x46aee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46aee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46aee8:
    // 0x46aee8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x46aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x46aeec: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x46aeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46aef0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46aef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46aef8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x46aef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46aefc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46af00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46af00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46af04: 0xc11ab5c  jal         func_46AD70
    ctx->pc = 0x46AF04u;
    SET_GPR_U32(ctx, 31, 0x46AF0Cu);
    ctx->pc = 0x46AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AD70u, 0x46AF04u, 0x46AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AF0Cu;
label_46af0c:
    // 0x46af0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46af0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46af10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46af10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46af14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46af14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46af18: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46af18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46af1c: 0x3e00008  jr          $ra
    ctx->pc = 0x46AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AF24u;
    // 0x46af24: 0x0  nop
    ctx->pc = 0x46af24u;
    // NOP
    // 0x46af28: 0x0  nop
    ctx->pc = 0x46af28u;
    // NOP
    // 0x46af2c: 0x0  nop
    ctx->pc = 0x46af2cu;
    // NOP
    ctx->pc = 0x46af30u;
}
