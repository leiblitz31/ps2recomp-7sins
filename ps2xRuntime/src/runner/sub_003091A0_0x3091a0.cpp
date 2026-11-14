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

// Function: sub_003091A0
// Address: 0x3091a0 - 0x309388
void sub_003091A0_0x3091a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003091A0_0x3091a0");
#endif

    switch (ctx->pc) {
        case 0x309208u: goto label_309208;
        case 0x309244u: goto label_309244;
        case 0x30924cu: goto label_30924c;
        case 0x309280u: goto label_309280;
        case 0x30928cu: goto label_30928c;
        case 0x30929cu: goto label_30929c;
        case 0x3092b8u: goto label_3092b8;
        case 0x3092e4u: goto label_3092e4;
        case 0x30931cu: goto label_30931c;
        case 0x309338u: goto label_309338;
        case 0x309364u: goto label_309364;
        default: break;
    }

    ctx->pc = 0x3091a0u;

label_3091a0:
    // 0x3091a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3091a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3091a4: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3091a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3091a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3091ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3091acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3091b0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3091b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3091b4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3091B4u;
    {
        const bool branch_taken_0x3091b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3091B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091B4u;
        // 0x3091b8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091b4) {
            ctx->pc = 0x3091CCu;
            goto label_3091cc;
        }
    }
    ctx->pc = 0x3091BCu;
    // 0x3091bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3091bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3091c0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3091c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3091c4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3091C4u;
    {
        const bool branch_taken_0x3091c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3091c4) {
            ctx->pc = 0x3091C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3091C4u;
            // 0x3091c8: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3091D8u;
            goto label_3091d8;
        }
    }
    ctx->pc = 0x3091CCu;
label_3091cc:
    // 0x3091cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3091ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3091d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3091D0u;
    {
        const bool branch_taken_0x3091d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091D0u;
        // 0x3091d4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091d0) {
            ctx->pc = 0x309250u;
            goto label_309250;
        }
    }
    ctx->pc = 0x3091D8u;
label_3091d8:
    // 0x3091d8: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x3091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x3091dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3091dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3091e0: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3091E0u;
    {
        const bool branch_taken_0x3091e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3091e0) {
            ctx->pc = 0x3091E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3091E0u;
            // 0x3091e4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3091F4u;
            goto label_3091f4;
        }
    }
    ctx->pc = 0x3091E8u;
    // 0x3091e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3091e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3091ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3091ECu;
    {
        const bool branch_taken_0x3091ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091ECu;
        // 0x3091f0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091ec) {
            ctx->pc = 0x309250u;
            goto label_309250;
        }
    }
    ctx->pc = 0x3091F4u;
label_3091f4:
    // 0x3091f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3091f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3091f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3091F8u;
    {
        const bool branch_taken_0x3091f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3091F8u;
        // 0x3091fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091f8) {
            ctx->pc = 0x309250u;
            goto label_309250;
        }
    }
    ctx->pc = 0x309200u;
    // 0x309200: 0xc0c235e  jal         func_308D78
    ctx->pc = 0x309200u;
    SET_GPR_U32(ctx, 31, 0x309208u);
    ctx->pc = 0x308D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D78u, 0x309200u, 0x309208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309208u;
label_309208:
    // 0x309208: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x309208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30920c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30920cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309210: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x309210u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x309214: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x309214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x309218: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x309218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30921c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x30921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x309220: 0x224202f  dsubu       $a0, $s1, $a0
    ctx->pc = 0x309220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) - GPR_U64(ctx, 4));
    // 0x309224: 0x30a60002  andi        $a2, $a1, 0x2
    ctx->pc = 0x309224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x309228: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x309228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x30922c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x30922cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x309230: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x309230u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x309234: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x309234u;
    {
        const bool branch_taken_0x309234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x309238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309234u;
        // 0x309238: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309234) {
            ctx->pc = 0x30924Cu;
            goto label_30924c;
        }
    }
    ctx->pc = 0x30923Cu;
    // 0x30923c: 0xc0c22a6  jal         func_308A98
    ctx->pc = 0x30923Cu;
    SET_GPR_U32(ctx, 31, 0x309244u);
    ctx->pc = 0x309240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30923Cu;
    // 0x309240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A98u, 0x30923Cu, 0x309244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309244u;
label_309244:
    // 0x309244: 0xc0c2220  jal         func_308880
    ctx->pc = 0x309244u;
    SET_GPR_U32(ctx, 31, 0x30924Cu);
    ctx->pc = 0x309248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309244u;
    // 0x309248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308880u, 0x309244u, 0x30924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30924Cu;
label_30924c:
    // 0x30924c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_309250:
    // 0x309250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30925c: 0x3e00008  jr          $ra
    ctx->pc = 0x30925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30925Cu;
        // 0x309260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309264u;
    // 0x309264: 0x0  nop
    ctx->pc = 0x309264u;
    // NOP
    // 0x309268: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x309268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30926c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309270: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x309274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x309274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x309278: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x309278u;
    SET_GPR_U32(ctx, 31, 0x309280u);
    ctx->pc = 0x30927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309278u;
    // 0x30927c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x309278u, 0x309280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309280u;
