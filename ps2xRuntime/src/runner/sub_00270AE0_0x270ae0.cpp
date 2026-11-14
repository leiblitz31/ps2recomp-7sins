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

// Function: sub_00270AE0
// Address: 0x270ae0 - 0x270b20
void sub_00270AE0_0x270ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270AE0_0x270ae0");
#endif

    switch (ctx->pc) {
        case 0x270b0cu: goto label_270b0c;
        default: break;
    }

    ctx->pc = 0x270ae0u;

    // 0x270ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x270ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x270aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x270aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x270af0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270af4: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x270af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x270af8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270afc: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x270b00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x270b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270b04: 0xc09c1d8  jal         func_270760
    ctx->pc = 0x270B04u;
    SET_GPR_U32(ctx, 31, 0x270B0Cu);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x270B04u, 0x270B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B0Cu;
label_270b0c:
    // 0x270b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270b14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x270b18: 0x3e00008  jr          $ra
    ctx->pc = 0x270B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270B20u;
}
