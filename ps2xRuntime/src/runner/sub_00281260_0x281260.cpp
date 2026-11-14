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

// Function: sub_00281260
// Address: 0x281260 - 0x281290
void sub_00281260_0x281260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281260_0x281260");
#endif

    ctx->pc = 0x281260u;

    // 0x281260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281264: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x281264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x281268: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x281268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28126c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281270: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x281270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281274: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x281274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x281278: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x281278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28127c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281280: 0x3e00008  jr          $ra
    ctx->pc = 0x281280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281288u;
    // 0x281288: 0x0  nop
    ctx->pc = 0x281288u;
    // NOP
    // 0x28128c: 0x0  nop
    ctx->pc = 0x28128cu;
    // NOP
    ctx->pc = 0x281290u;
}
