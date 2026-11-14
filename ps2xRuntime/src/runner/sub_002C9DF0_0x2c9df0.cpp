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

// Function: sub_002C9DF0
// Address: 0x2c9df0 - 0x2c9fc0
void sub_002C9DF0_0x2c9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9DF0_0x2c9df0");
#endif

    switch (ctx->pc) {
        case 0x2c9e20u: goto label_2c9e20;
        case 0x2c9e30u: goto label_2c9e30;
        case 0x2c9e44u: goto label_2c9e44;
        case 0x2c9e68u: goto label_2c9e68;
        case 0x2c9e80u: goto label_2c9e80;
        case 0x2c9e98u: goto label_2c9e98;
        case 0x2c9eb8u: goto label_2c9eb8;
        case 0x2c9ec4u: goto label_2c9ec4;
        case 0x2c9ed0u: goto label_2c9ed0;
        case 0x2c9ee8u: goto label_2c9ee8;
        case 0x2c9efcu: goto label_2c9efc;
        case 0x2c9f08u: goto label_2c9f08;
        case 0x2c9f3cu: goto label_2c9f3c;
        case 0x2c9f58u: goto label_2c9f58;
        case 0x2c9f6cu: goto label_2c9f6c;
        case 0x2c9f94u: goto label_2c9f94;
        default: break;
    }

    ctx->pc = 0x2c9df0u;

    // 0x2c9df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c9df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c9df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9e00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2c9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2c9e04: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c9e08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2c9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9e0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e10: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c9e14: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c9e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c9e18: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2C9E18u;
    SET_GPR_U32(ctx, 31, 0x2C9E20u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C9E18u, 0x2C9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E20u;
label_2c9e20:
    // 0x2c9e20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c9e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e24: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e28: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2C9E28u;
    SET_GPR_U32(ctx, 31, 0x2C9E30u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C9E28u, 0x2C9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E30u;
label_2c9e30:
    // 0x2c9e30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C9E30u;
    {
        const bool branch_taken_0x2c9e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e30) {
            ctx->pc = 0x2C9E98u;
            goto label_2c9e98;
        }
    }
    ctx->pc = 0x2C9E38u;
    // 0x2c9e38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e3c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C9E3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9E44u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C9E3Cu, 0x2C9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E44u;
label_2c9e44:
    // 0x2c9e44: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c9e48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9e4c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9E4Cu;
    {
        const bool branch_taken_0x2c9e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9e4c) {
            ctx->pc = 0x2C9E74u;
            goto label_2c9e74;
        }
    }
    ctx->pc = 0x2C9E54u;
    // 0x2c9e54: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c9e58: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9e5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9e60: 0xc0b1704  jal         func_2C5C10
    ctx->pc = 0x2C9E60u;
    SET_GPR_U32(ctx, 31, 0x2C9E68u);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C9E60u, 0x2C9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E68u;
label_2c9e68:
    // 0x2c9e68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9e6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9e70: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x2c9e70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
label_2c9e74:
    // 0x2c9e74: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e78: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2C9E78u;
    SET_GPR_U32(ctx, 31, 0x2C9E80u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2C9E78u, 0x2C9E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E80u;
label_2c9e80:
    // 0x2c9e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2c9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9e8c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c9e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c9e90: 0xc0b1704  jal         func_2C5C10
    ctx->pc = 0x2C9E90u;
    SET_GPR_U32(ctx, 31, 0x2C9E98u);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C9E90u, 0x2C9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E98u;
label_2c9e98:
    // 0x2c9e98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e9c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2c9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2c9ea0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2c9ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c9ea4: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C9EA4u;
    {
        const bool branch_taken_0x2c9ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ea4) {
            ctx->pc = 0x2C9F44u;
            goto label_2c9f44;
        }
    }
    ctx->pc = 0x2C9EACu;
    // 0x2c9eac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9eb0: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2C9EB0u;
    SET_GPR_U32(ctx, 31, 0x2C9EB8u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2C9EB0u, 0x2C9EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EB8u;
label_2c9eb8:
    // 0x2c9eb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ebc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9EBCu;
    {
        const bool branch_taken_0x2c9ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ebc) {
            ctx->pc = 0x2C9ED4u;
            goto label_2c9ed4;
        }
    }
    ctx->pc = 0x2C9EC4u;
label_2c9ec4:
    // 0x2c9ec4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9ec8: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2C9EC8u;
    SET_GPR_U32(ctx, 31, 0x2C9ED0u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2C9EC8u, 0x2C9ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9ED0u;
label_2c9ed0:
    // 0x2c9ed0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c9ed4:
    // 0x2c9ed4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9ed8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2c9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c9edc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9ee0: 0xc0b33e8  jal         func_2CCFA0
    ctx->pc = 0x2C9EE0u;
    SET_GPR_U32(ctx, 31, 0x2C9EE8u);
    ctx->pc = 0x2CCFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFA0u, 0x2C9EE0u, 0x2C9EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EE8u;
label_2c9ee8:
    // 0x2c9ee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9EE8u;
    {
        const bool branch_taken_0x2c9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9ee8) {
            ctx->pc = 0x2C9F10u;
            goto label_2c9f10;
        }
    }
    ctx->pc = 0x2C9EF0u;
    // 0x2c9ef0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9ef4: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2C9EF4u;
    SET_GPR_U32(ctx, 31, 0x2C9EFCu);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2C9EF4u, 0x2C9EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9EFCu;
