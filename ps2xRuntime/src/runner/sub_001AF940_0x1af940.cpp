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

// Function: sub_001AF940
// Address: 0x1af940 - 0x1af980
void sub_001AF940_0x1af940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF940_0x1af940");
#endif

    switch (ctx->pc) {
        case 0x1af95cu: goto label_1af95c;
        default: break;
    }

    ctx->pc = 0x1af940u;

    // 0x1af940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af94c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1af94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1af950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af954: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1AF954u;
    SET_GPR_U32(ctx, 31, 0x1AF95Cu);
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1AF954u, 0x1AF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF95Cu;
label_1af95c:
    // 0x1af95c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af960: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1af964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1af964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af96c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af970: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF978u;
    // 0x1af978: 0x0  nop
    ctx->pc = 0x1af978u;
    // NOP
    // 0x1af97c: 0x0  nop
    ctx->pc = 0x1af97cu;
    // NOP
    ctx->pc = 0x1af980u;
}
