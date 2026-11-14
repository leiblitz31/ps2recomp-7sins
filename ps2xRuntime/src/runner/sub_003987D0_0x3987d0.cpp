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

// Function: sub_003987D0
// Address: 0x3987d0 - 0x398c28
void sub_003987D0_0x3987d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003987D0_0x3987d0");
#endif

    switch (ctx->pc) {
        case 0x3988a8u: goto label_3988a8;
        case 0x3989bcu: goto label_3989bc;
        case 0x3989d0u: goto label_3989d0;
        case 0x398b20u: goto label_398b20;
        default: break;
    }

    ctx->pc = 0x3987d0u;

    // 0x3987d0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3987d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3987d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3987d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3987d8: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3987D8u;
    {
        const bool branch_taken_0x3987d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3987DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987D8u;
        // 0x3987dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3987d8) {
            ctx->pc = 0x398964u;
            goto label_398964;
        }
    }
    ctx->pc = 0x3987E0u;
    // 0x3987e0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3987e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3987e4: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x3987e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x3987e8: 0x19200021  blez        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3987E8u;
    {
        const bool branch_taken_0x3987e8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3987E8u;
        // 0x3987ec: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3987e8) {
            ctx->pc = 0x398870u;
            goto label_398870;
        }
    }
    ctx->pc = 0x3987F0u;
    // 0x3987f0: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x3987F0u;
    {
        const bool branch_taken_0x3987f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3987f0) {
            ctx->pc = 0x3987F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3987F0u;
            // 0x3987f4: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3988ACu;
            goto label_3988ac;
        }
    }
    ctx->pc = 0x3987F8u;
    // 0x3987f8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3987f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3987fc: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3987FCu;
    {
        const bool branch_taken_0x3987fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3987fc) {
            ctx->pc = 0x398800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3987FCu;
            // 0x398800: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398874u;
            goto label_398874;
        }
    }
    ctx->pc = 0x398804u;
    // 0x398804: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x398804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x398808: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x398808u;
    {
        const bool branch_taken_0x398808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398808) {
            ctx->pc = 0x39880Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398808u;
            // 0x39880c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398844u;
            goto label_398844;
        }
    }
    ctx->pc = 0x398810u;
    // 0x398810: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x398810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x398814: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x398818: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x398818u;
    {
        const bool branch_taken_0x398818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398818) {
            ctx->pc = 0x39881Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398818u;
            // 0x39881c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39883Cu;
            goto label_39883c;
        }
    }
    ctx->pc = 0x398820u;
    // 0x398820: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x398820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x398824: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398824u;
    {
        const bool branch_taken_0x398824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x398824) {
            ctx->pc = 0x398828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398824u;
            // 0x398828: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39883Cu;
            goto label_39883c;
        }
    }
    ctx->pc = 0x39882Cu;
    // 0x39882c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x39882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x398830: 0x54a30046  bnel        $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x398830u;
    {
        const bool branch_taken_0x398830 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x398830) {
            ctx->pc = 0x398834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398830u;
            // 0x398834: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x398838u;
    // 0x398838: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x398838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39883c:
    // 0x39883c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39883cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x398840: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x398840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_398844:
    // 0x398844: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x398848: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x398848u;
    {
        const bool branch_taken_0x398848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398848) {
            ctx->pc = 0x39884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398848u;
            // 0x39884c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39886Cu;
            goto label_39886c;
        }
    }
    ctx->pc = 0x398850u;
    // 0x398850: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x398850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x398854: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398854u;
    {
        const bool branch_taken_0x398854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x398854) {
            ctx->pc = 0x398858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398854u;
            // 0x398858: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39886Cu;
            goto label_39886c;
        }
    }
    ctx->pc = 0x39885Cu;
    // 0x39885c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x39885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x398860: 0x54a3003a  bnel        $a1, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x398860u;
    {
        const bool branch_taken_0x398860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x398860) {
            ctx->pc = 0x398864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398860u;
            // 0x398864: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x398868u;
    // 0x398868: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x398868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39886c:
    // 0x39886c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39886cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_398870:
    // 0x398870: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x398870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_398874:
    // 0x398874: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x398878: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x398878u;
    {
        const bool branch_taken_0x398878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398878) {
            ctx->pc = 0x39887Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398878u;
            // 0x39887c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39889Cu;
            goto label_39889c;
        }
    }
    ctx->pc = 0x398880u;
    // 0x398880: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x398880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x398884: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x398884u;
    {
        const bool branch_taken_0x398884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x398884) {
            ctx->pc = 0x398888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398884u;
            // 0x398888: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39889Cu;
            goto label_39889c;
        }
    }
    ctx->pc = 0x39888Cu;
    // 0x39888c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x39888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x398890: 0x54a3002e  bnel        $a1, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x398890u;
    {
        const bool branch_taken_0x398890 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x398890) {
            ctx->pc = 0x398894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398890u;
            // 0x398894: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x398898u;
    // 0x398898: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x398898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_39889c:
    // 0x39889c: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x39889cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3988a0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3988A0u;
    {
        const bool branch_taken_0x3988a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988A0u;
        // 0x3988a4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988a0) {
            ctx->pc = 0x398964u;
            goto label_398964;
        }
    }
    ctx->pc = 0x3988A8u;
