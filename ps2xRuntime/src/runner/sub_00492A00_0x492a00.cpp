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

// Function: sub_00492A00
// Address: 0x492a00 - 0x492a40
void sub_00492A00_0x492a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492A00_0x492a00");
#endif

    switch (ctx->pc) {
        case 0x492a1cu: goto label_492a1c;
        default: break;
    }

    ctx->pc = 0x492a00u;

    // 0x492a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x492a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x492a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x492a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x492a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x492a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x492a0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x492a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x492a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x492a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492a14: 0xc124708  jal         func_491C20
    ctx->pc = 0x492A14u;
    SET_GPR_U32(ctx, 31, 0x492A1Cu);
    ctx->pc = 0x491C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491C20u, 0x492A14u, 0x492A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492A1Cu;
label_492a1c:
    // 0x492a1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x492a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x492a20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x492a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x492a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x492a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x492a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492a2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x492a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x492a30: 0x3e00008  jr          $ra
    ctx->pc = 0x492A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492A38u;
    // 0x492a38: 0x0  nop
    ctx->pc = 0x492a38u;
    // NOP
    // 0x492a3c: 0x0  nop
    ctx->pc = 0x492a3cu;
    // NOP
    ctx->pc = 0x492a40u;
}
