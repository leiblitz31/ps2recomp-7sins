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

// Function: sub_0022EB60
// Address: 0x22eb60 - 0x22ebf0
void sub_0022EB60_0x22eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EB60_0x22eb60");
#endif

    switch (ctx->pc) {
        case 0x22eb9cu: goto label_22eb9c;
        case 0x22ebdcu: goto label_22ebdc;
        default: break;
    }

    ctx->pc = 0x22eb60u;

    // 0x22eb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22eb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22eb68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22eb6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22eb70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eb74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22eb78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eb7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22eb80: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22EB80u;
    {
        const bool branch_taken_0x22eb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22eb80) {
            ctx->pc = 0x22EBB4u;
            goto label_22ebb4;
        }
    }
    ctx->pc = 0x22EB88u;
    // 0x22eb88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eb8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22eb90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eb94: 0xc08bbd4  jal         func_22EF50
    ctx->pc = 0x22EB94u;
    SET_GPR_U32(ctx, 31, 0x22EB9Cu);
    ctx->pc = 0x22EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF50u, 0x22EB94u, 0x22EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB9Cu;
label_22eb9c:
    // 0x22eb9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eba0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22eba4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x22eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x22eba8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x22ebac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22EBACu;
    {
        const bool branch_taken_0x22ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebac) {
            ctx->pc = 0x22EBDCu;
            goto label_22ebdc;
        }
    }
    ctx->pc = 0x22EBB4u;
label_22ebb4:
    // 0x22ebb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ebb8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x22ebb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ebbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ebc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22ebc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22ebc4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x22ebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ebc8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x22ebc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22ebcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ebd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x22ebd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ebd4: 0xc08bafc  jal         func_22EBF0
    ctx->pc = 0x22EBD4u;
    SET_GPR_U32(ctx, 31, 0x22EBDCu);
    ctx->pc = 0x22EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EBF0u, 0x22EBD4u, 0x22EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EBDCu;
label_22ebdc:
    // 0x22ebdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ebe0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x22EBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EBECu;
    // 0x22ebec: 0x0  nop
    ctx->pc = 0x22ebecu;
    // NOP
    ctx->pc = 0x22ebf0u;
}
