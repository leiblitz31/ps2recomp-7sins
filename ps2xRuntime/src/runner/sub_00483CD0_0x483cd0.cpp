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

// Function: sub_00483CD0
// Address: 0x483cd0 - 0x483d50
void sub_00483CD0_0x483cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483CD0_0x483cd0");
#endif

    switch (ctx->pc) {
        case 0x483cf4u: goto label_483cf4;
        case 0x483d38u: goto label_483d38;
        default: break;
    }

    ctx->pc = 0x483cd0u;

    // 0x483cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x483cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x483cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x483cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x483cdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x483cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483ce4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x483ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x483ce8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x483ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x483cec: 0xc120744  jal         func_481D10
    ctx->pc = 0x483CECu;
    SET_GPR_U32(ctx, 31, 0x483CF4u);
    ctx->pc = 0x481D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481D10u, 0x483CECu, 0x483CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483CF4u;
label_483cf4:
    // 0x483cf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x483cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483cf8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x483cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483cfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483d00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x483d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x483d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483d08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x483d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483d0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x483d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x483d10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x483d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x483d14: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x483d14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x483d18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x483D18u;
    {
        const bool branch_taken_0x483d18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x483d18) {
            ctx->pc = 0x483D28u;
            goto label_483d28;
        }
    }
    ctx->pc = 0x483D20u;
    // 0x483d20: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x483d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x483d24: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x483d24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_483d28:
    // 0x483d28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x483d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x483d2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x483d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x483d30: 0xc120734  jal         func_481CD0
    ctx->pc = 0x483D30u;
    SET_GPR_U32(ctx, 31, 0x483D38u);
    ctx->pc = 0x481CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481CD0u, 0x483D30u, 0x483D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483D38u;
label_483d38:
    // 0x483d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483d3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x483d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x483d40: 0x3e00008  jr          $ra
    ctx->pc = 0x483D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483D48u;
    // 0x483d48: 0x0  nop
    ctx->pc = 0x483d48u;
    // NOP
    // 0x483d4c: 0x0  nop
    ctx->pc = 0x483d4cu;
    // NOP
    ctx->pc = 0x483d50u;
}
