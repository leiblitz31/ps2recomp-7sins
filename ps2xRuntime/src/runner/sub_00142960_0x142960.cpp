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

// Function: sub_00142960
// Address: 0x142960 - 0x142990
void sub_00142960_0x142960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142960_0x142960");
#endif

    switch (ctx->pc) {
        case 0x14297cu: goto label_14297c;
        default: break;
    }

    ctx->pc = 0x142960u;

    // 0x142960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x142968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14296c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142970: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x142970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142974: 0xc08d724  jal         func_235C90
    ctx->pc = 0x142974u;
    SET_GPR_U32(ctx, 31, 0x14297Cu);
    ctx->pc = 0x235C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C90u, 0x142974u, 0x14297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14297Cu;
label_14297c:
    // 0x14297c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142980: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142984: 0x3e00008  jr          $ra
    ctx->pc = 0x142984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14298Cu;
    // 0x14298c: 0x0  nop
    ctx->pc = 0x14298cu;
    // NOP
    ctx->pc = 0x142990u;
}
