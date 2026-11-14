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

// Function: sub_00414410
// Address: 0x414410 - 0x414518
void sub_00414410_0x414410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414410_0x414410");
#endif

    switch (ctx->pc) {
        case 0x414410u: goto label_414410;
        case 0x414414u: goto label_414414;
        case 0x414418u: goto label_414418;
        case 0x41441cu: goto label_41441c;
        case 0x414420u: goto label_414420;
        case 0x414424u: goto label_414424;
        case 0x414428u: goto label_414428;
        case 0x41442cu: goto label_41442c;
        case 0x414430u: goto label_414430;
        case 0x414434u: goto label_414434;
        case 0x414438u: goto label_414438;
        case 0x41443cu: goto label_41443c;
        case 0x414440u: goto label_414440;
        case 0x414444u: goto label_414444;
        case 0x414448u: goto label_414448;
        case 0x41444cu: goto label_41444c;
        case 0x414450u: goto label_414450;
        case 0x414454u: goto label_414454;
        case 0x414458u: goto label_414458;
        case 0x41445cu: goto label_41445c;
        case 0x414460u: goto label_414460;
        case 0x414464u: goto label_414464;
        case 0x414468u: goto label_414468;
        case 0x41446cu: goto label_41446c;
        case 0x414470u: goto label_414470;
        case 0x414474u: goto label_414474;
        case 0x414478u: goto label_414478;
        case 0x41447cu: goto label_41447c;
        case 0x414480u: goto label_414480;
        case 0x414484u: goto label_414484;
        case 0x414488u: goto label_414488;
        case 0x41448cu: goto label_41448c;
        case 0x414490u: goto label_414490;
        case 0x414494u: goto label_414494;
        case 0x414498u: goto label_414498;
        case 0x41449cu: goto label_41449c;
        case 0x4144a0u: goto label_4144a0;
        case 0x4144a4u: goto label_4144a4;
        case 0x4144a8u: goto label_4144a8;
        case 0x4144acu: goto label_4144ac;
        case 0x4144b0u: goto label_4144b0;
        case 0x4144b4u: goto label_4144b4;
        case 0x4144b8u: goto label_4144b8;
        case 0x4144bcu: goto label_4144bc;
        case 0x4144c0u: goto label_4144c0;
        case 0x4144c4u: goto label_4144c4;
        case 0x4144c8u: goto label_4144c8;
        case 0x4144ccu: goto label_4144cc;
        case 0x4144d0u: goto label_4144d0;
        case 0x4144d4u: goto label_4144d4;
        case 0x4144d8u: goto label_4144d8;
        case 0x4144dcu: goto label_4144dc;
        case 0x4144e0u: goto label_4144e0;
        case 0x4144e4u: goto label_4144e4;
        case 0x4144e8u: goto label_4144e8;
        case 0x4144ecu: goto label_4144ec;
        case 0x4144f0u: goto label_4144f0;
        case 0x4144f4u: goto label_4144f4;
        case 0x4144f8u: goto label_4144f8;
        case 0x4144fcu: goto label_4144fc;
        case 0x414500u: goto label_414500;
        case 0x414504u: goto label_414504;
        case 0x414508u: goto label_414508;
        case 0x41450cu: goto label_41450c;
        case 0x414510u: goto label_414510;
        case 0x414514u: goto label_414514;
        default: break;
    }

    ctx->pc = 0x414410u;

label_414410:
    // 0x414410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_414414:
    // 0x414414: 0x8f83bdf0  lw          $v1, -0x4210($gp)
    ctx->pc = 0x414414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
label_414418:
    // 0x414418: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x414418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41441c:
    // 0x41441c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_414420:
    // 0x414420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_414424:
    // 0x414424: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x414424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_414428:
    // 0x414428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41442c:
    // 0x41442c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_414430:
    // 0x414430: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x414430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_414434:
    // 0x414434: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_414438:
    if (ctx->pc == 0x414438u) {
        ctx->pc = 0x41443Cu;
        goto label_41443c;
    }
    ctx->pc = 0x414434u;
    {
        const bool branch_taken_0x414434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x414434) {
            ctx->pc = 0x414444u;
            goto label_414444;
        }
    }
    ctx->pc = 0x41443Cu;
label_41443c:
    // 0x41443c: 0xc104284  jal         func_410A10
label_414440:
    if (ctx->pc == 0x414440u) {
        ctx->pc = 0x414444u;
        goto label_414444;
    }
    ctx->pc = 0x41443Cu;
    SET_GPR_U32(ctx, 31, 0x414444u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41443Cu, 0x414444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414444u;
label_414444:
    // 0x414444: 0x8f83bdf4  lw          $v1, -0x420C($gp)
    ctx->pc = 0x414444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950388)));
label_414448:
    // 0x414448: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41444c:
    // 0x41444c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41444cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414450:
    // 0x414450: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x414450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_414454:
    // 0x414454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414458:
    // 0x414458: 0xaf83bdf4  sw          $v1, -0x420C($gp)
    ctx->pc = 0x414458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950388), GPR_U32(ctx, 3));
label_41445c:
    // 0x41445c: 0x3e00008  jr          $ra
label_414460:
    if (ctx->pc == 0x414460u) {
        ctx->pc = 0x414460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41445Cu;
        // 0x414460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414464u;
        goto label_414464;
    }
    ctx->pc = 0x41445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41445Cu;
        // 0x414460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41445Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414464u;
label_414464:
    // 0x414464: 0x0  nop
    ctx->pc = 0x414464u;
    // NOP
