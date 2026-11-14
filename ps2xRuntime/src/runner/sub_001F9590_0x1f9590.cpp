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

// Function: sub_001F9590
// Address: 0x1f9590 - 0x1f9680
void sub_001F9590_0x1f9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9590_0x1f9590");
#endif

    switch (ctx->pc) {
        case 0x1f95b0u: goto label_1f95b0;
        case 0x1f95bcu: goto label_1f95bc;
        case 0x1f95d4u: goto label_1f95d4;
        case 0x1f95e0u: goto label_1f95e0;
        case 0x1f95f8u: goto label_1f95f8;
        case 0x1f9604u: goto label_1f9604;
        case 0x1f961cu: goto label_1f961c;
        case 0x1f9628u: goto label_1f9628;
        case 0x1f9640u: goto label_1f9640;
        case 0x1f9654u: goto label_1f9654;
        default: break;
    }

    ctx->pc = 0x1f9590u;

    // 0x1f9590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f9594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f959c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f959cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f95a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f95a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95a8: 0xc07e410  jal         func_1F9040
    ctx->pc = 0x1F95A8u;
    SET_GPR_U32(ctx, 31, 0x1F95B0u);
    ctx->pc = 0x1F9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9040u, 0x1F95A8u, 0x1F95B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95B0u;
label_1f95b0:
    // 0x1f95b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95b4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F95B4u;
    SET_GPR_U32(ctx, 31, 0x1F95BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F95B4u, 0x1F95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95BCu;
label_1f95bc:
    // 0x1f95bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95c0: 0x8c650144  lw          $a1, 0x144($v1)
    ctx->pc = 0x1f95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x1f95c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f95c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f95c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f95cc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F95CCu;
    SET_GPR_U32(ctx, 31, 0x1F95D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F95CCu, 0x1F95D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95D4u;
label_1f95d4:
    // 0x1f95d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95d8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F95D8u;
    SET_GPR_U32(ctx, 31, 0x1F95E0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F95D8u, 0x1F95E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95E0u;
label_1f95e0:
    // 0x1f95e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95e4: 0x8c650174  lw          $a1, 0x174($v1)
    ctx->pc = 0x1f95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x1f95e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f95e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f95ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f95f0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F95F0u;
    SET_GPR_U32(ctx, 31, 0x1F95F8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F95F0u, 0x1F95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95F8u;
label_1f95f8:
    // 0x1f95f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f95f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f95fc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F95FCu;
    SET_GPR_U32(ctx, 31, 0x1F9604u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F95FCu, 0x1F9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9604u;
label_1f9604:
    // 0x1f9604: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9608: 0x8c650188  lw          $a1, 0x188($v1)
    ctx->pc = 0x1f9608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x1f960c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9610: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9614: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F9614u;
    SET_GPR_U32(ctx, 31, 0x1F961Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F9614u, 0x1F961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F961Cu;
label_1f961c:
    // 0x1f961c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9620: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F9620u;
    SET_GPR_U32(ctx, 31, 0x1F9628u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F9620u, 0x1F9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9628u;
label_1f9628:
    // 0x1f9628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f962c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9630: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1f9630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x1f9634: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1f9634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9638: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F9638u;
    SET_GPR_U32(ctx, 31, 0x1F9640u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F9638u, 0x1F9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9640u;
label_1f9640:
    // 0x1f9640: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f9640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9648: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f964c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F964Cu;
    SET_GPR_U32(ctx, 31, 0x1F9654u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F964Cu, 0x1F9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9654u;
label_1f9654:
    // 0x1f9654: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f9654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9658: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f965c: 0xac64023c  sw          $a0, 0x23C($v1)
    ctx->pc = 0x1f965cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 4));
    // 0x1f9660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9668: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f9668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f966c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F966Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9674u;
    // 0x1f9674: 0x0  nop
    ctx->pc = 0x1f9674u;
    // NOP
    // 0x1f9678: 0x0  nop
    ctx->pc = 0x1f9678u;
    // NOP
    // 0x1f967c: 0x0  nop
    ctx->pc = 0x1f967cu;
    // NOP
    ctx->pc = 0x1f9680u;
}
