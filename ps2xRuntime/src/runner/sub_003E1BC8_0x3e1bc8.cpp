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

// Function: sub_003E1BC8
// Address: 0x3e1bc8 - 0x3e1c10
void sub_003E1BC8_0x3e1bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1BC8_0x3e1bc8");
#endif

    switch (ctx->pc) {
        case 0x3e1bc8u: goto label_3e1bc8;
        case 0x3e1bccu: goto label_3e1bcc;
        case 0x3e1bd0u: goto label_3e1bd0;
        case 0x3e1bd4u: goto label_3e1bd4;
        case 0x3e1bd8u: goto label_3e1bd8;
        case 0x3e1bdcu: goto label_3e1bdc;
        case 0x3e1be0u: goto label_3e1be0;
        case 0x3e1be4u: goto label_3e1be4;
        case 0x3e1be8u: goto label_3e1be8;
        case 0x3e1becu: goto label_3e1bec;
        case 0x3e1bf0u: goto label_3e1bf0;
        case 0x3e1bf4u: goto label_3e1bf4;
        case 0x3e1bf8u: goto label_3e1bf8;
        case 0x3e1bfcu: goto label_3e1bfc;
        case 0x3e1c00u: goto label_3e1c00;
        case 0x3e1c04u: goto label_3e1c04;
        case 0x3e1c08u: goto label_3e1c08;
        case 0x3e1c0cu: goto label_3e1c0c;
        default: break;
    }

    ctx->pc = 0x3e1bc8u;

label_3e1bc8:
    // 0x3e1bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e1bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e1bcc:
    // 0x3e1bcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e1bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e1bd0:
    // 0x3e1bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e1bd4:
    // 0x3e1bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1bd8:
    // 0x3e1bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e1bdc:
    // 0x3e1bdc: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x3e1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3e1be0:
    // 0x3e1be0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e1be4:
    if (ctx->pc == 0x3E1BE4u) {
        ctx->pc = 0x3E1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BE0u;
        // 0x3e1be4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BE8u;
        goto label_3e1be8;
    }
    ctx->pc = 0x3E1BE0u;
    {
        const bool branch_taken_0x3e1be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BE0u;
        // 0x3e1be4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1be0) {
            ctx->pc = 0x3E1BF0u;
            goto label_3e1bf0;
        }
    }
    ctx->pc = 0x3E1BE8u;
label_3e1be8:
    // 0x3e1be8: 0x40f809  jalr        $v0
label_3e1bec:
    if (ctx->pc == 0x3E1BECu) {
        ctx->pc = 0x3E1BF0u;
        goto label_3e1bf0;
    }
    ctx->pc = 0x3E1BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1BF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1BE8u, 0x3E1BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1BF0u;
label_3e1bf0:
    // 0x3e1bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e1bf4:
    // 0x3e1bf4: 0xc0f87a2  jal         func_3E1E88
label_3e1bf8:
    if (ctx->pc == 0x3E1BF8u) {
        ctx->pc = 0x3E1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1BF4u;
        // 0x3e1bf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1BFCu;
        goto label_3e1bfc;
    }
    ctx->pc = 0x3E1BF4u;
    SET_GPR_U32(ctx, 31, 0x3E1BFCu);
    ctx->pc = 0x3E1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1BF4u;
    // 0x3e1bf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E88u, 0x3E1BF4u, 0x3E1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1BFCu;
label_3e1bfc:
    // 0x3e1bfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e1bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1c00:
    // 0x3e1c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e1c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e1c04:
    // 0x3e1c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1c08:
    // 0x3e1c08: 0x3e00008  jr          $ra
label_3e1c0c:
    if (ctx->pc == 0x3E1C0Cu) {
        ctx->pc = 0x3E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C08u;
        // 0x3e1c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1C10u;
        goto label_fallthrough_0x3e1c08;
    }
    ctx->pc = 0x3E1C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1C08u;
        // 0x3e1c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e1c08:
    ctx->pc = 0x3E1C10u;
}
