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

// Function: sub_00216740
// Address: 0x216740 - 0x216780
void sub_00216740_0x216740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216740_0x216740");
#endif

    switch (ctx->pc) {
        case 0x216764u: goto label_216764;
        default: break;
    }

    ctx->pc = 0x216740u;

    // 0x216740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21674c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21674cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x216750: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216754: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x216754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21675c: 0xc0859e0  jal         func_216780
    ctx->pc = 0x21675Cu;
    SET_GPR_U32(ctx, 31, 0x216764u);
    ctx->pc = 0x216780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216780u, 0x21675Cu, 0x216764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216764u;
label_216764:
    // 0x216764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x216768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21676c: 0x3e00008  jr          $ra
    ctx->pc = 0x21676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216774u;
    // 0x216774: 0x0  nop
    ctx->pc = 0x216774u;
    // NOP
    // 0x216778: 0x0  nop
    ctx->pc = 0x216778u;
    // NOP
    // 0x21677c: 0x0  nop
    ctx->pc = 0x21677cu;
    // NOP
    ctx->pc = 0x216780u;
}
