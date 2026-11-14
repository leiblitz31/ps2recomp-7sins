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

// Function: sub_00435450
// Address: 0x435450 - 0x435508
void sub_00435450_0x435450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435450_0x435450");
#endif

    switch (ctx->pc) {
        case 0x435470u: goto label_435470;
        case 0x435498u: goto label_435498;
        case 0x4354c0u: goto label_4354c0;
        case 0x4354f0u: goto label_4354f0;
        default: break;
    }

    ctx->pc = 0x435450u;

    // 0x435450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x435450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x435454: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x435454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x435458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43545c: 0x2405040c  addiu       $a1, $zero, 0x40C
    ctx->pc = 0x43545cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x435460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x435460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x435464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435468: 0xc107600  jal         func_41D800
    ctx->pc = 0x435468u;
    SET_GPR_U32(ctx, 31, 0x435470u);
    ctx->pc = 0x43546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435468u;
    // 0x43546c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D800u, 0x435468u, 0x435470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435470u;
label_435470:
    // 0x435470: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x435470u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x435474: 0xaf82beb8  sw          $v0, -0x4148($gp)
    ctx->pc = 0x435474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950584), GPR_U32(ctx, 2));
    // 0x435478: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x435478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x43547c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x43547Cu;
    {
        const bool branch_taken_0x43547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43547Cu;
        // 0x435480: 0x2405040c  addiu       $a1, $zero, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43547c) {
            ctx->pc = 0x4354FCu;
            goto label_4354fc;
        }
    }
    ctx->pc = 0x435484u;
    // 0x435484: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x435484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x435488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x435488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43548c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x43548cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435490: 0xc1060b4  jal         func_4182D0
    ctx->pc = 0x435490u;
    SET_GPR_U32(ctx, 31, 0x435498u);
    ctx->pc = 0x435494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435490u;
    // 0x435494: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4182D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4182D0u, 0x435490u, 0x435498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435498u;
label_435498:
    // 0x435498: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x435498u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x43549c: 0xaf82bebc  sw          $v0, -0x4144($gp)
    ctx->pc = 0x43549cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950588), GPR_U32(ctx, 2));
    // 0x4354a0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4354a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4354a4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4354A4u;
    {
        const bool branch_taken_0x4354a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4354A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4354A4u;
        // 0x4354a8: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4354a4) {
            ctx->pc = 0x4354FCu;
            goto label_4354fc;
        }
    }
    ctx->pc = 0x4354ACu;
    // 0x4354ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4354acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4354b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4354b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4354b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4354b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4354b8: 0xc108312  jal         func_420C48
    ctx->pc = 0x4354B8u;
    SET_GPR_U32(ctx, 31, 0x4354C0u);
    ctx->pc = 0x4354BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4354B8u;
    // 0x4354bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420C48u, 0x4354B8u, 0x4354C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4354C0u;
label_4354c0:
    // 0x4354c0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4354c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4354c4: 0xaf82bee8  sw          $v0, -0x4118($gp)
    ctx->pc = 0x4354c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950632), GPR_U32(ctx, 2));
    // 0x4354c8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4354cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4354CCu;
    {
        const bool branch_taken_0x4354cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4354D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4354CCu;
        // 0x4354d0: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4354cc) {
            ctx->pc = 0x4354FCu;
            goto label_4354fc;
        }
    }
    ctx->pc = 0x4354D4u;
    // 0x4354d4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x4354d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x4354d8: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x4354d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x4354dc: 0x24a55508  addiu       $a1, $a1, 0x5508
    ctx->pc = 0x4354dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21768));
    // 0x4354e0: 0x24c65580  addiu       $a2, $a2, 0x5580
    ctx->pc = 0x4354e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21888));
    // 0x4354e4: 0x24e755d8  addiu       $a3, $a3, 0x55D8
    ctx->pc = 0x4354e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21976));
    // 0x4354e8: 0xc105976  jal         func_4165D8
    ctx->pc = 0x4354E8u;
    SET_GPR_U32(ctx, 31, 0x4354F0u);
    ctx->pc = 0x4354ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4354E8u;
    // 0x4354ec: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4165D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4165D8u, 0x4354E8u, 0x4354F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4354F0u;
label_4354f0:
    // 0x4354f0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4354f0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4354f4: 0xaf82bee8  sw          $v0, -0x4118($gp)
    ctx->pc = 0x4354f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950632), GPR_U32(ctx, 2));
    // 0x4354f8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4354f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_4354fc:
    // 0x4354fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4354fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435500: 0x3e00008  jr          $ra
    ctx->pc = 0x435500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435500u;
        // 0x435504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435508u;
}
