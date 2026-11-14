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

// Function: sub_003772E8
// Address: 0x3772e8 - 0x377430
void sub_003772E8_0x3772e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003772E8_0x3772e8");
#endif

    switch (ctx->pc) {
        case 0x377320u: goto label_377320;
        case 0x377384u: goto label_377384;
        case 0x377398u: goto label_377398;
        default: break;
    }

    ctx->pc = 0x3772e8u;

    // 0x3772e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3772e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3772ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3772ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3772f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3772f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3772f4: 0x8c43c434  lw          $v1, -0x3BCC($v0)
    ctx->pc = 0x3772f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C434u));
    // 0x3772f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3772f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3772fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377304: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x377304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x377308: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x377308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x37730c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37730Cu;
    {
        const bool branch_taken_0x37730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37730Cu;
        // 0x377310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37730c) {
            ctx->pc = 0x377328u;
            goto label_377328;
        }
    }
    ctx->pc = 0x377314u;
    // 0x377314: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x377314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x377318: 0xc0e69da  jal         func_39A768
    ctx->pc = 0x377318u;
    SET_GPR_U32(ctx, 31, 0x377320u);
    ctx->pc = 0x37731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377318u;
    // 0x37731c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A768u, 0x377318u, 0x377320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377320u;
label_377320:
    // 0x377320: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x377320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x377324: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377328:
    // 0x377328: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37732c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37732cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377334: 0x3e00008  jr          $ra
    ctx->pc = 0x377334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377334u;
        // 0x377338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37733Cu;
    // 0x37733c: 0x0  nop
    ctx->pc = 0x37733cu;
    // NOP
    // 0x377340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377344: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x377348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37734c: 0x8c43c434  lw          $v1, -0x3BCC($v0)
    ctx->pc = 0x37734cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C434u));
    // 0x377350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377354: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37735c: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x37735cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x377360: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x377360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x377364: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x377364u;
    {
        const bool branch_taken_0x377364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377364u;
        // 0x377368: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377364) {
            ctx->pc = 0x37739Cu;
            goto label_37739c;
        }
    }
    ctx->pc = 0x37736Cu;
    // 0x37736c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x37736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x377370: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x377370u;
    {
        const bool branch_taken_0x377370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377370u;
        // 0x377374: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377370) {
            ctx->pc = 0x37739Cu;
            goto label_37739c;
        }
    }
    ctx->pc = 0x377378u;
    // 0x377378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37737c: 0xc0e69e2  jal         func_39A788
    ctx->pc = 0x37737Cu;
    SET_GPR_U32(ctx, 31, 0x377384u);
    ctx->pc = 0x377380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37737Cu;
    // 0x377380: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A788u, 0x37737Cu, 0x377384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377384u;
label_377384:
    // 0x377384: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x377384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x377388: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x377388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x37738c: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x37738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x377390: 0xc0e69da  jal         func_39A768
    ctx->pc = 0x377390u;
    SET_GPR_U32(ctx, 31, 0x377398u);
    ctx->pc = 0x377394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377390u;
    // 0x377394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A768u, 0x377390u, 0x377398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377398u;
label_377398:
    // 0x377398: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37739c:
    // 0x37739c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37739cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3773a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3773a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3773a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3773a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3773a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3773A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3773ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3773A8u;
        // 0x3773ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3773A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3773B0u;
    // 0x3773b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3773b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3773b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3773b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3773b8: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x3773b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x3773bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3773bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3773c0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x3773c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61C438u));
    // 0x3773c4: 0x8c470030  lw          $a3, 0x30($v0)
    ctx->pc = 0x3773c4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61C460u));
    // 0x3773c8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x3773c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3773cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3773ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3773d0: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x3773d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3773d4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x3773d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3773d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3773d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3773dc: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3773dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3773e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3773e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3773e4: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x3773e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x3773e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3773e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3773ec: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3773ECu;
    {
        const bool branch_taken_0x3773ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3773F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3773ECu;
        // 0x3773f0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3773ec) {
            ctx->pc = 0x377418u;
            goto label_377418;
        }
    }
    ctx->pc = 0x3773F4u;
    // 0x3773f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3773f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3773f8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x3773f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3773fc: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x3773fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x377400: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x377400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x377404: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x377404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x377408: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x377408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37740c: 0x691804  sllv        $v1, $t1, $v1
    ctx->pc = 0x37740cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 3) & 0x1F));
    // 0x377410: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x377410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x377414: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x377414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_377418:
    // 0x377418: 0x3e00008  jr          $ra
    ctx->pc = 0x377418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377418u;
        // 0x37741c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377420u;
    // 0x377420: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x377420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x377424: 0x3e00008  jr          $ra
    ctx->pc = 0x377424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377424u;
        // 0x377428: 0x2442ac08  addiu       $v0, $v0, -0x53F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37742Cu;
    // 0x37742c: 0x0  nop
    ctx->pc = 0x37742cu;
    // NOP
    ctx->pc = 0x377430u;
}
