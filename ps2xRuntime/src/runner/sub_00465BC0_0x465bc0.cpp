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

// Function: sub_00465BC0
// Address: 0x465bc0 - 0x465c70
void sub_00465BC0_0x465bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465BC0_0x465bc0");
#endif

    switch (ctx->pc) {
        case 0x465be8u: goto label_465be8;
        case 0x465bf8u: goto label_465bf8;
        default: break;
    }

    ctx->pc = 0x465bc0u;

    // 0x465bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x465bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x465bc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x465bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x465bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x465bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x465bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x465bd4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x465bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x465bd8: 0x8fb30040  lw          $s3, 0x40($sp)
    ctx->pc = 0x465bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x465bdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x465bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465be0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x465BE0u;
    {
        const bool branch_taken_0x465be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465be0) {
            ctx->pc = 0x465C3Cu;
            goto label_465c3c;
        }
    }
    ctx->pc = 0x465BE8u;
label_465be8:
    // 0x465be8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x465be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465bec: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x465becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x465bf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x465BF0u;
    {
        const bool branch_taken_0x465bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465bf0) {
            ctx->pc = 0x465C1Cu;
            goto label_465c1c;
        }
    }
    ctx->pc = 0x465BF8u;
label_465bf8:
    // 0x465bf8: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x465bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x465bfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x465BFCu;
    {
        const bool branch_taken_0x465bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x465bfc) {
            ctx->pc = 0x465C14u;
            goto label_465c14;
        }
    }
    ctx->pc = 0x465C04u;
    // 0x465c04: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x465c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x465c08: 0x738026  xor         $s0, $v1, $s3
    ctx->pc = 0x465c08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 19));
    // 0x465c0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x465C0Cu;
    {
        const bool branch_taken_0x465c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465c0c) {
            ctx->pc = 0x465C18u;
            goto label_465c18;
        }
    }
    ctx->pc = 0x465C14u;
label_465c14:
    // 0x465c14: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x465c14u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_465c18:
    // 0x465c18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x465c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_465c1c:
    // 0x465c1c: 0x1e40fff6  bgtz        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x465C1Cu;
    {
        const bool branch_taken_0x465c1c = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x465c1c) {
            ctx->pc = 0x465BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465bf8;
        }
    }
    ctx->pc = 0x465C24u;
    // 0x465c24: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x465c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x465c28: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x465c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x465c2c: 0x246357c0  addiu       $v1, $v1, 0x57C0
    ctx->pc = 0x465c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22464));
    // 0x465c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x465c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x465c34: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x465c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x465c38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x465c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_465c3c:
    // 0x465c3c: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x465c3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x465c40: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x465C40u;
    {
        const bool branch_taken_0x465c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x465c40) {
            ctx->pc = 0x465BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465be8;
        }
    }
    ctx->pc = 0x465C48u;
    // 0x465c48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x465c48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x465c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465c58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x465c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x465c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x465C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465C64u;
    // 0x465c64: 0x0  nop
    ctx->pc = 0x465c64u;
    // NOP
    // 0x465c68: 0x0  nop
    ctx->pc = 0x465c68u;
    // NOP
    // 0x465c6c: 0x0  nop
    ctx->pc = 0x465c6cu;
    // NOP
    ctx->pc = 0x465c70u;
}
