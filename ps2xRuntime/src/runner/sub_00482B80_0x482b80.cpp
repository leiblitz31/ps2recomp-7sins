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

// Function: sub_00482B80
// Address: 0x482b80 - 0x482c10
void sub_00482B80_0x482b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482B80_0x482b80");
#endif

    switch (ctx->pc) {
        case 0x482bbcu: goto label_482bbc;
        case 0x482bfcu: goto label_482bfc;
        default: break;
    }

    ctx->pc = 0x482b80u;

    // 0x482b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x482b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x482b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482b88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x482b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x482b8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x482b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x482b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x482b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482b94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x482b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482b98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x482b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482b9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x482b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x482ba0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x482BA0u;
    {
        const bool branch_taken_0x482ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x482ba0) {
            ctx->pc = 0x482BD4u;
            goto label_482bd4;
        }
    }
    ctx->pc = 0x482BA8u;
    // 0x482ba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x482ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482bac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x482bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482bb0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x482bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482bb4: 0xc120ba8  jal         func_482EA0
    ctx->pc = 0x482BB4u;
    SET_GPR_U32(ctx, 31, 0x482BBCu);
    ctx->pc = 0x482EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482EA0u, 0x482BB4u, 0x482BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482BBCu;
label_482bbc:
    // 0x482bbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x482bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482bc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x482bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x482bc4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x482bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x482bc8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x482bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x482bcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x482BCCu;
    {
        const bool branch_taken_0x482bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x482bcc) {
            ctx->pc = 0x482BFCu;
            goto label_482bfc;
        }
    }
    ctx->pc = 0x482BD4u;
label_482bd4:
    // 0x482bd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x482bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482bd8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x482bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x482bdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x482bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482be0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x482be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482be4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x482be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482be8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x482be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x482bec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x482becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x482bf0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x482bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x482bf4: 0xc120b04  jal         func_482C10
    ctx->pc = 0x482BF4u;
    SET_GPR_U32(ctx, 31, 0x482BFCu);
    ctx->pc = 0x482C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482C10u, 0x482BF4u, 0x482BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482BFCu;
label_482bfc:
    // 0x482bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482c00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x482c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x482c04: 0x3e00008  jr          $ra
    ctx->pc = 0x482C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482C0Cu;
    // 0x482c0c: 0x0  nop
    ctx->pc = 0x482c0cu;
    // NOP
    ctx->pc = 0x482c10u;
}
