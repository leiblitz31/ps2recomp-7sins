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

// Function: sub_00129BA0
// Address: 0x129ba0 - 0x129c30
void sub_00129BA0_0x129ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129BA0_0x129ba0");
#endif

    switch (ctx->pc) {
        case 0x129bdcu: goto label_129bdc;
        case 0x129c1cu: goto label_129c1c;
        default: break;
    }

    ctx->pc = 0x129ba0u;

    // 0x129ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x129ba8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x129ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x129bac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x129bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x129bb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129bb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x129bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x129bb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129bbc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x129bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129bc0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x129BC0u;
    {
        const bool branch_taken_0x129bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x129bc0) {
            ctx->pc = 0x129BF4u;
            goto label_129bf4;
        }
    }
    ctx->pc = 0x129BC8u;
    // 0x129bc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129bcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x129bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x129bd0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x129bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129bd4: 0xc04a7d4  jal         func_129F50
    ctx->pc = 0x129BD4u;
    SET_GPR_U32(ctx, 31, 0x129BDCu);
    ctx->pc = 0x129F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F50u, 0x129BD4u, 0x129BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BDCu;
label_129bdc:
    // 0x129bdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129be0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x129be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x129be4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x129be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x129be8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x129be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x129bec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x129BECu;
    {
        const bool branch_taken_0x129bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129bec) {
            ctx->pc = 0x129C1Cu;
            goto label_129c1c;
        }
    }
    ctx->pc = 0x129BF4u;
label_129bf4:
    // 0x129bf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x129bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129bf8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x129bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x129bfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129c00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x129c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x129c04: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x129c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129c08: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x129c0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x129c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c14: 0xc04a70c  jal         func_129C30
    ctx->pc = 0x129C14u;
    SET_GPR_U32(ctx, 31, 0x129C1Cu);
    ctx->pc = 0x129C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C30u, 0x129C14u, 0x129C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C1Cu;
label_129c1c:
    // 0x129c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129c20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129c24: 0x3e00008  jr          $ra
    ctx->pc = 0x129C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129C2Cu;
    // 0x129c2c: 0x0  nop
    ctx->pc = 0x129c2cu;
    // NOP
    ctx->pc = 0x129c30u;
}
