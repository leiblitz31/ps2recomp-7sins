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

// Function: sub_00274340
// Address: 0x274340 - 0x274370
void sub_00274340_0x274340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274340_0x274340");
#endif

    switch (ctx->pc) {
        case 0x274360u: goto label_274360;
        default: break;
    }

    ctx->pc = 0x274340u;

    // 0x274340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27434c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27434cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274350: 0x24050484  addiu       $a1, $zero, 0x484
    ctx->pc = 0x274350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
    // 0x274354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274358: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x274358u;
    SET_GPR_U32(ctx, 31, 0x274360u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x274358u, 0x274360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274360u;
label_274360:
    // 0x274360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274364: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274368: 0x3e00008  jr          $ra
    ctx->pc = 0x274368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274370u;
}
