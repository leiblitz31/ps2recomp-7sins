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

// Function: sub_00325350
// Address: 0x325350 - 0x325788
void sub_00325350_0x325350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325350_0x325350");
#endif

    switch (ctx->pc) {
        case 0x325374u: goto label_325374;
        case 0x325380u: goto label_325380;
        case 0x32538cu: goto label_32538c;
        case 0x3253b4u: goto label_3253b4;
        case 0x3253c0u: goto label_3253c0;
        case 0x3253ccu: goto label_3253cc;
        case 0x32540cu: goto label_32540c;
        case 0x325418u: goto label_325418;
        case 0x325448u: goto label_325448;
        case 0x3254d8u: goto label_3254d8;
        case 0x325568u: goto label_325568;
        case 0x325574u: goto label_325574;
        case 0x325580u: goto label_325580;
        case 0x325588u: goto label_325588;
        case 0x325594u: goto label_325594;
        case 0x3255a0u: goto label_3255a0;
        case 0x3255bcu: goto label_3255bc;
        case 0x3255fcu: goto label_3255fc;
        case 0x32560cu: goto label_32560c;
        case 0x325614u: goto label_325614;
        case 0x325680u: goto label_325680;
        case 0x325688u: goto label_325688;
        case 0x325698u: goto label_325698;
        case 0x3256c0u: goto label_3256c0;
        case 0x3256c8u: goto label_3256c8;
        case 0x325750u: goto label_325750;
        default: break;
    }

    ctx->pc = 0x325350u;

    // 0x325350: 0x8ef60000  lw          $s6, 0x0($s7)
    ctx->pc = 0x325350u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x325354: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x325354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x325358: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x325358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x32535c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x32535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x325360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x325360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325364: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x325364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x325368: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x325368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32536c: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x32536Cu;
    SET_GPR_U32(ctx, 31, 0x325374u);
    ctx->pc = 0x325370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32536Cu;
    // 0x325370: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x32536Cu, 0x325374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325374u;
label_325374:
    // 0x325374: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x325374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325378: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x325378u;
    SET_GPR_U32(ctx, 31, 0x325380u);
    ctx->pc = 0x32537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325378u;
    // 0x32537c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x325378u, 0x325380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325380u;
label_325380:
    // 0x325380: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x325380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325384: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x325384u;
    SET_GPR_U32(ctx, 31, 0x32538Cu);
    ctx->pc = 0x325388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325384u;
    // 0x325388: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x325384u, 0x32538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32538Cu;
label_32538c:
    // 0x32538c: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x32538Cu;
    {
        const bool branch_taken_0x32538c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x325390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32538Cu;
        // 0x325390: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32538c) {
            ctx->pc = 0x3253F4u;
            goto label_3253f4;
        }
    }
    ctx->pc = 0x325394u;
    // 0x325394: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x325394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x325398: 0x26fe0010  addiu       $fp, $s7, 0x10
    ctx->pc = 0x325398u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x32539c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x32539cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3253a0: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x3253a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3253a4: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x3253a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3253a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3253a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253ac: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x3253ACu;
    SET_GPR_U32(ctx, 31, 0x3253B4u);
    ctx->pc = 0x3253B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253ACu;
    // 0x3253b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3253ACu, 0x3253B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253B4u;
label_3253b4:
    // 0x3253b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3253b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3253b8: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x3253B8u;
    SET_GPR_U32(ctx, 31, 0x3253C0u);
    ctx->pc = 0x3253BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253B8u;
    // 0x3253bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3253B8u, 0x3253C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253C0u;
label_3253c0:
    // 0x3253c0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3253c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3253c4: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x3253C4u;
    SET_GPR_U32(ctx, 31, 0x3253CCu);
    ctx->pc = 0x3253C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3253C4u;
    // 0x3253c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3253C4u, 0x3253CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3253CCu;
