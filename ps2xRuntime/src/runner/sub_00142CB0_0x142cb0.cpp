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

// Function: sub_00142CB0
// Address: 0x142cb0 - 0x142d00
void sub_00142CB0_0x142cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142CB0_0x142cb0");
#endif

    switch (ctx->pc) {
        case 0x142cccu: goto label_142ccc;
        case 0x142cdcu: goto label_142cdc;
        case 0x142cecu: goto label_142cec;
        default: break;
    }

    ctx->pc = 0x142cb0u;

    // 0x142cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x142cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x142cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142cc0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x142cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x142cc4: 0xc04f988  jal         func_13E620
    ctx->pc = 0x142CC4u;
    SET_GPR_U32(ctx, 31, 0x142CCCu);
    ctx->pc = 0x13E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E620u, 0x142CC4u, 0x142CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CCCu;
label_142ccc:
    // 0x142ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x142cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142cd0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x142cd4: 0xc04c568  jal         func_1315A0
    ctx->pc = 0x142CD4u;
    SET_GPR_U32(ctx, 31, 0x142CDCu);
    ctx->pc = 0x1315A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1315A0u, 0x142CD4u, 0x142CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CDCu;
label_142cdc:
    // 0x142cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x142cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142ce0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x142ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x142ce4: 0xc051514  jal         func_145450
    ctx->pc = 0x142CE4u;
    SET_GPR_U32(ctx, 31, 0x142CECu);
    ctx->pc = 0x145450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145450u, 0x142CE4u, 0x142CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CECu;
label_142cec:
    // 0x142cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142cf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x142cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x142CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142CFCu;
    // 0x142cfc: 0x0  nop
    ctx->pc = 0x142cfcu;
    // NOP
    ctx->pc = 0x142d00u;
}
