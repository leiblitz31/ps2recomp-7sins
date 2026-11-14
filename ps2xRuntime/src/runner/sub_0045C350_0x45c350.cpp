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

// Function: sub_0045C350
// Address: 0x45c350 - 0x45c380
void sub_0045C350_0x45c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C350_0x45c350");
#endif

    ctx->pc = 0x45c350u;

    // 0x45c350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45c354: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x45c354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x45c358: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x45c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x45c35c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45c360: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x45c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c364: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x45c364u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45c368: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x45c368u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x45c36c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c370: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45c370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45c374: 0x3e00008  jr          $ra
    ctx->pc = 0x45C374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45C37Cu;
    // 0x45c37c: 0x0  nop
    ctx->pc = 0x45c37cu;
    // NOP
    ctx->pc = 0x45c380u;
}
