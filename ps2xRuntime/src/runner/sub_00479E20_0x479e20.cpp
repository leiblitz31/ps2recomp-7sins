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

// Function: sub_00479E20
// Address: 0x479e20 - 0x479ee0
void sub_00479E20_0x479e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479E20_0x479e20");
#endif

    switch (ctx->pc) {
        case 0x479ea0u: goto label_479ea0;
        case 0x479eb4u: goto label_479eb4;
        default: break;
    }

    ctx->pc = 0x479e20u;

    // 0x479e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x479e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x479e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x479e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x479e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479e30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x479e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x479e34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479e38: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x479e38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x479e3c: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x479e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x479e40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x479e44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x479e48: 0x28200  sll         $s0, $v0, 8
    ctx->pc = 0x479e48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x479e4c: 0x32030f00  andi        $v1, $s0, 0xF00
    ctx->pc = 0x479e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3840);
    // 0x479e50: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x479e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x479e54: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x479E54u;
    {
        const bool branch_taken_0x479e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x479e54) {
            ctx->pc = 0x479E7Cu;
            goto label_479e7c;
        }
    }
    ctx->pc = 0x479E5Cu;
    // 0x479e5c: 0x32030f00  andi        $v1, $s0, 0xF00
    ctx->pc = 0x479e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3840);
    // 0x479e60: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x479e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x479e64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x479E64u;
    {
        const bool branch_taken_0x479e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x479e64) {
            ctx->pc = 0x479E7Cu;
            goto label_479e7c;
        }
    }
    ctx->pc = 0x479E6Cu;
    // 0x479e6c: 0x32030f00  andi        $v1, $s0, 0xF00
    ctx->pc = 0x479e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3840);
    // 0x479e70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x479e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x479e74: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x479E74u;
    {
        const bool branch_taken_0x479e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x479e74) {
            ctx->pc = 0x479EBCu;
            goto label_479ebc;
        }
    }
    ctx->pc = 0x479E7Cu;
label_479e7c:
    // 0x479e7c: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x479e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x479e80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x479E80u;
    {
        const bool branch_taken_0x479e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479e80) {
            ctx->pc = 0x479E94u;
            goto label_479e94;
        }
    }
    ctx->pc = 0x479E88u;
    // 0x479e88: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x479e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x479e8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x479E8Cu;
    {
        const bool branch_taken_0x479e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479e8c) {
            ctx->pc = 0x479EA8u;
            goto label_479ea8;
        }
    }
    ctx->pc = 0x479E94u;
label_479e94:
    // 0x479e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x479e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479e98: 0xc11e6c8  jal         func_479B20
    ctx->pc = 0x479E98u;
    SET_GPR_U32(ctx, 31, 0x479EA0u);
    ctx->pc = 0x479B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479B20u, 0x479E98u, 0x479EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479EA0u;
label_479ea0:
    // 0x479ea0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x479EA0u;
    {
        const bool branch_taken_0x479ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479ea0) {
            ctx->pc = 0x479EC0u;
            goto label_479ec0;
        }
    }
    ctx->pc = 0x479EA8u;
label_479ea8:
    // 0x479ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x479ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479eac: 0xc11e710  jal         func_479C40
    ctx->pc = 0x479EACu;
    SET_GPR_U32(ctx, 31, 0x479EB4u);
    ctx->pc = 0x479C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479C40u, 0x479EACu, 0x479EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479EB4u;
label_479eb4:
    // 0x479eb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x479EB4u;
    {
        const bool branch_taken_0x479eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479eb4) {
            ctx->pc = 0x479EC0u;
            goto label_479ec0;
        }
    }
    ctx->pc = 0x479EBCu;
label_479ebc:
    // 0x479ebc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x479ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479ec0:
    // 0x479ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x479ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479ecc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x479eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x479ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x479ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479ED8u;
    // 0x479ed8: 0x0  nop
    ctx->pc = 0x479ed8u;
    // NOP
    // 0x479edc: 0x0  nop
    ctx->pc = 0x479edcu;
    // NOP
    ctx->pc = 0x479ee0u;
}
