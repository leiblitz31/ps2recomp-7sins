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

// Function: sub_00464E70
// Address: 0x464e70 - 0x464fa0
void sub_00464E70_0x464e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464E70_0x464e70");
#endif

    switch (ctx->pc) {
        case 0x464ed0u: goto label_464ed0;
        case 0x464f44u: goto label_464f44;
        default: break;
    }

    ctx->pc = 0x464e70u;

    // 0x464e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x464e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x464e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x464e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x464e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464e80: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x464e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x464e84: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x464e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x464e88: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x464e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464e8c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x464E8Cu;
    {
        const bool branch_taken_0x464e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x464e8c) {
            ctx->pc = 0x464E98u;
            goto label_464e98;
        }
    }
    ctx->pc = 0x464E94u;
    // 0x464e94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x464e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_464e98:
    // 0x464e98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464e9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464ea0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x464EA0u;
    {
        const bool branch_taken_0x464ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464ea0) {
            ctx->pc = 0x464EFCu;
            goto label_464efc;
        }
    }
    ctx->pc = 0x464EA8u;
    // 0x464ea8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x464ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x464eac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464eb0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x464eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x464eb4: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464eb8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x464eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x464ebc: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464ec0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464ec4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x464ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x464ec8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x464EC8u;
    SET_GPR_U32(ctx, 31, 0x464ED0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x464EC8u, 0x464ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464ED0u;
label_464ed0:
    // 0x464ed0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x464ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464ed4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x464ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x464ed8: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x464ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464edc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x464edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x464ee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x464ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x464ee4: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464ee8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464eec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464ef0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x464ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x464ef4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x464EF4u;
    {
        const bool branch_taken_0x464ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464ef4) {
            ctx->pc = 0x464F74u;
            goto label_464f74;
        }
    }
    ctx->pc = 0x464EFCu;
label_464efc:
    // 0x464efc: 0x108840  sll         $s1, $s0, 1
    ctx->pc = 0x464efcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x464f00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f04: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x464f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x464f08: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x464f08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x464f0c: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x464F0Cu;
    {
        const bool branch_taken_0x464f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x464f0c) {
            ctx->pc = 0x464F74u;
            goto label_464f74;
        }
    }
    ctx->pc = 0x464F14u;
    // 0x464f14: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x464f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x464f18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f1c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x464f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x464f20: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464f24: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x464f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x464f28: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464f2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x464f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x464f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x464f38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x464f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x464f3c: 0xc119d08  jal         func_467420
    ctx->pc = 0x464F3Cu;
    SET_GPR_U32(ctx, 31, 0x464F44u);
    ctx->pc = 0x467420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467420u, 0x464F3Cu, 0x464F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464F44u;
label_464f44:
    // 0x464f44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x464f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x464f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x464f4c: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x464f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
    // 0x464f50: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x464f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x464f54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x464f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x464f58: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x464f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
    // 0x464f5c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x464f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x464f60: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x464f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x464f64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464f6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x464f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x464f70: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x464f70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_464f74:
    // 0x464f74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464f78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x464f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464f7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x464f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x464f80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x464f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x464f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x464f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464f90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x464f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x464f94: 0x3e00008  jr          $ra
    ctx->pc = 0x464F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464F9Cu;
    // 0x464f9c: 0x0  nop
    ctx->pc = 0x464f9cu;
    // NOP
    ctx->pc = 0x464fa0u;
}
