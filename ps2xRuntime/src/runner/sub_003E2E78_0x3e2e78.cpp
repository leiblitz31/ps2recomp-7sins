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

// Function: sub_003E2E78
// Address: 0x3e2e78 - 0x3e2eb8
void sub_003E2E78_0x3e2e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2E78_0x3e2e78");
#endif

    switch (ctx->pc) {
        case 0x3e2e78u: goto label_3e2e78;
        case 0x3e2e7cu: goto label_3e2e7c;
        case 0x3e2e80u: goto label_3e2e80;
        case 0x3e2e84u: goto label_3e2e84;
        case 0x3e2e88u: goto label_3e2e88;
        case 0x3e2e8cu: goto label_3e2e8c;
        case 0x3e2e90u: goto label_3e2e90;
        case 0x3e2e94u: goto label_3e2e94;
        case 0x3e2e98u: goto label_3e2e98;
        case 0x3e2e9cu: goto label_3e2e9c;
        case 0x3e2ea0u: goto label_3e2ea0;
        case 0x3e2ea4u: goto label_3e2ea4;
        case 0x3e2ea8u: goto label_3e2ea8;
        case 0x3e2eacu: goto label_3e2eac;
        case 0x3e2eb0u: goto label_3e2eb0;
        case 0x3e2eb4u: goto label_3e2eb4;
        default: break;
    }

    ctx->pc = 0x3e2e78u;

label_3e2e78:
    // 0x3e2e78: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x3e2e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
label_3e2e7c:
    // 0x3e2e7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e2e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e2e80:
    // 0x3e2e80: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3e2e84:
    if (ctx->pc == 0x3E2E84u) {
        ctx->pc = 0x3E2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E80u;
        // 0x3e2e84: 0xffbf0300  sd          $ra, 0x300($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E88u;
        goto label_3e2e88;
    }
    ctx->pc = 0x3E2E80u;
    {
        const bool branch_taken_0x3e2e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E80u;
        // 0x3e2e84: 0xffbf0300  sd          $ra, 0x300($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e80) {
            ctx->pc = 0x3E2EACu;
            goto label_3e2eac;
        }
    }
    ctx->pc = 0x3E2E88u;
label_3e2e88:
    // 0x3e2e88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e2e8c:
    if (ctx->pc == 0x3E2E8Cu) {
        ctx->pc = 0x3E2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E88u;
        // 0x3e2e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E90u;
        goto label_3e2e90;
    }
    ctx->pc = 0x3E2E88u;
    {
        const bool branch_taken_0x3e2e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E88u;
        // 0x3e2e8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e88) {
            ctx->pc = 0x3E2EA4u;
            goto label_3e2ea4;
        }
    }
    ctx->pc = 0x3E2E90u;
label_3e2e90:
    // 0x3e2e90: 0xafa602e8  sw          $a2, 0x2E8($sp)
    ctx->pc = 0x3e2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 6));
label_3e2e94:
    // 0x3e2e94: 0x40f809  jalr        $v0
label_3e2e98:
    if (ctx->pc == 0x3E2E98u) {
        ctx->pc = 0x3E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E94u;
        // 0x3e2e98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2E9Cu;
        goto label_3e2e9c;
    }
    ctx->pc = 0x3E2E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E2E9Cu);
        ctx->pc = 0x3E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E94u;
        // 0x3e2e98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2E94u, 0x3E2E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2E9Cu;
label_3e2e9c:
    // 0x3e2e9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e2ea0:
    if (ctx->pc == 0x3E2EA0u) {
        ctx->pc = 0x3E2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E9Cu;
        // 0x3e2ea0: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2EA4u;
        goto label_3e2ea4;
    }
    ctx->pc = 0x3E2E9Cu;
    {
        const bool branch_taken_0x3e2e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2E9Cu;
        // 0x3e2ea0: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2e9c) {
            ctx->pc = 0x3E2EB0u;
            goto label_3e2eb0;
        }
    }
    ctx->pc = 0x3E2EA4u;
label_3e2ea4:
    // 0x3e2ea4: 0xc0bb49a  jal         func_2ED268
label_3e2ea8:
    if (ctx->pc == 0x3E2EA8u) {
        ctx->pc = 0x3E2EACu;
        goto label_3e2eac;
    }
    ctx->pc = 0x3E2EA4u;
    SET_GPR_U32(ctx, 31, 0x3E2EACu);
    ctx->pc = 0x2ED268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED268u, 0x3E2EA4u, 0x3E2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2EACu;
label_3e2eac:
    // 0x3e2eac: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x3e2eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_3e2eb0:
    // 0x3e2eb0: 0x3e00008  jr          $ra
label_3e2eb4:
    if (ctx->pc == 0x3E2EB4u) {
        ctx->pc = 0x3E2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EB0u;
        // 0x3e2eb4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2EB8u;
        goto label_fallthrough_0x3e2eb0;
    }
    ctx->pc = 0x3E2EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EB0u;
        // 0x3e2eb4: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e2eb0:
    ctx->pc = 0x3E2EB8u;
}
