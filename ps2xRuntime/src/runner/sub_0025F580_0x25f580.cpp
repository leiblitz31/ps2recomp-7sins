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

// Function: sub_0025F580
// Address: 0x25f580 - 0x25f5d0
void sub_0025F580_0x25f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F580_0x25f580");
#endif

    switch (ctx->pc) {
        case 0x25f5b8u: goto label_25f5b8;
        default: break;
    }

    ctx->pc = 0x25f580u;

    // 0x25f580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25f588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25f58c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25f590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f594: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25f594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25f598: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f59c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25f59cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x25f5a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f5a4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25f5a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f5b0: 0xc097d74  jal         func_25F5D0
    ctx->pc = 0x25F5B0u;
    SET_GPR_U32(ctx, 31, 0x25F5B8u);
    ctx->pc = 0x25F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F5D0u, 0x25F5B0u, 0x25F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5B8u;
label_25f5b8:
    // 0x25f5b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f5c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25F5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F5CCu;
    // 0x25f5cc: 0x0  nop
    ctx->pc = 0x25f5ccu;
    // NOP
    ctx->pc = 0x25f5d0u;
}
