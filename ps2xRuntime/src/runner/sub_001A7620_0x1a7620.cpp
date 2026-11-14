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

// Function: sub_001A7620
// Address: 0x1a7620 - 0x1a7660
void sub_001A7620_0x1a7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7620_0x1a7620");
#endif

    switch (ctx->pc) {
        case 0x1a763cu: goto label_1a763c;
        default: break;
    }

    ctx->pc = 0x1a7620u;

    // 0x1a7620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a7628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a762c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a762cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a7630: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7634: 0xc069d98  jal         func_1A7660
    ctx->pc = 0x1A7634u;
    SET_GPR_U32(ctx, 31, 0x1A763Cu);
    ctx->pc = 0x1A7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7660u, 0x1A7634u, 0x1A763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A763Cu;
label_1a763c:
    // 0x1a763c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7640: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a7640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a764c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a7650: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7658u;
    // 0x1a7658: 0x0  nop
    ctx->pc = 0x1a7658u;
    // NOP
    // 0x1a765c: 0x0  nop
    ctx->pc = 0x1a765cu;
    // NOP
    ctx->pc = 0x1a7660u;
}
