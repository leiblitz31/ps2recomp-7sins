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

// Function: sub_00452390
// Address: 0x452390 - 0x452410
void sub_00452390_0x452390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452390_0x452390");
#endif

    switch (ctx->pc) {
        case 0x4523a8u: goto label_4523a8;
        case 0x4523b8u: goto label_4523b8;
        case 0x4523c4u: goto label_4523c4;
        case 0x4523d8u: goto label_4523d8;
        case 0x4523e4u: goto label_4523e4;
        case 0x4523f8u: goto label_4523f8;
        default: break;
    }

    ctx->pc = 0x452390u;

    // 0x452390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452398: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x452398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x45239c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x45239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4523a0: 0xc1149b4  jal         func_4526D0
    ctx->pc = 0x4523A0u;
    SET_GPR_U32(ctx, 31, 0x4523A8u);
    ctx->pc = 0x4526D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4526D0u, 0x4523A0u, 0x4523A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523A8u;
label_4523a8:
    // 0x4523a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4523a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4523ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4523acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4523b0: 0xc114974  jal         func_4525D0
    ctx->pc = 0x4523B0u;
    SET_GPR_U32(ctx, 31, 0x4523B8u);
    ctx->pc = 0x4525D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4525D0u, 0x4523B0u, 0x4523B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523B8u;
label_4523b8:
    // 0x4523b8: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x4523b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x4523bc: 0xc1149b4  jal         func_4526D0
    ctx->pc = 0x4523BCu;
    SET_GPR_U32(ctx, 31, 0x4523C4u);
    ctx->pc = 0x4526D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4526D0u, 0x4523BCu, 0x4523C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523C4u;
label_4523c4:
    // 0x4523c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4523c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4523c8: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x4523c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4523cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4523ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4523d0: 0xc114974  jal         func_4525D0
    ctx->pc = 0x4523D0u;
    SET_GPR_U32(ctx, 31, 0x4523D8u);
    ctx->pc = 0x4525D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4525D0u, 0x4523D0u, 0x4523D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523D8u;
label_4523d8:
    // 0x4523d8: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x4523d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x4523dc: 0xc1149b4  jal         func_4526D0
    ctx->pc = 0x4523DCu;
    SET_GPR_U32(ctx, 31, 0x4523E4u);
    ctx->pc = 0x4526D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4526D0u, 0x4523DCu, 0x4523E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523E4u;
label_4523e4:
    // 0x4523e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4523e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4523e8: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x4523e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4523ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4523ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4523f0: 0xc114974  jal         func_4525D0
    ctx->pc = 0x4523F0u;
    SET_GPR_U32(ctx, 31, 0x4523F8u);
    ctx->pc = 0x4525D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4525D0u, 0x4523F0u, 0x4523F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4523F8u;
label_4523f8:
    // 0x4523f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4523f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4523fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4523fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452400: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x452400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x452404: 0x3e00008  jr          $ra
    ctx->pc = 0x452404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45240Cu;
    // 0x45240c: 0x0  nop
    ctx->pc = 0x45240cu;
    // NOP
    ctx->pc = 0x452410u;
}
