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

// Function: sub_001538D0
// Address: 0x1538d0 - 0x153970
void sub_001538D0_0x1538d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001538D0_0x1538d0");
#endif

    switch (ctx->pc) {
        case 0x1538fcu: goto label_1538fc;
        case 0x15390cu: goto label_15390c;
        case 0x153920u: goto label_153920;
        case 0x153930u: goto label_153930;
        case 0x153948u: goto label_153948;
        default: break;
    }

    ctx->pc = 0x1538d0u;

    // 0x1538d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1538d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1538d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1538d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1538d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1538dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1538dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1538e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1538e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1538e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1538e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1538e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1538E8u;
    {
        const bool branch_taken_0x1538e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1538e8) {
            ctx->pc = 0x153954u;
            goto label_153954;
        }
    }
    ctx->pc = 0x1538F0u;
    // 0x1538f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1538f4: 0xc054e6c  jal         func_1539B0
    ctx->pc = 0x1538F4u;
    SET_GPR_U32(ctx, 31, 0x1538FCu);
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x1538F4u, 0x1538FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538FCu;
label_1538fc:
    // 0x1538fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1538fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x153900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153904: 0xc055700  jal         func_155C00
    ctx->pc = 0x153904u;
    SET_GPR_U32(ctx, 31, 0x15390Cu);
    ctx->pc = 0x155C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C00u, 0x153904u, 0x15390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15390Cu;
label_15390c:
    // 0x15390c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153910: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x153910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153914: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153918: 0xc054e64  jal         func_153990
    ctx->pc = 0x153918u;
    SET_GPR_U32(ctx, 31, 0x153920u);
    ctx->pc = 0x153990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153990u, 0x153918u, 0x153920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153920u;
label_153920:
    // 0x153920: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153924: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153928: 0xc054e6c  jal         func_1539B0
    ctx->pc = 0x153928u;
    SET_GPR_U32(ctx, 31, 0x153930u);
    ctx->pc = 0x1539B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539B0u, 0x153928u, 0x153930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153930u;
label_153930:
    // 0x153930: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x153930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x153934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x153934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153938: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x153938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15393c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15393cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153940: 0xc054e5c  jal         func_153970
    ctx->pc = 0x153940u;
    SET_GPR_U32(ctx, 31, 0x153948u);
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x153940u, 0x153948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153948u;
label_153948:
    // 0x153948: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x15394c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153950: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x153950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_153954:
    // 0x153954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15395c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15395cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153960: 0x3e00008  jr          $ra
    ctx->pc = 0x153960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153968u;
    // 0x153968: 0x0  nop
    ctx->pc = 0x153968u;
    // NOP
    // 0x15396c: 0x0  nop
    ctx->pc = 0x15396cu;
    // NOP
    ctx->pc = 0x153970u;
}
