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

// Function: sub_001C96E0
// Address: 0x1c96e0 - 0x1c97d0
void sub_001C96E0_0x1c96e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C96E0_0x1c96e0");
#endif

    switch (ctx->pc) {
        case 0x1c9704u: goto label_1c9704;
        case 0x1c9720u: goto label_1c9720;
        case 0x1c9754u: goto label_1c9754;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c97acu: goto label_1c97ac;
        default: break;
    }

    ctx->pc = 0x1c96e0u;

    // 0x1c96e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c96e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c96e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c96e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c96e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c96ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c96f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c96f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c96f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c96fc: 0xc072610  jal         func_1C9840
    ctx->pc = 0x1C96FCu;
    SET_GPR_U32(ctx, 31, 0x1C9704u);
    ctx->pc = 0x1C9840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9840u, 0x1C96FCu, 0x1C9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9704u;
label_1c9704:
    // 0x1c9704: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c9704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9708: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1c9708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c970c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C970Cu;
    {
        const bool branch_taken_0x1c970c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c970c) {
            ctx->pc = 0x1C97ACu;
            goto label_1c97ac;
        }
    }
    ctx->pc = 0x1C9714u;
    // 0x1c9714: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c9714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9718: 0xc071b58  jal         func_1C6D60
    ctx->pc = 0x1C9718u;
    SET_GPR_U32(ctx, 31, 0x1C9720u);
    ctx->pc = 0x1C6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6D60u, 0x1C9718u, 0x1C9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9720u;
label_1c9720:
    // 0x1c9720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9724: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c9724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c972c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C972Cu;
    {
        const bool branch_taken_0x1c972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c972c) {
            ctx->pc = 0x1C976Cu;
            goto label_1c976c;
        }
    }
    ctx->pc = 0x1C9734u;
    // 0x1c9734: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c9734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9738: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c973c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9740: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c9740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9744: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c9744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9748: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1c9748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c974c: 0xc0725f4  jal         func_1C97D0
    ctx->pc = 0x1C974Cu;
    SET_GPR_U32(ctx, 31, 0x1C9754u);
    ctx->pc = 0x1C97D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C97D0u, 0x1C974Cu, 0x1C9754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9754u;
label_1c9754:
    // 0x1c9754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9758: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c9758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c975c: 0xc071abc  jal         func_1C6AF0
    ctx->pc = 0x1C975Cu;
    SET_GPR_U32(ctx, 31, 0x1C9764u);
    ctx->pc = 0x1C6AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AF0u, 0x1C975Cu, 0x1C9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9764u;
label_1c9764:
    // 0x1c9764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9764u;
    {
        const bool branch_taken_0x1c9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9764) {
            ctx->pc = 0x1C9788u;
            goto label_1c9788;
        }
    }
    ctx->pc = 0x1C976Cu;
label_1c976c:
    // 0x1c976c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9770: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c9774: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c977c: 0xc07257c  jal         func_1C95F0
    ctx->pc = 0x1C977Cu;
    SET_GPR_U32(ctx, 31, 0x1C9784u);
    ctx->pc = 0x1C95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C95F0u, 0x1C977Cu, 0x1C9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9784u;
label_1c9784:
    // 0x1c9784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9788:
    // 0x1c9788: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1c9788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c978c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c9790: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9794: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c9798: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x1c9798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c979c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c97a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c97a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97a4: 0xc071aa8  jal         func_1C6AA0
    ctx->pc = 0x1C97A4u;
    SET_GPR_U32(ctx, 31, 0x1C97ACu);
    ctx->pc = 0x1C6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AA0u, 0x1C97A4u, 0x1C97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97ACu;
label_1c97ac:
    // 0x1c97ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c97acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c97b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c97b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c97b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c97b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c97b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c97b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c97bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C97BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C97BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C97C4u;
    // 0x1c97c4: 0x0  nop
    ctx->pc = 0x1c97c4u;
    // NOP
    // 0x1c97c8: 0x0  nop
    ctx->pc = 0x1c97c8u;
    // NOP
    // 0x1c97cc: 0x0  nop
    ctx->pc = 0x1c97ccu;
    // NOP
    ctx->pc = 0x1c97d0u;
}