label_309280:
    // 0x309280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309284: 0xc0c2468  jal         func_3091A0
    ctx->pc = 0x309284u;
    SET_GPR_U32(ctx, 31, 0x30928Cu);
    ctx->pc = 0x309288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309284u;
    // 0x309288: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3091A0u;
    goto label_3091a0;
    ctx->pc = 0x30928Cu;
label_30928c:
    // 0x30928c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30928Cu;
    {
        const bool branch_taken_0x30928c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x309290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30928Cu;
        // 0x309290: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30928c) {
            ctx->pc = 0x30929Cu;
            goto label_30929c;
        }
    }
    ctx->pc = 0x309294u;
    // 0x309294: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309294u;
    SET_GPR_U32(ctx, 31, 0x30929Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309294u, 0x30929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30929Cu;
label_30929c:
    // 0x30929c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30929cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3092a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3092a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3092a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3092a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3092a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3092ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3092ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3092B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092ACu;
        // 0x3092b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3092ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3092B4u;
    // 0x3092b4: 0x0  nop
    ctx->pc = 0x3092b4u;
    // NOP
label_3092b8:
    // 0x3092b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3092b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3092bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3092bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3092c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3092c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3092c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3092c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3092c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3092cc: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x3092ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x3092d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3092d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3092d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3092d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3092d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3092d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3092dc: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3092DCu;
    SET_GPR_U32(ctx, 31, 0x3092E4u);
    ctx->pc = 0x3092E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3092DCu;
    // 0x3092e0: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3092DCu, 0x3092E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3092E4u;
label_3092e4:
    // 0x3092e4: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3092E4u;
    {
        const bool branch_taken_0x3092e4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092E4u;
        // 0x3092e8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092e4) {
            ctx->pc = 0x30930Cu;
            goto label_30930c;
        }
    }
    ctx->pc = 0x3092ECu;
    // 0x3092ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3092f0: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x3092f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x3092f4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3092F4u;
    {
        const bool branch_taken_0x3092f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092F4u;
        // 0x3092f8: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092f4) {
            ctx->pc = 0x30930Cu;
            goto label_30930c;
        }
    }
    ctx->pc = 0x3092FCu;
    // 0x3092fc: 0x24422228  addiu       $v0, $v0, 0x2228
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x309300: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x309300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x309304: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x309304u;
    {
        const bool branch_taken_0x309304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x309304) {
            ctx->pc = 0x309308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309304u;
            // 0x309308: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309324u;
            goto label_309324;
        }
    }
    ctx->pc = 0x30930Cu;
label_30930c:
    // 0x30930c: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x30930Cu;
    {
        const bool branch_taken_0x30930c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30930Cu;
        // 0x309310: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30930c) {
            ctx->pc = 0x309368u;
            goto label_309368;
        }
    }
    ctx->pc = 0x309314u;
    // 0x309314: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x309314u;
    SET_GPR_U32(ctx, 31, 0x30931Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x309314u, 0x30931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30931Cu;
label_30931c:
    // 0x30931c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30931Cu;
    {
        const bool branch_taken_0x30931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30931Cu;
        // 0x309320: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30931c) {
            ctx->pc = 0x309368u;
            goto label_309368;
        }
    }
    ctx->pc = 0x309324u;
label_309324:
    // 0x309324: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x309324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x309328: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x309328u;
    {
        const bool branch_taken_0x309328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309328u;
        // 0x30932c: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309328) {
            ctx->pc = 0x309350u;
            goto label_309350;
        }
    }
    ctx->pc = 0x309330u;
    // 0x309330: 0xc0c235e  jal         func_308D78
    ctx->pc = 0x309330u;
    SET_GPR_U32(ctx, 31, 0x309338u);
    ctx->pc = 0x308D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D78u, 0x309330u, 0x309338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309338u;
label_309338:
    // 0x309338: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x309338u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30933c: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x30933cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x309340: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x309340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x309344: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x309344u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x309348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x309348u;
    {
        const bool branch_taken_0x309348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309348u;
        // 0x30934c: 0x223882d  daddu       $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309348) {
            ctx->pc = 0x309354u;
            goto label_309354;
        }
    }
    ctx->pc = 0x309350u;
label_309350:
    // 0x309350: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x309350u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_309354:
    // 0x309354: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x309354u;
    {
        const bool branch_taken_0x309354 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x309358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309354u;
        // 0x309358: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309354) {
            ctx->pc = 0x309368u;
            goto label_309368;
        }
    }
    ctx->pc = 0x30935Cu;
    // 0x30935c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30935Cu;
    SET_GPR_U32(ctx, 31, 0x309364u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30935Cu, 0x309364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309364u;
label_309364:
    // 0x309364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x309364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_309368:
    // 0x309368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x309368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30936c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x30936cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309370: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309374: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30937c: 0x3e00008  jr          $ra
    ctx->pc = 0x30937Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30937Cu;
        // 0x309380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30937Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309384u;
    // 0x309384: 0x0  nop
    ctx->pc = 0x309384u;
    // NOP
    ctx->pc = 0x309388u;
}