label_414468:
    // 0x414468: 0xaf84ad64  sw          $a0, -0x529C($gp)
    ctx->pc = 0x414468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946148), GPR_U32(ctx, 4));
label_41446c:
    // 0x41446c: 0x3e00008  jr          $ra
label_414470:
    if (ctx->pc == 0x414470u) {
        ctx->pc = 0x414470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41446Cu;
        // 0x414470: 0xaf85ad68  sw          $a1, -0x5298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946152), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414474u;
        goto label_414474;
    }
    ctx->pc = 0x41446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41446Cu;
        // 0x414470: 0xaf85ad68  sw          $a1, -0x5298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946152), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414474u;
label_414474:
    // 0x414474: 0x0  nop
    ctx->pc = 0x414474u;
    // NOP
label_414478:
    // 0x414478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41447c:
    // 0x41447c: 0x8f83bdf0  lw          $v1, -0x4210($gp)
    ctx->pc = 0x41447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
label_414480:
    // 0x414480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x414480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_414484:
    // 0x414484: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x414484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_414488:
    // 0x414488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41448c:
    // 0x41448c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x41448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_414490:
    // 0x414490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x414490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_414494:
    // 0x414494: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x414494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_414498:
    // 0x414498: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x414498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_41449c:
    // 0x41449c: 0x34a50412  ori         $a1, $a1, 0x412
    ctx->pc = 0x41449cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1042);
label_4144a0:
    // 0x4144a0: 0x40f809  jalr        $v0
label_4144a4:
    if (ctx->pc == 0x4144A4u) {
        ctx->pc = 0x4144A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144A0u;
        // 0x4144a4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4144A8u;
        goto label_4144a8;
    }
    ctx->pc = 0x4144A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4144A8u);
        ctx->pc = 0x4144A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144A0u;
        // 0x4144a4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4144A0u, 0x4144A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4144A8u;
label_4144a8:
    // 0x4144a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4144a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4144ac:
    // 0x4144ac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4144b0:
    if (ctx->pc == 0x4144B0u) {
        ctx->pc = 0x4144B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144ACu;
        // 0x4144b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4144B4u;
        goto label_4144b4;
    }
    ctx->pc = 0x4144ACu;
    {
        const bool branch_taken_0x4144ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4144B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144ACu;
        // 0x4144b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4144ac) {
            ctx->pc = 0x4144C0u;
            goto label_4144c0;
        }
    }
    ctx->pc = 0x4144B4u;
label_4144b4:
    // 0x4144b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4144b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4144b8:
    // 0x4144b8: 0xc0bb7e6  jal         func_2EDF98
label_4144bc:
    if (ctx->pc == 0x4144BCu) {
        ctx->pc = 0x4144BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144B8u;
        // 0x4144bc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4144C0u;
        goto label_4144c0;
    }
    ctx->pc = 0x4144B8u;
    SET_GPR_U32(ctx, 31, 0x4144C0u);
    ctx->pc = 0x4144BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4144B8u;
    // 0x4144bc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4144B8u, 0x4144C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4144C0u;
label_4144c0:
    // 0x4144c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4144c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4144c4:
    // 0x4144c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4144c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4144c8:
    // 0x4144c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4144c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4144cc:
    // 0x4144cc: 0x3e00008  jr          $ra
label_4144d0:
    if (ctx->pc == 0x4144D0u) {
        ctx->pc = 0x4144D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144CCu;
        // 0x4144d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4144D4u;
        goto label_4144d4;
    }
    ctx->pc = 0x4144CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4144D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144CCu;
        // 0x4144d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4144CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4144D4u;
label_4144d4:
    // 0x4144d4: 0x0  nop
    ctx->pc = 0x4144d4u;
    // NOP
label_4144d8:
    // 0x4144d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4144d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4144dc:
    // 0x4144dc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4144e0:
    if (ctx->pc == 0x4144E0u) {
        ctx->pc = 0x4144E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144DCu;
        // 0x4144e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4144E4u;
        goto label_4144e4;
    }
    ctx->pc = 0x4144DCu;
    {
        const bool branch_taken_0x4144dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4144E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144DCu;
        // 0x4144e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4144dc) {
            ctx->pc = 0x414504u;
            goto label_414504;
        }
    }
    ctx->pc = 0x4144E4u;
label_4144e4:
    // 0x4144e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4144e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4144e8:
    // 0x4144e8: 0x8f86bdf0  lw          $a2, -0x4210($gp)
    ctx->pc = 0x4144e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
label_4144ec:
    // 0x4144ec: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4144ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_4144f0:
    // 0x4144f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4144f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4144f4:
    // 0x4144f4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4144f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4144f8:
    // 0x4144f8: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x4144f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_4144fc:
    // 0x4144fc: 0x40f809  jalr        $v0
label_414500:
    if (ctx->pc == 0x414500u) {
        ctx->pc = 0x414500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144FCu;
        // 0x414500: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414504u;
        goto label_414504;
    }
    ctx->pc = 0x4144FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414504u);
        ctx->pc = 0x414500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144FCu;
        // 0x414500: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4144FCu, 0x414504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414504u;
label_414504:
    // 0x414504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414508:
    // 0x414508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x414508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41450c:
    // 0x41450c: 0x3e00008  jr          $ra
label_414510:
    if (ctx->pc == 0x414510u) {
        ctx->pc = 0x414510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41450Cu;
        // 0x414510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414514u;
        goto label_414514;
    }
    ctx->pc = 0x41450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41450Cu;
        // 0x414510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41450Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414514u;
label_414514:
    // 0x414514: 0x0  nop
    ctx->pc = 0x414514u;
    // NOP
    ctx->pc = 0x414518u;
}
