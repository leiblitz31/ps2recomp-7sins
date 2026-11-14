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

// Function: sub_004AC7C8
// Address: 0x4ac7c8 - 0x4ac918
void sub_004AC7C8_0x4ac7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC7C8_0x4ac7c8");
#endif

    switch (ctx->pc) {
        case 0x4ac7e8u: goto label_4ac7e8;
        case 0x4ac800u: goto label_4ac800;
        case 0x4ac84cu: goto label_4ac84c;
        case 0x4ac890u: goto label_4ac890;
        case 0x4ac8f8u: goto label_4ac8f8;
        default: break;
    }

    ctx->pc = 0x4ac7c8u;

    // 0x4ac7c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac7cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac7d4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC7D4u;
    {
        const bool branch_taken_0x4ac7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7D4u;
        // 0x4ac7d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac7d4) {
            ctx->pc = 0x4AC7F4u;
            goto label_4ac7f4;
        }
    }
    ctx->pc = 0x4AC7DCu;
    // 0x4ac7dc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ac7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ac7e0: 0xc12a7f0  jal         func_4A9FC0
    ctx->pc = 0x4AC7E0u;
    SET_GPR_U32(ctx, 31, 0x4AC7E8u);
    ctx->pc = 0x4AC7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC7E0u;
    // 0x4ac7e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FC0u, 0x4AC7E0u, 0x4AC7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC7E8u;
label_4ac7e8:
    // 0x4ac7e8: 0x8f82b88c  lw          $v0, -0x4774($gp)
    ctx->pc = 0x4ac7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949004)));
    // 0x4ac7ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC7ECu;
    {
        const bool branch_taken_0x4ac7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7ECu;
        // 0x4ac7f0: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac7ec) {
            ctx->pc = 0x4AC800u;
            goto label_4ac800;
        }
    }
    ctx->pc = 0x4AC7F4u;
label_4ac7f4:
    // 0x4ac7f4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ac7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ac7f8: 0xc12a7f0  jal         func_4A9FC0
    ctx->pc = 0x4AC7F8u;
    SET_GPR_U32(ctx, 31, 0x4AC800u);
    ctx->pc = 0x4AC7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC7F8u;
    // 0x4ac7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9FC0u, 0x4AC7F8u, 0x4AC800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC800u;
label_4ac800:
    // 0x4ac800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac808: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC808u;
        // 0x4ac80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC810u;
    // 0x4ac810: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x4ac810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x4ac814: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4ac814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4ac818: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC818u;
        // 0x4ac81c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC820u;
    // 0x4ac820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac828: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x4ac828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x4ac82c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4ac82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac830: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC830u;
    {
        const bool branch_taken_0x4ac830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC830u;
        // 0x4ac834: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac830) {
            ctx->pc = 0x4AC84Cu;
            goto label_4ac84c;
        }
    }
    ctx->pc = 0x4AC838u;
    // 0x4ac838: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4ac838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac83c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ac83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac840: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4ac840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4ac844: 0xc12637e  jal         func_498DF8
    ctx->pc = 0x4AC844u;
    SET_GPR_U32(ctx, 31, 0x4AC84Cu);
    ctx->pc = 0x4AC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC844u;
    // 0x4ac848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DF8u, 0x4AC844u, 0x4AC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC84Cu;
label_4ac84c:
    // 0x4ac84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac850: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC850u;
        // 0x4ac854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC858u;
    // 0x4ac858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac85c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac868: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x4ac868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4ac86c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4AC86Cu;
    {
        const bool branch_taken_0x4ac86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac86c) {
            ctx->pc = 0x4AC870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC86Cu;
            // 0x4ac870: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC89Cu;
            goto label_4ac89c;
        }
    }
    ctx->pc = 0x4AC874u;
    // 0x4ac874: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x4ac874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4ac878: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4ac878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4ac87c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC87Cu;
    {
        const bool branch_taken_0x4ac87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC87Cu;
        // 0x4ac880: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac87c) {
            ctx->pc = 0x4AC898u;
            goto label_4ac898;
        }
    }
    ctx->pc = 0x4AC884u;
    // 0x4ac884: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4ac884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ac888: 0xc126482  jal         func_499208
    ctx->pc = 0x4AC888u;
    SET_GPR_U32(ctx, 31, 0x4AC890u);
    ctx->pc = 0x4AC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC888u;
    // 0x4ac88c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x4AC888u, 0x4AC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC890u;
label_4ac890:
    // 0x4ac890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC890u;
    {
        const bool branch_taken_0x4ac890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC890u;
        // 0x4ac894: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac890) {
            ctx->pc = 0x4AC8A0u;
            goto label_4ac8a0;
        }
    }
    ctx->pc = 0x4AC898u;
label_4ac898:
    // 0x4ac898: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x4ac898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4ac89c:
    // 0x4ac89c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x4ac89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_4ac8a0:
    // 0x4ac8a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8A8u;
        // 0x4ac8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC8B0u;
    // 0x4ac8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac8b4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC8B4u;
    {
        const bool branch_taken_0x4ac8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8B4u;
        // 0x4ac8b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac8b4) {
            ctx->pc = 0x4AC8CCu;
            goto label_4ac8cc;
        }
    }
    ctx->pc = 0x4AC8BCu;
    // 0x4ac8bc: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x4ac8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x4ac8c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ac8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x4ac8c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC8C4u;
    {
        const bool branch_taken_0x4ac8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8C4u;
        // 0x4ac8c8: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac8c4) {
            ctx->pc = 0x4AC8E0u;
            goto label_4ac8e0;
        }
    }
    ctx->pc = 0x4AC8CCu;
label_4ac8cc:
    // 0x4ac8cc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x4ac8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x4ac8d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ac8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac8d4: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x4ac8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x4ac8d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac8dc: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x4ac8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_4ac8e0:
    // 0x4ac8e0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x4ac8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x4ac8e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC8E4u;
    {
        const bool branch_taken_0x4ac8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8E4u;
        // 0x4ac8e8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac8e4) {
            ctx->pc = 0x4AC8F8u;
            goto label_4ac8f8;
        }
    }
    ctx->pc = 0x4AC8ECu;
    // 0x4ac8ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ac8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac8f0: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4AC8F0u;
    SET_GPR_U32(ctx, 31, 0x4AC8F8u);
    ctx->pc = 0x4AC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC8F0u;
    // 0x4ac8f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4AC8F0u, 0x4AC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC8F8u;
label_4ac8f8:
    // 0x4ac8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8FCu;
        // 0x4ac900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC904u;
    // 0x4ac904: 0x0  nop
    ctx->pc = 0x4ac904u;
    // NOP
    // 0x4ac908: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x4ac908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x4ac90c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ac90cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ac910: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC910u;
        // 0x4ac914: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC918u;
}
