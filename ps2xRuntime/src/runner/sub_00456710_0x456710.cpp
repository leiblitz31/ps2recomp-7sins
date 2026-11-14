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

// Function: sub_00456710
// Address: 0x456710 - 0x456740
void sub_00456710_0x456710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456710_0x456710");
#endif

    switch (ctx->pc) {
        case 0x45672cu: goto label_45672c;
        default: break;
    }

    ctx->pc = 0x456710u;

    // 0x456710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x456714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x456718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x456718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45671c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x456720: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x456724: 0xc114338  jal         func_450CE0
    ctx->pc = 0x456724u;
    SET_GPR_U32(ctx, 31, 0x45672Cu);
    ctx->pc = 0x450CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450CE0u, 0x456724u, 0x45672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45672Cu;
label_45672c:
    // 0x45672c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45672cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456730: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x456730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x456734: 0x3e00008  jr          $ra
    ctx->pc = 0x456734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45673Cu;
    // 0x45673c: 0x0  nop
    ctx->pc = 0x45673cu;
    // NOP
    ctx->pc = 0x456740u;
}
