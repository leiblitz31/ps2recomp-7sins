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

// Function: sub_004123B0
// Address: 0x4123b0 - 0x4124f8
void sub_004123B0_0x4123b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004123B0_0x4123b0");
#endif

    switch (ctx->pc) {
        case 0x4123b0u: goto label_4123b0;
        case 0x4123b4u: goto label_4123b4;
        case 0x4123b8u: goto label_4123b8;
        case 0x4123bcu: goto label_4123bc;
        case 0x4123c0u: goto label_4123c0;
        case 0x4123c4u: goto label_4123c4;
        case 0x4123c8u: goto label_4123c8;
        case 0x4123ccu: goto label_4123cc;
        case 0x4123d0u: goto label_4123d0;
        case 0x4123d4u: goto label_4123d4;
        case 0x4123d8u: goto label_4123d8;
        case 0x4123dcu: goto label_4123dc;
        case 0x4123e0u: goto label_4123e0;
        case 0x4123e4u: goto label_4123e4;
        case 0x4123e8u: goto label_4123e8;
        case 0x4123ecu: goto label_4123ec;
        case 0x4123f0u: goto label_4123f0;
        case 0x4123f4u: goto label_4123f4;
        case 0x4123f8u: goto label_4123f8;
        case 0x4123fcu: goto label_4123fc;
        case 0x412400u: goto label_412400;
        case 0x412404u: goto label_412404;
        case 0x412408u: goto label_412408;
        case 0x41240cu: goto label_41240c;
        case 0x412410u: goto label_412410;
        case 0x412414u: goto label_412414;
        case 0x412418u: goto label_412418;
        case 0x41241cu: goto label_41241c;
        case 0x412420u: goto label_412420;
        case 0x412424u: goto label_412424;
        case 0x412428u: goto label_412428;
        case 0x41242cu: goto label_41242c;
        case 0x412430u: goto label_412430;
        case 0x412434u: goto label_412434;
        case 0x412438u: goto label_412438;
        case 0x41243cu: goto label_41243c;
        case 0x412440u: goto label_412440;
        case 0x412444u: goto label_412444;
        case 0x412448u: goto label_412448;
        case 0x41244cu: goto label_41244c;
        case 0x412450u: goto label_412450;
        case 0x412454u: goto label_412454;
        case 0x412458u: goto label_412458;
        case 0x41245cu: goto label_41245c;
        case 0x412460u: goto label_412460;
        case 0x412464u: goto label_412464;
        case 0x412468u: goto label_412468;
        case 0x41246cu: goto label_41246c;
        case 0x412470u: goto label_412470;
        case 0x412474u: goto label_412474;
        case 0x412478u: goto label_412478;
        case 0x41247cu: goto label_41247c;
        case 0x412480u: goto label_412480;
        case 0x412484u: goto label_412484;
        case 0x412488u: goto label_412488;
        case 0x41248cu: goto label_41248c;
        case 0x412490u: goto label_412490;
        case 0x412494u: goto label_412494;
        case 0x412498u: goto label_412498;
        case 0x41249cu: goto label_41249c;
        case 0x4124a0u: goto label_4124a0;
        case 0x4124a4u: goto label_4124a4;
        case 0x4124a8u: goto label_4124a8;
        case 0x4124acu: goto label_4124ac;
        case 0x4124b0u: goto label_4124b0;
        case 0x4124b4u: goto label_4124b4;
        case 0x4124b8u: goto label_4124b8;
        case 0x4124bcu: goto label_4124bc;
        case 0x4124c0u: goto label_4124c0;
        case 0x4124c4u: goto label_4124c4;
        case 0x4124c8u: goto label_4124c8;
        case 0x4124ccu: goto label_4124cc;
        case 0x4124d0u: goto label_4124d0;
        case 0x4124d4u: goto label_4124d4;
        case 0x4124d8u: goto label_4124d8;
        case 0x4124dcu: goto label_4124dc;
        case 0x4124e0u: goto label_4124e0;
        case 0x4124e4u: goto label_4124e4;
        case 0x4124e8u: goto label_4124e8;
        case 0x4124ecu: goto label_4124ec;
        case 0x4124f0u: goto label_4124f0;
        case 0x4124f4u: goto label_4124f4;
        default: break;
    }

    ctx->pc = 0x4123b0u;

label_4123b0:
    // 0x4123b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4123b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4123b4:
    // 0x4123b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4123b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4123b8:
    // 0x4123b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4123b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4123bc:
    // 0x4123bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4123bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4123c0:
    // 0x4123c0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_4123c4:
    if (ctx->pc == 0x4123C4u) {
        ctx->pc = 0x4123C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123C0u;
        // 0x4123c4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123C8u;
        goto label_4123c8;
    }
    ctx->pc = 0x4123C0u;
    {
        const bool branch_taken_0x4123c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4123C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123C0u;
        // 0x4123c4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123c0) {
            ctx->pc = 0x4123D0u;
            goto label_4123d0;
        }
    }
    ctx->pc = 0x4123C8u;