label_3253cc:
    // 0x3253cc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3253ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3253d0: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x3253d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x3253d4: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x3253d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x3253d8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3253d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3253dc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3253dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x3253e0: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x3253e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x3253e4: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x3253e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3253e8: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x3253e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x3253ec: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3253ECu;
    {
        const bool branch_taken_0x3253ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3253F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3253ECu;
        // 0x3253f0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3253ec) {
            ctx->pc = 0x325544u;
            goto label_325544;
        }
    }
    ctx->pc = 0x3253F4u;
label_3253f4:
    // 0x3253f4: 0x8ed20010  lw          $s2, 0x10($s6)
    ctx->pc = 0x3253f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3253f8: 0x8ed0000c  lw          $s0, 0xC($s6)
    ctx->pc = 0x3253f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3253fc: 0x26fe0010  addiu       $fp, $s7, 0x10
    ctx->pc = 0x3253fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x325400: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x325400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325404: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x325404u;
    SET_GPR_U32(ctx, 31, 0x32540Cu);
    ctx->pc = 0x325408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325404u;
    // 0x325408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x325404u, 0x32540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32540Cu;
label_32540c:
    // 0x32540c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32540cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325410: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x325410u;
    SET_GPR_U32(ctx, 31, 0x325418u);
    ctx->pc = 0x325414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325410u;
    // 0x325414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x325410u, 0x325418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325418u;
label_325418:
    // 0x325418: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x325418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32541c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32541cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325420: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x325420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x325424: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x325424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x325428: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x325428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x32542c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x32542cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x325430: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x325430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x325434: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x325434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x325438: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x325438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x32543c: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x32543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x325440: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x325440u;
    {
        const bool branch_taken_0x325440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325440u;
        // 0x325444: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325440) {
            ctx->pc = 0x325544u;
            goto label_325544;
        }
    }
    ctx->pc = 0x325448u;
label_325448:
    // 0x325448: 0x1a00003a  blez        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x325448u;
    {
        const bool branch_taken_0x325448 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x32544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325448u;
        // 0x32544c: 0x24e80001  addiu       $t0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325448) {
            ctx->pc = 0x325534u;
            goto label_325534;
        }
    }
    ctx->pc = 0x325450u;
    // 0x325450: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x325450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x325454: 0x101023  negu        $v0, $s0
    ctx->pc = 0x325454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x325458: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x325458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x32545c: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x32545cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x325460: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x325460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x325464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325468: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x325468u;
    {
        const bool branch_taken_0x325468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325468u;
        // 0x32546c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325468) {
            ctx->pc = 0x3254D8u;
            goto label_3254d8;
        }
    }
    ctx->pc = 0x325470u;
    // 0x325470: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x325470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x325474: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x325474u;
    {
        const bool branch_taken_0x325474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325474u;
        // 0x325478: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325474) {
            ctx->pc = 0x3254B4u;
            goto label_3254b4;
        }
    }
    ctx->pc = 0x32547Cu;
    // 0x32547c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32547Cu;
    {
        const bool branch_taken_0x32547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32547Cu;
        // 0x325480: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32547c) {
            ctx->pc = 0x32549Cu;
            goto label_32549c;
        }
    }
    ctx->pc = 0x325484u;
    // 0x325484: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x325484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325488: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x325488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32548c: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x32548cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x325490: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x325490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x325494: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x325494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x325498: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x325498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_32549c:
    // 0x32549c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x32549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3254a0: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x3254a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3254a4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3254a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3254a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3254a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3254ac: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3254acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3254b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3254b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3254b4:
    // 0x3254b4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3254b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3254b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3254b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3254bc: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x3254bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3254c0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3254c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3254c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3254c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3254c8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3254c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3254cc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3254CCu;
    {
        const bool branch_taken_0x3254cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3254D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3254CCu;
        // 0x3254d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3254cc) {
            ctx->pc = 0x325534u;
            goto label_325534;
        }
    }
    ctx->pc = 0x3254D4u;
    // 0x3254d4: 0x0  nop
    ctx->pc = 0x3254d4u;
    // NOP
