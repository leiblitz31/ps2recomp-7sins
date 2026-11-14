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

// Function: sub_00239E70
// Address: 0x239e70 - 0x239f00
void sub_00239E70_0x239e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239E70_0x239e70");
#endif

    switch (ctx->pc) {
        case 0x239eacu: goto label_239eac;
        case 0x239eecu: goto label_239eec;
        default: break;
    }

    ctx->pc = 0x239e70u;

    // 0x239e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239e78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x239e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x239e7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x239e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x239e80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239e84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x239e88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239e8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x239e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239e90: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x239E90u;
    {
        const bool branch_taken_0x239e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x239e90) {
            ctx->pc = 0x239EC4u;
            goto label_239ec4;
        }
    }
    ctx->pc = 0x239E98u;
    // 0x239e98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239e9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x239e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x239ea0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x239ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239ea4: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x239EA4u;
    SET_GPR_U32(ctx, 31, 0x239EACu);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x239EA4u, 0x239EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EACu;
label_239eac:
    // 0x239eac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x239eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239eb0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239eb4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x239eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x239eb8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x239eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x239ebc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239EBCu;
    {
        const bool branch_taken_0x239ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ebc) {
            ctx->pc = 0x239EECu;
            goto label_239eec;
        }
    }
    ctx->pc = 0x239EC4u;
label_239ec4:
    // 0x239ec4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x239ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ec8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x239ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x239ecc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ed0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x239ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x239ed4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x239ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239ed8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x239ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x239edc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x239edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239ee0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x239ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239ee4: 0xc0435e0  jal         func_10D780
    ctx->pc = 0x239EE4u;
    SET_GPR_U32(ctx, 31, 0x239EECu);
    ctx->pc = 0x10D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D780u, 0x239EE4u, 0x239EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EECu;
label_239eec:
    // 0x239eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ef0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x239ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x239EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239EFCu;
    // 0x239efc: 0x0  nop
    ctx->pc = 0x239efcu;
    // NOP
    ctx->pc = 0x239f00u;
}
