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

// Function: sub_002D3600
// Address: 0x2d3600 - 0x2d3630
void sub_002D3600_0x2d3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3600_0x2d3600");
#endif

    switch (ctx->pc) {
        case 0x2d3618u: goto label_2d3618;
        default: break;
    }

    ctx->pc = 0x2d3600u;

    // 0x2d3600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d3608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d360c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3610: 0xc082ab4  jal         func_20AAD0
    ctx->pc = 0x2D3610u;
    SET_GPR_U32(ctx, 31, 0x2D3618u);
    ctx->pc = 0x20AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AAD0u, 0x2D3610u, 0x2D3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3618u;
label_2d3618:
    // 0x2d3618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d361c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d361cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3620: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3628u;
    // 0x2d3628: 0x0  nop
    ctx->pc = 0x2d3628u;
    // NOP
    // 0x2d362c: 0x0  nop
    ctx->pc = 0x2d362cu;
    // NOP
    ctx->pc = 0x2d3630u;
}
