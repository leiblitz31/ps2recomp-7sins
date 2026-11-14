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

// Function: sub_0040B138
// Address: 0x40b138 - 0x40b3f0
void sub_0040B138_0x40b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B138_0x40b138");
#endif

    switch (ctx->pc) {
        case 0x40b174u: goto label_40b174;
        case 0x40b188u: goto label_40b188;
        case 0x40b198u: goto label_40b198;
        case 0x40b1bcu: goto label_40b1bc;
        case 0x40b1e4u: goto label_40b1e4;
        case 0x40b1f0u: goto label_40b1f0;
        case 0x40b214u: goto label_40b214;
        case 0x40b230u: goto label_40b230;
        case 0x40b238u: goto label_40b238;
        case 0x40b244u: goto label_40b244;
        case 0x40b250u: goto label_40b250;
        case 0x40b260u: goto label_40b260;
        case 0x40b2a0u: goto label_40b2a0;
        case 0x40b2a8u: goto label_40b2a8;
        case 0x40b2b0u: goto label_40b2b0;
        case 0x40b2c0u: goto label_40b2c0;
        case 0x40b358u: goto label_40b358;
        default: break;
    }

    ctx->pc = 0x40b138u;

    // 0x40b138: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x40b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x40b13c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x40b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x40b140: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x40b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x40b144: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x40b144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x40b148: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40b148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b14c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x40b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x40b150: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x40b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x40b154: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x40b154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b158: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x40b15c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b164: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x40b164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x40b168: 0x8e540008  lw          $s4, 0x8($s2)
    ctx->pc = 0x40b168u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x40b16c: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x40B16Cu;
    SET_GPR_U32(ctx, 31, 0x40B174u);
    ctx->pc = 0x40B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B16Cu;
    // 0x40b170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x40B16Cu, 0x40B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B174u;
label_40b174:
    // 0x40b174: 0x8e500064  lw          $s0, 0x64($s2)
    ctx->pc = 0x40b174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x40b178: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x40B178u;
    {
        const bool branch_taken_0x40b178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B178u;
        // 0x40b17c: 0x8e95002c  lw          $s5, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b178) {
            ctx->pc = 0x40B1D8u;
            goto label_40b1d8;
        }
    }
    ctx->pc = 0x40B180u;
    // 0x40b180: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x40b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x40b184: 0x0  nop
    ctx->pc = 0x40b184u;
    // NOP
label_40b188:
    // 0x40b188: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x40B188u;
    {
        const bool branch_taken_0x40b188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B188u;
        // 0x40b18c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b188) {
            ctx->pc = 0x40B1CCu;
            goto label_40b1cc;
        }
    }
    ctx->pc = 0x40B190u;
    // 0x40b190: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40b190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b194: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x40b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_40b198:
    // 0x40b198: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40b198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b19c: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x40b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x40b1a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x40b1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x40b1a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x40b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x40b1a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x40b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40b1ac: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x40b1acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x40b1b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x40b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x40b1b4: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x40B1B4u;
    SET_GPR_U32(ctx, 31, 0x40B1BCu);
    ctx->pc = 0x40B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1B4u;
    // 0x40b1b8: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x40B1B4u, 0x40B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1BCu;
label_40b1bc:
    // 0x40b1bc: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x40b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x40b1c0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x40b1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x40b1c4: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x40B1C4u;
    {
        const bool branch_taken_0x40b1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b1c4) {
            ctx->pc = 0x40B1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B1C4u;
            // 0x40b1c8: 0x8e02008c  lw          $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b198;
        }
    }
    ctx->pc = 0x40B1CCu;
label_40b1cc:
    // 0x40b1cc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x40b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x40b1d0: 0x5600ffed  bnel        $s0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x40B1D0u;
    {
        const bool branch_taken_0x40b1d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b1d0) {
            ctx->pc = 0x40B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B1D0u;
            // 0x40b1d4: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b188;
        }
    }
    ctx->pc = 0x40B1D8u;
