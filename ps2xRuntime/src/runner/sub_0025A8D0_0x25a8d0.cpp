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

// Function: sub_0025A8D0
// Address: 0x25a8d0 - 0x25a960
void sub_0025A8D0_0x25a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A8D0_0x25a8d0");
#endif

    switch (ctx->pc) {
        case 0x25a8f8u: goto label_25a8f8;
        case 0x25a924u: goto label_25a924;
        case 0x25a944u: goto label_25a944;
        default: break;
    }

    ctx->pc = 0x25a8d0u;

    // 0x25a8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25a8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a8dc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25a8e0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25a8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25a8e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a8e8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x25a8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25a8ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a8f0: 0xc095a24  jal         func_256890
    ctx->pc = 0x25A8F0u;
    SET_GPR_U32(ctx, 31, 0x25A8F8u);
    ctx->pc = 0x256890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256890u, 0x25A8F0u, 0x25A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A8F8u;
label_25a8f8:
    // 0x25a8f8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A8F8u;
    {
        const bool branch_taken_0x25a8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a8f8) {
            ctx->pc = 0x25A924u;
            goto label_25a924;
        }
    }
    ctx->pc = 0x25A900u;
    // 0x25a900: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a904: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a908: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x25a908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a90c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x25a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x25a910: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25a910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25a914: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x25a914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a918: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25a918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x25a91c: 0xc096a58  jal         func_25A960
    ctx->pc = 0x25A91Cu;
    SET_GPR_U32(ctx, 31, 0x25A924u);
    ctx->pc = 0x25A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A960u, 0x25A91Cu, 0x25A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A924u;
label_25a924:
    // 0x25a924: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a928: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x25a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25a92c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x25a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x25a930: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25a930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25a934: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a938: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25a93c: 0xc096158  jal         func_258560
    ctx->pc = 0x25A93Cu;
    SET_GPR_U32(ctx, 31, 0x25A944u);
    ctx->pc = 0x258560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258560u, 0x25A93Cu, 0x25A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A944u;
label_25a944:
    // 0x25a944: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a950: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25a954: 0x3e00008  jr          $ra
    ctx->pc = 0x25A954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A95Cu;
    // 0x25a95c: 0x0  nop
    ctx->pc = 0x25a95cu;
    // NOP
    ctx->pc = 0x25a960u;
}
