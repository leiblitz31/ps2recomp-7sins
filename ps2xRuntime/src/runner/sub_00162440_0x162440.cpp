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

// Function: sub_00162440
// Address: 0x162440 - 0x1624d0
void sub_00162440_0x162440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162440_0x162440");
#endif

    switch (ctx->pc) {
        case 0x162460u: goto label_162460;
        case 0x162474u: goto label_162474;
        case 0x162488u: goto label_162488;
        case 0x1624b0u: goto label_1624b0;
        default: break;
    }

    ctx->pc = 0x162440u;

    // 0x162440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16244c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x16244cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x162450: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x162450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x162454: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x162454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162458: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x162458u;
    SET_GPR_U32(ctx, 31, 0x162460u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x162458u, 0x162460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162460u;
label_162460:
    // 0x162460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162464: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x162464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x162468: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x162468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16246c: 0xc0589b4  jal         func_1626D0
    ctx->pc = 0x16246Cu;
    SET_GPR_U32(ctx, 31, 0x162474u);
    ctx->pc = 0x1626D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1626D0u, 0x16246Cu, 0x162474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162474u;
label_162474:
    // 0x162474: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x162474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16247c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x16247cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x162480: 0xc05898c  jal         func_162630
    ctx->pc = 0x162480u;
    SET_GPR_U32(ctx, 31, 0x162488u);
    ctx->pc = 0x162630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162630u, 0x162480u, 0x162488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162488u;
label_162488:
    // 0x162488: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16248c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162490: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x162490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162494: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x162494u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x162498: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x162498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16249c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x16249cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1624a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1624a4: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1624a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1624a8: 0xc058934  jal         func_1624D0
    ctx->pc = 0x1624A8u;
    SET_GPR_U32(ctx, 31, 0x1624B0u);
    ctx->pc = 0x1624D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1624D0u, 0x1624A8u, 0x1624B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1624B0u;
label_1624b0:
    // 0x1624b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1624b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1624b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1624b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1624bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1624bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1624c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1624c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1624c4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1624c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1624c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1624C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1624C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1624D0u;
}