label_3254d8:
    // 0x3254d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3254d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3254dc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3254dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x3254e0: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x3254e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3254e4: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3254e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3254e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3254e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3254ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3254ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3254f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3254f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3254f4: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x3254f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3254f8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3254f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3254fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x325500: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x325500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x325504: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x325504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x325508: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x325508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32550c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x32550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x325510: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x325510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x325514: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x325514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x325518: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x325518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32551c: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x32551cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x325520: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x325520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x325524: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x325524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x325528: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x325528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x32552c: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x32552Cu;
    {
        const bool branch_taken_0x32552c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x325530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32552Cu;
        // 0x325530: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32552c) {
            ctx->pc = 0x3254D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3254d8;
        }
    }
    ctx->pc = 0x325534u;
label_325534:
    // 0x325534: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x325534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325538: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x325538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x32553c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x32553Cu;
    {
        const bool branch_taken_0x32553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32553c) {
            ctx->pc = 0x325448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325448;
        }
    }
    ctx->pc = 0x325544u;
label_325544:
    // 0x325544: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x325544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x325548: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325548u;
    {
        const bool branch_taken_0x325548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x32554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325548u;
        // 0x32554c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325548) {
            ctx->pc = 0x32555Cu;
            goto label_32555c;
        }
    }
    ctx->pc = 0x325550u;
    // 0x325550: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x325550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x325554: 0x1243000d  beq         $s2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x325554u;
    {
        const bool branch_taken_0x325554 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x325554) {
            ctx->pc = 0x32558Cu;
            goto label_32558c;
        }
    }
    ctx->pc = 0x32555Cu;
label_32555c:
    // 0x32555c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32555cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325560: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x325560u;
    SET_GPR_U32(ctx, 31, 0x325568u);
    ctx->pc = 0x325564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325560u;
    // 0x325564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x325560u, 0x325568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325568u;
label_325568:
    // 0x325568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x325568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32556c: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x32556Cu;
    SET_GPR_U32(ctx, 31, 0x325574u);
    ctx->pc = 0x325570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32556Cu;
    // 0x325570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x32556Cu, 0x325574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325574u;
label_325574:
    // 0x325574: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x325574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325578: 0xc107798  jal         func_41DE60
    ctx->pc = 0x325578u;
    SET_GPR_U32(ctx, 31, 0x325580u);
    ctx->pc = 0x32557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325578u;
    // 0x32557c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DE60u, 0x325578u, 0x325580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325580u;
label_325580:
    // 0x325580: 0xc10705c  jal         func_41C170
    ctx->pc = 0x325580u;
    SET_GPR_U32(ctx, 31, 0x325588u);
    ctx->pc = 0x325584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325580u;
    // 0x325584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x325580u, 0x325588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325588u;
label_325588:
    // 0x325588: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x325588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32558c:
    // 0x32558c: 0xc106a80  jal         func_41AA00
    ctx->pc = 0x32558Cu;
    SET_GPR_U32(ctx, 31, 0x325594u);
    ctx->pc = 0x325590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32558Cu;
    // 0x325590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AA00u, 0x32558Cu, 0x325594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325594u;
label_325594:
    // 0x325594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325598: 0xc106b0a  jal         func_41AC28
    ctx->pc = 0x325598u;
    SET_GPR_U32(ctx, 31, 0x3255A0u);
    ctx->pc = 0x32559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325598u;
    // 0x32559c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AC28u, 0x325598u, 0x3255A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255A0u;
label_3255a0:
    // 0x3255a0: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x3255a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3255a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3255a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255a8: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x3255a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3255ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3255acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3255b0: 0x8fa80054  lw          $t0, 0x54($sp)
    ctx->pc = 0x3255b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3255b4: 0xc107408  jal         func_41D020
    ctx->pc = 0x3255B4u;
    SET_GPR_U32(ctx, 31, 0x3255BCu);
    ctx->pc = 0x3255B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255B4u;
    // 0x3255b8: 0x8fa90058  lw          $t1, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D020u, 0x3255B4u, 0x3255BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255BCu;
