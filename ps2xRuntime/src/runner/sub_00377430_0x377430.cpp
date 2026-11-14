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

// Function: sub_00377430
// Address: 0x377430 - 0x3774e8
void sub_00377430_0x377430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377430_0x377430");
#endif

    switch (ctx->pc) {
        case 0x377430u: goto label_377430;
        case 0x377434u: goto label_377434;
        case 0x377438u: goto label_377438;
        case 0x37743cu: goto label_37743c;
        case 0x377440u: goto label_377440;
        case 0x377444u: goto label_377444;
        case 0x377448u: goto label_377448;
        case 0x37744cu: goto label_37744c;
        case 0x377450u: goto label_377450;
        case 0x377454u: goto label_377454;
        case 0x377458u: goto label_377458;
        case 0x37745cu: goto label_37745c;
        case 0x377460u: goto label_377460;
        case 0x377464u: goto label_377464;
        case 0x377468u: goto label_377468;
        case 0x37746cu: goto label_37746c;
        case 0x377470u: goto label_377470;
        case 0x377474u: goto label_377474;
        case 0x377478u: goto label_377478;
        case 0x37747cu: goto label_37747c;
        case 0x377480u: goto label_377480;
        case 0x377484u: goto label_377484;
        case 0x377488u: goto label_377488;
        case 0x37748cu: goto label_37748c;
        case 0x377490u: goto label_377490;
        case 0x377494u: goto label_377494;
        case 0x377498u: goto label_377498;
        case 0x37749cu: goto label_37749c;
        case 0x3774a0u: goto label_3774a0;
        case 0x3774a4u: goto label_3774a4;
        case 0x3774a8u: goto label_3774a8;
        case 0x3774acu: goto label_3774ac;
        case 0x3774b0u: goto label_3774b0;
        case 0x3774b4u: goto label_3774b4;
        case 0x3774b8u: goto label_3774b8;
        case 0x3774bcu: goto label_3774bc;
        case 0x3774c0u: goto label_3774c0;
        case 0x3774c4u: goto label_3774c4;
        case 0x3774c8u: goto label_3774c8;
        case 0x3774ccu: goto label_3774cc;
        case 0x3774d0u: goto label_3774d0;
        case 0x3774d4u: goto label_3774d4;
        case 0x3774d8u: goto label_3774d8;
        case 0x3774dcu: goto label_3774dc;
        case 0x3774e0u: goto label_3774e0;
        case 0x3774e4u: goto label_3774e4;
        default: break;
    }

    ctx->pc = 0x377430u;

label_377430:
    // 0x377430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_377434:
    // 0x377434: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_377438:
    // 0x377438: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x377438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_37743c:
    // 0x37743c: 0x2443c430  addiu       $v1, $v0, -0x3BD0
    ctx->pc = 0x37743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_377440:
    // 0x377440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x377440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_377444:
    // 0x377444: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x377444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_377448:
    // 0x377448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37744c:
    // 0x37744c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37744cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377450:
    // 0x377450: 0x8c45c430  lw          $a1, -0x3BD0($v0)
    ctx->pc = 0x377450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_377454:
    // 0x377454: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x377454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_377458:
    // 0x377458: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x377458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_37745c:
    // 0x37745c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x37745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_377460:
    // 0x377460: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_377464:
    if (ctx->pc == 0x377464u) {
        ctx->pc = 0x377464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377460u;
        // 0x377464: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377468u;
        goto label_377468;
    }
    ctx->pc = 0x377460u;
    {
        const bool branch_taken_0x377460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377460u;
        // 0x377464: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377460) {
            ctx->pc = 0x3774BCu;
            goto label_3774bc;
        }
    }
    ctx->pc = 0x377468u;
label_377468:
    // 0x377468: 0xc0ddc6c  jal         func_3771B0
label_37746c:
    if (ctx->pc == 0x37746Cu) {
        ctx->pc = 0x37746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377468u;
        // 0x37746c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377470u;
        goto label_377470;
    }
    ctx->pc = 0x377468u;
    SET_GPR_U32(ctx, 31, 0x377470u);
    ctx->pc = 0x37746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377468u;
    // 0x37746c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3771B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3771B0u, 0x377468u, 0x377470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377470u;
