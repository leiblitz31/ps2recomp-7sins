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

// Function: sub_00350CA0
// Address: 0x350ca0 - 0x350d38
void sub_00350CA0_0x350ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350CA0_0x350ca0");
#endif

    switch (ctx->pc) {
        case 0x350cc0u: goto label_350cc0;
        case 0x350cd8u: goto label_350cd8;
        case 0x350d00u: goto label_350d00;
        default: break;
    }

    ctx->pc = 0x350ca0u;

    // 0x350ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350ca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x350ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x350ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350cb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x350cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cb8: 0xc0d4160  jal         func_350580
    ctx->pc = 0x350CB8u;
    SET_GPR_U32(ctx, 31, 0x350CC0u);
    ctx->pc = 0x350CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CB8u;
    // 0x350cbc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350580u, 0x350CB8u, 0x350CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CC0u;
label_350cc0:
    // 0x350cc0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x350cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x350cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x350cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cd0: 0xc0d41b4  jal         func_3506D0
    ctx->pc = 0x350CD0u;
    SET_GPR_U32(ctx, 31, 0x350CD8u);
    ctx->pc = 0x350CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CD0u;
    // 0x350cd4: 0x24e780d0  addiu       $a3, $a3, -0x7F30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3506D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506D0u, 0x350CD0u, 0x350CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CD8u;
label_350cd8:
    // 0x350cd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x350cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x350CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350CE4u;
        // 0x350ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350CECu;
    // 0x350cec: 0x0  nop
    ctx->pc = 0x350cecu;
    // NOP
    // 0x350cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350cf8: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x350CF8u;
    SET_GPR_U32(ctx, 31, 0x350D00u);
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x350CF8u, 0x350D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D00u;
label_350d00:
    // 0x350d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350d04: 0x3e00008  jr          $ra
    ctx->pc = 0x350D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D04u;
        // 0x350d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D0Cu;
    // 0x350d0c: 0x0  nop
    ctx->pc = 0x350d0cu;
    // NOP
    // 0x350d10: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x350d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x350d14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350D14u;
    {
        const bool branch_taken_0x350d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d14) {
            ctx->pc = 0x350D2Cu;
            goto label_350d2c;
        }
    }
    ctx->pc = 0x350D1Cu;
    // 0x350d1c: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x350d20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x350d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x350d24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350d28: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x350d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_350d2c:
    // 0x350d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x350D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D34u;
    // 0x350d34: 0x0  nop
    ctx->pc = 0x350d34u;
    // NOP
    ctx->pc = 0x350d38u;
}