label_4123c8:
    // 0x4123c8: 0x10000041  b           . + 4 + (0x41 << 2)
label_4123cc:
    if (ctx->pc == 0x4123CCu) {
        ctx->pc = 0x4123CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123C8u;
        // 0x4123cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123D0u;
        goto label_4123d0;
    }
    ctx->pc = 0x4123C8u;
    {
        const bool branch_taken_0x4123c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4123CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123C8u;
        // 0x4123cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123c8) {
            ctx->pc = 0x4124D0u;
            goto label_4124d0;
        }
    }
    ctx->pc = 0x4123D0u;
label_4123d0:
    // 0x4123d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4123d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4123d4:
    // 0x4123d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4123d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4123d8:
    // 0x4123d8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_4123dc:
    if (ctx->pc == 0x4123DCu) {
        ctx->pc = 0x4123DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123D8u;
        // 0x4123dc: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123E0u;
        goto label_4123e0;
    }
    ctx->pc = 0x4123D8u;
    {
        const bool branch_taken_0x4123d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4123DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123D8u;
        // 0x4123dc: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123d8) {
            ctx->pc = 0x412450u;
            goto label_412450;
        }
    }
    ctx->pc = 0x4123E0u;
label_4123e0:
    // 0x4123e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4123e4:
    if (ctx->pc == 0x4123E4u) {
        ctx->pc = 0x4123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123E0u;
        // 0x4123e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123E8u;
        goto label_4123e8;
    }
    ctx->pc = 0x4123E0u;
    {
        const bool branch_taken_0x4123e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123E0u;
        // 0x4123e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123e0) {
            ctx->pc = 0x4123F8u;
            goto label_4123f8;
        }
    }
    ctx->pc = 0x4123E8u;
label_4123e8:
    // 0x4123e8: 0x5062002a  beql        $v1, $v0, . + 4 + (0x2A << 2)
label_4123ec:
    if (ctx->pc == 0x4123ECu) {
        ctx->pc = 0x4123ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123E8u;
        // 0x4123ec: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123F0u;
        goto label_4123f0;
    }
    ctx->pc = 0x4123E8u;
    {
        const bool branch_taken_0x4123e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4123e8) {
            ctx->pc = 0x4123ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4123E8u;
            // 0x4123ec: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412494u;
            goto label_412494;
        }
    }
    ctx->pc = 0x4123F0u;
label_4123f0:
    // 0x4123f0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4123f4:
    if (ctx->pc == 0x4123F4u) {
        ctx->pc = 0x4123F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123F0u;
        // 0x4123f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4123F8u;
        goto label_4123f8;
    }
    ctx->pc = 0x4123F0u;
    {
        const bool branch_taken_0x4123f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4123F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123F0u;
        // 0x4123f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123f0) {
            ctx->pc = 0x4124B0u;
            goto label_4124b0;
        }
    }
    ctx->pc = 0x4123F8u;
label_4123f8:
    // 0x4123f8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_4123fc:
    if (ctx->pc == 0x4123FCu) {
        ctx->pc = 0x4123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123F8u;
        // 0x4123fc: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412400u;
        goto label_412400;
    }
    ctx->pc = 0x4123F8u;
    {
        const bool branch_taken_0x4123f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123F8u;
        // 0x4123fc: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4123f8) {
            ctx->pc = 0x4124A8u;
            goto label_4124a8;
        }
    }
    ctx->pc = 0x412400u;
label_412400:
    // 0x412400: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x412400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412404:
    // 0x412404: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x412404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_412408:
    // 0x412408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x412408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41240c:
    // 0x41240c: 0xc0f0b30  jal         func_3C2CC0
label_412410:
    if (ctx->pc == 0x412410u) {
        ctx->pc = 0x412410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41240Cu;
        // 0x412410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412414u;
        goto label_412414;
    }
    ctx->pc = 0x41240Cu;
    SET_GPR_U32(ctx, 31, 0x412414u);
    ctx->pc = 0x412410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41240Cu;
    // 0x412410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x41240Cu, 0x412414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412414u;
label_412414:
    // 0x412414: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_412418:
    if (ctx->pc == 0x412418u) {
        ctx->pc = 0x412418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412414u;
        // 0x412418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41241Cu;
        goto label_41241c;
    }
    ctx->pc = 0x412414u;
    {
        const bool branch_taken_0x412414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412414u;
        // 0x412418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412414) {
            ctx->pc = 0x4124D0u;
            goto label_4124d0;
        }
    }
    ctx->pc = 0x41241Cu;
