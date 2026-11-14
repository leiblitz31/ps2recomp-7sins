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

// Function: sub_00237B90
// Address: 0x237b90 - 0x237c20
void sub_00237B90_0x237b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237B90_0x237b90");
#endif

    switch (ctx->pc) {
        case 0x237ba4u: goto label_237ba4;
        case 0x237bbcu: goto label_237bbc;
        case 0x237be4u: goto label_237be4;
        default: break;
    }

    ctx->pc = 0x237b90u;

    // 0x237b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x237b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x237b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237b98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x237b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x237b9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x237b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x237ba0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x237ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_237ba4:
    // 0x237ba4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x237ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x237ba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237bac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x237bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x237bb0: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x237bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x237bb4: 0xc117910  jal         func_45E440
    ctx->pc = 0x237BB4u;
    SET_GPR_U32(ctx, 31, 0x237BBCu);
    ctx->pc = 0x45E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E440u, 0x237BB4u, 0x237BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BBCu;
label_237bbc:
    // 0x237bbc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x237BBCu;
    {
        const bool branch_taken_0x237bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237bbc) {
            ctx->pc = 0x237C04u;
            goto label_237c04;
        }
    }
    ctx->pc = 0x237BC4u;
    // 0x237bc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x237bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237bc8: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x237BC8u;
    {
        const bool branch_taken_0x237bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x237bc8) {
            ctx->pc = 0x237BECu;
            goto label_237bec;
        }
    }
    ctx->pc = 0x237BD0u;
    // 0x237bd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x237bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237bd4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x237bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x237bd8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x237bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237bdc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x237BDCu;
    SET_GPR_U32(ctx, 31, 0x237BE4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x237BDCu, 0x237BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BE4u;
label_237be4:
    // 0x237be4: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x237BE4u;
    {
        const bool branch_taken_0x237be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237be4) {
            ctx->pc = 0x237BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237ba4;
        }
    }
    ctx->pc = 0x237BECu;
label_237bec:
    // 0x237bec: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x237becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x237bf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x237bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237bf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x237bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237bfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x237BFCu;
    {
        const bool branch_taken_0x237bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237bfc) {
            ctx->pc = 0x237C10u;
            goto label_237c10;
        }
    }
    ctx->pc = 0x237C04u;
label_237c04:
    // 0x237c04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x237c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237c08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x237c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x237c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237c10:
    // 0x237c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237c14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x237c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x237c18: 0x3e00008  jr          $ra
    ctx->pc = 0x237C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237C20u;
}
