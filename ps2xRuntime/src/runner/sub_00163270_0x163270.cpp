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

// Function: sub_00163270
// Address: 0x163270 - 0x1632b0
void sub_00163270_0x163270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163270_0x163270");
#endif

    switch (ctx->pc) {
        case 0x163294u: goto label_163294;
        default: break;
    }

    ctx->pc = 0x163270u;

    // 0x163270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x163278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16327c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x163280: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163284: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x163284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16328c: 0xc058cac  jal         func_1632B0
    ctx->pc = 0x16328Cu;
    SET_GPR_U32(ctx, 31, 0x163294u);
    ctx->pc = 0x1632B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1632B0u, 0x16328Cu, 0x163294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163294u;
label_163294:
    // 0x163294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16329c: 0x3e00008  jr          $ra
    ctx->pc = 0x16329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16329Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632A4u;
    // 0x1632a4: 0x0  nop
    ctx->pc = 0x1632a4u;
    // NOP
    // 0x1632a8: 0x0  nop
    ctx->pc = 0x1632a8u;
    // NOP
    // 0x1632ac: 0x0  nop
    ctx->pc = 0x1632acu;
    // NOP
    ctx->pc = 0x1632b0u;
}
