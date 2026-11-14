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

// Function: sub_002DF380
// Address: 0x2df380 - 0x2df420
void sub_002DF380_0x2df380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF380_0x2df380");
#endif

    switch (ctx->pc) {
        case 0x2df3acu: goto label_2df3ac;
        case 0x2df3bcu: goto label_2df3bc;
        case 0x2df3d0u: goto label_2df3d0;
        case 0x2df3e0u: goto label_2df3e0;
        case 0x2df3f8u: goto label_2df3f8;
        default: break;
    }

    ctx->pc = 0x2df380u;

    // 0x2df380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df38c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2df38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2df390: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2df390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df394: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2df394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2df398: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DF398u;
    {
        const bool branch_taken_0x2df398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df398) {
            ctx->pc = 0x2DF404u;
            goto label_2df404;
        }
    }
    ctx->pc = 0x2DF3A0u;
    // 0x2df3a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3a4: 0xc0b7d18  jal         func_2DF460
    ctx->pc = 0x2DF3A4u;
    SET_GPR_U32(ctx, 31, 0x2DF3ACu);
    ctx->pc = 0x2DF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF460u, 0x2DF3A4u, 0x2DF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3ACu;
label_2df3ac:
    // 0x2df3ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2df3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df3b4: 0xc0b8a50  jal         func_2E2940
    ctx->pc = 0x2DF3B4u;
    SET_GPR_U32(ctx, 31, 0x2DF3BCu);
    ctx->pc = 0x2E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2940u, 0x2DF3B4u, 0x2DF3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3BCu;
label_2df3bc:
    // 0x2df3bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3c0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2df3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df3c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3c8: 0xc0b7d10  jal         func_2DF440
    ctx->pc = 0x2DF3C8u;
    SET_GPR_U32(ctx, 31, 0x2DF3D0u);
    ctx->pc = 0x2DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF440u, 0x2DF3C8u, 0x2DF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3D0u;
label_2df3d0:
    // 0x2df3d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2df3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2df3d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3d8: 0xc0b7d18  jal         func_2DF460
    ctx->pc = 0x2DF3D8u;
    SET_GPR_U32(ctx, 31, 0x2DF3E0u);
    ctx->pc = 0x2DF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF460u, 0x2DF3D8u, 0x2DF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3E0u;
label_2df3e0:
    // 0x2df3e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2df3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2df3e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2df3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2df3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df3ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2df3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df3f0: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2DF3F0u;
    SET_GPR_U32(ctx, 31, 0x2DF3F8u);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2DF3F0u, 0x2DF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF3F8u;
label_2df3f8:
    // 0x2df3f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2df3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2df3fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2df3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df400: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2df404:
    // 0x2df404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df40c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df410: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF418u;
    // 0x2df418: 0x0  nop
    ctx->pc = 0x2df418u;
    // NOP
    // 0x2df41c: 0x0  nop
    ctx->pc = 0x2df41cu;
    // NOP
    ctx->pc = 0x2df420u;
}
