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

// Function: sub_00213ED0
// Address: 0x213ed0 - 0x213f10
void sub_00213ED0_0x213ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213ED0_0x213ed0");
#endif

    switch (ctx->pc) {
        case 0x213ef0u: goto label_213ef0;
        default: break;
    }

    ctx->pc = 0x213ed0u;

    // 0x213ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213edc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x213edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x213ee0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ee4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x213ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213ee8: 0xc084fc4  jal         func_213F10
    ctx->pc = 0x213EE8u;
    SET_GPR_U32(ctx, 31, 0x213EF0u);
    ctx->pc = 0x213F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213F10u, 0x213EE8u, 0x213EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EF0u;
label_213ef0:
    // 0x213ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213ef8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213efc: 0x3e00008  jr          $ra
    ctx->pc = 0x213EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213F04u;
    // 0x213f04: 0x0  nop
    ctx->pc = 0x213f04u;
    // NOP
    // 0x213f08: 0x0  nop
    ctx->pc = 0x213f08u;
    // NOP
    // 0x213f0c: 0x0  nop
    ctx->pc = 0x213f0cu;
    // NOP
    ctx->pc = 0x213f10u;
}