label_3988a8:
    // 0x3988a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3988a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3988ac:
    // 0x3988ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3988acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3988b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3988B0u;
    {
        const bool branch_taken_0x3988b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3988b0) {
            ctx->pc = 0x3988B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3988B0u;
            // 0x3988b4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3988D4u;
            goto label_3988d4;
        }
    }
    ctx->pc = 0x3988B8u;
    // 0x3988b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3988b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3988bc: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3988BCu;
    {
        const bool branch_taken_0x3988bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3988bc) {
            ctx->pc = 0x3988C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3988BCu;
            // 0x3988c0: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3988D4u;
            goto label_3988d4;
        }
    }
    ctx->pc = 0x3988C4u;
    // 0x3988c4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3988c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3988c8: 0x54a30020  bnel        $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3988C8u;
    {
        const bool branch_taken_0x3988c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3988c8) {
            ctx->pc = 0x3988CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3988C8u;
            // 0x3988cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x3988D0u;
    // 0x3988d0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3988d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3988d4:
    // 0x3988d4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3988d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3988d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3988D8u;
    {
        const bool branch_taken_0x3988d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3988d8) {
            ctx->pc = 0x3988DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3988D8u;
            // 0x3988dc: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3988FCu;
            goto label_3988fc;
        }
    }
    ctx->pc = 0x3988E0u;
    // 0x3988e0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3988e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3988e4: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3988E4u;
    {
        const bool branch_taken_0x3988e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3988e4) {
            ctx->pc = 0x3988E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3988E4u;
            // 0x3988e8: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3988FCu;
            goto label_3988fc;
        }
    }
    ctx->pc = 0x3988ECu;
    // 0x3988ec: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3988f0: 0x54a30016  bnel        $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3988F0u;
    {
        const bool branch_taken_0x3988f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3988f0) {
            ctx->pc = 0x3988F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3988F0u;
            // 0x3988f4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x3988F8u;
    // 0x3988f8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x3988f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_3988fc:
    // 0x3988fc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3988fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x398900: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x398900u;
    {
        const bool branch_taken_0x398900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398900) {
            ctx->pc = 0x398904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398900u;
            // 0x398904: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398924u;
            goto label_398924;
        }
    }
    ctx->pc = 0x398908u;
    // 0x398908: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x398908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x39890c: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39890Cu;
    {
        const bool branch_taken_0x39890c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x39890c) {
            ctx->pc = 0x398910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39890Cu;
            // 0x398910: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398924u;
            goto label_398924;
        }
    }
    ctx->pc = 0x398914u;
    // 0x398914: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x398914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x398918: 0x54a3000c  bnel        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x398918u;
    {
        const bool branch_taken_0x398918 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x398918) {
            ctx->pc = 0x39891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398918u;
            // 0x39891c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39894Cu;
            goto label_39894c;
        }
    }
    ctx->pc = 0x398920u;
    // 0x398920: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x398920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_398924:
    // 0x398924: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x398928: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x398928u;
    {
        const bool branch_taken_0x398928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398928u;
        // 0x39892c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398928) {
            ctx->pc = 0x398958u;
            goto label_398958;
        }
    }
    ctx->pc = 0x398930u;
    // 0x398930: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x398930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x398934: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x398934u;
    {
        const bool branch_taken_0x398934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x398934) {
            ctx->pc = 0x398958u;
            goto label_398958;
        }
    }
    ctx->pc = 0x39893Cu;
    // 0x39893c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x39893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x398940: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x398940u;
    {
        const bool branch_taken_0x398940 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x398940) {
            ctx->pc = 0x398944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398940u;
            // 0x398944: 0x109102b  sltu        $v0, $t0, $t1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39895Cu;
            goto label_39895c;
        }
    }
    ctx->pc = 0x398948u;
    // 0x398948: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x398948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39894c:
    // 0x39894c: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x39894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x398950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x398950u;
    {
        const bool branch_taken_0x398950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398950u;
        // 0x398954: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398950) {
            ctx->pc = 0x398964u;
            goto label_398964;
        }
    }
    ctx->pc = 0x398958u;
