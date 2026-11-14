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

// Function: sub_0045AF70
// Address: 0x45af70 - 0x45aff0
void sub_0045AF70_0x45af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AF70_0x45af70");
#endif

    switch (ctx->pc) {
        case 0x45af94u: goto label_45af94;
        case 0x45afa0u: goto label_45afa0;
        case 0x45afccu: goto label_45afcc;
        default: break;
    }

    ctx->pc = 0x45af70u;

    // 0x45af70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45af74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45af74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45af78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45af78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45af7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45af7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45af80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45af84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45af88: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45af88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45af8c: 0xc116874  jal         func_45A1D0
    ctx->pc = 0x45AF8Cu;
    SET_GPR_U32(ctx, 31, 0x45AF94u);
    ctx->pc = 0x45A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A1D0u, 0x45AF8Cu, 0x45AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AF94u;
label_45af94:
    // 0x45af94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45af94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45af98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45AF98u;
    {
        const bool branch_taken_0x45af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45af98) {
            ctx->pc = 0x45AFBCu;
            goto label_45afbc;
        }
    }
    ctx->pc = 0x45AFA0u;
label_45afa0:
    // 0x45afa0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x45afa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x45afa4: 0x10100004  beq         $zero, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AFA4u;
    {
        const bool branch_taken_0x45afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x45afa4) {
            ctx->pc = 0x45AFB8u;
            goto label_45afb8;
        }
    }
    ctx->pc = 0x45AFACu;
    // 0x45afac: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x45afacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x45afb0: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x45afb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x45afb4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x45afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_45afb8:
    // 0x45afb8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x45afb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_45afbc:
    // 0x45afbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45afc0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45afc4: 0xc116bfc  jal         func_45AFF0
    ctx->pc = 0x45AFC4u;
    SET_GPR_U32(ctx, 31, 0x45AFCCu);
    ctx->pc = 0x45AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45AFF0u, 0x45AFC4u, 0x45AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AFCCu;
label_45afcc:
    // 0x45afcc: 0x1622fff4  bne         $s1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x45AFCCu;
    {
        const bool branch_taken_0x45afcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x45afcc) {
            ctx->pc = 0x45AFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45afa0;
        }
    }
    ctx->pc = 0x45AFD4u;
    // 0x45afd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45afd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45afd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45afd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45afdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45afdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45afe0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45afe4: 0x3e00008  jr          $ra
    ctx->pc = 0x45AFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45AFECu;
    // 0x45afec: 0x0  nop
    ctx->pc = 0x45afecu;
    // NOP
    ctx->pc = 0x45aff0u;
}
