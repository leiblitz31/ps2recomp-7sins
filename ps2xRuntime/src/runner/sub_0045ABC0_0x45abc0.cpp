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

// Function: sub_0045ABC0
// Address: 0x45abc0 - 0x45ac00
void sub_0045ABC0_0x45abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045ABC0_0x45abc0");
#endif

    switch (ctx->pc) {
        case 0x45abe8u: goto label_45abe8;
        default: break;
    }

    ctx->pc = 0x45abc0u;

    // 0x45abc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45abc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45abc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45abcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45abccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45abd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45abd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x45abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45abd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45abd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45abdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45abdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45abe0: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x45ABE0u;
    SET_GPR_U32(ctx, 31, 0x45ABE8u);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x45ABE0u, 0x45ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ABE8u;
label_45abe8:
    // 0x45abe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45abec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45abecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x45ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45ABF8u;
    // 0x45abf8: 0x0  nop
    ctx->pc = 0x45abf8u;
    // NOP
    // 0x45abfc: 0x0  nop
    ctx->pc = 0x45abfcu;
    // NOP
    ctx->pc = 0x45ac00u;
}
