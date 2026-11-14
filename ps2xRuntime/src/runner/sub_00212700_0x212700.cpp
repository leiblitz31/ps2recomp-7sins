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

// Function: sub_00212700
// Address: 0x212700 - 0x212780
void sub_00212700_0x212700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212700_0x212700");
#endif

    switch (ctx->pc) {
        case 0x212728u: goto label_212728;
        case 0x212738u: goto label_212738;
        default: break;
    }

    ctx->pc = 0x212700u;

    // 0x212700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x212700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x212704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21270c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212710: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x212710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x212714: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x212714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x212718: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x212718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x21271c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x21271cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212720: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x212720u;
    {
        const bool branch_taken_0x212720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212720) {
            ctx->pc = 0x21274Cu;
            goto label_21274c;
        }
    }
    ctx->pc = 0x212728u;
label_212728:
    // 0x212728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21272c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212730: 0xc06011c  jal         func_180470
    ctx->pc = 0x212730u;
    SET_GPR_U32(ctx, 31, 0x212738u);
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x212730u, 0x212738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212738u;
label_212738:
    // 0x212738: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21273c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x21273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x212740: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x212740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x212744: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x212744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x212748: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x212748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21274c:
    // 0x21274c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x21274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212750: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x212750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212754: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x212754u;
    {
        const bool branch_taken_0x212754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x212754) {
            ctx->pc = 0x212728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212728;
        }
    }
    ctx->pc = 0x21275Cu;
    // 0x21275c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21275cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212760: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21276c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x21276cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x212770: 0x3e00008  jr          $ra
    ctx->pc = 0x212770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212778u;
    // 0x212778: 0x0  nop
    ctx->pc = 0x212778u;
    // NOP
    // 0x21277c: 0x0  nop
    ctx->pc = 0x21277cu;
    // NOP
    ctx->pc = 0x212780u;
}