label_377470:
    // 0x377470: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_377474:
    if (ctx->pc == 0x377474u) {
        ctx->pc = 0x377474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377470u;
        // 0x377474: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377478u;
        goto label_377478;
    }
    ctx->pc = 0x377470u;
    {
        const bool branch_taken_0x377470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377470) {
            ctx->pc = 0x377474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377470u;
            // 0x377474: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3774ACu;
            goto label_3774ac;
        }
    }
    ctx->pc = 0x377478u;
label_377478:
    // 0x377478: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x377478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_37747c:
    // 0x37747c: 0x40f809  jalr        $v0
label_377480:
    if (ctx->pc == 0x377480u) {
        ctx->pc = 0x377480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37747Cu;
        // 0x377480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377484u;
        goto label_377484;
    }
    ctx->pc = 0x37747Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377484u);
        ctx->pc = 0x377480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37747Cu;
        // 0x377480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37747Cu, 0x377484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377484u;
label_377484:
    // 0x377484: 0x96450084  lhu         $a1, 0x84($s2)
    ctx->pc = 0x377484u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
label_377488:
    // 0x377488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x377488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37748c:
    // 0x37748c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x37748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_377490:
    // 0x377490: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x377490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_377494:
    // 0x377494: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x377494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_377498:
    // 0x377498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37749c:
    // 0x37749c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x37749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3774a0:
    // 0x3774a0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3774a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3774a4:
    // 0x3774a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3774a8:
    if (ctx->pc == 0x3774A8u) {
        ctx->pc = 0x3774A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774A4u;
        // 0x3774a8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3774ACu;
        goto label_3774ac;
    }
    ctx->pc = 0x3774A4u;
    {
        const bool branch_taken_0x3774a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3774A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774A4u;
        // 0x3774a8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3774a4) {
            ctx->pc = 0x3774CCu;
            goto label_3774cc;
        }
    }
    ctx->pc = 0x3774ACu;
label_3774ac:
    // 0x3774ac: 0x96230084  lhu         $v1, 0x84($s1)
    ctx->pc = 0x3774acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
label_3774b0:
    // 0x3774b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3774b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3774b4:
    // 0x3774b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3774b8:
    if (ctx->pc == 0x3774B8u) {
        ctx->pc = 0x3774B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774B4u;
        // 0x3774b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3774BCu;
        goto label_3774bc;
    }
    ctx->pc = 0x3774B4u;
    {
        const bool branch_taken_0x3774b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3774B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774B4u;
        // 0x3774b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3774b4) {
            ctx->pc = 0x3774CCu;
            goto label_3774cc;
        }
    }
    ctx->pc = 0x3774BCu;
label_3774bc:
    // 0x3774bc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3774bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3774c0:
    // 0x3774c0: 0x40f809  jalr        $v0
label_3774c4:
    if (ctx->pc == 0x3774C4u) {
        ctx->pc = 0x3774C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774C0u;
        // 0x3774c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3774C8u;
        goto label_3774c8;
    }
    ctx->pc = 0x3774C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3774C8u);
        ctx->pc = 0x3774C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774C0u;
        // 0x3774c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3774C0u, 0x3774C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3774C8u;
label_3774c8:
    // 0x3774c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3774c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3774cc:
    // 0x3774cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3774ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3774d0:
    // 0x3774d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3774d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3774d4:
    // 0x3774d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3774d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3774d8:
    // 0x3774d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3774d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3774dc:
    // 0x3774dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3774dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3774e0:
    // 0x3774e0: 0x3e00008  jr          $ra
label_3774e4:
    if (ctx->pc == 0x3774E4u) {
        ctx->pc = 0x3774E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774E0u;
        // 0x3774e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3774E8u;
        goto label_fallthrough_0x3774e0;
    }
    ctx->pc = 0x3774E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3774E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774E0u;
        // 0x3774e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3774E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3774e0:
    ctx->pc = 0x3774E8u;
}