label_398958:
    // 0x398958: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x398958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_39895c:
    // 0x39895c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x39895Cu;
    {
        const bool branch_taken_0x39895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39895Cu;
        // 0x398960: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39895c) {
            ctx->pc = 0x3988A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3988a8;
        }
    }
    ctx->pc = 0x398964u;
label_398964:
    // 0x398964: 0x3e00008  jr          $ra
    ctx->pc = 0x398964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398964u;
        // 0x398968: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39896Cu;
    // 0x39896c: 0x0  nop
    ctx->pc = 0x39896cu;
    // NOP
    // 0x398970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x398970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x398974: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x398974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x398978: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x398978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x39897c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x398980: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x398980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x398984: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x398984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x398988: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x398988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x39898c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39898cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x398990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x398994: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x398994u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x398998: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x398998u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x39899c: 0x2729018  mult        $s2, $s3, $s2
    ctx->pc = 0x39899cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3989a0: 0x138840  sll         $s1, $s3, 1
    ctx->pc = 0x3989a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x3989a4: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x3989a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x3989a8: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x3989a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3989ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3989acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3989b0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x3989b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3989b4: 0xc0e410c  jal         func_390430
    ctx->pc = 0x3989B4u;
    SET_GPR_U32(ctx, 31, 0x3989BCu);
    ctx->pc = 0x3989B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989B4u;
    // 0x3989b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x3989B4u, 0x3989BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989BCu;
label_3989bc:
    // 0x3989bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3989bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3989c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3989c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989c8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3989C8u;
    SET_GPR_U32(ctx, 31, 0x3989D0u);
    ctx->pc = 0x3989CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989C8u;
    // 0x3989cc: 0x240500cd  addiu       $a1, $zero, 0xCD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3989C8u, 0x3989D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989D0u;
