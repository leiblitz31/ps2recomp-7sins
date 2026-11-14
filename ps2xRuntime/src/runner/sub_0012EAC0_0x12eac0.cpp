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

// Function: sub_0012EAC0
// Address: 0x12eac0 - 0x12eb80
void sub_0012EAC0_0x12eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EAC0_0x12eac0");
#endif

    switch (ctx->pc) {
        case 0x12eaecu: goto label_12eaec;
        case 0x12eaf8u: goto label_12eaf8;
        case 0x12eb04u: goto label_12eb04;
        case 0x12eb14u: goto label_12eb14;
        case 0x12eb30u: goto label_12eb30;
        case 0x12eb4cu: goto label_12eb4c;
        default: break;
    }

    ctx->pc = 0x12eac0u;

    // 0x12eac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12eac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12eac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12eacc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ead0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ead4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x12ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x12ead8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12eadc: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12eae0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x12eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12eae4: 0xc04c774  jal         func_131DD0
    ctx->pc = 0x12EAE4u;
    SET_GPR_U32(ctx, 31, 0x12EAECu);
    ctx->pc = 0x131DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DD0u, 0x12EAE4u, 0x12EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAECu;
label_12eaec:
    // 0x12eaec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaf0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12EAF0u;
    {
        const bool branch_taken_0x12eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eaf0) {
            ctx->pc = 0x12EB54u;
            goto label_12eb54;
        }
    }
    ctx->pc = 0x12EAF8u;
label_12eaf8:
    // 0x12eaf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12eafc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x12EAFCu;
    SET_GPR_U32(ctx, 31, 0x12EB04u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12EAFCu, 0x12EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB04u;
label_12eb04:
    // 0x12eb04: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x12eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12eb08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb0c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x12EB0Cu;
    SET_GPR_U32(ctx, 31, 0x12EB14u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x12EB0Cu, 0x12EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB14u;
label_12eb14:
    // 0x12eb14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12eb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb18: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EB18u;
    {
        const bool branch_taken_0x12eb18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb18) {
            ctx->pc = 0x12EB34u;
            goto label_12eb34;
        }
    }
    ctx->pc = 0x12EB20u;
    // 0x12eb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12eb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12eb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb28: 0xc116658  jal         func_459960
    ctx->pc = 0x12EB28u;
    SET_GPR_U32(ctx, 31, 0x12EB30u);
    ctx->pc = 0x459960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459960u, 0x12EB28u, 0x12EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB30u;
label_12eb30:
    // 0x12eb30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12eb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12eb34:
    // 0x12eb34: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x12eb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12eb3c: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12eb40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12eb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb44: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x12EB44u;
    SET_GPR_U32(ctx, 31, 0x12EB4Cu);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x12EB44u, 0x12EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB4Cu;
label_12eb4c:
    // 0x12eb4c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x12eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x12eb50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12eb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12eb54:
    // 0x12eb54: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x12eb54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12eb58: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12EB58u;
    {
        const bool branch_taken_0x12eb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eb58) {
            ctx->pc = 0x12EAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eaf8;
        }
    }
    ctx->pc = 0x12EB60u;
    // 0x12eb60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12eb64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12eb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eb68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12eb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eb6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12eb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12eb70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12eb74: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EB7Cu;
    // 0x12eb7c: 0x0  nop
    ctx->pc = 0x12eb7cu;
    // NOP
    ctx->pc = 0x12eb80u;
}
