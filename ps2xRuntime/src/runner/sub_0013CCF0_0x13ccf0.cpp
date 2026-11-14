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

// Function: sub_0013CCF0
// Address: 0x13ccf0 - 0x13cd40
void sub_0013CCF0_0x13ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CCF0_0x13ccf0");
#endif

    switch (ctx->pc) {
        case 0x13cd14u: goto label_13cd14;
        case 0x13cd24u: goto label_13cd24;
        default: break;
    }

    ctx->pc = 0x13ccf0u;

    // 0x13ccf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ccf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ccf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13ccfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13cd00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cd04: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x13cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13cd08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cd0c: 0xc04ed88  jal         func_13B620
    ctx->pc = 0x13CD0Cu;
    SET_GPR_U32(ctx, 31, 0x13CD14u);
    ctx->pc = 0x13B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B620u, 0x13CD0Cu, 0x13CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD14u;
label_13cd14:
    // 0x13cd14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cd18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13cd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd1c: 0xc04f350  jal         func_13CD40
    ctx->pc = 0x13CD1Cu;
    SET_GPR_U32(ctx, 31, 0x13CD24u);
    ctx->pc = 0x13CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD40u, 0x13CD1Cu, 0x13CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD24u;
label_13cd24:
    // 0x13cd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cd28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13cd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x13CD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CD34u;
    // 0x13cd34: 0x0  nop
    ctx->pc = 0x13cd34u;
    // NOP
    // 0x13cd38: 0x0  nop
    ctx->pc = 0x13cd38u;
    // NOP
    // 0x13cd3c: 0x0  nop
    ctx->pc = 0x13cd3cu;
    // NOP
    ctx->pc = 0x13cd40u;
}
