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

// Function: sub_0025C3A0
// Address: 0x25c3a0 - 0x25c3d0
void sub_0025C3A0_0x25c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C3A0_0x25c3a0");
#endif

    ctx->pc = 0x25c3a0u;

    // 0x25c3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c3a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25c3a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c3ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25c3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c3b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25c3b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25c3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25c3b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25c3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25C3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C3C4u;
    // 0x25c3c4: 0x0  nop
    ctx->pc = 0x25c3c4u;
    // NOP
    // 0x25c3c8: 0x0  nop
    ctx->pc = 0x25c3c8u;
    // NOP
    // 0x25c3cc: 0x0  nop
    ctx->pc = 0x25c3ccu;
    // NOP
    ctx->pc = 0x25c3d0u;
}
