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

// Function: sub_0047DA40
// Address: 0x47da40 - 0x47da60
void sub_0047DA40_0x47da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DA40_0x47da40");
#endif

    ctx->pc = 0x47da40u;

    // 0x47da40: 0xaf80c094  sw          $zero, -0x3F6C($gp)
    ctx->pc = 0x47da40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951060), GPR_U32(ctx, 0));
    // 0x47da44: 0xaf80c0a0  sw          $zero, -0x3F60($gp)
    ctx->pc = 0x47da44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951072), GPR_U32(ctx, 0));
    // 0x47da48: 0xaf80c0a8  sw          $zero, -0x3F58($gp)
    ctx->pc = 0x47da48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951080), GPR_U32(ctx, 0));
    // 0x47da4c: 0x3e00008  jr          $ra
    ctx->pc = 0x47DA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DA54u;
    // 0x47da54: 0x0  nop
    ctx->pc = 0x47da54u;
    // NOP
    // 0x47da58: 0x0  nop
    ctx->pc = 0x47da58u;
    // NOP
    // 0x47da5c: 0x0  nop
    ctx->pc = 0x47da5cu;
    // NOP
    ctx->pc = 0x47da60u;
}
