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

// Function: sub_0013AED0
// Address: 0x13aed0 - 0x13af10
void sub_0013AED0_0x13aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AED0_0x13aed0");
#endif

    switch (ctx->pc) {
        case 0x13aefcu: goto label_13aefc;
        default: break;
    }

    ctx->pc = 0x13aed0u;

    // 0x13aed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13aed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13aed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13aedc: 0x8f83ba74  lw          $v1, -0x458C($gp)
    ctx->pc = 0x13aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13aee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aee4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13aee8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13aeec: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x13aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x13aef0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13aef4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x13AEF4u;
    SET_GPR_U32(ctx, 31, 0x13AEFCu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x13AEF4u, 0x13AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AEFCu;
label_13aefc:
    // 0x13aefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13af00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13af00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13af04: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13af04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13af08: 0x3e00008  jr          $ra
    ctx->pc = 0x13AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AF10u;
}
