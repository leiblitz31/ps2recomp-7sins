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

// Function: sub_0018CDC0
// Address: 0x18cdc0 - 0x18ce40
void sub_0018CDC0_0x18cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CDC0_0x18cdc0");
#endif

    switch (ctx->pc) {
        case 0x18cde4u: goto label_18cde4;
        case 0x18ce28u: goto label_18ce28;
        default: break;
    }

    ctx->pc = 0x18cdc0u;

    // 0x18cdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18cdc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cdc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18cdcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cdd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cdd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18cdd8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cddc: 0xc063144  jal         func_18C510
    ctx->pc = 0x18CDDCu;
    SET_GPR_U32(ctx, 31, 0x18CDE4u);
    ctx->pc = 0x18C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C510u, 0x18CDDCu, 0x18CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CDE4u;
label_18cde4:
    // 0x18cde4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cde8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cdec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cdf0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18cdf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cdf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cdfc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ce00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18ce04: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x18ce04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x18ce08: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE08u;
    {
        const bool branch_taken_0x18ce08 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ce08) {
            ctx->pc = 0x18CE18u;
            goto label_18ce18;
        }
    }
    ctx->pc = 0x18CE10u;
    // 0x18ce10: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x18ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x18ce14: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x18ce14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_18ce18:
    // 0x18ce18: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x18ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x18ce1c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18ce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ce20: 0xc063db4  jal         func_18F6D0
    ctx->pc = 0x18CE20u;
    SET_GPR_U32(ctx, 31, 0x18CE28u);
    ctx->pc = 0x18F6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F6D0u, 0x18CE20u, 0x18CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE28u;
label_18ce28:
    // 0x18ce28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ce28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ce2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ce30: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE38u;
    // 0x18ce38: 0x0  nop
    ctx->pc = 0x18ce38u;
    // NOP
    // 0x18ce3c: 0x0  nop
    ctx->pc = 0x18ce3cu;
    // NOP
    ctx->pc = 0x18ce40u;
}
