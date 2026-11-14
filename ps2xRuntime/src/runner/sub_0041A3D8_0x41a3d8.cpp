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

// Function: sub_0041A3D8
// Address: 0x41a3d8 - 0x41a480
void sub_0041A3D8_0x41a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A3D8_0x41a3d8");
#endif

    switch (ctx->pc) {
        case 0x41a3d8u: goto label_41a3d8;
        case 0x41a3dcu: goto label_41a3dc;
        case 0x41a3e0u: goto label_41a3e0;
        case 0x41a3e4u: goto label_41a3e4;
        case 0x41a3e8u: goto label_41a3e8;
        case 0x41a3ecu: goto label_41a3ec;
        case 0x41a3f0u: goto label_41a3f0;
        case 0x41a3f4u: goto label_41a3f4;
        case 0x41a3f8u: goto label_41a3f8;
        case 0x41a3fcu: goto label_41a3fc;
        case 0x41a400u: goto label_41a400;
        case 0x41a404u: goto label_41a404;
        case 0x41a408u: goto label_41a408;
        case 0x41a40cu: goto label_41a40c;
        case 0x41a410u: goto label_41a410;
        case 0x41a414u: goto label_41a414;
        case 0x41a418u: goto label_41a418;
        case 0x41a41cu: goto label_41a41c;
        case 0x41a420u: goto label_41a420;
        case 0x41a424u: goto label_41a424;
        case 0x41a428u: goto label_41a428;
        case 0x41a42cu: goto label_41a42c;
        case 0x41a430u: goto label_41a430;
        case 0x41a434u: goto label_41a434;
        case 0x41a438u: goto label_41a438;
        case 0x41a43cu: goto label_41a43c;
        case 0x41a440u: goto label_41a440;
        case 0x41a444u: goto label_41a444;
        case 0x41a448u: goto label_41a448;
        case 0x41a44cu: goto label_41a44c;
        case 0x41a450u: goto label_41a450;
        case 0x41a454u: goto label_41a454;
        case 0x41a458u: goto label_41a458;
        case 0x41a45cu: goto label_41a45c;
        case 0x41a460u: goto label_41a460;
        case 0x41a464u: goto label_41a464;
        case 0x41a468u: goto label_41a468;
        case 0x41a46cu: goto label_41a46c;
        case 0x41a470u: goto label_41a470;
        case 0x41a474u: goto label_41a474;
        case 0x41a478u: goto label_41a478;
        case 0x41a47cu: goto label_41a47c;
        default: break;
    }

    ctx->pc = 0x41a3d8u;

label_41a3d8:
    // 0x41a3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41a3dc:
    // 0x41a3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41a3e0:
    // 0x41a3e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41a3e4:
    // 0x41a3e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41a3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41a3e8:
    // 0x41a3e8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_41a3ec:
    if (ctx->pc == 0x41A3ECu) {
        ctx->pc = 0x41A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3E8u;
        // 0x41a3ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A3F0u;
        goto label_41a3f0;
    }
    ctx->pc = 0x41A3E8u;
    {
        const bool branch_taken_0x41a3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3E8u;
        // 0x41a3ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a3e8) {
            ctx->pc = 0x41A468u;
            goto label_41a468;
        }
    }
    ctx->pc = 0x41A3F0u;
label_41a3f0:
    // 0x41a3f0: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x41a3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41a3f4:
    // 0x41a3f4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_41a3f8:
    if (ctx->pc == 0x41A3F8u) {
        ctx->pc = 0x41A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3F4u;
        // 0x41a3f8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A3FCu;
        goto label_41a3fc;
    }
    ctx->pc = 0x41A3F4u;
    {
        const bool branch_taken_0x41a3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3F4u;
        // 0x41a3f8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a3f4) {
            ctx->pc = 0x41A414u;
            goto label_41a414;
        }
    }
    ctx->pc = 0x41A3FCu;
label_41a3fc:
    // 0x41a3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a400:
    // 0x41a400: 0xc1068f6  jal         func_41A3D8
