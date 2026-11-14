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

// Function: sub_00133620
// Address: 0x133620 - 0x133660
void sub_00133620_0x133620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133620_0x133620");
#endif

    switch (ctx->pc) {
        case 0x133644u: goto label_133644;
        default: break;
    }

    ctx->pc = 0x133620u;

    // 0x133620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13362c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13362cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x133630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x133630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133634: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x133634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13363c: 0xc04cd98  jal         func_133660
    ctx->pc = 0x13363Cu;
    SET_GPR_U32(ctx, 31, 0x133644u);
    ctx->pc = 0x133660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133660u, 0x13363Cu, 0x133644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133644u;
label_133644:
    // 0x133644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133648: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x133648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13364c: 0x3e00008  jr          $ra
    ctx->pc = 0x13364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133654u;
    // 0x133654: 0x0  nop
    ctx->pc = 0x133654u;
    // NOP
    // 0x133658: 0x0  nop
    ctx->pc = 0x133658u;
    // NOP
    // 0x13365c: 0x0  nop
    ctx->pc = 0x13365cu;
    // NOP
    ctx->pc = 0x133660u;
}