label_3255bc:
    // 0x3255bc: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3255BCu;
    {
        const bool branch_taken_0x3255bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3255C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3255BCu;
        // 0x3255c0: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3255bc) {
            ctx->pc = 0x3255CCu;
            goto label_3255cc;
        }
    }
    ctx->pc = 0x3255C4u;
    // 0x3255c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3255C4u;
    {
        const bool branch_taken_0x3255c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3255C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3255C4u;
        // 0x3255c8: 0x90620023  lbu         $v0, 0x23($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3255c4) {
            ctx->pc = 0x3255D0u;
            goto label_3255d0;
        }
    }
    ctx->pc = 0x3255CCu;
label_3255cc:
    // 0x3255cc: 0x92c20023  lbu         $v0, 0x23($s6)
    ctx->pc = 0x3255ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 35)));
label_3255d0:
    // 0x3255d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3255d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3255d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3255d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3255d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3255D8u;
    {
        const bool branch_taken_0x3255d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3255DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3255D8u;
        // 0x3255dc: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3255d8) {
            ctx->pc = 0x3255E8u;
            goto label_3255e8;
        }
    }
    ctx->pc = 0x3255E0u;
    // 0x3255e0: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3255e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3255e4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3255e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_3255e8:
    // 0x3255e8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3255e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3255ec: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3255ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3255f0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x3255f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3255f4: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x3255F4u;
    SET_GPR_U32(ctx, 31, 0x3255FCu);
    ctx->pc = 0x3255F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255F4u;
    // 0x3255f8: 0x8fa7003c  lw          $a3, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3255F4u, 0x3255FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255FCu;
label_3255fc:
    // 0x3255fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3255fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x325600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325604: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x325604u;
    SET_GPR_U32(ctx, 31, 0x32560Cu);
    ctx->pc = 0x325608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325604u;
    // 0x325608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x325604u, 0x32560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32560Cu;
label_32560c:
    // 0x32560c: 0xc10820a  jal         func_420828
    ctx->pc = 0x32560Cu;
    SET_GPR_U32(ctx, 31, 0x325614u);
    ctx->pc = 0x325610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32560Cu;
    // 0x325610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x32560Cu, 0x325614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325614u;
label_325614:
    // 0x325614: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x325614u;
    {
        const bool branch_taken_0x325614 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x325618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325614u;
        // 0x325618: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325614) {
            ctx->pc = 0x325624u;
            goto label_325624;
        }
    }
    ctx->pc = 0x32561Cu;
    // 0x32561c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32561Cu;
    {
        const bool branch_taken_0x32561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32561Cu;
        // 0x325620: 0x8ea20050  lw          $v0, 0x50($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32561c) {
            ctx->pc = 0x325628u;
            goto label_325628;
        }
    }
    ctx->pc = 0x325624u;
label_325624:
    // 0x325624: 0x8ee20050  lw          $v0, 0x50($s7)
    ctx->pc = 0x325624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 80)));
label_325628:
    // 0x325628: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x325628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x32562c: 0x30440f00  andi        $a0, $v0, 0xF00
    ctx->pc = 0x32562cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x325630: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x325630u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x325634: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x325634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x325638: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x325638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x32563c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x32563cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325640: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x325640u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x325644: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x325644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x325648: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x325648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x32564c: 0x42b00  sll         $a1, $a0, 12
    ctx->pc = 0x32564cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x325650: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x325650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x325654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x325654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x325658: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x325658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x32565c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x32565cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x325660: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x325660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x325664: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x325664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x325668: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x325668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x32566c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x325670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325674: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x325674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x325678: 0xc10705c  jal         func_41C170
    ctx->pc = 0x325678u;
    SET_GPR_U32(ctx, 31, 0x325680u);
    ctx->pc = 0x32567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325678u;
    // 0x32567c: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x325678u, 0x325680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325680u;
label_325680:
    // 0x325680: 0xc10705c  jal         func_41C170
    ctx->pc = 0x325680u;
    SET_GPR_U32(ctx, 31, 0x325688u);
    ctx->pc = 0x325684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325680u;
    // 0x325684: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x325680u, 0x325688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325688u;
label_325688:
    // 0x325688: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x325688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32568c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32568cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325690: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x325690u;
    SET_GPR_U32(ctx, 31, 0x325698u);
    ctx->pc = 0x325694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325690u;
    // 0x325694: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x325690u, 0x325698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325698u;
