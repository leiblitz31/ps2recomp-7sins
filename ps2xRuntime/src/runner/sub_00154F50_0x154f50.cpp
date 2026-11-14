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

// Function: sub_00154F50
// Address: 0x154f50 - 0x155030
void sub_00154F50_0x154f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154F50_0x154f50");
#endif

    switch (ctx->pc) {
        case 0x154f70u: goto label_154f70;
        case 0x154f84u: goto label_154f84;
        case 0x154f94u: goto label_154f94;
        case 0x154f9cu: goto label_154f9c;
        case 0x154facu: goto label_154fac;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fe0u: goto label_154fe0;
        case 0x154ff4u: goto label_154ff4;
        case 0x155004u: goto label_155004;
        default: break;
    }

    ctx->pc = 0x154f50u;

    // 0x154f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154f5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x154f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x154f60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x154f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x154f64: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x154f68: 0xc055028  jal         func_1540A0
    ctx->pc = 0x154F68u;
    SET_GPR_U32(ctx, 31, 0x154F70u);
    ctx->pc = 0x1540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540A0u, 0x154F68u, 0x154F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F70u;
label_154f70:
    // 0x154f70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x154f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154f74: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x154f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x154f78: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x154f7c: 0xc055008  jal         func_154020
    ctx->pc = 0x154F7Cu;
    SET_GPR_U32(ctx, 31, 0x154F84u);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x154F7Cu, 0x154F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F84u;
label_154f84:
    // 0x154f84: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x154f88: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x154f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x154f8c: 0xc054ff8  jal         func_153FE0
    ctx->pc = 0x154F8Cu;
    SET_GPR_U32(ctx, 31, 0x154F94u);
    ctx->pc = 0x153FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FE0u, 0x154F8Cu, 0x154F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F94u;
label_154f94:
    // 0x154f94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x154F94u;
    {
        const bool branch_taken_0x154f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f94) {
            ctx->pc = 0x154FE0u;
            goto label_154fe0;
        }
    }
    ctx->pc = 0x154F9Cu;
label_154f9c:
    // 0x154f9c: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x154f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154fa0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x154fa4: 0xc054ff0  jal         func_153FC0
    ctx->pc = 0x154FA4u;
    SET_GPR_U32(ctx, 31, 0x154FACu);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154FA4u, 0x154FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FACu;
label_154fac:
    // 0x154fac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154fb0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x154fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x154fb4: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154FB4u;
    {
        const bool branch_taken_0x154fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x154fb4) {
            ctx->pc = 0x154FD4u;
            goto label_154fd4;
        }
    }
    ctx->pc = 0x154FBCu;
    // 0x154fbc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x154fc0: 0xc054ff0  jal         func_153FC0
    ctx->pc = 0x154FC0u;
    SET_GPR_U32(ctx, 31, 0x154FC8u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154FC0u, 0x154FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FC8u;
label_154fc8:
    // 0x154fc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154fcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x154FCCu;
    {
        const bool branch_taken_0x154fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154fcc) {
            ctx->pc = 0x155010u;
            goto label_155010;
        }
    }
    ctx->pc = 0x154FD4u;
label_154fd4:
    // 0x154fd4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x154fd8: 0xc054fd0  jal         func_153F40
    ctx->pc = 0x154FD8u;
    SET_GPR_U32(ctx, 31, 0x154FE0u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x154FD8u, 0x154FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FE0u;
label_154fe0:
    // 0x154fe0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154fe4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x154fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x154fe8: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x154fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x154fec: 0xc054fa4  jal         func_153E90
    ctx->pc = 0x154FECu;
    SET_GPR_U32(ctx, 31, 0x154FF4u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x154FECu, 0x154FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FF4u;
label_154ff4:
    // 0x154ff4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x154ff8: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x154ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x154ffc: 0xc041998  jal         func_106660
    ctx->pc = 0x154FFCu;
    SET_GPR_U32(ctx, 31, 0x155004u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x154FFCu, 0x155004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155004u;
label_155004:
    // 0x155004: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x155004u;
    {
        const bool branch_taken_0x155004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155004) {
            ctx->pc = 0x154F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154f9c;
        }
    }
    ctx->pc = 0x15500Cu;
    // 0x15500c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15500cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155010:
    // 0x155010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155018: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x155018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15501c: 0x3e00008  jr          $ra
    ctx->pc = 0x15501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155024u;
    // 0x155024: 0x0  nop
    ctx->pc = 0x155024u;
    // NOP
    // 0x155028: 0x0  nop
    ctx->pc = 0x155028u;
    // NOP
    // 0x15502c: 0x0  nop
    ctx->pc = 0x15502cu;
    // NOP
    ctx->pc = 0x155030u;
}