label_41a404:
    if (ctx->pc == 0x41A404u) {
        ctx->pc = 0x41A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A400u;
        // 0x41a404: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A408u;
        goto label_41a408;
    }
    ctx->pc = 0x41A400u;
    SET_GPR_U32(ctx, 31, 0x41A408u);
    ctx->pc = 0x41A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A400u;
    // 0x41a404: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A3D8u;
    goto label_41a3d8;
    ctx->pc = 0x41A408u;
label_41a408:
    // 0x41a408: 0x5600fffd  bnel        $s0, $zero, . + 4 + (-0x3 << 2)
label_41a40c:
    if (ctx->pc == 0x41A40Cu) {
        ctx->pc = 0x41A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A408u;
        // 0x41a40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A410u;
        goto label_41a410;
    }
    ctx->pc = 0x41A408u;
    {
        const bool branch_taken_0x41a408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41a408) {
            ctx->pc = 0x41A40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41A408u;
            // 0x41a40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41A400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41a400;
        }
    }
    ctx->pc = 0x41A410u;
label_41a410:
    // 0x41a410: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41a410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41a414:
    // 0x41a414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41a414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a418:
    // 0x41a418: 0xc104ca6  jal         func_413298
label_41a41c:
    if (ctx->pc == 0x41A41Cu) {
        ctx->pc = 0x41A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A418u;
        // 0x41a41c: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A420u;
        goto label_41a420;
    }
    ctx->pc = 0x41A418u;
    SET_GPR_U32(ctx, 31, 0x41A420u);
    ctx->pc = 0x41A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A418u;
    // 0x41a41c: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41A418u, 0x41A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A420u;
label_41a420:
    // 0x41a420: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x41a420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_41a424:
    // 0x41a424: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x41a424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_41a428:
    // 0x41a428: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_41a42c:
    if (ctx->pc == 0x41A42Cu) {
        ctx->pc = 0x41A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A428u;
        // 0x41a42c: 0x8f83be00  lw          $v1, -0x4200($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A430u;
        goto label_41a430;
    }
    ctx->pc = 0x41A428u;
    {
        const bool branch_taken_0x41a428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A428u;
        // 0x41a42c: 0x8f83be00  lw          $v1, -0x4200($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a428) {
            ctx->pc = 0x41A44Cu;
            goto label_41a44c;
        }
    }
    ctx->pc = 0x41A430u;
label_41a430:
    // 0x41a430: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x41a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41a434:
    // 0x41a434: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x41a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_41a438:
    // 0x41a438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x41a438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_41a43c:
    // 0x41a43c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x41a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41a440:
    // 0x41a440: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x41a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_41a444:
    // 0x41a444: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x41a444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_41a448:
    // 0x41a448: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x41a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
label_41a44c:
    // 0x41a44c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x41a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_41a450:
    // 0x41a450: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x41a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_41a454:
    // 0x41a454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41a454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41a458:
    // 0x41a458: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x41a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_41a45c:
    // 0x41a45c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41a460:
    // 0x41a460: 0x40f809  jalr        $v0
label_41a464:
    if (ctx->pc == 0x41A464u) {
        ctx->pc = 0x41A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A460u;
        // 0x41a464: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A468u;
        goto label_41a468;
    }
    ctx->pc = 0x41A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41A468u);
        ctx->pc = 0x41A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A460u;
        // 0x41a464: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A460u, 0x41A468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41A468u;
label_41a468:
    // 0x41a468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41a468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41a46c:
    // 0x41a46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41a470:
    // 0x41a470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41a474:
    // 0x41a474: 0x3e00008  jr          $ra
label_41a478:
    if (ctx->pc == 0x41A478u) {
        ctx->pc = 0x41A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A474u;
        // 0x41a478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41A47Cu;
        goto label_41a47c;
    }
    ctx->pc = 0x41A474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A474u;
        // 0x41a478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A47Cu;
label_41a47c:
    // 0x41a47c: 0x0  nop
    ctx->pc = 0x41a47cu;
    // NOP
    ctx->pc = 0x41a480u;
}