label_325698:
    // 0x325698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x325698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32569c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x32569Cu;
    {
        const bool branch_taken_0x32569c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32569Cu;
        // 0x3256a0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32569c) {
            ctx->pc = 0x3256B4u;
            goto label_3256b4;
        }
    }
    ctx->pc = 0x3256A4u;
    // 0x3256a4: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x3256a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x3256a8: 0xafbe0024  sw          $fp, 0x24($sp)
    ctx->pc = 0x3256a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 30));
    // 0x3256ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3256ACu;
    {
        const bool branch_taken_0x3256ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256ACu;
        // 0x3256b0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256ac) {
            ctx->pc = 0x325718u;
            goto label_325718;
        }
    }
    ctx->pc = 0x3256B4u;
label_3256b4:
    // 0x3256b4: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x3256b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x3256b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3256B8u;
    {
        const bool branch_taken_0x3256b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256B8u;
        // 0x3256bc: 0xafbe0024  sw          $fp, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256b8) {
            ctx->pc = 0x325718u;
            goto label_325718;
        }
    }
    ctx->pc = 0x3256C0u;
label_3256c0:
    // 0x3256c0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3256c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256c4: 0x0  nop
    ctx->pc = 0x3256c4u;
    // NOP
label_3256c8:
    // 0x3256c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3256c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3256cc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3256ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3256d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3256D0u;
    {
        const bool branch_taken_0x3256d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3256D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256D0u;
        // 0x3256d4: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256d0) {
            ctx->pc = 0x3256F4u;
            goto label_3256f4;
        }
    }
    ctx->pc = 0x3256D8u;
    // 0x3256d8: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3256d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3256dc: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3256dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3256e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3256e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3256e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3256e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256e8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3256e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3256ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3256ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3256f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3256f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3256f4:
    // 0x3256f4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3256f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3256f8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3256f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3256fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3256FCu;
    {
        const bool branch_taken_0x3256fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3256FCu;
        // 0x325700: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3256fc) {
            ctx->pc = 0x325718u;
            goto label_325718;
        }
    }
    ctx->pc = 0x325704u;
    // 0x325704: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x325704u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x325708: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x325708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32570c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x32570cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x325710: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x325710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x325714: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x325714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_325718:
    // 0x325718: 0x2902001e  slti        $v0, $t0, 0x1E
    ctx->pc = 0x325718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x32571c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32571Cu;
    {
        const bool branch_taken_0x32571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32571Cu;
        // 0x325720: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32571c) {
            ctx->pc = 0x325740u;
            goto label_325740;
        }
    }
    ctx->pc = 0x325724u;
    // 0x325724: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x325724u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325728: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x325728u;
    {
        const bool branch_taken_0x325728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325728u;
        // 0x32572c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325728) {
            ctx->pc = 0x3256C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3256c0;
        }
    }
    ctx->pc = 0x325730u;
    // 0x325730: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x325730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x325734: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x325734u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325738: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x325738u;
    {
        const bool branch_taken_0x325738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325738u;
        // 0x32573c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325738) {
            ctx->pc = 0x3256C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3256c8;
        }
    }
    ctx->pc = 0x325740u;
label_325740:
    // 0x325740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325744: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x325744u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x325748: 0xc10815c  jal         func_420570
    ctx->pc = 0x325748u;
    SET_GPR_U32(ctx, 31, 0x325750u);
    ctx->pc = 0x32574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325748u;
    // 0x32574c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x325748u, 0x325750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325750u;
label_325750:
    // 0x325750: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x325750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325754: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x325754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x325758: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x325758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x32575c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x32575cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x325760: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x325760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x325764: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x325764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x325768: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x325768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32576c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x32576cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x325770: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x325770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x325774: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x325774u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x325778: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x325778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32577c: 0x3e00008  jr          $ra
    ctx->pc = 0x32577Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32577Cu;
        // 0x325780: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32577Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325784u;
    // 0x325784: 0x0  nop
    ctx->pc = 0x325784u;
    // NOP
    ctx->pc = 0x325788u;
}
