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

// Function: sub_0020AE00
// Address: 0x20ae00 - 0x20ae40
void sub_0020AE00_0x20ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AE00_0x20ae00");
#endif

    switch (ctx->pc) {
        case 0x20ae1cu: goto label_20ae1c;
        default: break;
    }

    ctx->pc = 0x20ae00u;

    // 0x20ae00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ae08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20ae0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20ae10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ae14: 0xc082b90  jal         func_20AE40
    ctx->pc = 0x20AE14u;
    SET_GPR_U32(ctx, 31, 0x20AE1Cu);
    ctx->pc = 0x20AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE40u, 0x20AE14u, 0x20AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE1Cu;
label_20ae1c:
    // 0x20ae1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ae20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ae24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ae28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ae2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x20ae2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20ae30: 0x3e00008  jr          $ra
    ctx->pc = 0x20AE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AE38u;
    // 0x20ae38: 0x0  nop
    ctx->pc = 0x20ae38u;
    // NOP
    // 0x20ae3c: 0x0  nop
    ctx->pc = 0x20ae3cu;
    // NOP
    ctx->pc = 0x20ae40u;
}