label_40b1d8:
    // 0x40b1d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b1dc: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x40B1DCu;
    SET_GPR_U32(ctx, 31, 0x40B1E4u);
    ctx->pc = 0x40B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B1DCu;
    // 0x40b1e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x40B1DCu, 0x40B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B1E4u;
label_40b1e4:
    // 0x40b1e4: 0x8e500064  lw          $s0, 0x64($s2)
    ctx->pc = 0x40b1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x40b1e8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40B1E8u;
    {
        const bool branch_taken_0x40b1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40b1e8) {
            ctx->pc = 0x40B20Cu;
            goto label_40b20c;
        }
    }
    ctx->pc = 0x40B1F0u;
label_40b1f0:
    // 0x40b1f0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x40b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x40b1f4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x40b1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x40b1f8: 0x0  nop
    ctx->pc = 0x40b1f8u;
    // NOP
    // 0x40b1fc: 0x0  nop
    ctx->pc = 0x40b1fcu;
    // NOP
    // 0x40b200: 0x0  nop
    ctx->pc = 0x40b200u;
    // NOP
    // 0x40b204: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x40B204u;
    {
        const bool branch_taken_0x40b204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B204u;
        // 0x40b208: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b204) {
            ctx->pc = 0x40B1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b1f0;
        }
    }
    ctx->pc = 0x40B20Cu;
label_40b20c:
    // 0x40b20c: 0xc0de242  jal         func_378908
    ctx->pc = 0x40B20Cu;
    SET_GPR_U32(ctx, 31, 0x40B214u);
    ctx->pc = 0x40B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B20Cu;
    // 0x40b210: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378908u, 0x40B20Cu, 0x40B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B214u;
label_40b214:
    // 0x40b214: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x40b214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x40b218: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x40b218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b21c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x40b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x40b220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40b220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b224: 0x8e46003c  lw          $a2, 0x3C($s2)
    ctx->pc = 0x40b224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x40b228: 0xc0de20a  jal         func_378828
    ctx->pc = 0x40B228u;
    SET_GPR_U32(ctx, 31, 0x40B230u);
    ctx->pc = 0x40B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B228u;
    // 0x40b22c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378828u, 0x40B228u, 0x40B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B230u;
label_40b230:
    // 0x40b230: 0xc0de204  jal         func_378810
    ctx->pc = 0x40B230u;
    SET_GPR_U32(ctx, 31, 0x40B238u);
    ctx->pc = 0x40B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B230u;
    // 0x40b234: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378810u, 0x40B230u, 0x40B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B238u;
label_40b238:
    // 0x40b238: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x40b238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x40b23c: 0xc0de206  jal         func_378818
    ctx->pc = 0x40B23Cu;
    SET_GPR_U32(ctx, 31, 0x40B244u);
    ctx->pc = 0x40B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B23Cu;
    // 0x40b240: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378818u, 0x40B23Cu, 0x40B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B244u;
label_40b244:
    // 0x40b244: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x40b244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x40b248: 0xc0de208  jal         func_378820
    ctx->pc = 0x40B248u;
    SET_GPR_U32(ctx, 31, 0x40B250u);
    ctx->pc = 0x40B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B248u;
    // 0x40b24c: 0xae42006c  sw          $v0, 0x6C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378820u, 0x40B248u, 0x40B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B250u;
label_40b250:
    // 0x40b250: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x40b250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x40b254: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x40B254u;
    {
        const bool branch_taken_0x40b254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B254u;
        // 0x40b258: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b254) {
            ctx->pc = 0x40B28Cu;
            goto label_40b28c;
        }
    }
    ctx->pc = 0x40B25Cu;
    // 0x40b25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40b260:
    // 0x40b260: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x40b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x40b264: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x40b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x40b268: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x40b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x40b26c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x40b26cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40b270: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x40b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x40b274: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x40b274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x40b278: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x40b278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x40b27c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x40b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x40b280: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x40b280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x40b284: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x40B284u;
    {
        const bool branch_taken_0x40b284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B284u;
        // 0x40b288: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b284) {
            ctx->pc = 0x40B260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b260;
        }
    }
    ctx->pc = 0x40B28Cu;
