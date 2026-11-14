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

// Function: sub_002E3B00
// Address: 0x2e3b00 - 0x2e3b40
void sub_002E3B00_0x2e3b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3B00_0x2e3b00");
#endif

    switch (ctx->pc) {
        case 0x2e3b24u: goto label_2e3b24;
        default: break;
    }

    ctx->pc = 0x2e3b00u;

    // 0x2e3b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e3b0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e3b10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3b14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b1c: 0xc0b8ed0  jal         func_2E3B40
    ctx->pc = 0x2E3B1Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B24u);
    ctx->pc = 0x2E3B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B40u, 0x2E3B1Cu, 0x2E3B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B24u;
label_2e3b24:
    // 0x2e3b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3b28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3B34u;
    // 0x2e3b34: 0x0  nop
    ctx->pc = 0x2e3b34u;
    // NOP
    // 0x2e3b38: 0x0  nop
    ctx->pc = 0x2e3b38u;
    // NOP
    // 0x2e3b3c: 0x0  nop
    ctx->pc = 0x2e3b3cu;
    // NOP
    ctx->pc = 0x2e3b40u;
}
