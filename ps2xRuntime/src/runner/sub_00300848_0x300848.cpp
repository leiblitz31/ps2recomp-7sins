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

// Function: sub_00300848
// Address: 0x300848 - 0x3008c8
void sub_00300848_0x300848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300848_0x300848");
#endif

    switch (ctx->pc) {
        case 0x300880u: goto label_300880;
        case 0x3008a4u: goto label_3008a4;
        case 0x3008b4u: goto label_3008b4;
        default: break;
    }

    ctx->pc = 0x300848u;

    // 0x300848: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x300848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30084c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x300850: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x300850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x300854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300858: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x300858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30085c: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x30085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x300860: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x300860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x300864: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x300864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x300868: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x300868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x30086c: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x30086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x300870: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x300870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x300874: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x300874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x300878: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x300878u;
    SET_GPR_U32(ctx, 31, 0x300880u);
    ctx->pc = 0x30087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300878u;
    // 0x30087c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x300878u, 0x300880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300880u;
label_300880:
    // 0x300880: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300884: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x300884u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x300888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30088c: 0x248406b8  addiu       $a0, $a0, 0x6B8
    ctx->pc = 0x30088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1720));
    // 0x300890: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x300890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x300894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300898: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x300898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x30089c: 0xc0bfe52  jal         func_2FF948
    ctx->pc = 0x30089Cu;
    SET_GPR_U32(ctx, 31, 0x3008A4u);
    ctx->pc = 0x3008A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30089Cu;
    // 0x3008a0: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF948u, 0x30089Cu, 0x3008A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3008A4u;
label_3008a4:
    // 0x3008a4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3008A4u;
    {
        const bool branch_taken_0x3008a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3008A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008A4u;
        // 0x3008a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008a4) {
            ctx->pc = 0x3008B8u;
            goto label_3008b8;
        }
    }
    ctx->pc = 0x3008ACu;
    // 0x3008ac: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x3008ACu;
    SET_GPR_U32(ctx, 31, 0x3008B4u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x3008ACu, 0x3008B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3008B4u;
label_3008b4:
    // 0x3008b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3008b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3008b8:
    // 0x3008b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3008b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3008bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3008bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3008c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3008C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3008C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008C0u;
        // 0x3008c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3008C8u;
}