label_40b28c:
    // 0x40b28c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b290: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40b290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b294: 0x24a5b7a0  addiu       $a1, $a1, -0x4860
    ctx->pc = 0x40b294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
    // 0x40b298: 0xc0e3402  jal         func_38D008
    ctx->pc = 0x40B298u;
    SET_GPR_U32(ctx, 31, 0x40B2A0u);
    ctx->pc = 0x40B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B298u;
    // 0x40b29c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D008u, 0x40B298u, 0x40B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2A0u;
label_40b2a0:
    // 0x40b2a0: 0xc0de906  jal         func_37A418
    ctx->pc = 0x40B2A0u;
    SET_GPR_U32(ctx, 31, 0x40B2A8u);
    ctx->pc = 0x40B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B2A0u;
    // 0x40b2a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A418u, 0x40B2A0u, 0x40B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2A8u;
label_40b2a8:
    // 0x40b2a8: 0xc0de796  jal         func_379E58
    ctx->pc = 0x40B2A8u;
    SET_GPR_U32(ctx, 31, 0x40B2B0u);
    ctx->pc = 0x40B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B2A8u;
    // 0x40b2ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379E58u, 0x40B2A8u, 0x40B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B2B0u;
label_40b2b0:
    // 0x40b2b0: 0x8e460064  lw          $a2, 0x64($s2)
    ctx->pc = 0x40b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x40b2b4: 0x10c00043  beqz        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x40B2B4u;
    {
        const bool branch_taken_0x40b2b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B2B4u;
        // 0x40b2b8: 0x8e8a002c  lw          $t2, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b2b4) {
            ctx->pc = 0x40B3C4u;
            goto label_40b3c4;
        }
    }
    ctx->pc = 0x40B2BCu;
    // 0x40b2bc: 0x8ccb0088  lw          $t3, 0x88($a2)
    ctx->pc = 0x40b2bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
label_40b2c0:
    // 0x40b2c0: 0x1160003d  beqz        $t3, . + 4 + (0x3D << 2)
    ctx->pc = 0x40B2C0u;
    {
        const bool branch_taken_0x40b2c0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B2C0u;
        // 0x40b2c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b2c0) {
            ctx->pc = 0x40B3B8u;
            goto label_40b3b8;
        }
    }
    ctx->pc = 0x40B2C8u;
    // 0x40b2c8: 0x8cc5008c  lw          $a1, 0x8C($a2)
    ctx->pc = 0x40b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x40b2cc: 0x31630003  andi        $v1, $t3, 0x3
    ctx->pc = 0x40b2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x40b2d0: 0x19600016  blez        $t3, . + 4 + (0x16 << 2)
    ctx->pc = 0x40B2D0u;
    {
        const bool branch_taken_0x40b2d0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x40B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B2D0u;
        // 0x40b2d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b2d0) {
            ctx->pc = 0x40B32Cu;
            goto label_40b32c;
        }
    }
    ctx->pc = 0x40B2D8u;
    // 0x40b2d8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x40B2D8u;
    {
        const bool branch_taken_0x40b2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B2D8u;
        // 0x40b2dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b2d8) {
            ctx->pc = 0x40B350u;
            goto label_40b350;
        }
    }
    ctx->pc = 0x40B2E0u;
    // 0x40b2e0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x40B2E0u;
    {
        const bool branch_taken_0x40b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b2e0) {
            ctx->pc = 0x40B2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B2E0u;
            // 0x40b2e4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B330u;
            goto label_40b330;
        }
    }
    ctx->pc = 0x40B2E8u;
    // 0x40b2e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40b2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40b2ec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x40B2ECu;
    {
        const bool branch_taken_0x40b2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b2ec) {
            ctx->pc = 0x40B2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B2ECu;
            // 0x40b2f0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B314u;
            goto label_40b314;
        }
    }
    ctx->pc = 0x40B2F4u;
    // 0x40b2f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x40b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40b2f8: 0x24a40004  addiu       $a0, $a1, 0x4
    ctx->pc = 0x40b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x40b2fc: 0x94c30080  lhu         $v1, 0x80($a2)
    ctx->pc = 0x40b2fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b300: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x40b300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b304: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40b304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x40b308: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x40b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x40b30c: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x40b30cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x40b310: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40b314:
    // 0x40b314: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x40b314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x40b318: 0x94c30080  lhu         $v1, 0x80($a2)
    ctx->pc = 0x40b318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b31c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x40b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x40b320: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40b320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x40b324: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x40b324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x40b328: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x40b328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_40b32c:
    // 0x40b32c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40b330:
    // 0x40b330: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x40b330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x40b334: 0x94c30080  lhu         $v1, 0x80($a2)
    ctx->pc = 0x40b334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b338: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x40b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x40b33c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x40b340: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x40b340u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x40b344: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x40b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x40b348: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x40B348u;
    {
        const bool branch_taken_0x40b348 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B348u;
        // 0x40b34c: 0xa4430006  sh          $v1, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b348) {
            ctx->pc = 0x40B3B8u;
            goto label_40b3b8;
        }
    }
    ctx->pc = 0x40B350u;
