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

// Function: sub_00191D10
// Address: 0x191d10 - 0x191d50
void sub_00191D10_0x191d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191D10_0x191d10");
#endif

    switch (ctx->pc) {
        case 0x191d30u: goto label_191d30;
        default: break;
    }

    ctx->pc = 0x191d10u;

    // 0x191d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x191d1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x191d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x191d20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191d24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191d28: 0xc042b9c  jal         func_10AE70
    ctx->pc = 0x191D28u;
    SET_GPR_U32(ctx, 31, 0x191D30u);
    ctx->pc = 0x10AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE70u, 0x191D28u, 0x191D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D30u;
label_191d30:
    // 0x191d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191d38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x191D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191D44u;
    // 0x191d44: 0x0  nop
    ctx->pc = 0x191d44u;
    // NOP
    // 0x191d48: 0x0  nop
    ctx->pc = 0x191d48u;
    // NOP
    // 0x191d4c: 0x0  nop
    ctx->pc = 0x191d4cu;
    // NOP
    ctx->pc = 0x191d50u;
}
