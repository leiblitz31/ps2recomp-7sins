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

// Function: sub_00435378
// Address: 0x435378 - 0x435440
void sub_00435378_0x435378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435378_0x435378");
#endif

    ctx->pc = 0x435378u;

    // 0x435378: 0xaf84aee4  sw          $a0, -0x511C($gp)
    ctx->pc = 0x435378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946532), GPR_U32(ctx, 4));
    // 0x43537c: 0x3e00008  jr          $ra
    ctx->pc = 0x43537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43537Cu;
        // 0x435380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43537Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435384u;
    // 0x435384: 0x0  nop
    ctx->pc = 0x435384u;
    // NOP
    // 0x435388: 0x3e00008  jr          $ra
    ctx->pc = 0x435388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435388u;
        // 0x43538c: 0x8f82aee4  lw          $v0, -0x511C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435390u;
    // 0x435390: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x435390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x435394: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x435394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x435398: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x435398u;
    {
        const bool branch_taken_0x435398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435398u;
        // 0x43539c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435398) {
            ctx->pc = 0x4353D4u;
            goto label_4353d4;
        }
    }
    ctx->pc = 0x4353A0u;
    // 0x4353a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4353a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4353a4: 0x24421210  addiu       $v0, $v0, 0x1210
    ctx->pc = 0x4353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4624));
    // 0x4353a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4353a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4353ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4353acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4353b0: 0x800008  jr          $a0
    ctx->pc = 0x4353B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4353B8u: goto label_4353b8;
            case 0x4353DCu: goto label_4353dc;
            case 0x435408u: goto label_435408;
            case 0x435410u: goto label_435410;
            case 0x43542Cu: goto label_43542c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4353B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4353B8u;
label_4353b8:
    // 0x4353b8: 0x8f82ae10  lw          $v0, -0x51F0($gp)
    ctx->pc = 0x4353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946320)));
    // 0x4353bc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4353bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4353c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4353c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4353c4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4353C4u;
    {
        const bool branch_taken_0x4353c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4353C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4353C4u;
        // 0x4353c8: 0x8f82bee0  lw          $v0, -0x4120($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4353c4) {
            ctx->pc = 0x4353D4u;
            goto label_4353d4;
        }
    }
    ctx->pc = 0x4353CCu;
    // 0x4353cc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4353CCu;
    {
        const bool branch_taken_0x4353cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4353D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4353CCu;
        // 0x4353d0: 0x8f82bee4  lw          $v0, -0x411C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4353cc) {
            ctx->pc = 0x435430u;
            goto label_435430;
        }
    }
    ctx->pc = 0x4353D4u;
label_4353d4:
    // 0x4353d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4353D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4353D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4353D4u;
        // 0x4353d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4353D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4353DCu;
label_4353dc:
    // 0x4353dc: 0xdf82ae70  ld          $v0, -0x5190($gp)
    ctx->pc = 0x4353dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
    // 0x4353e0: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x4353e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x4353e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4353e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4353e8: 0x21a3b  dsra        $v1, $v0, 8
    ctx->pc = 0x4353e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 8);
    // 0x4353ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4353ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4353f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4353f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4353f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4353f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4353f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4353f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4353fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4353fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x435400: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x435400u;
    {
        const bool branch_taken_0x435400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435400u;
        // 0x435404: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435400) {
            ctx->pc = 0x435434u;
            goto label_435434;
        }
    }
    ctx->pc = 0x435408u;
label_435408:
    // 0x435408: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x435408u;
    {
        const bool branch_taken_0x435408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435408u;
        // 0x43540c: 0x8f82ae48  lw          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435408) {
            ctx->pc = 0x435430u;
            goto label_435430;
        }
    }
    ctx->pc = 0x435410u;
label_435410:
    // 0x435410: 0x8f82bf10  lw          $v0, -0x40F0($gp)
    ctx->pc = 0x435410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950672)));
    // 0x435414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x435414u;
    {
        const bool branch_taken_0x435414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435414u;
        // 0x435418: 0xc780bf14  lwc1        $f0, -0x40EC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435414) {
            ctx->pc = 0x435424u;
            goto label_435424;
        }
    }
    ctx->pc = 0x43541Cu;
    // 0x43541c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x43541Cu;
    {
        const bool branch_taken_0x43541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43541Cu;
        // 0x435420: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43541c) {
            ctx->pc = 0x435434u;
            goto label_435434;
        }
    }
    ctx->pc = 0x435424u;
label_435424:
    // 0x435424: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x435424u;
    {
        const bool branch_taken_0x435424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435424u;
        // 0x435428: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x435424) {
            ctx->pc = 0x435434u;
            goto label_435434;
        }
    }
    ctx->pc = 0x43542Cu;
label_43542c:
    // 0x43542c: 0x8f82ae90  lw          $v0, -0x5170($gp)
    ctx->pc = 0x43542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
label_435430:
    // 0x435430: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x435430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_435434:
    // 0x435434: 0x3e00008  jr          $ra
    ctx->pc = 0x435434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435434u;
        // 0x435438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43543Cu;
    // 0x43543c: 0x0  nop
    ctx->pc = 0x43543cu;
    // NOP
    ctx->pc = 0x435440u;
}
