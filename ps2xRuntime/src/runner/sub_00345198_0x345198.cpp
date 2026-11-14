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

// Function: sub_00345198
// Address: 0x345198 - 0x345220
void sub_00345198_0x345198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345198_0x345198");
#endif

    switch (ctx->pc) {
        case 0x345198u: goto label_345198;
        case 0x34519cu: goto label_34519c;
        case 0x3451a0u: goto label_3451a0;
        case 0x3451a4u: goto label_3451a4;
        case 0x3451a8u: goto label_3451a8;
        case 0x3451acu: goto label_3451ac;
        case 0x3451b0u: goto label_3451b0;
        case 0x3451b4u: goto label_3451b4;
        case 0x3451b8u: goto label_3451b8;
        case 0x3451bcu: goto label_3451bc;
        case 0x3451c0u: goto label_3451c0;
        case 0x3451c4u: goto label_3451c4;
        case 0x3451c8u: goto label_3451c8;
        case 0x3451ccu: goto label_3451cc;
        case 0x3451d0u: goto label_3451d0;
        case 0x3451d4u: goto label_3451d4;
        case 0x3451d8u: goto label_3451d8;
        case 0x3451dcu: goto label_3451dc;
        case 0x3451e0u: goto label_3451e0;
        case 0x3451e4u: goto label_3451e4;
        case 0x3451e8u: goto label_3451e8;
        case 0x3451ecu: goto label_3451ec;
        case 0x3451f0u: goto label_3451f0;
        case 0x3451f4u: goto label_3451f4;
        case 0x3451f8u: goto label_3451f8;
        case 0x3451fcu: goto label_3451fc;
        case 0x345200u: goto label_345200;
        case 0x345204u: goto label_345204;
        case 0x345208u: goto label_345208;
        case 0x34520cu: goto label_34520c;
        case 0x345210u: goto label_345210;
        case 0x345214u: goto label_345214;
        case 0x345218u: goto label_345218;
        case 0x34521cu: goto label_34521c;
        default: break;
    }

    ctx->pc = 0x345198u;

label_345198:
    // 0x345198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34519c:
    // 0x34519c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x34519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3451a0:
    // 0x3451a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3451a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3451a4:
    // 0x3451a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3451a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3451a8:
    // 0x3451a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3451a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3451ac:
    // 0x3451ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3451acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3451b0:
    // 0x3451b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3451b4:
    if (ctx->pc == 0x3451B4u) {
        ctx->pc = 0x3451B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451B0u;
        // 0x3451b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3451B8u;
        goto label_3451b8;
    }
    ctx->pc = 0x3451B0u;
    {
        const bool branch_taken_0x3451b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3451B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451B0u;
        // 0x3451b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3451b0) {
            ctx->pc = 0x3451DCu;
            goto label_3451dc;
        }
    }
    ctx->pc = 0x3451B8u;
label_3451b8:
    // 0x3451b8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x3451b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3451bc:
    // 0x3451bc: 0xc0e2686  jal         func_389A18
label_3451c0:
    if (ctx->pc == 0x3451C0u) {
        ctx->pc = 0x3451C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451BCu;
        // 0x3451c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3451C4u;
        goto label_3451c4;
    }
    ctx->pc = 0x3451BCu;
    SET_GPR_U32(ctx, 31, 0x3451C4u);
    ctx->pc = 0x3451C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451BCu;
    // 0x3451c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x3451BCu, 0x3451C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451C4u;
label_3451c4:
    // 0x3451c4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_3451c8:
    if (ctx->pc == 0x3451C8u) {
        ctx->pc = 0x3451CCu;
        goto label_3451cc;
    }
    ctx->pc = 0x3451C4u;
    {
        const bool branch_taken_0x3451c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3451c4) {
            ctx->pc = 0x3451D4u;
            goto label_3451d4;
        }
    }
    ctx->pc = 0x3451CCu;
label_3451cc:
    // 0x3451cc: 0xc1067c6  jal         func_419F18
label_3451d0:
    if (ctx->pc == 0x3451D0u) {
        ctx->pc = 0x3451D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451CCu;
        // 0x3451d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3451D4u;
        goto label_3451d4;
    }
    ctx->pc = 0x3451CCu;
    SET_GPR_U32(ctx, 31, 0x3451D4u);
    ctx->pc = 0x3451D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451CCu;
    // 0x3451d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x3451CCu, 0x3451D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451D4u;
label_3451d4:
    // 0x3451d4: 0xc0e27ae  jal         func_389EB8
label_3451d8:
    if (ctx->pc == 0x3451D8u) {
        ctx->pc = 0x3451D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451D4u;
        // 0x3451d8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3451DCu;
        goto label_3451dc;
    }
    ctx->pc = 0x3451D4u;
    SET_GPR_U32(ctx, 31, 0x3451DCu);
    ctx->pc = 0x3451D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3451D4u;
    // 0x3451d8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x3451D4u, 0x3451DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3451DCu;
label_3451dc:
    // 0x3451dc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3451dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3451e0:
    // 0x3451e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3451e4:
    if (ctx->pc == 0x3451E4u) {
        ctx->pc = 0x3451E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451E0u;
        // 0x3451e4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3451E8u;
        goto label_3451e8;
    }
    ctx->pc = 0x3451E0u;
    {
        const bool branch_taken_0x3451e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3451E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3451E0u;
        // 0x3451e4: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3451e0) {
            ctx->pc = 0x3451F8u;
            goto label_3451f8;
        }
    }
    ctx->pc = 0x3451E8u;
label_3451e8:
    // 0x3451e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3451e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3451ec:
    // 0x3451ec: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3451ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3451f0:
    // 0x3451f0: 0x40f809  jalr        $v0
label_3451f4:
    if (ctx->pc == 0x3451F4u) {
        ctx->pc = 0x3451F8u;
        goto label_3451f8;
    }
    ctx->pc = 0x3451F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3451F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3451F0u, 0x3451F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3451F8u;
label_3451f8:
    // 0x3451f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3451f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3451fc:
    // 0x3451fc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3451fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_345200:
    // 0x345200: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x345200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_345204:
    // 0x345204: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x345204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_345208:
    // 0x345208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x345208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34520c:
    // 0x34520c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34520cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345210:
    // 0x345210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345214:
    // 0x345214: 0x3e00008  jr          $ra
label_345218:
    if (ctx->pc == 0x345218u) {
        ctx->pc = 0x345218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345214u;
        // 0x345218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34521Cu;
        goto label_34521c;
    }
    ctx->pc = 0x345214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345214u;
        // 0x345218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34521Cu;
label_34521c:
    // 0x34521c: 0x0  nop
    ctx->pc = 0x34521cu;
    // NOP
    ctx->pc = 0x345220u;
}
