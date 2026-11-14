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

// Function: sub_0047DA60
// Address: 0x47da60 - 0x47db40
void sub_0047DA60_0x47da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DA60_0x47da60");
#endif

    switch (ctx->pc) {
        case 0x47da8cu: goto label_47da8c;
        case 0x47daccu: goto label_47dacc;
        case 0x47dad8u: goto label_47dad8;
        case 0x47dafcu: goto label_47dafc;
        default: break;
    }

    ctx->pc = 0x47da60u;

    // 0x47da60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x47da64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x47da68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47da6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47da70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47da74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47da74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47da78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47da78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47da7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47da7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47da80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47da80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47da84: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x47DA84u;
    {
        const bool branch_taken_0x47da84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47da84) {
            ctx->pc = 0x47DB00u;
            goto label_47db00;
        }
    }
    ctx->pc = 0x47DA8Cu;
label_47da8c:
    // 0x47da8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x47da90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x47da94: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47da94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47da98: 0x8f82c098  lw          $v0, -0x3F68($gp)
    ctx->pc = 0x47da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47da9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47daa0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x47daa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47daa4: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x47daa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x47daa8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x47daac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x47dab0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47dab4: 0x8f82c098  lw          $v0, -0x3F68($gp)
    ctx->pc = 0x47dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47dab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47dabc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x47dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x47dac0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x47dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x47dac4: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x47DAC4u;
    SET_GPR_U32(ctx, 31, 0x47DACCu);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x47DAC4u, 0x47DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DACCu;
label_47dacc:
    // 0x47dacc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47dad0: 0xc106794  jal         func_419E50
    ctx->pc = 0x47DAD0u;
    SET_GPR_U32(ctx, 31, 0x47DAD8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x47DAD0u, 0x47DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DAD8u;
label_47dad8:
    // 0x47dad8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x47dadc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x47dae0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47dae4: 0x8f82c098  lw          $v0, -0x3F68($gp)
    ctx->pc = 0x47dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951064)));
    // 0x47dae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47daec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47daf0: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x47daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x47daf4: 0xc11e808  jal         func_47A020
    ctx->pc = 0x47DAF4u;
    SET_GPR_U32(ctx, 31, 0x47DAFCu);
    ctx->pc = 0x47A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A020u, 0x47DAF4u, 0x47DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47DAFCu;
label_47dafc:
    // 0x47dafc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47dafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47db00:
    // 0x47db00: 0x8f82c094  lw          $v0, -0x3F6C($gp)
    ctx->pc = 0x47db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951060)));
    // 0x47db04: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x47db04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x47db08: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x47DB08u;
    {
        const bool branch_taken_0x47db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47db08) {
            ctx->pc = 0x47DA8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47da8c;
        }
    }
    ctx->pc = 0x47DB10u;
    // 0x47db10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47db14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47db14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47db18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47db18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47db1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47db1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47db20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47db20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47db24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47db24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47db28: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47db2c: 0x3e00008  jr          $ra
    ctx->pc = 0x47DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47DB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47DB34u;
    // 0x47db34: 0x0  nop
    ctx->pc = 0x47db34u;
    // NOP
    // 0x47db38: 0x0  nop
    ctx->pc = 0x47db38u;
    // NOP
    // 0x47db3c: 0x0  nop
    ctx->pc = 0x47db3cu;
    // NOP
    ctx->pc = 0x47db40u;
}
