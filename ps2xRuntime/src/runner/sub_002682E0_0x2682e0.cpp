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

// Function: sub_002682E0
// Address: 0x2682e0 - 0x2683a0
void sub_002682E0_0x2682e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002682E0_0x2682e0");
#endif

    switch (ctx->pc) {
        case 0x26830cu: goto label_26830c;
        case 0x26831cu: goto label_26831c;
        case 0x268334u: goto label_268334;
        case 0x268340u: goto label_268340;
        case 0x26835cu: goto label_26835c;
        default: break;
    }

    ctx->pc = 0x2682e0u;

    // 0x2682e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2682e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2682e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2682e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2682e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2682e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2682ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2682ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2682f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2682f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2682f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2682f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2682f8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2682f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2682fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2682fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268300: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x268300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x268304: 0xc099d1c  jal         func_267470
    ctx->pc = 0x268304u;
    SET_GPR_U32(ctx, 31, 0x26830Cu);
    ctx->pc = 0x267470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267470u, 0x268304u, 0x26830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26830Cu;
label_26830c:
    // 0x26830c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26830cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268310: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x268310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268314: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x268314u;
    {
        const bool branch_taken_0x268314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268314) {
            ctx->pc = 0x26836Cu;
            goto label_26836c;
        }
    }
    ctx->pc = 0x26831Cu;
label_26831c:
    // 0x26831c: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x26831cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268320: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x268320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268324: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x268324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x268328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26832c: 0xc09a0e8  jal         func_2683A0
    ctx->pc = 0x26832Cu;
    SET_GPR_U32(ctx, 31, 0x268334u);
    ctx->pc = 0x2683A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2683A0u, 0x26832Cu, 0x268334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268334u;
label_268334:
    // 0x268334: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x268334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268338: 0xc09ce4c  jal         func_273930
    ctx->pc = 0x268338u;
    SET_GPR_U32(ctx, 31, 0x268340u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x268338u, 0x268340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268340u;
label_268340:
    // 0x268340: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268340u;
    {
        const bool branch_taken_0x268340 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x268340) {
            ctx->pc = 0x268368u;
            goto label_268368;
        }
    }
    ctx->pc = 0x268348u;
    // 0x268348: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x268348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26834c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x26834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x268350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268354: 0xc09a0e8  jal         func_2683A0
    ctx->pc = 0x268354u;
    SET_GPR_U32(ctx, 31, 0x26835Cu);
    ctx->pc = 0x2683A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2683A0u, 0x268354u, 0x26835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26835Cu;
label_26835c:
    // 0x26835c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268360: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x268360u;
    {
        const bool branch_taken_0x268360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268360) {
            ctx->pc = 0x26837Cu;
            goto label_26837c;
        }
    }
    ctx->pc = 0x268368u;
label_268368:
    // 0x268368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x268368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26836c:
    // 0x26836c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x26836cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x268370: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x268370u;
    {
        const bool branch_taken_0x268370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268370) {
            ctx->pc = 0x26831Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26831c;
        }
    }
    ctx->pc = 0x268378u;
    // 0x268378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26837c:
    // 0x26837c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26838c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26838cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x268390: 0x3e00008  jr          $ra
    ctx->pc = 0x268390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268398u;
    // 0x268398: 0x0  nop
    ctx->pc = 0x268398u;
    // NOP
    // 0x26839c: 0x0  nop
    ctx->pc = 0x26839cu;
    // NOP
    ctx->pc = 0x2683a0u;
}
