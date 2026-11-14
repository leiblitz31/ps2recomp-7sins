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

// Function: sub_0044D7C0
// Address: 0x44d7c0 - 0x44d840
void sub_0044D7C0_0x44d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044D7C0_0x44d7c0");
#endif

    switch (ctx->pc) {
        case 0x44d7e0u: goto label_44d7e0;
        case 0x44d818u: goto label_44d818;
        case 0x44d82cu: goto label_44d82c;
        default: break;
    }

    ctx->pc = 0x44d7c0u;

    // 0x44d7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44d7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44d7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44d7c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44d7cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44d7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d7d4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x44d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x44d7d8: 0xc041b48  jal         func_106D20
    ctx->pc = 0x44D7D8u;
    SET_GPR_U32(ctx, 31, 0x44D7E0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x44D7D8u, 0x44D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D7E0u;
label_44d7e0:
    // 0x44d7e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x44d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44d7e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d7e8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x44d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x44d7ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d7f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44d7f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d7f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x44d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x44d7fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d800: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x44d800u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x44d804: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d808: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x44d808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x44d80c: 0x2785af90  addiu       $a1, $gp, -0x5070
    ctx->pc = 0x44d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946704));
    // 0x44d810: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x44D810u;
    SET_GPR_U32(ctx, 31, 0x44D818u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x44D810u, 0x44D818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D818u;
label_44d818:
    // 0x44d818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d81c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44d820: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44d820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d824: 0xc113998  jal         func_44E660
    ctx->pc = 0x44D824u;
    SET_GPR_U32(ctx, 31, 0x44D82Cu);
    ctx->pc = 0x44E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E660u, 0x44D824u, 0x44D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D82Cu;
label_44d82c:
    // 0x44d82c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44d830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44d834: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44d834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44d838: 0x3e00008  jr          $ra
    ctx->pc = 0x44D838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44D838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44D840u;
}
