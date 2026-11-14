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

// Function: sub_001BEC60
// Address: 0x1bec60 - 0x1becf0
void sub_001BEC60_0x1bec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEC60_0x1bec60");
#endif

    switch (ctx->pc) {
        case 0x1bec9cu: goto label_1bec9c;
        case 0x1becdcu: goto label_1becdc;
        default: break;
    }

    ctx->pc = 0x1bec60u;

    // 0x1bec60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bec64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bec68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bec6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bec70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1bec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bec78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1bec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bec80: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEC80u;
    {
        const bool branch_taken_0x1bec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bec80) {
            ctx->pc = 0x1BECB4u;
            goto label_1becb4;
        }
    }
    ctx->pc = 0x1BEC88u;
    // 0x1bec88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bec90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1bec90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bec94: 0xc06fc08  jal         func_1BF020
    ctx->pc = 0x1BEC94u;
    SET_GPR_U32(ctx, 31, 0x1BEC9Cu);
    ctx->pc = 0x1BF020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF020u, 0x1BEC94u, 0x1BEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC9Cu;
label_1bec9c:
    // 0x1bec9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beca0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1beca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1beca4: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1beca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1beca8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1beca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1becac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BECACu;
    {
        const bool branch_taken_0x1becac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1becac) {
            ctx->pc = 0x1BECDCu;
            goto label_1becdc;
        }
    }
    ctx->pc = 0x1BECB4u;
label_1becb4:
    // 0x1becb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1becb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1becb8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1becb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1becbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1becc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1becc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1becc4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1becc8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1becc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1beccc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1becccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1becd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1becd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1becd4: 0xc06fb3c  jal         func_1BECF0
    ctx->pc = 0x1BECD4u;
    SET_GPR_U32(ctx, 31, 0x1BECDCu);
    ctx->pc = 0x1BECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECF0u, 0x1BECD4u, 0x1BECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECDCu;
label_1becdc:
    // 0x1becdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1becdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bece0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bece4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BECE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BECE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BECECu;
    // 0x1becec: 0x0  nop
    ctx->pc = 0x1bececu;
    // NOP
    ctx->pc = 0x1becf0u;
}
