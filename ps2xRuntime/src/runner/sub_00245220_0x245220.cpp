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

// Function: sub_00245220
// Address: 0x245220 - 0x245260
void sub_00245220_0x245220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245220_0x245220");
#endif

    switch (ctx->pc) {
        case 0x245244u: goto label_245244;
        default: break;
    }

    ctx->pc = 0x245220u;

    // 0x245220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24522c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x245230: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x245230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245234: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x245234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245238: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24523c: 0xc091498  jal         func_245260
    ctx->pc = 0x24523Cu;
    SET_GPR_U32(ctx, 31, 0x245244u);
    ctx->pc = 0x245260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245260u, 0x24523Cu, 0x245244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245244u;
label_245244:
    // 0x245244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245248: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x245248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24524c: 0x3e00008  jr          $ra
    ctx->pc = 0x24524Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24524Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245254u;
    // 0x245254: 0x0  nop
    ctx->pc = 0x245254u;
    // NOP
    // 0x245258: 0x0  nop
    ctx->pc = 0x245258u;
    // NOP
    // 0x24525c: 0x0  nop
    ctx->pc = 0x24525cu;
    // NOP
    ctx->pc = 0x245260u;
}
