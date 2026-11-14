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

// Function: sub_00279B00
// Address: 0x279b00 - 0x279b30
void sub_00279B00_0x279b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279B00_0x279b00");
#endif

    switch (ctx->pc) {
        case 0x279b1cu: goto label_279b1c;
        default: break;
    }

    ctx->pc = 0x279b00u;

    // 0x279b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x279b0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279b10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x279b14: 0xc09e6cc  jal         func_279B30
    ctx->pc = 0x279B14u;
    SET_GPR_U32(ctx, 31, 0x279B1Cu);
    ctx->pc = 0x279B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B30u, 0x279B14u, 0x279B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279B1Cu;
label_279b1c:
    // 0x279b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279b20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279b24: 0x3e00008  jr          $ra
    ctx->pc = 0x279B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279B2Cu;
    // 0x279b2c: 0x0  nop
    ctx->pc = 0x279b2cu;
    // NOP
    ctx->pc = 0x279b30u;
}
