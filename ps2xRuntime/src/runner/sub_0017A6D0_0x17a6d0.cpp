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

// Function: sub_0017A6D0
// Address: 0x17a6d0 - 0x17a7e0
void sub_0017A6D0_0x17a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A6D0_0x17a6d0");
#endif

    switch (ctx->pc) {
        case 0x17a6fcu: goto label_17a6fc;
        case 0x17a728u: goto label_17a728;
        case 0x17a738u: goto label_17a738;
        case 0x17a760u: goto label_17a760;
        default: break;
    }

    ctx->pc = 0x17a6d0u;

    // 0x17a6d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a6d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a6dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a6e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17a6e4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17a6e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a6ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17a6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a6f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a6f4: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x17A6F4u;
    SET_GPR_U32(ctx, 31, 0x17A6FCu);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x17A6F4u, 0x17A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6FCu;
label_17a6fc:
    // 0x17a6fc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x17a6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a700: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A700u;
    {
        const bool branch_taken_0x17a700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a700) {
            ctx->pc = 0x17A714u;
            goto label_17a714;
        }
    }
    ctx->pc = 0x17A708u;
    // 0x17a708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a70c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x17A70Cu;
    {
        const bool branch_taken_0x17a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a70c) {
            ctx->pc = 0x17A7C4u;
            goto label_17a7c4;
        }
    }
    ctx->pc = 0x17A714u;
label_17a714:
    // 0x17a714: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a718: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a71c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a720: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x17A720u;
    SET_GPR_U32(ctx, 31, 0x17A728u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x17A720u, 0x17A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A728u;
label_17a728:
    // 0x17a728: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x17a728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a72c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x17a72cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a730: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17A730u;
    {
        const bool branch_taken_0x17a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a730) {
            ctx->pc = 0x17A768u;
            goto label_17a768;
        }
    }
    ctx->pc = 0x17A738u;
label_17a738:
    // 0x17a738: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a73c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a740: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17a740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17a744: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a748: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17a748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17a74c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a750: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a758: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x17A758u;
    SET_GPR_U32(ctx, 31, 0x17A760u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x17A758u, 0x17A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A760u;
label_17a760:
    // 0x17a760: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x17a760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a764: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x17a764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_17a768:
    // 0x17a768: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17a768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17a76c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x17a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17a770: 0x1062fff1  beq         $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17A770u;
    {
        const bool branch_taken_0x17a770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a770) {
            ctx->pc = 0x17A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a738;
        }
    }
    ctx->pc = 0x17A778u;
    // 0x17a778: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17a778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17a77c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17a780: 0x1062ffed  beq         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17A780u;
    {
        const bool branch_taken_0x17a780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a780) {
            ctx->pc = 0x17A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a738;
        }
    }
    ctx->pc = 0x17A788u;
    // 0x17a788: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17a788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17a78c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x17a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17a790: 0x1062ffe9  beq         $v1, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17A790u;
    {
        const bool branch_taken_0x17a790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a790) {
            ctx->pc = 0x17A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a738;
        }
    }
    ctx->pc = 0x17A798u;
    // 0x17a798: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17a798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17a79c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17a7a0: 0x1062ffe5  beq         $v1, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17A7A0u;
    {
        const bool branch_taken_0x17a7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17a7a0) {
            ctx->pc = 0x17A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a738;
        }
    }
    ctx->pc = 0x17A7A8u;
    // 0x17a7a8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x17a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17a7ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A7C0u;
            goto label_17a7c0;
        }
    }
    ctx->pc = 0x17A7B4u;
    // 0x17a7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A7B8u;
    {
        const bool branch_taken_0x17a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a7b8) {
            ctx->pc = 0x17A7C4u;
            goto label_17a7c4;
        }
    }
    ctx->pc = 0x17A7C0u;
label_17a7c0:
    // 0x17a7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a7c4:
    // 0x17a7c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a7c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a7d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17a7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A7DCu;
    // 0x17a7dc: 0x0  nop
    ctx->pc = 0x17a7dcu;
    // NOP
    ctx->pc = 0x17a7e0u;
}
