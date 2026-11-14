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

// Function: sub_00159280
// Address: 0x159280 - 0x1592b0
void sub_00159280_0x159280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159280_0x159280");
#endif

    ctx->pc = 0x159280u;

    // 0x159280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159284: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x159284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x159288: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x159288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15928c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159290: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159294: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x159294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x159298: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x159298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15929c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15929cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1592a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1592A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1592A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1592A8u;
    // 0x1592a8: 0x0  nop
    ctx->pc = 0x1592a8u;
    // NOP
    // 0x1592ac: 0x0  nop
    ctx->pc = 0x1592acu;
    // NOP
    ctx->pc = 0x1592b0u;
}
