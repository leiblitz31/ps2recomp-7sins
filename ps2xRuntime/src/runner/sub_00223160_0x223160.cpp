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

// Function: sub_00223160
// Address: 0x223160 - 0x2231a0
void sub_00223160_0x223160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223160_0x223160");
#endif

    switch (ctx->pc) {
        case 0x223184u: goto label_223184;
        default: break;
    }

    ctx->pc = 0x223160u;

    // 0x223160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22316c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x223170: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223174: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x223174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22317c: 0xc088c68  jal         func_2231A0
    ctx->pc = 0x22317Cu;
    SET_GPR_U32(ctx, 31, 0x223184u);
    ctx->pc = 0x2231A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2231A0u, 0x22317Cu, 0x223184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223184u;
label_223184:
    // 0x223184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22318c: 0x3e00008  jr          $ra
    ctx->pc = 0x22318Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22318Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223194u;
    // 0x223194: 0x0  nop
    ctx->pc = 0x223194u;
    // NOP
    // 0x223198: 0x0  nop
    ctx->pc = 0x223198u;
    // NOP
    // 0x22319c: 0x0  nop
    ctx->pc = 0x22319cu;
    // NOP
    ctx->pc = 0x2231a0u;
}
