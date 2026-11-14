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

// Function: sub_0024F620
// Address: 0x24f620 - 0x24f670
void sub_0024F620_0x24f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F620_0x24f620");
#endif

    switch (ctx->pc) {
        case 0x24f644u: goto label_24f644;
        default: break;
    }

    ctx->pc = 0x24f620u;

    // 0x24f620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24f628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24f628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24f62c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24f630: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x24f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x24f634: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f638: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f63c: 0xc093d9c  jal         func_24F670
    ctx->pc = 0x24F63Cu;
    SET_GPR_U32(ctx, 31, 0x24F644u);
    ctx->pc = 0x24F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F670u, 0x24F63Cu, 0x24F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F644u;
label_24f644:
    // 0x24f644: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f648: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24f648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f64c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f650: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x24f650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x24f654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f65c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24f65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24f660: 0x3e00008  jr          $ra
    ctx->pc = 0x24F660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F668u;
    // 0x24f668: 0x0  nop
    ctx->pc = 0x24f668u;
    // NOP
    // 0x24f66c: 0x0  nop
    ctx->pc = 0x24f66cu;
    // NOP
    ctx->pc = 0x24f670u;
}
