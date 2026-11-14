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

// Function: sub_002D2150
// Address: 0x2d2150 - 0x2d21e0
void sub_002D2150_0x2d2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2150_0x2d2150");
#endif

    switch (ctx->pc) {
        case 0x2d2178u: goto label_2d2178;
        case 0x2d21a4u: goto label_2d21a4;
        case 0x2d21c4u: goto label_2d21c4;
        default: break;
    }

    ctx->pc = 0x2d2150u;

    // 0x2d2150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d2154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d2158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d215c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d2160: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d2160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d2164: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d2164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2168: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2d2168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d216c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d216cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2170: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D2170u;
    SET_GPR_U32(ctx, 31, 0x2D2178u);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D2170u, 0x2D2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2178u;
label_2d2178:
    // 0x2d2178: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2178u;
    {
        const bool branch_taken_0x2d2178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d2178) {
            ctx->pc = 0x2D21A4u;
            goto label_2d21a4;
        }
    }
    ctx->pc = 0x2D2180u;
    // 0x2d2180: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2d2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2184: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2188: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2d2188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d218c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2d218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d2190: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d2190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d2194: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d2194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2198: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d2198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d219c: 0xc0b42c4  jal         func_2D0B10
    ctx->pc = 0x2D219Cu;
    SET_GPR_U32(ctx, 31, 0x2D21A4u);
    ctx->pc = 0x2D0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B10u, 0x2D219Cu, 0x2D21A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21A4u;
label_2d21a4:
    // 0x2d21a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2d21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d21a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d21ac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2d21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2d21b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d21b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d21b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d21bc: 0xc0b4878  jal         func_2D21E0
    ctx->pc = 0x2D21BCu;
    SET_GPR_U32(ctx, 31, 0x2D21C4u);
    ctx->pc = 0x2D21E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D21E0u, 0x2D21BCu, 0x2D21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21C4u;
label_2d21c4:
    // 0x2d21c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d21c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d21c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d21cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d21ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d21d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d21d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D21D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D21D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D21DCu;
    // 0x2d21dc: 0x0  nop
    ctx->pc = 0x2d21dcu;
    // NOP
    ctx->pc = 0x2d21e0u;
}