label_40b350:
    // 0x40b350: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x40b350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b354: 0x0  nop
    ctx->pc = 0x40b354u;
    // NOP
label_40b358:
    // 0x40b358: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x40b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40b35c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x40b35cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x40b360: 0x94c30080  lhu         $v1, 0x80($a2)
    ctx->pc = 0x40b360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b364: 0x10b482b  sltu        $t1, $t0, $t3
    ctx->pc = 0x40b364u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x40b368: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x40b368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x40b36c: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x40b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x40b370: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x40b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x40b374: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x40b374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x40b378: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x40b378u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x40b37c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x40b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x40b380: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x40b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x40b384: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x40b384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x40b388: 0x94c20080  lhu         $v0, 0x80($a2)
    ctx->pc = 0x40b388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b38c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x40b38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x40b390: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x40b390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x40b394: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x40b394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x40b398: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x40b398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x40b39c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x40b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x40b3a0: 0x94c40080  lhu         $a0, 0x80($a2)
    ctx->pc = 0x40b3a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b3a4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x40b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x40b3a8: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x40b3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x40b3ac: 0x94c20080  lhu         $v0, 0x80($a2)
    ctx->pc = 0x40b3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x40b3b0: 0x1520ffe9  bnez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x40B3B0u;
    {
        const bool branch_taken_0x40b3b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x40B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B3B0u;
        // 0x40b3b4: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b3b0) {
            ctx->pc = 0x40B358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b358;
        }
    }
    ctx->pc = 0x40B3B8u;
label_40b3b8:
    // 0x40b3b8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x40b3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x40b3bc: 0x54c0ffc0  bnel        $a2, $zero, . + 4 + (-0x40 << 2)
    ctx->pc = 0x40B3BCu;
    {
        const bool branch_taken_0x40b3bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b3bc) {
            ctx->pc = 0x40B3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B3BCu;
            // 0x40b3c0: 0x8ccb0088  lw          $t3, 0x88($a2) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40b2c0;
        }
    }
    ctx->pc = 0x40B3C4u;
label_40b3c4:
    // 0x40b3c4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x40b3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b3c8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x40b3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40b3cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x40b3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40b3d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x40b3d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40b3d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40b3d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40b3d8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x40b3d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40b3dc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x40b3dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b3e0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x40b3e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x40B3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B3E8u;
        // 0x40b3ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B3F0u;
}
