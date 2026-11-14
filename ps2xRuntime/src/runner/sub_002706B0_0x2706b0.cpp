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

// Function: sub_002706B0
// Address: 0x2706b0 - 0x270740
void sub_002706B0_0x2706b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002706B0_0x2706b0");
#endif

    switch (ctx->pc) {
        case 0x2706d8u: goto label_2706d8;
        case 0x270704u: goto label_270704;
        case 0x270724u: goto label_270724;
        default: break;
    }

    ctx->pc = 0x2706b0u;

    // 0x2706b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2706b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2706b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2706b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2706b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2706b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2706bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2706bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2706c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2706c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2706c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2706c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2706c8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2706c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2706cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2706ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2706d0: 0xc09c064  jal         func_270190
    ctx->pc = 0x2706D0u;
    SET_GPR_U32(ctx, 31, 0x2706D8u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2706D0u, 0x2706D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706D8u;
label_2706d8:
    // 0x2706d8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2706D8u;
    {
        const bool branch_taken_0x2706d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2706d8) {
            ctx->pc = 0x270704u;
            goto label_270704;
        }
    }
    ctx->pc = 0x2706E0u;
    // 0x2706e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2706e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2706e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2706e8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2706e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2706ec: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2706ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2706f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2706f4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2706f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2706f8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2706fc: 0xc09c054  jal         func_270150
    ctx->pc = 0x2706FCu;
    SET_GPR_U32(ctx, 31, 0x270704u);
    ctx->pc = 0x270150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270150u, 0x2706FCu, 0x270704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270704u;
label_270704:
    // 0x270704: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x270704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270708: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x270708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27070c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x270710: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x270710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x270714: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x270714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270718: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x270718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27071c: 0xc09c1d0  jal         func_270740
    ctx->pc = 0x27071Cu;
    SET_GPR_U32(ctx, 31, 0x270724u);
    ctx->pc = 0x270740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270740u, 0x27071Cu, 0x270724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x270724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x270728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27072c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27072cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270730: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x270730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270734: 0x3e00008  jr          $ra
    ctx->pc = 0x270734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27073Cu;
    // 0x27073c: 0x0  nop
    ctx->pc = 0x27073cu;
    // NOP
    ctx->pc = 0x270740u;
}
