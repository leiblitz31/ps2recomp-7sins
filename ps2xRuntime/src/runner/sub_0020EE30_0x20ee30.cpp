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

// Function: sub_0020EE30
// Address: 0x20ee30 - 0x20ee60
void sub_0020EE30_0x20ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EE30_0x20ee30");
#endif

    switch (ctx->pc) {
        case 0x20ee4cu: goto label_20ee4c;
        default: break;
    }

    ctx->pc = 0x20ee30u;

    // 0x20ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ee34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ee38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20ee3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ee40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ee44: 0xc121734  jal         func_485CD0
    ctx->pc = 0x20EE44u;
    SET_GPR_U32(ctx, 31, 0x20EE4Cu);
    ctx->pc = 0x485CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485CD0u, 0x20EE44u, 0x20EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE4Cu;
label_20ee4c:
    // 0x20ee4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ee4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ee50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20ee54: 0x3e00008  jr          $ra
    ctx->pc = 0x20EE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EE5Cu;
    // 0x20ee5c: 0x0  nop
    ctx->pc = 0x20ee5cu;
    // NOP
    ctx->pc = 0x20ee60u;
}
