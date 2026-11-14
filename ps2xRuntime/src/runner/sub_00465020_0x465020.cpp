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

// Function: sub_00465020
// Address: 0x465020 - 0x4650a0
void sub_00465020_0x465020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465020_0x465020");
#endif

    switch (ctx->pc) {
        case 0x465048u: goto label_465048;
        case 0x46505cu: goto label_46505c;
        case 0x465080u: goto label_465080;
        default: break;
    }

    ctx->pc = 0x465020u;

    // 0x465020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x465020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x465024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x465024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x465028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46502c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x465030: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x465030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x465034: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x465034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465038: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x465038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x46503c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x46503cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x465040u;
    {
        const bool branch_taken_0x465040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465040) {
            ctx->pc = 0x465070u;
            goto label_465070;
        }
    }
    ctx->pc = 0x465048u;
label_465048:
    // 0x465048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x465048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x46504c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465050: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x465050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x465054: 0xc115894  jal         func_456250
    ctx->pc = 0x465054u;
    SET_GPR_U32(ctx, 31, 0x46505Cu);
    ctx->pc = 0x456250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456250u, 0x465054u, 0x46505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46505Cu;
label_46505c:
    // 0x46505c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46505Cu;
    {
        const bool branch_taken_0x46505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46505c) {
            ctx->pc = 0x465070u;
            goto label_465070;
        }
    }
    ctx->pc = 0x465064u;
    // 0x465064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x465068u;
    {
        const bool branch_taken_0x465068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465068) {
            ctx->pc = 0x46508Cu;
            goto label_46508c;
        }
    }
    ctx->pc = 0x465070u;
label_465070:
    // 0x465070: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x465070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465074: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x465074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x465078: 0xc061f44  jal         func_187D10
    ctx->pc = 0x465078u;
    SET_GPR_U32(ctx, 31, 0x465080u);
    ctx->pc = 0x187D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D10u, 0x465078u, 0x465080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465080u;
label_465080:
    // 0x465080: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x465080u;
    {
        const bool branch_taken_0x465080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465080) {
            ctx->pc = 0x465048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465048;
        }
    }
    ctx->pc = 0x465088u;
    // 0x465088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46508c:
    // 0x46508c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465094: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x465094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x465098: 0x3e00008  jr          $ra
    ctx->pc = 0x465098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4650A0u;
}