label_3989d0:
    // 0x3989d0: 0x26a70010  addiu       $a3, $s5, 0x10
    ctx->pc = 0x3989d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x3989d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3989d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3989d8: 0xa6b30004  sh          $s3, 0x4($s5)
    ctx->pc = 0x3989d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x3989dc: 0xf24821  addu        $t1, $a3, $s2
    ctx->pc = 0x3989dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x3989e0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3989e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x3989e4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3989e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3989e8: 0xaeb10008  sw          $s1, 0x8($s5)
    ctx->pc = 0x3989e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 17));
    // 0x3989ec: 0xa6a00006  sh          $zero, 0x6($s5)
    ctx->pc = 0x3989ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3989f0: 0x6600083  bltz        $s3, . + 4 + (0x83 << 2)
    ctx->pc = 0x3989F0u;
    {
        const bool branch_taken_0x3989f0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3989F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3989F0u;
        // 0x3989f4: 0xaea0000c  sw          $zero, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3989f0) {
            ctx->pc = 0x398C00u;
            goto label_398c00;
        }
    }
    ctx->pc = 0x3989F8u;
    // 0x3989f8: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x3989f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x3989fc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3989fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x398a00: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x398a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x398a04: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x398a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x398a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a0c: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x398A0Cu;
    {
        const bool branch_taken_0x398a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x398A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A0Cu;
        // 0x398a10: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a0c) {
            ctx->pc = 0x398AFCu;
            goto label_398afc;
        }
    }
    ctx->pc = 0x398A14u;
    // 0x398a14: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x398a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x398a18: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x398A18u;
    {
        const bool branch_taken_0x398a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A18u;
        // 0x398a1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a18) {
            ctx->pc = 0x398AB4u;
            goto label_398ab4;
        }
    }
    ctx->pc = 0x398A20u;
    // 0x398a20: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x398A20u;
    {
        const bool branch_taken_0x398a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x398a20) {
            ctx->pc = 0x398A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398A20u;
            // 0x398a24: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398A74u;
            goto label_398a74;
        }
    }
    ctx->pc = 0x398A28u;
    // 0x398a28: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x398a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x398a2c: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x398a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x398a30: 0xaea90010  sw          $t1, 0x10($s5)
    ctx->pc = 0x398a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 9));
    // 0x398a34: 0x26a6001c  addiu       $a2, $s5, 0x1C
    ctx->pc = 0x398a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x398a38: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x398a38u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398a3c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x398a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x398a40: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x398a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x398a44: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x398a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x398a48: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x398a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x398a4c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x398a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x398a50: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x398a50u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x398a54: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x398a54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x398a58: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x398a58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x398a5c: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x398a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x398a60: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x398a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x398a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x398a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a68: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x398a68u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x398a6c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x398a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a70: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x398a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_398a74:
    // 0x398a74: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x398a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x398a78: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x398a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x398a7c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x398a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398a80: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x398a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x398a84: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x398a84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x398a88: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x398a88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x398a8c: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x398a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x398a90: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x398a90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x398a94: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x398a94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398a98: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x398a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x398a9c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x398a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x398aa0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x398aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x398aa4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x398aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x398aa8: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x398aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x398aac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x398aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398ab0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x398ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_398ab4:
    // 0x398ab4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x398ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x398ab8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x398ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x398abc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x398abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x398ac0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x398ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398ac4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x398ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x398ac8: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x398ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x398acc: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x398accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x398ad0: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x398ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x398ad4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x398ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x398ad8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x398ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398adc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x398adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x398ae0: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x398ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x398ae4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x398ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x398ae8: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x398ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x398aec: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x398aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x398af0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x398af0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398af4: 0x6600042  bltz        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x398AF4u;
    {
        const bool branch_taken_0x398af4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x398AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AF4u;
        // 0x398af8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398af4) {
            ctx->pc = 0x398C00u;
            goto label_398c00;
        }
    }
    ctx->pc = 0x398AFCu;
label_398afc:
    // 0x398afc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x398afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b00: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x398b00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b04: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x398b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b08: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x398b08u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b0c: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x398b0cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b10: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x398b10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b14: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x398b14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b18: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x398b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b1c: 0x0  nop
    ctx->pc = 0x398b1cu;
    // NOP
