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

// Function: sub_002FAE10
// Address: 0x2fae10 - 0x2fae88
void sub_002FAE10_0x2fae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAE10_0x2fae10");
#endif

    switch (ctx->pc) {
        case 0x2fae34u: goto label_2fae34;
        case 0x2fae50u: goto label_2fae50;
        case 0x2fae5cu: goto label_2fae5c;
        default: break;
    }

    ctx->pc = 0x2fae10u;

    // 0x2fae10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fae14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fae18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fae18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fae24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fae28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fae28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae2c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2FAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2FAE34u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FAE2Cu, 0x2FAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE34u;
label_2fae34:
    // 0x2fae34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fae38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae3c: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FAE3Cu;
    {
        const bool branch_taken_0x2fae3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fae3c) {
            ctx->pc = 0x2FAE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAE3Cu;
            // 0x2fae40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAE78u;
            goto label_2fae78;
        }
    }
    ctx->pc = 0x2FAE44u;
    // 0x2fae44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae48: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2FAE48u;
    SET_GPR_U32(ctx, 31, 0x2FAE50u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2FAE48u, 0x2FAE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE50u;
label_2fae50:
    // 0x2fae50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae54: 0xc0beb3e  jal         func_2FACF8
    ctx->pc = 0x2FAE54u;
    SET_GPR_U32(ctx, 31, 0x2FAE5Cu);
    ctx->pc = 0x2FACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FACF8u, 0x2FAE54u, 0x2FAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAE5Cu;
label_2fae5c:
    // 0x2fae5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fae5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fae60: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x2fae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x2fae64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fae64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fae68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE6Cu;
        // 0x2fae70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAE74u;
    // 0x2fae74: 0x0  nop
    ctx->pc = 0x2fae74u;
    // NOP
label_2fae78:
    // 0x2fae78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fae78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fae7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fae7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fae80: 0x80beb3e  j           func_2FACF8
    ctx->pc = 0x2FAE80u;
    ctx->pc = 0x2FAE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAE80u;
    // 0x2fae84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FACF8u;
    sub_002FACF8_0x2facf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2FAE88u;
}
