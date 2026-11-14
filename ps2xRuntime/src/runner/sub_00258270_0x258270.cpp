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

// Function: sub_00258270
// Address: 0x258270 - 0x2582b0
void sub_00258270_0x258270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258270_0x258270");
#endif

    switch (ctx->pc) {
        case 0x258294u: goto label_258294;
        default: break;
    }

    ctx->pc = 0x258270u;

    // 0x258270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25827c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25827cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258280: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258284: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x258284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x258288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25828c: 0xc0960ac  jal         func_2582B0
    ctx->pc = 0x25828Cu;
    SET_GPR_U32(ctx, 31, 0x258294u);
    ctx->pc = 0x2582B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2582B0u, 0x25828Cu, 0x258294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258294u;
label_258294:
    // 0x258294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25829c: 0x3e00008  jr          $ra
    ctx->pc = 0x25829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2582A4u;
    // 0x2582a4: 0x0  nop
    ctx->pc = 0x2582a4u;
    // NOP
    // 0x2582a8: 0x0  nop
    ctx->pc = 0x2582a8u;
    // NOP
    // 0x2582ac: 0x0  nop
    ctx->pc = 0x2582acu;
    // NOP
    ctx->pc = 0x2582b0u;
}
