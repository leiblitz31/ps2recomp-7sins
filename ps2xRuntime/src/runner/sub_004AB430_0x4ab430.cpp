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

// Function: sub_004AB430
// Address: 0x4ab430 - 0x4ab538
void sub_004AB430_0x4ab430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB430_0x4ab430");
#endif

    switch (ctx->pc) {
        case 0x4ab478u: goto label_4ab478;
        case 0x4ab48cu: goto label_4ab48c;
        case 0x4ab494u: goto label_4ab494;
        case 0x4ab4f8u: goto label_4ab4f8;
        case 0x4ab500u: goto label_4ab500;
        default: break;
    }

    ctx->pc = 0x4ab430u;

    // 0x4ab430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ab430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4ab434: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4ab434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4ab438: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4ab438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4ab43c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4ab43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab440: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ab440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4ab444: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4ab444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab448: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4ab448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4ab44c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4ab44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab450: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4ab450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4ab454: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ab454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab45c: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AB45Cu;
    {
        const bool branch_taken_0x4ab45c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB45Cu;
        // 0x4ab460: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab45c) {
            ctx->pc = 0x4AB49Cu;
            goto label_4ab49c;
        }
    }
    ctx->pc = 0x4AB464u;
    // 0x4ab464: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4ab464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4ab468: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4ab468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4ab46c: 0x24848920  addiu       $a0, $a0, -0x76E0
    ctx->pc = 0x4ab46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
    // 0x4ab470: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4AB470u;
    SET_GPR_U32(ctx, 31, 0x4AB478u);
    ctx->pc = 0x4AB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB470u;
    // 0x4ab474: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4AB470u, 0x4AB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB478u;
label_4ab478:
    // 0x4ab478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ab478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab47c: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AB47Cu;
    {
        const bool branch_taken_0x4ab47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ab47c) {
            ctx->pc = 0x4AB480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB47Cu;
            // 0x4ab480: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB4A4u;
            goto label_4ab4a4;
        }
    }
    ctx->pc = 0x4AB484u;
    // 0x4ab484: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4AB484u;
    {
        const bool branch_taken_0x4ab484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB484u;
        // 0x4ab488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab484) {
            ctx->pc = 0x4AB514u;
            goto label_4ab514;
        }
    }
    ctx->pc = 0x4AB48Cu;
label_4ab48c:
    // 0x4ab48c: 0xc12ad4e  jal         func_4AB538
    ctx->pc = 0x4AB48Cu;
    SET_GPR_U32(ctx, 31, 0x4AB494u);
    ctx->pc = 0x4AB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB48Cu;
    // 0x4ab490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB538u, 0x4AB48Cu, 0x4AB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB494u;
label_4ab494:
    // 0x4ab494: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4AB494u;
    {
        const bool branch_taken_0x4ab494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB494u;
        // 0x4ab498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab494) {
            ctx->pc = 0x4AB514u;
            goto label_4ab514;
        }
    }
    ctx->pc = 0x4AB49Cu;
label_4ab49c:
    // 0x4ab49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ab49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ab4a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ab4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ab4a4:
    // 0x4ab4a4: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x4ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x4ab4a8: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x4ab4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x4ab4ac: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x4ab4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ab4b0: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x4ab4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4ab4b4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4ab4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4ab4b8: 0x2786c218  addiu       $a2, $gp, -0x3DE8
    ctx->pc = 0x4ab4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951448));
    // 0x4ab4bc: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x4ab4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x4ab4c0: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x4ab4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4ab4c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4ab4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4ab4c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4ab4c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab4cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4ab4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ab4d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4ab4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4ab4d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4ab4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4ab4d8: 0x8f83c218  lw          $v1, -0x3DE8($gp)
    ctx->pc = 0x4ab4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951448)));
    // 0x4ab4dc: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x4ab4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x4ab4e0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x4ab4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x4ab4e4: 0x8f82c218  lw          $v0, -0x3DE8($gp)
    ctx->pc = 0x4ab4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951448)));
    // 0x4ab4e8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4ab4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x4ab4ec: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AB4ECu;
    {
        const bool branch_taken_0x4ab4ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB4ECu;
        // 0x4ab4f0: 0xaf84c218  sw          $a0, -0x3DE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294951448), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab4ec) {
            ctx->pc = 0x4AB510u;
            goto label_4ab510;
        }
    }
    ctx->pc = 0x4AB4F4u;
    // 0x4ab4f4: 0x0  nop
    ctx->pc = 0x4ab4f4u;
    // NOP
label_4ab4f8:
    // 0x4ab4f8: 0xc12aea0  jal         func_4ABA80
    ctx->pc = 0x4AB4F8u;
    SET_GPR_U32(ctx, 31, 0x4AB500u);
    ctx->pc = 0x4AB4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB4F8u;
    // 0x4ab4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABA80u, 0x4AB4F8u, 0x4AB500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB500u;
label_4ab500:
    // 0x4ab500: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4AB500u;
    {
        const bool branch_taken_0x4ab500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB500u;
        // 0x4ab504: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab500) {
            ctx->pc = 0x4AB48Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab48c;
        }
    }
    ctx->pc = 0x4AB508u;
    // 0x4ab508: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4AB508u;
    {
        const bool branch_taken_0x4ab508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB508u;
        // 0x4ab50c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab508) {
            ctx->pc = 0x4AB4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab4f8;
        }
    }
    ctx->pc = 0x4AB510u;
label_4ab510:
    // 0x4ab510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ab510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ab514:
    // 0x4ab514: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4ab514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ab518: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4ab518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ab51c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ab51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ab520: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4ab520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab524: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4ab524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab52c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB52Cu;
        // 0x4ab530: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB534u;
    // 0x4ab534: 0x0  nop
    ctx->pc = 0x4ab534u;
    // NOP
    ctx->pc = 0x4ab538u;
}
