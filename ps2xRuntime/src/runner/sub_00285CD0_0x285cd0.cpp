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

// Function: sub_00285CD0
// Address: 0x285cd0 - 0x285d10
void sub_00285CD0_0x285cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285CD0_0x285cd0");
#endif

    switch (ctx->pc) {
        case 0x285cf0u: goto label_285cf0;
        default: break;
    }

    ctx->pc = 0x285cd0u;

    // 0x285cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x285cdc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x285cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285ce0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285ce4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x285ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285ce8: 0xc0a1744  jal         func_285D10
    ctx->pc = 0x285CE8u;
    SET_GPR_U32(ctx, 31, 0x285CF0u);
    ctx->pc = 0x285D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285D10u, 0x285CE8u, 0x285CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285CF0u;
label_285cf0:
    // 0x285cf0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x285cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285cf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x285cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x285cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x285CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285D04u;
    // 0x285d04: 0x0  nop
    ctx->pc = 0x285d04u;
    // NOP
    // 0x285d08: 0x0  nop
    ctx->pc = 0x285d08u;
    // NOP
    // 0x285d0c: 0x0  nop
    ctx->pc = 0x285d0cu;
    // NOP
    ctx->pc = 0x285d10u;
}
