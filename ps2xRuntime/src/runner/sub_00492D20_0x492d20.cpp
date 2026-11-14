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

// Function: sub_00492D20
// Address: 0x492d20 - 0x492d60
void sub_00492D20_0x492d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492D20_0x492d20");
#endif

    switch (ctx->pc) {
        case 0x492d3cu: goto label_492d3c;
        default: break;
    }

    ctx->pc = 0x492d20u;

    // 0x492d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x492d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x492d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x492d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x492d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x492d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x492d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x492d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x492d30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x492d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492d34: 0xc124760  jal         func_491D80
    ctx->pc = 0x492D34u;
    SET_GPR_U32(ctx, 31, 0x492D3Cu);
    ctx->pc = 0x491D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491D80u, 0x492D34u, 0x492D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D3Cu;
label_492d3c:
    // 0x492d3c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x492d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x492d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x492d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x492d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x492d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x492d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492d4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x492d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x492d50: 0x3e00008  jr          $ra
    ctx->pc = 0x492D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492D58u;
    // 0x492d58: 0x0  nop
    ctx->pc = 0x492d58u;
    // NOP
    // 0x492d5c: 0x0  nop
    ctx->pc = 0x492d5cu;
    // NOP
    ctx->pc = 0x492d60u;
}
