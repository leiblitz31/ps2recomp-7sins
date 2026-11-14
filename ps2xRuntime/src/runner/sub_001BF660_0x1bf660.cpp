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

// Function: sub_001BF660
// Address: 0x1bf660 - 0x1bf6f0
void sub_001BF660_0x1bf660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF660_0x1bf660");
#endif

    switch (ctx->pc) {
        case 0x1bf688u: goto label_1bf688;
        case 0x1bf6b4u: goto label_1bf6b4;
        case 0x1bf6d4u: goto label_1bf6d4;
        default: break;
    }

    ctx->pc = 0x1bf660u;

    // 0x1bf660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bf660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bf664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf66c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1bf66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1bf670: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1bf670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1bf674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bf674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf678: 0x245000d0  addiu       $s0, $v0, 0xD0
    ctx->pc = 0x1bf678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1bf67c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1bf67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf680: 0xc06f438  jal         func_1BD0E0
    ctx->pc = 0x1BF680u;
    SET_GPR_U32(ctx, 31, 0x1BF688u);
    ctx->pc = 0x1BD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD0E0u, 0x1BF680u, 0x1BF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF688u;
label_1bf688:
    // 0x1bf688: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BF688u;
    {
        const bool branch_taken_0x1bf688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf688) {
            ctx->pc = 0x1BF6B4u;
            goto label_1bf6b4;
        }
    }
    ctx->pc = 0x1BF690u;
    // 0x1bf690: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bf690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf694: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf698: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1bf698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf69c: 0x246400d0  addiu       $a0, $v1, 0xD0
    ctx->pc = 0x1bf69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1bf6a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bf6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bf6a4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1bf6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf6a8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1bf6ac: 0xc06fdbc  jal         func_1BF6F0
    ctx->pc = 0x1BF6ACu;
    SET_GPR_U32(ctx, 31, 0x1BF6B4u);
    ctx->pc = 0x1BF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF6F0u, 0x1BF6ACu, 0x1BF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6B4u;
label_1bf6b4:
    // 0x1bf6b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf6b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1bf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bf6bc: 0x2442ff30  addiu       $v0, $v0, -0xD0
    ctx->pc = 0x1bf6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967088));
    // 0x1bf6c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1bf6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1bf6c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bf6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf6c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bf6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bf6cc: 0xc06e4fc  jal         func_1B93F0
    ctx->pc = 0x1BF6CCu;
    SET_GPR_U32(ctx, 31, 0x1BF6D4u);
    ctx->pc = 0x1B93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93F0u, 0x1BF6CCu, 0x1BF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6D4u;
label_1bf6d4:
    // 0x1bf6d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf6d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf6e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bf6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF6ECu;
    // 0x1bf6ec: 0x0  nop
    ctx->pc = 0x1bf6ecu;
    // NOP
    ctx->pc = 0x1bf6f0u;
}