label_41241c:
    // 0x41241c: 0xc0f0b88  jal         func_3C2E20
label_412420:
    if (ctx->pc == 0x412420u) {
        ctx->pc = 0x412420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41241Cu;
        // 0x412420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412424u;
        goto label_412424;
    }
    ctx->pc = 0x41241Cu;
    SET_GPR_U32(ctx, 31, 0x412424u);
    ctx->pc = 0x412420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41241Cu;
    // 0x412420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E20u, 0x41241Cu, 0x412424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412424u;
label_412424:
    // 0x412424: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_412428:
    if (ctx->pc == 0x412428u) {
        ctx->pc = 0x412428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412424u;
        // 0x412428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41242Cu;
        goto label_41242c;
    }
    ctx->pc = 0x412424u;
    {
        const bool branch_taken_0x412424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412424u;
        // 0x412428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412424) {
            ctx->pc = 0x4124CCu;
            goto label_4124cc;
        }
    }
    ctx->pc = 0x41242Cu;
label_41242c:
    // 0x41242c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x41242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_412430:
    // 0x412430: 0xc1035f6  jal         func_40D7D8
label_412434:
    if (ctx->pc == 0x412434u) {
        ctx->pc = 0x412434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412430u;
        // 0x412434: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412438u;
        goto label_412438;
    }
    ctx->pc = 0x412430u;
    SET_GPR_U32(ctx, 31, 0x412438u);
    ctx->pc = 0x412434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412430u;
    // 0x412434: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412430u, 0x412438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412438u;
label_412438:
    // 0x412438: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x412438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41243c:
    // 0x41243c: 0xc103628  jal         func_40D8A0
label_412440:
    if (ctx->pc == 0x412440u) {
        ctx->pc = 0x412440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41243Cu;
        // 0x412440: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412444u;
        goto label_412444;
    }
    ctx->pc = 0x41243Cu;
    SET_GPR_U32(ctx, 31, 0x412444u);
    ctx->pc = 0x412440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41243Cu;
    // 0x412440: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41243Cu, 0x412444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412444u;
label_412444:
    // 0x412444: 0x10000022  b           . + 4 + (0x22 << 2)
label_412448:
    if (ctx->pc == 0x412448u) {
        ctx->pc = 0x412448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412444u;
        // 0x412448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41244Cu;
        goto label_41244c;
    }
    ctx->pc = 0x412444u;
    {
        const bool branch_taken_0x412444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412444u;
        // 0x412448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412444) {
            ctx->pc = 0x4124D0u;
            goto label_4124d0;
        }
    }
    ctx->pc = 0x41244Cu;
label_41244c:
    // 0x41244c: 0x0  nop
    ctx->pc = 0x41244cu;
    // NOP
label_412450:
    // 0x412450: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x412450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412454:
    // 0x412454: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x412454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_412458:
    // 0x412458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x412458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_41245c:
    // 0x41245c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x41245cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_412460:
    // 0x412460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_412464:
    if (ctx->pc == 0x412464u) {
        ctx->pc = 0x412464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412460u;
        // 0x412464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412468u;
        goto label_412468;
    }
    ctx->pc = 0x412460u;
    {
        const bool branch_taken_0x412460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412460u;
        // 0x412464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412460) {
            ctx->pc = 0x412488u;
            goto label_412488;
        }
    }
    ctx->pc = 0x412468u;
label_412468:
    // 0x412468: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x412468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_41246c:
    // 0x41246c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x41246cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_412470:
    // 0x412470: 0xc1035f6  jal         func_40D7D8
label_412474:
    if (ctx->pc == 0x412474u) {
        ctx->pc = 0x412474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412470u;
        // 0x412474: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412478u;
        goto label_412478;
    }
    ctx->pc = 0x412470u;
    SET_GPR_U32(ctx, 31, 0x412478u);
    ctx->pc = 0x412474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412470u;
    // 0x412474: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412470u, 0x412478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412478u;
label_412478:
    // 0x412478: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x412478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_41247c:
    // 0x41247c: 0x10000011  b           . + 4 + (0x11 << 2)
label_412480:
    if (ctx->pc == 0x412480u) {
        ctx->pc = 0x412480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41247Cu;
        // 0x412480: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412484u;
        goto label_412484;
    }
    ctx->pc = 0x41247Cu;
    {
        const bool branch_taken_0x41247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41247Cu;
        // 0x412480: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41247c) {
            ctx->pc = 0x4124C4u;
            goto label_4124c4;
        }
    }
    ctx->pc = 0x412484u;
