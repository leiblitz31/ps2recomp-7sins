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

// Function: sub_0025B540
// Address: 0x25b540 - 0x25b5d0
void sub_0025B540_0x25b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B540_0x25b540");
#endif

    switch (ctx->pc) {
        case 0x25b568u: goto label_25b568;
        case 0x25b594u: goto label_25b594;
        case 0x25b5b4u: goto label_25b5b4;
        default: break;
    }

    ctx->pc = 0x25b540u;

    // 0x25b540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25b544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b54c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25b550: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25b550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25b554: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b558: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x25b558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25b55c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b560: 0xc0963c8  jal         func_258F20
    ctx->pc = 0x25B560u;
    SET_GPR_U32(ctx, 31, 0x25B568u);
    ctx->pc = 0x258F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F20u, 0x25B560u, 0x25B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B568u;
label_25b568:
    // 0x25b568: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25B568u;
    {
        const bool branch_taken_0x25b568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b568) {
            ctx->pc = 0x25B594u;
            goto label_25b594;
        }
    }
    ctx->pc = 0x25B570u;
    // 0x25b570: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b574: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b578: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x25b578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x25b57c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x25b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25b580: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25b580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b584: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25b584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b588: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25b58c: 0xc0963b8  jal         func_258EE0
    ctx->pc = 0x25B58Cu;
    SET_GPR_U32(ctx, 31, 0x25B594u);
    ctx->pc = 0x258EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258EE0u, 0x25B58Cu, 0x25B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B594u;
label_25b594:
    // 0x25b594: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b598: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25b59c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x25b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x25b5a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25b5a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b5a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25b5ac: 0xc096d74  jal         func_25B5D0
    ctx->pc = 0x25B5ACu;
    SET_GPR_U32(ctx, 31, 0x25B5B4u);
    ctx->pc = 0x25B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5D0u, 0x25B5ACu, 0x25B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5B4u;
label_25b5b4:
    // 0x25b5b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b5b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b5bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b5c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25B5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B5CCu;
    // 0x25b5cc: 0x0  nop
    ctx->pc = 0x25b5ccu;
    // NOP
    ctx->pc = 0x25b5d0u;
}
