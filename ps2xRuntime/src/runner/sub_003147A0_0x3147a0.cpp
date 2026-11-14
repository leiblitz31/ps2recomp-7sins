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

// Function: sub_003147A0
// Address: 0x3147a0 - 0x314808
void sub_003147A0_0x3147a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003147A0_0x3147a0");
#endif

    switch (ctx->pc) {
        case 0x3147a0u: goto label_3147a0;
        case 0x3147a4u: goto label_3147a4;
        case 0x3147a8u: goto label_3147a8;
        case 0x3147acu: goto label_3147ac;
        case 0x3147b0u: goto label_3147b0;
        case 0x3147b4u: goto label_3147b4;
        case 0x3147b8u: goto label_3147b8;
        case 0x3147bcu: goto label_3147bc;
        case 0x3147c0u: goto label_3147c0;
        case 0x3147c4u: goto label_3147c4;
        case 0x3147c8u: goto label_3147c8;
        case 0x3147ccu: goto label_3147cc;
        case 0x3147d0u: goto label_3147d0;
        case 0x3147d4u: goto label_3147d4;
        case 0x3147d8u: goto label_3147d8;
        case 0x3147dcu: goto label_3147dc;
        case 0x3147e0u: goto label_3147e0;
        case 0x3147e4u: goto label_3147e4;
        case 0x3147e8u: goto label_3147e8;
        case 0x3147ecu: goto label_3147ec;
        case 0x3147f0u: goto label_3147f0;
        case 0x3147f4u: goto label_3147f4;
        case 0x3147f8u: goto label_3147f8;
        case 0x3147fcu: goto label_3147fc;
        case 0x314800u: goto label_314800;
        case 0x314804u: goto label_314804;
        default: break;
    }

    ctx->pc = 0x3147a0u;

label_3147a0:
    // 0x3147a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3147a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3147a4:
    // 0x3147a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3147a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3147a8:
    // 0x3147a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3147a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3147ac:
    // 0x3147ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_3147b0:
    if (ctx->pc == 0x3147B0u) {
        ctx->pc = 0x3147B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ACu;
        // 0x3147b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147B4u;
        goto label_3147b4;
    }
    ctx->pc = 0x3147ACu;
    {
        const bool branch_taken_0x3147ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ACu;
        // 0x3147b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147ac) {
            ctx->pc = 0x3147F4u;
            goto label_3147f4;
        }
    }
    ctx->pc = 0x3147B4u;
label_3147b4:
    // 0x3147b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3147b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3147b8:
    // 0x3147b8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_3147bc:
    if (ctx->pc == 0x3147BCu) {
        ctx->pc = 0x3147BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147B8u;
        // 0x3147bc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147C0u;
        goto label_3147c0;
    }
    ctx->pc = 0x3147B8u;
    {
        const bool branch_taken_0x3147b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3147BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147B8u;
        // 0x3147bc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147b8) {
            ctx->pc = 0x3147D4u;
            goto label_3147d4;
        }
    }
    ctx->pc = 0x3147C0u;
label_3147c0:
    // 0x3147c0: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3147c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3147c4:
    // 0x3147c4: 0x40f809  jalr        $v0
label_3147c8:
    if (ctx->pc == 0x3147C8u) {
        ctx->pc = 0x3147CCu;
        goto label_3147cc;
    }
    ctx->pc = 0x3147C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3147CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147C4u, 0x3147CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3147CCu;
label_3147cc:
    // 0x3147cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3147d0:
    if (ctx->pc == 0x3147D0u) {
        ctx->pc = 0x3147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147CCu;
        // 0x3147d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147D4u;
        goto label_3147d4;
    }
    ctx->pc = 0x3147CCu;
    {
        const bool branch_taken_0x3147cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147CCu;
        // 0x3147d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147cc) {
            ctx->pc = 0x3147F8u;
            goto label_3147f8;
        }
    }
    ctx->pc = 0x3147D4u;
label_3147d4:
    // 0x3147d4: 0xc0c51e8  jal         func_3147A0
label_3147d8:
    if (ctx->pc == 0x3147D8u) {
        ctx->pc = 0x3147D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147D4u;
        // 0x3147d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147DCu;
        goto label_3147dc;
    }
    ctx->pc = 0x3147D4u;
    SET_GPR_U32(ctx, 31, 0x3147DCu);
    ctx->pc = 0x3147D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147D4u;
    // 0x3147d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147A0u;
    goto label_3147a0;
    ctx->pc = 0x3147DCu;
label_3147dc:
    // 0x3147dc: 0xc0c51e8  jal         func_3147A0
label_3147e0:
    if (ctx->pc == 0x3147E0u) {
        ctx->pc = 0x3147E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147DCu;
        // 0x3147e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147E4u;
        goto label_3147e4;
    }
    ctx->pc = 0x3147DCu;
    SET_GPR_U32(ctx, 31, 0x3147E4u);
    ctx->pc = 0x3147E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147DCu;
    // 0x3147e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147A0u;
    goto label_3147a0;
    ctx->pc = 0x3147E4u;
label_3147e4:
    // 0x3147e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3147e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3147e8:
    // 0x3147e8: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3147e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3147ec:
    // 0x3147ec: 0x40f809  jalr        $v0
label_3147f0:
    if (ctx->pc == 0x3147F0u) {
        ctx->pc = 0x3147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ECu;
        // 0x3147f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147F4u;
        goto label_3147f4;
    }
    ctx->pc = 0x3147ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3147F4u);
        ctx->pc = 0x3147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ECu;
        // 0x3147f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147ECu, 0x3147F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3147F4u;
label_3147f4:
    // 0x3147f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3147f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3147f8:
    // 0x3147f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3147f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3147fc:
    // 0x3147fc: 0x3e00008  jr          $ra
label_314800:
    if (ctx->pc == 0x314800u) {
        ctx->pc = 0x314800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147FCu;
        // 0x314800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314804u;
        goto label_314804;
    }
    ctx->pc = 0x3147FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147FCu;
        // 0x314800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314804u;
label_314804:
    // 0x314804: 0x0  nop
    ctx->pc = 0x314804u;
    // NOP
    ctx->pc = 0x314808u;
}
