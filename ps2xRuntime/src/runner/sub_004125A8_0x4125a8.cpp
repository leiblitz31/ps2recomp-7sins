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

// Function: sub_004125A8
// Address: 0x4125a8 - 0x4126b8
void sub_004125A8_0x4125a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004125A8_0x4125a8");
#endif

    switch (ctx->pc) {
        case 0x4125a8u: goto label_4125a8;
        case 0x4125acu: goto label_4125ac;
        case 0x4125b0u: goto label_4125b0;
        case 0x4125b4u: goto label_4125b4;
        case 0x4125b8u: goto label_4125b8;
        case 0x4125bcu: goto label_4125bc;
        case 0x4125c0u: goto label_4125c0;
        case 0x4125c4u: goto label_4125c4;
        case 0x4125c8u: goto label_4125c8;
        case 0x4125ccu: goto label_4125cc;
        case 0x4125d0u: goto label_4125d0;
        case 0x4125d4u: goto label_4125d4;
        case 0x4125d8u: goto label_4125d8;
        case 0x4125dcu: goto label_4125dc;
        case 0x4125e0u: goto label_4125e0;
        case 0x4125e4u: goto label_4125e4;
        case 0x4125e8u: goto label_4125e8;
        case 0x4125ecu: goto label_4125ec;
        case 0x4125f0u: goto label_4125f0;
        case 0x4125f4u: goto label_4125f4;
        case 0x4125f8u: goto label_4125f8;
        case 0x4125fcu: goto label_4125fc;
        case 0x412600u: goto label_412600;
        case 0x412604u: goto label_412604;
        case 0x412608u: goto label_412608;
        case 0x41260cu: goto label_41260c;
        case 0x412610u: goto label_412610;
        case 0x412614u: goto label_412614;
        case 0x412618u: goto label_412618;
        case 0x41261cu: goto label_41261c;
        case 0x412620u: goto label_412620;
        case 0x412624u: goto label_412624;
        case 0x412628u: goto label_412628;
        case 0x41262cu: goto label_41262c;
        case 0x412630u: goto label_412630;
        case 0x412634u: goto label_412634;
        case 0x412638u: goto label_412638;
        case 0x41263cu: goto label_41263c;
        case 0x412640u: goto label_412640;
        case 0x412644u: goto label_412644;
        case 0x412648u: goto label_412648;
        case 0x41264cu: goto label_41264c;
        case 0x412650u: goto label_412650;
        case 0x412654u: goto label_412654;
        case 0x412658u: goto label_412658;
        case 0x41265cu: goto label_41265c;
        case 0x412660u: goto label_412660;
        case 0x412664u: goto label_412664;
        case 0x412668u: goto label_412668;
        case 0x41266cu: goto label_41266c;
        case 0x412670u: goto label_412670;
        case 0x412674u: goto label_412674;
        case 0x412678u: goto label_412678;
        case 0x41267cu: goto label_41267c;
        case 0x412680u: goto label_412680;
        case 0x412684u: goto label_412684;
        case 0x412688u: goto label_412688;
        case 0x41268cu: goto label_41268c;
        case 0x412690u: goto label_412690;
        case 0x412694u: goto label_412694;
        case 0x412698u: goto label_412698;
        case 0x41269cu: goto label_41269c;
        case 0x4126a0u: goto label_4126a0;
        case 0x4126a4u: goto label_4126a4;
        case 0x4126a8u: goto label_4126a8;
        case 0x4126acu: goto label_4126ac;
        case 0x4126b0u: goto label_4126b0;
        case 0x4126b4u: goto label_4126b4;
        default: break;
    }

    ctx->pc = 0x4125a8u;

label_4125a8:
    // 0x4125a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4125a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4125ac:
    // 0x4125ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4125acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4125b0:
    // 0x4125b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4125b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4125b4:
    // 0x4125b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4125b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4125b8:
    // 0x4125b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4125b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4125bc:
    // 0x4125bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4125bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4125c0:
    // 0x4125c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4125c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4125c4:
    // 0x4125c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4125c8:
    if (ctx->pc == 0x4125C8u) {
        ctx->pc = 0x4125C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125C4u;
        // 0x4125c8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125CCu;
        goto label_4125cc;
    }
    ctx->pc = 0x4125C4u;
    {
        const bool branch_taken_0x4125c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4125C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125C4u;
        // 0x4125c8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125c4) {
            ctx->pc = 0x412600u;
            goto label_412600;
        }
    }
    ctx->pc = 0x4125CCu;
label_4125cc:
    // 0x4125cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4125d0:
    if (ctx->pc == 0x4125D0u) {
        ctx->pc = 0x4125D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125CCu;
        // 0x4125d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125D4u;
        goto label_4125d4;
    }
    ctx->pc = 0x4125CCu;
    {
        const bool branch_taken_0x4125cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4125D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125CCu;
        // 0x4125d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125cc) {
            ctx->pc = 0x4125E4u;
            goto label_4125e4;
        }
    }
    ctx->pc = 0x4125D4u;
