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

// Function: sub_003C5150
// Address: 0x3c5150 - 0x3c5228
void sub_003C5150_0x3c5150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5150_0x3c5150");
#endif

    switch (ctx->pc) {
        case 0x3c5190u: goto label_3c5190;
        case 0x3c5198u: goto label_3c5198;
        case 0x3c51c0u: goto label_3c51c0;
        case 0x3c51c8u: goto label_3c51c8;
        case 0x3c51f8u: goto label_3c51f8;
        case 0x3c5200u: goto label_3c5200;
        case 0x3c5214u: goto label_3c5214;
        default: break;
    }

    ctx->pc = 0x3c5150u;

    // 0x3c5150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c5154: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c5154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c5158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c5158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c515c: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x3c515cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3c5160: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x3c5160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3c5164: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x3c5164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3c5168: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c5168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c516c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3c516cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c5170: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3c5170u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3c5174: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3c5174u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c5178: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3c5178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3c517c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3c517cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3c5180: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c5180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c5184: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c5184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c5188: 0xc0bf6f8  jal         func_2FDBE0
    ctx->pc = 0x3C5188u;
    SET_GPR_U32(ctx, 31, 0x3C5190u);
    ctx->pc = 0x3C518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5188u;
    // 0x3c518c: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBE0u, 0x3C5188u, 0x3C5190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5190u;
label_3c5190:
    // 0x3c5190: 0xc0bf6f0  jal         func_2FDBC0
    ctx->pc = 0x3C5190u;
    SET_GPR_U32(ctx, 31, 0x3C5198u);
    ctx->pc = 0x3C5194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5190u;
    // 0x3c5194: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBC0u, 0x3C5190u, 0x3C5198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5198u;
label_3c5198:
    // 0x3c5198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c5198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c519c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3c519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c51a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C51A0u;
    {
        const bool branch_taken_0x3c51a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51A0u;
        // 0x3c51a4: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51a0) {
            ctx->pc = 0x3C51E4u;
            goto label_3c51e4;
        }
    }
    ctx->pc = 0x3C51A8u;
    // 0x3c51a8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3c51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3c51ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c51acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c51b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c51b4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C51B4u;
    {
        const bool branch_taken_0x3c51b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3C51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51B4u;
        // 0x3c51b8: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51b4) {
            ctx->pc = 0x3C51F8u;
            goto label_3c51f8;
        }
    }
    ctx->pc = 0x3C51BCu;
    // 0x3c51bc: 0x0  nop
    ctx->pc = 0x3c51bcu;
    // NOP
label_3c51c0:
    // 0x3c51c0: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x3C51C0u;
    SET_GPR_U32(ctx, 31, 0x3C51C8u);
    ctx->pc = 0x3C51C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51C0u;
    // 0x3c51c4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x3C51C0u, 0x3C51C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51C8u;
label_3c51c8:
    // 0x3c51c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3c51c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3c51cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c51ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c51d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c51d4: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C51D4u;
    {
        const bool branch_taken_0x3c51d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C51D4u;
        // 0x3c51d8: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c51d4) {
            ctx->pc = 0x3C51C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c51c0;
        }
    }
    ctx->pc = 0x3C51DCu;
    // 0x3c51dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C51DCu;
    {
        const bool branch_taken_0x3c51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c51dc) {
            ctx->pc = 0x3C51F8u;
            goto label_3c51f8;
        }
    }
    ctx->pc = 0x3C51E4u;
label_3c51e4:
    // 0x3c51e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c51e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C51E8u;
    {
        const bool branch_taken_0x3c51e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c51e8) {
            ctx->pc = 0x3C51F8u;
            goto label_3c51f8;
        }
    }
    ctx->pc = 0x3C51F0u;
    // 0x3c51f0: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x3C51F0u;
    SET_GPR_U32(ctx, 31, 0x3C51F8u);
    ctx->pc = 0x3C51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51F0u;
    // 0x3c51f4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x3C51F0u, 0x3C51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C51F8u;
label_3c51f8:
    // 0x3c51f8: 0xc0bf6e4  jal         func_2FDB90
    ctx->pc = 0x3C51F8u;
    SET_GPR_U32(ctx, 31, 0x3C5200u);
    ctx->pc = 0x3C51FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C51F8u;
    // 0x3c51fc: 0x8f84bd88  lw          $a0, -0x4278($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB90u, 0x3C51F8u, 0x3C5200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5200u;
label_3c5200:
    // 0x3c5200: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x3c5200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3c5204: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5204u;
    {
        const bool branch_taken_0x3c5204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5204) {
            ctx->pc = 0x3C5208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5204u;
            // 0x3c5208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5218u;
            goto label_3c5218;
        }
    }
    ctx->pc = 0x3C520Cu;
    // 0x3c520c: 0xc0f0930  jal         func_3C24C0
    ctx->pc = 0x3C520Cu;
    SET_GPR_U32(ctx, 31, 0x3C5214u);
    ctx->pc = 0x3C5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C520Cu;
    // 0x3c5210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C520Cu, 0x3C5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5214u;
label_3c5214:
    // 0x3c5214: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c5214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5218:
    // 0x3c5218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c5218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c521c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C521Cu;
        // 0x3c5220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C521Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5224u;
    // 0x3c5224: 0x0  nop
    ctx->pc = 0x3c5224u;
    // NOP
    ctx->pc = 0x3c5228u;
}
