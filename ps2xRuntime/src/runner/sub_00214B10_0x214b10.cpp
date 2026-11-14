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

// Function: sub_00214B10
// Address: 0x214b10 - 0x214b40
void sub_00214B10_0x214b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B10_0x214b10");
#endif

    switch (ctx->pc) {
        case 0x214b28u: goto label_214b28;
        default: break;
    }

    ctx->pc = 0x214b10u;

    // 0x214b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x214b1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214b20: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x214B20u;
    SET_GPR_U32(ctx, 31, 0x214B28u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x214B20u, 0x214B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B28u;
label_214b28:
    // 0x214b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214b30: 0x3e00008  jr          $ra
    ctx->pc = 0x214B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B38u;
    // 0x214b38: 0x0  nop
    ctx->pc = 0x214b38u;
    // NOP
    // 0x214b3c: 0x0  nop
    ctx->pc = 0x214b3cu;
    // NOP
    ctx->pc = 0x214b40u;
}