label_4125d4:
    // 0x4125d4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_4125d8:
    if (ctx->pc == 0x4125D8u) {
        ctx->pc = 0x4125D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125D4u;
        // 0x4125d8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125DCu;
        goto label_4125dc;
    }
    ctx->pc = 0x4125D4u;
    {
        const bool branch_taken_0x4125d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4125D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125D4u;
        // 0x4125d8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125d4) {
            ctx->pc = 0x412650u;
            goto label_412650;
        }
    }
    ctx->pc = 0x4125DCu;
label_4125dc:
    // 0x4125dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_4125e0:
    if (ctx->pc == 0x4125E0u) {
        ctx->pc = 0x4125E4u;
        goto label_4125e4;
    }
    ctx->pc = 0x4125DCu;
    {
        const bool branch_taken_0x4125dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4125dc) {
            ctx->pc = 0x412658u;
            goto label_412658;
        }
    }
    ctx->pc = 0x4125E4u;
label_4125e4:
    // 0x4125e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4125e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4125e8:
    // 0x4125e8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_4125ec:
    if (ctx->pc == 0x4125ECu) {
        ctx->pc = 0x4125ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125E8u;
        // 0x4125ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125F0u;
        goto label_4125f0;
    }
    ctx->pc = 0x4125E8u;
    {
        const bool branch_taken_0x4125e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4125ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125E8u;
        // 0x4125ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125e8) {
            ctx->pc = 0x412610u;
            goto label_412610;
        }
    }
    ctx->pc = 0x4125F0u;
label_4125f0:
    // 0x4125f0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4125f4:
    if (ctx->pc == 0x4125F4u) {
        ctx->pc = 0x4125F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125F0u;
        // 0x4125f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125F8u;
        goto label_4125f8;
    }
    ctx->pc = 0x4125F0u;
    {
        const bool branch_taken_0x4125f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4125F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125F0u;
        // 0x4125f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125f0) {
            ctx->pc = 0x41263Cu;
            goto label_41263c;
        }
    }
    ctx->pc = 0x4125F8u;
label_4125f8:
    // 0x4125f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4125fc:
    if (ctx->pc == 0x4125FCu) {
        ctx->pc = 0x4125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125F8u;
        // 0x4125fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412600u;
        goto label_412600;
    }
    ctx->pc = 0x4125F8u;
    {
        const bool branch_taken_0x4125f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125F8u;
        // 0x4125fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125f8) {
            ctx->pc = 0x412658u;
            goto label_412658;
        }
    }
    ctx->pc = 0x412600u;
label_412600:
    // 0x412600: 0xc0f0af2  jal         func_3C2BC8
label_412604:
    if (ctx->pc == 0x412604u) {
        ctx->pc = 0x412604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412600u;
        // 0x412604: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412608u;
        goto label_412608;
    }
    ctx->pc = 0x412600u;
    SET_GPR_U32(ctx, 31, 0x412608u);
    ctx->pc = 0x412604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412600u;
    // 0x412604: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x412600u, 0x412608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412608u;
label_412608:
    // 0x412608: 0x1000001a  b           . + 4 + (0x1A << 2)
label_41260c:
    if (ctx->pc == 0x41260Cu) {
        ctx->pc = 0x41260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412608u;
        // 0x41260c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x412610u;
        goto label_412610;
    }
    ctx->pc = 0x412608u;
    {
        const bool branch_taken_0x412608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412608u;
        // 0x41260c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x412608) {
            ctx->pc = 0x412674u;
            goto label_412674;
        }
    }
    ctx->pc = 0x412610u;
label_412610:
    // 0x412610: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x412610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_412614:
    // 0x412614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x412614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_412618:
    // 0x412618: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_41261c:
    if (ctx->pc == 0x41261Cu) {
        ctx->pc = 0x41261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412618u;
        // 0x41261c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412620u;
        goto label_412620;
    }
    ctx->pc = 0x412618u;
    {
        const bool branch_taken_0x412618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412618u;
        // 0x41261c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412618) {
            ctx->pc = 0x412674u;
            goto label_412674;
        }
    }
    ctx->pc = 0x412620u;
label_412620:
    // 0x412620: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_412624:
    if (ctx->pc == 0x412624u) {
        ctx->pc = 0x412624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412620u;
        // 0x412624: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412628u;
        goto label_412628;
    }
    ctx->pc = 0x412620u;
    {
        const bool branch_taken_0x412620 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x412620) {
            ctx->pc = 0x412624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412620u;
            // 0x412624: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412678u;
            goto label_412678;
        }
    }
    ctx->pc = 0x412628u;
label_412628:
    // 0x412628: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x412628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_41262c:
    // 0x41262c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x41262cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_412630:
    // 0x412630: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x412630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412634:
    // 0x412634: 0x1000000f  b           . + 4 + (0xF << 2)
label_412638:
    if (ctx->pc == 0x412638u) {
        ctx->pc = 0x412638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412634u;
        // 0x412638: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41263Cu;
        goto label_41263c;
    }
    ctx->pc = 0x412634u;
    {
        const bool branch_taken_0x412634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412634u;
        // 0x412638: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412634) {
            ctx->pc = 0x412674u;
            goto label_412674;
        }
    }
    ctx->pc = 0x41263Cu;
