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

// Function: sub_00414220
// Address: 0x414220 - 0x414398
void sub_00414220_0x414220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414220_0x414220");
#endif

    switch (ctx->pc) {
        case 0x414308u: goto label_414308;
        default: break;
    }

    ctx->pc = 0x414220u;

    // 0x414220: 0x8c83ffe0  lw          $v1, -0x20($a0)
    ctx->pc = 0x414220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x414224: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x414224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x414228: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x414228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x41422c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x41422cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x414230: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x414230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x414234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x414234u;
    {
        const bool branch_taken_0x414234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414234u;
        // 0x414238: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414234) {
            ctx->pc = 0x414248u;
            goto label_414248;
        }
    }
    ctx->pc = 0x41423Cu;
    // 0x41423c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x41423cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x414240: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x414240u;
    {
        const bool branch_taken_0x414240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414240) {
            ctx->pc = 0x41424Cu;
            goto label_41424c;
        }
    }
    ctx->pc = 0x414248u;
label_414248:
    // 0x414248: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x414248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_41424c:
    // 0x41424c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x41424Cu;
    {
        const bool branch_taken_0x41424c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41424c) {
            ctx->pc = 0x41428Cu;
            goto label_41428c;
        }
    }
    ctx->pc = 0x414254u;
    // 0x414254: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x414254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x414258: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x414258u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x41425c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x414260: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x414260u;
    {
        const bool branch_taken_0x414260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x414260) {
            ctx->pc = 0x41428Cu;
            goto label_41428c;
        }
    }
    ctx->pc = 0x414268u;
    // 0x414268: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x414268u;
    {
        const bool branch_taken_0x414268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414268u;
        // 0x41426c: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414268) {
            ctx->pc = 0x414274u;
            goto label_414274;
        }
    }
    ctx->pc = 0x414270u;
    // 0x414270: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x414270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_414274:
    // 0x414274: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x414274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x414278: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x414278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x41427c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x41427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x414280: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x414280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x414284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x414288: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x414288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_41428c:
    // 0x41428c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x41428Cu;
    {
        const bool branch_taken_0x41428c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x41428c) {
            ctx->pc = 0x4142D0u;
            goto label_4142d0;
        }
    }
    ctx->pc = 0x414294u;
    // 0x414294: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x414294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x414298: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x414298u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x41429c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4142a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4142A0u;
    {
        const bool branch_taken_0x4142a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4142a0) {
            ctx->pc = 0x4142D0u;
            goto label_4142d0;
        }
    }
    ctx->pc = 0x4142A8u;
    // 0x4142a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4142a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4142ac: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4142acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4142b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4142b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4142b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4142B4u;
    {
        const bool branch_taken_0x4142b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4142b4) {
            ctx->pc = 0x4142B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4142B4u;
            // 0x4142b8: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4142BCu;
            goto label_4142bc;
        }
    }
    ctx->pc = 0x4142BCu;
label_4142bc:
    // 0x4142bc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4142bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4142c0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4142c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4142c4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4142c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4142c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4142c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4142cc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4142ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4142d0:
    // 0x4142d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4142D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4142D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4142D8u;
    // 0x4142d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4142d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4142dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4142dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4142e0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4142e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4142e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4142e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4142e8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4142e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x4142ec: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x4142ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x4142f0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4142f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4142f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4142f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4142f8: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4142F8u;
    {
        const bool branch_taken_0x4142f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4142F8u;
        // 0x4142fc: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4142f8) {
            ctx->pc = 0x414390u;
            goto label_414390;
        }
    }
    ctx->pc = 0x414300u;
    // 0x414300: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x414300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x414304: 0x0  nop
    ctx->pc = 0x414304u;
    // NOP
label_414308:
    // 0x414308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x414308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x41430c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41430Cu;
    {
        const bool branch_taken_0x41430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41430Cu;
        // 0x414310: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41430c) {
            ctx->pc = 0x414350u;
            goto label_414350;
        }
    }
    ctx->pc = 0x414314u;
    // 0x414314: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x414314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x414318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x414318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41431c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x41431cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x414320: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x414320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x414324: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x414324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x414328: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x414328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x41432c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x41432Cu;
    {
        const bool branch_taken_0x41432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41432c) {
            ctx->pc = 0x414330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41432Cu;
            // 0x414330: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414334u;
            goto label_414334;
        }
    }
    ctx->pc = 0x414334u;
label_414334:
    // 0x414334: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x414334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x414338: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x414338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x41433c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x41433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x414340: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x414340u;
    {
        const bool branch_taken_0x414340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414340) {
            ctx->pc = 0x414344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414340u;
            // 0x414344: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414384u;
            goto label_414384;
        }
    }
    ctx->pc = 0x414348u;
    // 0x414348: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x414348u;
    {
        const bool branch_taken_0x414348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414348u;
        // 0x41434c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414348) {
            ctx->pc = 0x414388u;
            goto label_414388;
        }
    }
    ctx->pc = 0x414350u;
label_414350:
    // 0x414350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x414350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x414354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x414354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x414358: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x414358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x41435c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x41435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x414360: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x414360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x414364: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x414364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x414368: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x414368u;
    {
        const bool branch_taken_0x414368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414368) {
            ctx->pc = 0x41436Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414368u;
            // 0x41436c: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414370u;
            goto label_414370;
        }
    }
    ctx->pc = 0x414370u;
label_414370:
    // 0x414370: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x414370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x414374: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x414374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x414378: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x414378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x41437c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x41437Cu;
    {
        const bool branch_taken_0x41437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41437c) {
            ctx->pc = 0x414380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41437Cu;
            // 0x414380: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414384u;
            goto label_414384;
        }
    }
    ctx->pc = 0x414384u;
label_414384:
    // 0x414384: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x414384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_414388:
    // 0x414388: 0x5480ffdf  bnel        $a0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x414388u;
    {
        const bool branch_taken_0x414388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x414388) {
            ctx->pc = 0x41438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414388u;
            // 0x41438c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414308;
        }
    }
    ctx->pc = 0x414390u;
label_414390:
    // 0x414390: 0x3e00008  jr          $ra
    ctx->pc = 0x414390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414390u;
        // 0x414394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414398u;
}
