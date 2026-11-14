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

// Function: sub_00217E70
// Address: 0x217e70 - 0x217f80
void sub_00217E70_0x217e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E70_0x217e70");
#endif

    switch (ctx->pc) {
        case 0x217e9cu: goto label_217e9c;
        case 0x217ea8u: goto label_217ea8;
        case 0x217ebcu: goto label_217ebc;
        case 0x217ee0u: goto label_217ee0;
        case 0x217ef4u: goto label_217ef4;
        case 0x217f04u: goto label_217f04;
        case 0x217f4cu: goto label_217f4c;
        case 0x217f60u: goto label_217f60;
        default: break;
    }

    ctx->pc = 0x217e70u;

    // 0x217e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x217e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x217e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217e7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x217e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x217e80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x217e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x217e84: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x217e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x217e88: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x217e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x217e8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217e90: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217e94: 0xc085f54  jal         func_217D50
    ctx->pc = 0x217E94u;
    SET_GPR_U32(ctx, 31, 0x217E9Cu);
    ctx->pc = 0x217D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D50u, 0x217E94u, 0x217E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E9Cu;
label_217e9c:
    // 0x217e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ea0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x217EA0u;
    {
        const bool branch_taken_0x217ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ea0) {
            ctx->pc = 0x217ED0u;
            goto label_217ed0;
        }
    }
    ctx->pc = 0x217EA8u;
label_217ea8:
    // 0x217ea8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x217ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217eac: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x217eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217eb0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x217eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x217eb4: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x217EB4u;
    SET_GPR_U32(ctx, 31, 0x217EBCu);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x217EB4u, 0x217EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EBCu;
label_217ebc:
    // 0x217ebc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217EBCu;
    {
        const bool branch_taken_0x217ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217ebc) {
            ctx->pc = 0x217ECCu;
            goto label_217ecc;
        }
    }
    ctx->pc = 0x217EC4u;
    // 0x217ec4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x217EC4u;
    {
        const bool branch_taken_0x217ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ec4) {
            ctx->pc = 0x217F60u;
            goto label_217f60;
        }
    }
    ctx->pc = 0x217ECCu;
label_217ecc:
    // 0x217ecc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_217ed0:
    // 0x217ed0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217ed4: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217ed8: 0xc085f44  jal         func_217D10
    ctx->pc = 0x217ED8u;
    SET_GPR_U32(ctx, 31, 0x217EE0u);
    ctx->pc = 0x217D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D10u, 0x217ED8u, 0x217EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EE0u;
label_217ee0:
    // 0x217ee0: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x217EE0u;
    {
        const bool branch_taken_0x217ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x217ee0) {
            ctx->pc = 0x217EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217ea8;
        }
    }
    ctx->pc = 0x217EE8u;
    // 0x217ee8: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x217ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x217eec: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x217EECu;
    SET_GPR_U32(ctx, 31, 0x217EF4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x217EECu, 0x217EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EF4u;
label_217ef4:
    // 0x217ef4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x217ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x217ef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217efc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x217EFCu;
    SET_GPR_U32(ctx, 31, 0x217F04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x217EFCu, 0x217F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F04u;
label_217f04:
    // 0x217f04: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x217f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x217f08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217f0c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x217f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x217f10: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x217f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x217f14: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x217f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x217f18: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x217f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x217f1c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x217f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x217f20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x217f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217f24: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x217f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x217f28: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x217f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x217f2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217f30: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217F30u;
    {
        const bool branch_taken_0x217f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x217f30) {
            ctx->pc = 0x217F4Cu;
            goto label_217f4c;
        }
    }
    ctx->pc = 0x217F38u;
    // 0x217f38: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x217f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x217f3c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x217f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217f40: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x217f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x217f44: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x217F44u;
    SET_GPR_U32(ctx, 31, 0x217F4Cu);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x217F44u, 0x217F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F4Cu;
label_217f4c:
    // 0x217f4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217f50: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x217f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x217f54: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x217f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x217f58: 0xc085fe0  jal         func_217F80
    ctx->pc = 0x217F58u;
    SET_GPR_U32(ctx, 31, 0x217F60u);
    ctx->pc = 0x217F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217F80u, 0x217F58u, 0x217F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F60u;
label_217f60:
    // 0x217f60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217f68: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x217F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217F74u;
    // 0x217f74: 0x0  nop
    ctx->pc = 0x217f74u;
    // NOP
    // 0x217f78: 0x0  nop
    ctx->pc = 0x217f78u;
    // NOP
    // 0x217f7c: 0x0  nop
    ctx->pc = 0x217f7cu;
    // NOP
    ctx->pc = 0x217f80u;
}
