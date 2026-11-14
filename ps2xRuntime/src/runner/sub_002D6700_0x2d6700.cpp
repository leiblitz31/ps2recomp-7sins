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

// Function: sub_002D6700
// Address: 0x2d6700 - 0x2d6790
void sub_002D6700_0x2d6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6700_0x2d6700");
#endif

    switch (ctx->pc) {
        case 0x2d6724u: goto label_2d6724;
        case 0x2d6730u: goto label_2d6730;
        case 0x2d6764u: goto label_2d6764;
        default: break;
    }

    ctx->pc = 0x2d6700u;

    // 0x2d6700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d670c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d6710: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d6710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d6714: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d6714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6718: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d671c: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D671Cu;
    SET_GPR_U32(ctx, 31, 0x2D6724u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D671Cu, 0x2D6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6724u;
label_2d6724:
    // 0x2d6724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6728: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D6728u;
    {
        const bool branch_taken_0x2d6728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6728) {
            ctx->pc = 0x2D6754u;
            goto label_2d6754;
        }
    }
    ctx->pc = 0x2D6730u;
label_2d6730:
    // 0x2d6730: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6734: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2d6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2d6738: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d673c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D673Cu;
    {
        const bool branch_taken_0x2d673c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d673c) {
            ctx->pc = 0x2D6750u;
            goto label_2d6750;
        }
    }
    ctx->pc = 0x2D6744u;
    // 0x2d6744: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6748: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6748u;
    {
        const bool branch_taken_0x2d6748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6748) {
            ctx->pc = 0x2D6770u;
            goto label_2d6770;
        }
    }
    ctx->pc = 0x2D6750u;
label_2d6750:
    // 0x2d6750: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d6750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d6754:
    // 0x2d6754: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6758: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d675c: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D675Cu;
    SET_GPR_U32(ctx, 31, 0x2D6764u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D675Cu, 0x2D6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6764u;
label_2d6764:
    // 0x2d6764: 0x1602fff2  bne         $s0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D6764u;
    {
        const bool branch_taken_0x2d6764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d6764) {
            ctx->pc = 0x2D6730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6730;
        }
    }
    ctx->pc = 0x2D676Cu;
    // 0x2d676c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d676cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6770:
    // 0x2d6770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6778: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d6778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d677c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6784u;
    // 0x2d6784: 0x0  nop
    ctx->pc = 0x2d6784u;
    // NOP
    // 0x2d6788: 0x0  nop
    ctx->pc = 0x2d6788u;
    // NOP
    // 0x2d678c: 0x0  nop
    ctx->pc = 0x2d678cu;
    // NOP
    ctx->pc = 0x2d6790u;
}
