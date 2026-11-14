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

// Function: sub_0046D540
// Address: 0x46d540 - 0x46d5b0
void sub_0046D540_0x46d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D540_0x46d540");
#endif

    switch (ctx->pc) {
        case 0x46d578u: goto label_46d578;
        case 0x46d590u: goto label_46d590;
        default: break;
    }

    ctx->pc = 0x46d540u;

    // 0x46d540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46d544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46d548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d54c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x46d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x46d550: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x46d554: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x46d554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x46d558: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d55c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x46d55cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x46d560: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46d560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46d564: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46d564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46d568: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x46d568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46d56c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x46d56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x46d570: 0xc04f238  jal         func_13C8E0
    ctx->pc = 0x46D570u;
    SET_GPR_U32(ctx, 31, 0x46D578u);
    ctx->pc = 0x13C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C8E0u, 0x46D570u, 0x46D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D578u;
label_46d578:
    // 0x46d578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46d578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d57c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d584: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46d584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46d588: 0xc04e020  jal         func_138080
    ctx->pc = 0x46D588u;
    SET_GPR_U32(ctx, 31, 0x46D590u);
    ctx->pc = 0x138080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138080u, 0x46D588u, 0x46D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D590u;
label_46d590:
    // 0x46d590: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d594: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x46d594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x46d598: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46d59c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46d59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d5a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d5a4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46d5a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46d5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x46D5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D5B0u;
}