label_398b20:
    // 0x398b20: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x398b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x398b24: 0x25240006  addiu       $a0, $t1, 0x6
    ctx->pc = 0x398b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x398b28: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x398b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x398b2c: 0x2525000c  addiu       $a1, $t1, 0xC
    ctx->pc = 0x398b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x398b30: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x398b30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398b34: 0x25260012  addiu       $a2, $t1, 0x12
    ctx->pc = 0x398b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 18));
    // 0x398b38: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x398b38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x398b3c: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x398b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x398b40: 0x95a20002  lhu         $v0, 0x2($t5)
    ctx->pc = 0x398b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x398b44: 0x8d63001c  lw          $v1, 0x1C($t3)
    ctx->pc = 0x398b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x398b48: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x398b48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x398b4c: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x398b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x398b50: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x398b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x398b54: 0x8d630030  lw          $v1, 0x30($t3)
    ctx->pc = 0x398b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x398b58: 0xa4e20004  sh          $v0, 0x4($a3)
    ctx->pc = 0x398b58u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x398b5c: 0xad430020  sw          $v1, 0x20($t2)
    ctx->pc = 0x398b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 3));
    // 0x398b60: 0x95820014  lhu         $v0, 0x14($t4)
    ctx->pc = 0x398b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x398b64: 0x8d630044  lw          $v1, 0x44($t3)
    ctx->pc = 0x398b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 68)));
    // 0x398b68: 0xa4e20006  sh          $v0, 0x6($a3)
    ctx->pc = 0x398b68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x398b6c: 0x256b0050  addiu       $t3, $t3, 0x50
    ctx->pc = 0x398b6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
    // 0x398b70: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x398b70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x398b74: 0x95a20016  lhu         $v0, 0x16($t5)
    ctx->pc = 0x398b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 22)));
    // 0x398b78: 0x25290018  addiu       $t1, $t1, 0x18
    ctx->pc = 0x398b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x398b7c: 0xadc4000c  sw          $a0, 0xC($t6)
    ctx->pc = 0x398b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 4));
    // 0x398b80: 0xa4e20008  sh          $v0, 0x8($a3)
    ctx->pc = 0x398b80u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x398b84: 0xadc50018  sw          $a1, 0x18($t6)
    ctx->pc = 0x398b84u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 5));
    // 0x398b88: 0x95020018  lhu         $v0, 0x18($t0)
    ctx->pc = 0x398b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x398b8c: 0xadc60024  sw          $a2, 0x24($t6)
    ctx->pc = 0x398b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 36), GPR_U32(ctx, 6));
    // 0x398b90: 0xa4e2000a  sh          $v0, 0xA($a3)
    ctx->pc = 0x398b90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x398b94: 0x25ce0030  addiu       $t6, $t6, 0x30
    ctx->pc = 0x398b94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 48));
    // 0x398b98: 0xadf00004  sw          $s0, 0x4($t7)
    ctx->pc = 0x398b98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 16));
    // 0x398b9c: 0x95820028  lhu         $v0, 0x28($t4)
    ctx->pc = 0x398b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x398ba0: 0xadf00010  sw          $s0, 0x10($t7)
    ctx->pc = 0x398ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 16));
    // 0x398ba4: 0xa4e2000c  sh          $v0, 0xC($a3)
    ctx->pc = 0x398ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x398ba8: 0xadf0001c  sw          $s0, 0x1C($t7)
    ctx->pc = 0x398ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 28), GPR_U32(ctx, 16));
    // 0x398bac: 0x95a2002a  lhu         $v0, 0x2A($t5)
    ctx->pc = 0x398bacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 42)));
    // 0x398bb0: 0xadf00028  sw          $s0, 0x28($t7)
    ctx->pc = 0x398bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 40), GPR_U32(ctx, 16));
    // 0x398bb4: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x398bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x398bb8: 0x25ef0030  addiu       $t7, $t7, 0x30
    ctx->pc = 0x398bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 48));
    // 0x398bbc: 0x9502002c  lhu         $v0, 0x2C($t0)
    ctx->pc = 0x398bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x398bc0: 0xa4e20010  sh          $v0, 0x10($a3)
    ctx->pc = 0x398bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x398bc4: 0xad43002c  sw          $v1, 0x2C($t2)
    ctx->pc = 0x398bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 3));
    // 0x398bc8: 0x9582003c  lhu         $v0, 0x3C($t4)
    ctx->pc = 0x398bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x398bcc: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x398bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x398bd0: 0x258c0050  addiu       $t4, $t4, 0x50
    ctx->pc = 0x398bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
    // 0x398bd4: 0xa4e20012  sh          $v0, 0x12($a3)
    ctx->pc = 0x398bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x398bd8: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x398bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x398bdc: 0x95a2003e  lhu         $v0, 0x3E($t5)
    ctx->pc = 0x398bdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 62)));
    // 0x398be0: 0x25ad0050  addiu       $t5, $t5, 0x50
    ctx->pc = 0x398be0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x398be4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x398be4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398be8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x398be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x398bec: 0x95020040  lhu         $v0, 0x40($t0)
    ctx->pc = 0x398becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x398bf0: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x398bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x398bf4: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x398bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x398bf8: 0x661ffc9  bgez        $s3, . + 4 + (-0x37 << 2)
    ctx->pc = 0x398BF8u;
    {
        const bool branch_taken_0x398bf8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x398BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BF8u;
        // 0x398bfc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398bf8) {
            ctx->pc = 0x398B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398b20;
        }
    }
    ctx->pc = 0x398C00u;
label_398c00:
    // 0x398c00: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x398c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x398c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x398c08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x398c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x398c0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x398c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x398c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398c14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x398c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398c18: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x398c18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398c20: 0x3e00008  jr          $ra
    ctx->pc = 0x398C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C20u;
        // 0x398c24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398C28u;
}
