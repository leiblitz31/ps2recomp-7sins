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

// Function: sub_00482270
// Address: 0x482270 - 0x4822a0
void sub_00482270_0x482270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482270_0x482270");
#endif

    ctx->pc = 0x482270u;

    // 0x482270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482274: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x482274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x482278: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x482278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48227c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482280: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x482280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482284: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x482284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x482288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x482288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48228c: 0x3e00008  jr          $ra
    ctx->pc = 0x48228Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48228Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482294u;
    // 0x482294: 0x0  nop
    ctx->pc = 0x482294u;
    // NOP
    // 0x482298: 0x0  nop
    ctx->pc = 0x482298u;
    // NOP
    // 0x48229c: 0x0  nop
    ctx->pc = 0x48229cu;
    // NOP
    ctx->pc = 0x4822a0u;
}
