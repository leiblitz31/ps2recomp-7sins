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

// Function: sub_002B65B0
// Address: 0x2b65b0 - 0x2b6610
void sub_002B65B0_0x2b65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B65B0_0x2b65b0");
#endif

    ctx->pc = 0x2b65b0u;

    // 0x2b65b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b65b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b65b8: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x2b65b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b65bc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x2b65bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b65c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b65c4: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2b65c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b65c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b65cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65D4u;
    // 0x2b65d4: 0x0  nop
    ctx->pc = 0x2b65d4u;
    // NOP
    // 0x2b65d8: 0x0  nop
    ctx->pc = 0x2b65d8u;
    // NOP
    // 0x2b65dc: 0x0  nop
    ctx->pc = 0x2b65dcu;
    // NOP
    // 0x2b65e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b65e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b65e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b65e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b65e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65F0u;
    // 0x2b65f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b65f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b65f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b65f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6600u;
    // 0x2b6600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6604: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6608: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6610u;
}