label_2c9efc:
    // 0x2c9efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f00: 0xc097070  jal         func_25C1C0
    ctx->pc = 0x2C9F00u;
    SET_GPR_U32(ctx, 31, 0x2C9F08u);
    ctx->pc = 0x25C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C1C0u, 0x2C9F00u, 0x2C9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F08u;
label_2c9f08:
    // 0x2c9f08: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9F08u;
    {
        const bool branch_taken_0x2c9f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c9f08) {
            ctx->pc = 0x2C9F1Cu;
            goto label_2c9f1c;
        }
    }
    ctx->pc = 0x2C9F10u;
label_2c9f10:
    // 0x2c9f10: 0x2e23000a  sltiu       $v1, $s1, 0xA
    ctx->pc = 0x2c9f10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c9f14: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2C9F14u;
    {
        const bool branch_taken_0x2c9f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f14) {
            ctx->pc = 0x2C9EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9ec4;
        }
    }
    ctx->pc = 0x2C9F1Cu;
label_2c9f1c:
    // 0x2c9f1c: 0x2e21000a  sltiu       $at, $s1, 0xA
    ctx->pc = 0x2c9f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c9f20: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C9F20u;
    {
        const bool branch_taken_0x2c9f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f20) {
            ctx->pc = 0x2C9F6Cu;
            goto label_2c9f6c;
        }
    }
    ctx->pc = 0x2C9F28u;
    // 0x2c9f28: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C9F28u;
    {
        const bool branch_taken_0x2c9f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f28) {
            ctx->pc = 0x2C9F6Cu;
            goto label_2c9f6c;
        }
    }
    ctx->pc = 0x2C9F30u;
    // 0x2c9f30: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f34: 0xc096d20  jal         func_25B480
    ctx->pc = 0x2C9F34u;
    SET_GPR_U32(ctx, 31, 0x2C9F3Cu);
    ctx->pc = 0x25B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B480u, 0x2C9F34u, 0x2C9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F3Cu;
label_2c9f3c:
    // 0x2c9f3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C9F3Cu;
    {
        const bool branch_taken_0x2c9f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f3c) {
            ctx->pc = 0x2C9F6Cu;
            goto label_2c9f6c;
        }
    }
    ctx->pc = 0x2C9F44u;
label_2c9f44:
    // 0x2c9f44: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9F44u;
    {
        const bool branch_taken_0x2c9f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f44) {
            ctx->pc = 0x2C9F6Cu;
            goto label_2c9f6c;
        }
    }
    ctx->pc = 0x2C9F4Cu;
    // 0x2c9f4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f50: 0xc096d84  jal         func_25B610
    ctx->pc = 0x2C9F50u;
    SET_GPR_U32(ctx, 31, 0x2C9F58u);
    ctx->pc = 0x25B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B610u, 0x2C9F50u, 0x2C9F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F58u;
label_2c9f58:
    // 0x2c9f58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9F58u;
    {
        const bool branch_taken_0x2c9f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f58) {
            ctx->pc = 0x2C9F6Cu;
            goto label_2c9f6c;
        }
    }
    ctx->pc = 0x2C9F60u;
    // 0x2c9f60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f64: 0xc096d20  jal         func_25B480
    ctx->pc = 0x2C9F64u;
    SET_GPR_U32(ctx, 31, 0x2C9F6Cu);
    ctx->pc = 0x25B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B480u, 0x2C9F64u, 0x2C9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F6Cu;
label_2c9f6c:
    // 0x2c9f6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f70: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2c9f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2c9f74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2c9f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c9f78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9F78u;
    {
        const bool branch_taken_0x2c9f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f78) {
            ctx->pc = 0x2C9F94u;
            goto label_2c9f94;
        }
    }
    ctx->pc = 0x2C9F80u;
    // 0x2c9f80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c9f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c9f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c9f88: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2c9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f8c: 0xc0ad2dc  jal         func_2B4B70
    ctx->pc = 0x2C9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F94u);
    ctx->pc = 0x2B4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B70u, 0x2C9F8Cu, 0x2C9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F94u;
label_2c9f94:
    // 0x2c9f94: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f98: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x2c9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x2c9f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9fa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c9fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c9fac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9FB4u;
    // 0x2c9fb4: 0x0  nop
    ctx->pc = 0x2c9fb4u;
    // NOP
    // 0x2c9fb8: 0x0  nop
    ctx->pc = 0x2c9fb8u;
    // NOP
    // 0x2c9fbc: 0x0  nop
    ctx->pc = 0x2c9fbcu;
    // NOP
    ctx->pc = 0x2c9fc0u;
}
