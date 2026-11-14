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

// Function: sub_003C2288
// Address: 0x3c2288 - 0x3c22d8
void sub_003C2288_0x3c2288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2288_0x3c2288");
#endif

    switch (ctx->pc) {
        case 0x3c2288u: goto label_3c2288;
        case 0x3c228cu: goto label_3c228c;
        case 0x3c2290u: goto label_3c2290;
        case 0x3c2294u: goto label_3c2294;
        case 0x3c2298u: goto label_3c2298;
        case 0x3c229cu: goto label_3c229c;
        case 0x3c22a0u: goto label_3c22a0;
        case 0x3c22a4u: goto label_3c22a4;
        case 0x3c22a8u: goto label_3c22a8;
        case 0x3c22acu: goto label_3c22ac;
        case 0x3c22b0u: goto label_3c22b0;
        case 0x3c22b4u: goto label_3c22b4;
        case 0x3c22b8u: goto label_3c22b8;
        case 0x3c22bcu: goto label_3c22bc;
        case 0x3c22c0u: goto label_3c22c0;
        case 0x3c22c4u: goto label_3c22c4;
        case 0x3c22c8u: goto label_3c22c8;
        case 0x3c22ccu: goto label_3c22cc;
        case 0x3c22d0u: goto label_3c22d0;
        case 0x3c22d4u: goto label_3c22d4;
        default: break;
    }

    ctx->pc = 0x3c2288u;

label_3c2288:
    // 0x3c2288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c228c:
    // 0x3c228c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c2290:
    // 0x3c2290: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c2290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c2294:
    // 0x3c2294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c2294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2298:
    // 0x3c2298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c2298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c229c:
    // 0x3c229c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c22a0:
    // 0x3c22a0: 0xc0f0d08  jal         func_3C3420
label_3c22a4:
    if (ctx->pc == 0x3C22A4u) {
        ctx->pc = 0x3C22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22A0u;
        // 0x3c22a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22A8u;
        goto label_3c22a8;
    }
    ctx->pc = 0x3C22A0u;
    SET_GPR_U32(ctx, 31, 0x3C22A8u);
    ctx->pc = 0x3C22A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C22A0u;
    // 0x3c22a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3420u, 0x3C22A0u, 0x3C22A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C22A8u;
label_3c22a8:
    // 0x3c22a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c22a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c22ac:
    // 0x3c22ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3c22b0:
    if (ctx->pc == 0x3C22B0u) {
        ctx->pc = 0x3C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22ACu;
        // 0x3c22b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22B4u;
        goto label_3c22b4;
    }
    ctx->pc = 0x3C22ACu;
    {
        const bool branch_taken_0x3c22ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22ACu;
        // 0x3c22b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c22ac) {
            ctx->pc = 0x3C22C4u;
            goto label_3c22c4;
        }
    }
    ctx->pc = 0x3C22B4u;
label_3c22b4:
    // 0x3c22b4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3c22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3c22b8:
    // 0x3c22b8: 0x40f809  jalr        $v0
label_3c22bc:
    if (ctx->pc == 0x3C22BCu) {
        ctx->pc = 0x3C22C0u;
        goto label_3c22c0;
    }
    ctx->pc = 0x3C22B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C22C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C22B8u, 0x3C22C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C22C0u;
label_3c22c0:
    // 0x3c22c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c22c4:
    // 0x3c22c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c22c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c22c8:
    // 0x3c22c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c22c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c22cc:
    // 0x3c22cc: 0x3e00008  jr          $ra
label_3c22d0:
    if (ctx->pc == 0x3C22D0u) {
        ctx->pc = 0x3C22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22CCu;
        // 0x3c22d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C22D4u;
        goto label_3c22d4;
    }
    ctx->pc = 0x3C22CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C22CCu;
        // 0x3c22d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C22CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C22D4u;
label_3c22d4:
    // 0x3c22d4: 0x0  nop
    ctx->pc = 0x3c22d4u;
    // NOP
    ctx->pc = 0x3c22d8u;
}
