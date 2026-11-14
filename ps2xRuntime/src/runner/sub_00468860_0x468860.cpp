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

// Function: sub_00468860
// Address: 0x468860 - 0x4688d0
void sub_00468860_0x468860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468860_0x468860");
#endif

    switch (ctx->pc) {
        case 0x468878u: goto label_468878;
        case 0x468888u: goto label_468888;
        default: break;
    }

    ctx->pc = 0x468860u;

    // 0x468860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x468860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x468864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46886c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46886cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468870: 0xc11a2a0  jal         func_468A80
    ctx->pc = 0x468870u;
    SET_GPR_U32(ctx, 31, 0x468878u);
    ctx->pc = 0x468A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468A80u, 0x468870u, 0x468878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468878u;
label_468878:
    // 0x468878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46887c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x468880: 0xc11a284  jal         func_468A10
    ctx->pc = 0x468880u;
    SET_GPR_U32(ctx, 31, 0x468888u);
    ctx->pc = 0x468A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468A10u, 0x468880u, 0x468888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468888u;
label_468888:
    // 0x468888: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46888c: 0x24636c20  addiu       $v1, $v1, 0x6C20
    ctx->pc = 0x46888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27680));
    // 0x468890: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468894: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x468898: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46889c: 0x24636c38  addiu       $v1, $v1, 0x6C38
    ctx->pc = 0x46889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27704));
    // 0x4688a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4688a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4688a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4688a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x4688a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4688a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4688ac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4688acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4688b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4688b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4688b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4688b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4688b8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4688b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x4688bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4688bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4688c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4688c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4688c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4688c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4688c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4688C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4688C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4688D0u;
}