label_41263c:
    // 0x41263c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x41263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_412640:
    // 0x412640: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_412644:
    if (ctx->pc == 0x412644u) {
        ctx->pc = 0x412644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412640u;
        // 0x412644: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412648u;
        goto label_412648;
    }
    ctx->pc = 0x412640u;
    {
        const bool branch_taken_0x412640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412640u;
        // 0x412644: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412640) {
            ctx->pc = 0x412674u;
            goto label_412674;
        }
    }
    ctx->pc = 0x412648u;
label_412648:
    // 0x412648: 0x40f809  jalr        $v0
label_41264c:
    if (ctx->pc == 0x41264Cu) {
        ctx->pc = 0x41264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412648u;
        // 0x41264c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412650u;
        goto label_412650;
    }
    ctx->pc = 0x412648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412650u);
        ctx->pc = 0x41264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412648u;
        // 0x41264c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412648u, 0x412650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412650u;
label_412650:
    // 0x412650: 0x10000008  b           . + 4 + (0x8 << 2)
label_412654:
    if (ctx->pc == 0x412654u) {
        ctx->pc = 0x412654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412650u;
        // 0x412654: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412658u;
        goto label_412658;
    }
    ctx->pc = 0x412650u;
    {
        const bool branch_taken_0x412650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412650u;
        // 0x412654: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412650) {
            ctx->pc = 0x412674u;
            goto label_412674;
        }
    }
    ctx->pc = 0x412658u;
label_412658:
    // 0x412658: 0xc1035f6  jal         func_40D7D8
label_41265c:
    if (ctx->pc == 0x41265Cu) {
        ctx->pc = 0x41265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412658u;
        // 0x41265c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412660u;
        goto label_412660;
    }
    ctx->pc = 0x412658u;
    SET_GPR_U32(ctx, 31, 0x412660u);
    ctx->pc = 0x41265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412658u;
    // 0x41265c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x412658u, 0x412660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412660u;
label_412660:
    // 0x412660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x412660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_412664:
    // 0x412664: 0xc103628  jal         func_40D8A0
label_412668:
    if (ctx->pc == 0x412668u) {
        ctx->pc = 0x412668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412664u;
        // 0x412668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41266Cu;
        goto label_41266c;
    }
    ctx->pc = 0x412664u;
    SET_GPR_U32(ctx, 31, 0x41266Cu);
    ctx->pc = 0x412668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412664u;
    // 0x412668: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x412664u, 0x41266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41266Cu;
label_41266c:
    // 0x41266c: 0x1000000c  b           . + 4 + (0xC << 2)
label_412670:
    if (ctx->pc == 0x412670u) {
        ctx->pc = 0x412670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41266Cu;
        // 0x412670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412674u;
        goto label_412674;
    }
    ctx->pc = 0x41266Cu;
    {
        const bool branch_taken_0x41266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41266Cu;
        // 0x412670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41266c) {
            ctx->pc = 0x4126A0u;
            goto label_4126a0;
        }
    }
    ctx->pc = 0x412674u;
label_412674:
    // 0x412674: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x412674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_412678:
    // 0x412678: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41267c:
    if (ctx->pc == 0x41267Cu) {
        ctx->pc = 0x41267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412678u;
        // 0x41267c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412680u;
        goto label_412680;
    }
    ctx->pc = 0x412678u;
    {
        const bool branch_taken_0x412678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412678u;
        // 0x41267c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412678) {
            ctx->pc = 0x41269Cu;
            goto label_41269c;
        }
    }
    ctx->pc = 0x412680u;
label_412680:
    // 0x412680: 0x8f86bdd8  lw          $a2, -0x4228($gp)
    ctx->pc = 0x412680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950360)));
label_412684:
    // 0x412684: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x412684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_412688:
    // 0x412688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x412688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41268c:
    // 0x41268c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x41268cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_412690:
    // 0x412690: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x412690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_412694:
    // 0x412694: 0x40f809  jalr        $v0
label_412698:
    if (ctx->pc == 0x412698u) {
        ctx->pc = 0x412698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412694u;
        // 0x412698: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41269Cu;
        goto label_41269c;
    }
    ctx->pc = 0x412694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41269Cu);
        ctx->pc = 0x412698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412694u;
        // 0x412698: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412694u, 0x41269Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41269Cu;
label_41269c:
    // 0x41269c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41269cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4126a0:
    // 0x4126a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4126a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4126a4:
    // 0x4126a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4126a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4126a8:
    // 0x4126a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4126a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4126ac:
    // 0x4126ac: 0x3e00008  jr          $ra
label_4126b0:
    if (ctx->pc == 0x4126B0u) {
        ctx->pc = 0x4126B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126ACu;
        // 0x4126b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126B4u;
        goto label_4126b4;
    }
    ctx->pc = 0x4126ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4126B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126ACu;
        // 0x4126b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4126ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4126B4u;
label_4126b4:
    // 0x4126b4: 0x0  nop
    ctx->pc = 0x4126b4u;
    // NOP
    ctx->pc = 0x4126b8u;
}
