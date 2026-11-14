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

// Function: sub_00298EC0
// Address: 0x298ec0 - 0x298f20
void sub_00298EC0_0x298ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298EC0_0x298ec0");
#endif

    switch (ctx->pc) {
        case 0x298ee0u: goto label_298ee0;
        case 0x298efcu: goto label_298efc;
        case 0x298f0cu: goto label_298f0c;
        default: break;
    }

    ctx->pc = 0x298ec0u;

    // 0x298ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x298ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x298eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x298ed0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ed4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x298ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ed8: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x298ED8u;
    SET_GPR_U32(ctx, 31, 0x298EE0u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x298ED8u, 0x298EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EE0u;
label_298ee0:
    // 0x298ee0: 0x1402000a  bne         $zero, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x298EE0u;
    {
        const bool branch_taken_0x298ee0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x298ee0) {
            ctx->pc = 0x298F0Cu;
            goto label_298f0c;
        }
    }
    ctx->pc = 0x298EE8u;
    // 0x298ee8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298eec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x298eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298ef0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x298ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ef4: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x298EF4u;
    SET_GPR_U32(ctx, 31, 0x298EFCu);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x298EF4u, 0x298EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EFCu;
label_298efc:
    // 0x298efc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x298f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298f04: 0xc11dff8  jal         func_477FE0
    ctx->pc = 0x298F04u;
    SET_GPR_U32(ctx, 31, 0x298F0Cu);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x298F04u, 0x298F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F0Cu;
label_298f0c:
    // 0x298f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298f10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298f14: 0x3e00008  jr          $ra
    ctx->pc = 0x298F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F1Cu;
    // 0x298f1c: 0x0  nop
    ctx->pc = 0x298f1cu;
    // NOP
    ctx->pc = 0x298f20u;
}