label_412484:
    // 0x412484: 0x0  nop
    ctx->pc = 0x412484u;
    // NOP
label_412488:
    // 0x412488: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x412488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_41248c:
    // 0x41248c: 0x10000010  b           . + 4 + (0x10 << 2)
label_412490:
    if (ctx->pc == 0x412490u) {
        ctx->pc = 0x412490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41248Cu;
        // 0x412490: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412494u;
        goto label_412494;
    }
    ctx->pc = 0x41248Cu;
    {
        const bool branch_taken_0x41248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41248Cu;
        // 0x412490: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41248c) {
            ctx->pc = 0x4124D0u;
            goto label_4124d0;
        }
    }
    ctx->pc = 0x412494u;
label_412494:
    // 0x412494: 0x40f809  jalr        $v0
label_412498:
    if (ctx->pc == 0x412498u) {
        ctx->pc = 0x412498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412494u;
        // 0x412498: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41249Cu;
        goto label_41249c;
    }
    ctx->pc = 0x412494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41249Cu);
        ctx->pc = 0x412498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412494u;
        // 0x412498: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412494u, 0x41249Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41249Cu;
label_41249c:
    // 0x41249c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x41249cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4124a0:
    // 0x4124a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_4124a4:
    if (ctx->pc == 0x4124A4u) {
        ctx->pc = 0x4124A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124A0u;
        // 0x4124a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124A8u;
        goto label_4124a8;
    }
    ctx->pc = 0x4124A0u;
    {
        const bool branch_taken_0x4124a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4124A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124A0u;
        // 0x4124a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4124a0) {
            ctx->pc = 0x4124D0u;
            goto label_4124d0;
        }
    }
    ctx->pc = 0x4124A8u;
label_4124a8:
    // 0x4124a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4124a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4124ac:
    // 0x4124ac: 0x0  nop
    ctx->pc = 0x4124acu;
    // NOP
label_4124b0:
    // 0x4124b0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x4124b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4124b4:
    // 0x4124b4: 0xc1035f6  jal         func_40D7D8
label_4124b8:
    if (ctx->pc == 0x4124B8u) {
        ctx->pc = 0x4124B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124B4u;
        // 0x4124b8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124BCu;
        goto label_4124bc;
    }
    ctx->pc = 0x4124B4u;
    SET_GPR_U32(ctx, 31, 0x4124BCu);
    ctx->pc = 0x4124B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4124B4u;
    // 0x4124b8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4124B4u, 0x4124BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4124BCu;
label_4124bc:
    // 0x4124bc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4124bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_4124c0:
    // 0x4124c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4124c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4124c4:
    // 0x4124c4: 0xc103628  jal         func_40D8A0
label_4124c8:
    if (ctx->pc == 0x4124C8u) {
        ctx->pc = 0x4124CCu;
        goto label_4124cc;
    }
    ctx->pc = 0x4124C4u;
    SET_GPR_U32(ctx, 31, 0x4124CCu);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4124C4u, 0x4124CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4124CCu;
label_4124cc:
    // 0x4124cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4124ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4124d0:
    // 0x4124d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4124d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4124d4:
    // 0x4124d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4124d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4124d8:
    // 0x4124d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4124d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4124dc:
    // 0x4124dc: 0x3e00008  jr          $ra
label_4124e0:
    if (ctx->pc == 0x4124E0u) {
        ctx->pc = 0x4124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124DCu;
        // 0x4124e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124E4u;
        goto label_4124e4;
    }
    ctx->pc = 0x4124DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4124E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124DCu;
        // 0x4124e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4124DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4124E4u;
label_4124e4:
    // 0x4124e4: 0x0  nop
    ctx->pc = 0x4124e4u;
    // NOP
label_4124e8:
    // 0x4124e8: 0xaf84ad38  sw          $a0, -0x52C8($gp)
    ctx->pc = 0x4124e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946104), GPR_U32(ctx, 4));
label_4124ec:
    // 0x4124ec: 0x3e00008  jr          $ra
label_4124f0:
    if (ctx->pc == 0x4124F0u) {
        ctx->pc = 0x4124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124ECu;
        // 0x4124f0: 0xaf85ad3c  sw          $a1, -0x52C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4124F4u;
        goto label_4124f4;
    }
    ctx->pc = 0x4124ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4124ECu;
        // 0x4124f0: 0xaf85ad3c  sw          $a1, -0x52C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4124ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4124F4u;
label_4124f4:
    // 0x4124f4: 0x0  nop
    ctx->pc = 0x4124f4u;
    // NOP
    ctx->pc = 0x4124f8u;
}
