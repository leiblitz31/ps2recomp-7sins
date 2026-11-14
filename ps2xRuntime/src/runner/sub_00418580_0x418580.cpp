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

// Function: sub_00418580
// Address: 0x418580 - 0x4185e0
void sub_00418580_0x418580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418580_0x418580");
#endif

    switch (ctx->pc) {
        case 0x418580u: goto label_418580;
        case 0x418584u: goto label_418584;
        case 0x418588u: goto label_418588;
        case 0x41858cu: goto label_41858c;
        case 0x418590u: goto label_418590;
        case 0x418594u: goto label_418594;
        case 0x418598u: goto label_418598;
        case 0x41859cu: goto label_41859c;
        case 0x4185a0u: goto label_4185a0;
        case 0x4185a4u: goto label_4185a4;
        case 0x4185a8u: goto label_4185a8;
        case 0x4185acu: goto label_4185ac;
        case 0x4185b0u: goto label_4185b0;
        case 0x4185b4u: goto label_4185b4;
        case 0x4185b8u: goto label_4185b8;
        case 0x4185bcu: goto label_4185bc;
        case 0x4185c0u: goto label_4185c0;
        case 0x4185c4u: goto label_4185c4;
        case 0x4185c8u: goto label_4185c8;
        case 0x4185ccu: goto label_4185cc;
        case 0x4185d0u: goto label_4185d0;
        case 0x4185d4u: goto label_4185d4;
        case 0x4185d8u: goto label_4185d8;
        case 0x4185dcu: goto label_4185dc;
        default: break;
    }

    ctx->pc = 0x418580u;

label_418580:
    // 0x418580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_418584:
    // 0x418584: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x418584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_418588:
    // 0x418588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x418588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41858c:
    // 0x41858c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x41858cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_418590:
    // 0x418590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x418590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418594:
    // 0x418594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_418598:
    // 0x418598: 0xae11e880  sw          $s1, -0x1780($s0)
    ctx->pc = 0x418598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961280), GPR_U32(ctx, 17));
label_41859c:
    // 0x41859c: 0xc107928  jal         func_41E4A0
label_4185a0:
    if (ctx->pc == 0x4185A0u) {
        ctx->pc = 0x4185A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41859Cu;
        // 0x4185a0: 0x2610e880  addiu       $s0, $s0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4185A4u;
        goto label_4185a4;
    }
    ctx->pc = 0x41859Cu;
    SET_GPR_U32(ctx, 31, 0x4185A4u);
    ctx->pc = 0x4185A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41859Cu;
    // 0x4185a0: 0x2610e880  addiu       $s0, $s0, -0x1780 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E4A0u, 0x41859Cu, 0x4185A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4185A4u;
label_4185a4:
    // 0x4185a4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4185a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_4185a8:
    // 0x4185a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4185a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4185ac:
    // 0x4185ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4185acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4185b0:
    // 0x4185b0: 0x40f809  jalr        $v0
label_4185b4:
    if (ctx->pc == 0x4185B4u) {
        ctx->pc = 0x4185B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185B0u;
        // 0x4185b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4185B8u;
        goto label_4185b8;
    }
    ctx->pc = 0x4185B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4185B8u);
        ctx->pc = 0x4185B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185B0u;
        // 0x4185b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4185B0u, 0x4185B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4185B8u;
label_4185b8:
    // 0x4185b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4185bc:
    if (ctx->pc == 0x4185BCu) {
        ctx->pc = 0x4185BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185B8u;
        // 0x4185bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4185C0u;
        goto label_4185c0;
    }
    ctx->pc = 0x4185B8u;
    {
        const bool branch_taken_0x4185b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4185BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185B8u;
        // 0x4185bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4185b8) {
            ctx->pc = 0x4185CCu;
            goto label_4185cc;
        }
    }
    ctx->pc = 0x4185C0u;
label_4185c0:
    // 0x4185c0: 0xc111332  jal         func_444CC8
label_4185c4:
    if (ctx->pc == 0x4185C4u) {
        ctx->pc = 0x4185C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185C0u;
        // 0x4185c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4185C8u;
        goto label_4185c8;
    }
    ctx->pc = 0x4185C0u;
    SET_GPR_U32(ctx, 31, 0x4185C8u);
    ctx->pc = 0x4185C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4185C0u;
    // 0x4185c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444CC8u, 0x4185C0u, 0x4185C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4185C8u;
label_4185c8:
    // 0x4185c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4185c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4185cc:
    // 0x4185cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4185ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4185d0:
    // 0x4185d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4185d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4185d4:
    // 0x4185d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4185d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4185d8:
    // 0x4185d8: 0x3e00008  jr          $ra
label_4185dc:
    if (ctx->pc == 0x4185DCu) {
        ctx->pc = 0x4185DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185D8u;
        // 0x4185dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4185E0u;
        goto label_fallthrough_0x4185d8;
    }
    ctx->pc = 0x4185D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4185DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4185D8u;
        // 0x4185dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4185D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4185d8:
    ctx->pc = 0x4185E0u;
}
