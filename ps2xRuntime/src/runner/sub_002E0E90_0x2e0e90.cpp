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

// Function: sub_002E0E90
// Address: 0x2e0e90 - 0x2e0fe0
void sub_002E0E90_0x2e0e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E90_0x2e0e90");
#endif

    switch (ctx->pc) {
        case 0x2e0eecu: goto label_2e0eec;
        case 0x2e0f00u: goto label_2e0f00;
        case 0x2e0fc0u: goto label_2e0fc0;
        default: break;
    }

    ctx->pc = 0x2e0e90u;

    // 0x2e0e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e0e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e0e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0e9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e0ea0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2e0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2e0ea4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2e0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2e0ea8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0eac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0eb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0eb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0EB4u;
    {
        const bool branch_taken_0x2e0eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0eb4) {
            ctx->pc = 0x2E0ED0u;
            goto label_2e0ed0;
        }
    }
    ctx->pc = 0x2E0EBCu;
    // 0x2e0ebc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0ec0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e0ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0ec8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0EC8u;
    {
        const bool branch_taken_0x2e0ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ec8) {
            ctx->pc = 0x2E0EDCu;
            goto label_2e0edc;
        }
    }
    ctx->pc = 0x2E0ED0u;
label_2e0ed0:
    // 0x2e0ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ed4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E0ED4u;
    {
        const bool branch_taken_0x2e0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ed4) {
            ctx->pc = 0x2E0F6Cu;
            goto label_2e0f6c;
        }
    }
    ctx->pc = 0x2E0EDCu;
label_2e0edc:
    // 0x2e0edc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0ee0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e0ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0ee4: 0xc094d24  jal         func_253490
    ctx->pc = 0x2E0EE4u;
    SET_GPR_U32(ctx, 31, 0x2E0EECu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x2E0EE4u, 0x2E0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0EECu;
label_2e0eec:
    // 0x2e0eec: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2e0eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e0ef0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0ef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0ef8: 0xc094d24  jal         func_253490
    ctx->pc = 0x2E0EF8u;
    SET_GPR_U32(ctx, 31, 0x2E0F00u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x2E0EF8u, 0x2E0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F00u;
label_2e0f00:
    // 0x2e0f00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e0f04: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0F04u;
    {
        const bool branch_taken_0x2e0f04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0f04) {
            ctx->pc = 0x2E0F18u;
            goto label_2e0f18;
        }
    }
    ctx->pc = 0x2E0F0Cu;
    // 0x2e0f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f10: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E0F10u;
    {
        const bool branch_taken_0x2e0f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f10) {
            ctx->pc = 0x2E0F6Cu;
            goto label_2e0f6c;
        }
    }
    ctx->pc = 0x2E0F18u;
label_2e0f18:
    // 0x2e0f18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0f1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E0F1Cu;
    {
        const bool branch_taken_0x2e0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f1c) {
            ctx->pc = 0x2E0F68u;
            goto label_2e0f68;
        }
    }
    ctx->pc = 0x2E0F24u;
    // 0x2e0f24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0f28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e0f2c: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2e0f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2e0f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0F30u;
    {
        const bool branch_taken_0x2e0f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f30) {
            ctx->pc = 0x2E0F44u;
            goto label_2e0f44;
        }
    }
    ctx->pc = 0x2E0F38u;
    // 0x2e0f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0F3Cu;
    {
        const bool branch_taken_0x2e0f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f3c) {
            ctx->pc = 0x2E0F6Cu;
            goto label_2e0f6c;
        }
    }
    ctx->pc = 0x2E0F44u;
label_2e0f44:
    // 0x2e0f44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0f48: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e0f4c: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x2e0f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2e0f50: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0f54: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0F54u;
    {
        const bool branch_taken_0x2e0f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0f54) {
            ctx->pc = 0x2E0F68u;
            goto label_2e0f68;
        }
    }
    ctx->pc = 0x2E0F5Cu;
    // 0x2e0f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0F60u;
    {
        const bool branch_taken_0x2e0f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f60) {
            ctx->pc = 0x2E0F6Cu;
            goto label_2e0f6c;
        }
    }
    ctx->pc = 0x2E0F68u;
label_2e0f68:
    // 0x2e0f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0f6c:
    // 0x2e0f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0f74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e0f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0F80u;
    // 0x2e0f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e0f8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e0f90: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0f94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e0f98: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0F98u;
    {
        const bool branch_taken_0x2e0f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0f98) {
            ctx->pc = 0x2E0FB4u;
            goto label_2e0fb4;
        }
    }
    ctx->pc = 0x2E0FA0u;
    // 0x2e0fa0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e0fa4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0FA4u;
    {
        const bool branch_taken_0x2e0fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0fa4) {
            ctx->pc = 0x2E0FB4u;
            goto label_2e0fb4;
        }
    }
    ctx->pc = 0x2E0FACu;
    // 0x2e0fac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0FACu;
    {
        const bool branch_taken_0x2e0fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0fac) {
            ctx->pc = 0x2E0FC0u;
            goto label_2e0fc0;
        }
    }
    ctx->pc = 0x2E0FB4u;
label_2e0fb4:
    // 0x2e0fb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0fb8: 0xc0b83f8  jal         func_2E0FE0
    ctx->pc = 0x2E0FB8u;
    SET_GPR_U32(ctx, 31, 0x2E0FC0u);
    ctx->pc = 0x2E0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FE0u, 0x2E0FB8u, 0x2E0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FC0u;
label_2e0fc0:
    // 0x2e0fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0fc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e0fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FD4u;
    // 0x2e0fd4: 0x0  nop
    ctx->pc = 0x2e0fd4u;
    // NOP
    // 0x2e0fd8: 0x0  nop
    ctx->pc = 0x2e0fd8u;
    // NOP
    // 0x2e0fdc: 0x0  nop
    ctx->pc = 0x2e0fdcu;
    // NOP
    ctx->pc = 0x2e0fe0u;
}
