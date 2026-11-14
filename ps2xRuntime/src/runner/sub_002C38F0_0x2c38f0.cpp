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

// Function: sub_002C38F0
// Address: 0x2c38f0 - 0x2c3980
void sub_002C38F0_0x2c38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C38F0_0x2c38f0");
#endif

    switch (ctx->pc) {
        case 0x2c3918u: goto label_2c3918;
        case 0x2c3944u: goto label_2c3944;
        case 0x2c3964u: goto label_2c3964;
        default: break;
    }

    ctx->pc = 0x2c38f0u;

    // 0x2c38f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c38f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c38f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c38f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c38f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c38fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2c38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2c3900: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c3900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c3904: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c3904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3908: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2c3908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c390c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3910: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2C3910u;
    SET_GPR_U32(ctx, 31, 0x2C3918u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2C3910u, 0x2C3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3918u;
label_2c3918:
    // 0x2c3918: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3918u;
    {
        const bool branch_taken_0x2c3918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3918) {
            ctx->pc = 0x2C3944u;
            goto label_2c3944;
        }
    }
    ctx->pc = 0x2C3920u;
    // 0x2c3920: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3924: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c3924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3928: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2c3928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c392c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2c392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c3930: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c3930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c3934: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2c3934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3938: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2c3938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2c393c: 0xc068e88  jal         func_1A3A20
    ctx->pc = 0x2C393Cu;
    SET_GPR_U32(ctx, 31, 0x2C3944u);
    ctx->pc = 0x1A3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A20u, 0x2C393Cu, 0x2C3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3944u;
label_2c3944:
    // 0x2c3944: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2c3944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c3948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c394c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2c394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2c3950: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c3950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c3954: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c3954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3958: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c3958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c395c: 0xc0b0e60  jal         func_2C3980
    ctx->pc = 0x2C395Cu;
    SET_GPR_U32(ctx, 31, 0x2C3964u);
    ctx->pc = 0x2C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3980u, 0x2C395Cu, 0x2C3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3964u;
label_2c3964:
    // 0x2c3964: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c396c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c396cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3970: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c3974: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C397Cu;
    // 0x2c397c: 0x0  nop
    ctx->pc = 0x2c397cu;
    // NOP
    ctx->pc = 0x2c3980u;
}
