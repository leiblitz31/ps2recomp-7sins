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

// Function: sub_004AA230
// Address: 0x4aa230 - 0x4aa3d0
void sub_004AA230_0x4aa230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA230_0x4aa230");
#endif

    switch (ctx->pc) {
        case 0x4aa230u: goto label_4aa230;
        case 0x4aa234u: goto label_4aa234;
        case 0x4aa238u: goto label_4aa238;
        case 0x4aa23cu: goto label_4aa23c;
        case 0x4aa240u: goto label_4aa240;
        case 0x4aa244u: goto label_4aa244;
        case 0x4aa248u: goto label_4aa248;
        case 0x4aa24cu: goto label_4aa24c;
        case 0x4aa250u: goto label_4aa250;
        case 0x4aa254u: goto label_4aa254;
        case 0x4aa258u: goto label_4aa258;
        case 0x4aa25cu: goto label_4aa25c;
        case 0x4aa260u: goto label_4aa260;
        case 0x4aa264u: goto label_4aa264;
        case 0x4aa268u: goto label_4aa268;
        case 0x4aa26cu: goto label_4aa26c;
        case 0x4aa270u: goto label_4aa270;
        case 0x4aa274u: goto label_4aa274;
        case 0x4aa278u: goto label_4aa278;
        case 0x4aa27cu: goto label_4aa27c;
        case 0x4aa280u: goto label_4aa280;
        case 0x4aa284u: goto label_4aa284;
        case 0x4aa288u: goto label_4aa288;
        case 0x4aa28cu: goto label_4aa28c;
        case 0x4aa290u: goto label_4aa290;
        case 0x4aa294u: goto label_4aa294;
        case 0x4aa298u: goto label_4aa298;
        case 0x4aa29cu: goto label_4aa29c;
        case 0x4aa2a0u: goto label_4aa2a0;
        case 0x4aa2a4u: goto label_4aa2a4;
        case 0x4aa2a8u: goto label_4aa2a8;
        case 0x4aa2acu: goto label_4aa2ac;
        case 0x4aa2b0u: goto label_4aa2b0;
        case 0x4aa2b4u: goto label_4aa2b4;
        case 0x4aa2b8u: goto label_4aa2b8;
        case 0x4aa2bcu: goto label_4aa2bc;
        case 0x4aa2c0u: goto label_4aa2c0;
        case 0x4aa2c4u: goto label_4aa2c4;
        case 0x4aa2c8u: goto label_4aa2c8;
        case 0x4aa2ccu: goto label_4aa2cc;
        case 0x4aa2d0u: goto label_4aa2d0;
        case 0x4aa2d4u: goto label_4aa2d4;
        case 0x4aa2d8u: goto label_4aa2d8;
        case 0x4aa2dcu: goto label_4aa2dc;
        case 0x4aa2e0u: goto label_4aa2e0;
        case 0x4aa2e4u: goto label_4aa2e4;
        case 0x4aa2e8u: goto label_4aa2e8;
        case 0x4aa2ecu: goto label_4aa2ec;
        case 0x4aa2f0u: goto label_4aa2f0;
        case 0x4aa2f4u: goto label_4aa2f4;
        case 0x4aa2f8u: goto label_4aa2f8;
        case 0x4aa2fcu: goto label_4aa2fc;
        case 0x4aa300u: goto label_4aa300;
        case 0x4aa304u: goto label_4aa304;
        case 0x4aa308u: goto label_4aa308;
        case 0x4aa30cu: goto label_4aa30c;
        case 0x4aa310u: goto label_4aa310;
        case 0x4aa314u: goto label_4aa314;
        case 0x4aa318u: goto label_4aa318;
        case 0x4aa31cu: goto label_4aa31c;
        case 0x4aa320u: goto label_4aa320;
        case 0x4aa324u: goto label_4aa324;
        case 0x4aa328u: goto label_4aa328;
        case 0x4aa32cu: goto label_4aa32c;
        case 0x4aa330u: goto label_4aa330;
        case 0x4aa334u: goto label_4aa334;
        case 0x4aa338u: goto label_4aa338;
        case 0x4aa33cu: goto label_4aa33c;
        case 0x4aa340u: goto label_4aa340;
        case 0x4aa344u: goto label_4aa344;
        case 0x4aa348u: goto label_4aa348;
        case 0x4aa34cu: goto label_4aa34c;
        case 0x4aa350u: goto label_4aa350;
        case 0x4aa354u: goto label_4aa354;
        case 0x4aa358u: goto label_4aa358;
        case 0x4aa35cu: goto label_4aa35c;
        case 0x4aa360u: goto label_4aa360;
        case 0x4aa364u: goto label_4aa364;
        case 0x4aa368u: goto label_4aa368;
        case 0x4aa36cu: goto label_4aa36c;
        case 0x4aa370u: goto label_4aa370;
        case 0x4aa374u: goto label_4aa374;
        case 0x4aa378u: goto label_4aa378;
        case 0x4aa37cu: goto label_4aa37c;
        case 0x4aa380u: goto label_4aa380;
        case 0x4aa384u: goto label_4aa384;
        case 0x4aa388u: goto label_4aa388;
        case 0x4aa38cu: goto label_4aa38c;
        case 0x4aa390u: goto label_4aa390;
        case 0x4aa394u: goto label_4aa394;
        case 0x4aa398u: goto label_4aa398;
        case 0x4aa39cu: goto label_4aa39c;
        case 0x4aa3a0u: goto label_4aa3a0;
        case 0x4aa3a4u: goto label_4aa3a4;
        case 0x4aa3a8u: goto label_4aa3a8;
        case 0x4aa3acu: goto label_4aa3ac;
        case 0x4aa3b0u: goto label_4aa3b0;
        case 0x4aa3b4u: goto label_4aa3b4;
        case 0x4aa3b8u: goto label_4aa3b8;
        case 0x4aa3bcu: goto label_4aa3bc;
        case 0x4aa3c0u: goto label_4aa3c0;
        case 0x4aa3c4u: goto label_4aa3c4;
        case 0x4aa3c8u: goto label_4aa3c8;
        case 0x4aa3ccu: goto label_4aa3cc;
        default: break;
    }

    ctx->pc = 0x4aa230u;

label_4aa230:
    // 0x4aa230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aa230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4aa234:
    // 0x4aa234: 0x8f84b878  lw          $a0, -0x4788($gp)
    ctx->pc = 0x4aa234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
label_4aa238:
    // 0x4aa238: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4aa238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4aa23c:
    // 0x4aa23c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4aa23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4aa240:
    // 0x4aa240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4aa244:
    // 0x4aa244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4aa244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4aa248:
    // 0x4aa248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4aa248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aa24c:
    // 0x4aa24c: 0xc1263c0  jal         func_498F00
label_4aa250:
    if (ctx->pc == 0x4AA250u) {
        ctx->pc = 0x4AA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA24Cu;
        // 0x4aa250: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA254u;
        goto label_4aa254;
    }
    ctx->pc = 0x4AA24Cu;
    SET_GPR_U32(ctx, 31, 0x4AA254u);
    ctx->pc = 0x4AA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA24Cu;
    // 0x4aa250: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4AA24Cu, 0x4AA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA254u;
label_4aa254:
    // 0x4aa254: 0x8f82b87c  lw          $v0, -0x4784($gp)
    ctx->pc = 0x4aa254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
label_4aa258:
    // 0x4aa258: 0x5840000e  blezl       $v0, . + 4 + (0xE << 2)
label_4aa25c:
    if (ctx->pc == 0x4AA25Cu) {
        ctx->pc = 0x4AA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA258u;
        // 0x4aa25c: 0x8f90b878  lw          $s0, -0x4788($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA260u;
        goto label_4aa260;
    }
    ctx->pc = 0x4AA258u;
    {
        const bool branch_taken_0x4aa258 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4aa258) {
            ctx->pc = 0x4AA25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA258u;
            // 0x4aa25c: 0x8f90b878  lw          $s0, -0x4788($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA294u;
            goto label_4aa294;
        }
    }
    ctx->pc = 0x4AA260u;
label_4aa260:
    // 0x4aa260: 0x8f83c208  lw          $v1, -0x3DF8($gp)
    ctx->pc = 0x4aa260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
label_4aa264:
    // 0x4aa264: 0x0  nop
    ctx->pc = 0x4aa264u;
    // NOP
label_4aa268:
    // 0x4aa268: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4aa268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4aa26c:
    // 0x4aa26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aa26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aa270:
    // 0x4aa270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4aa270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4aa274:
    // 0x4aa274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4aa274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4aa278:
    // 0x4aa278: 0xc1262a2  jal         func_498A88
label_4aa27c:
    if (ctx->pc == 0x4AA27Cu) {
        ctx->pc = 0x4AA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA278u;
        // 0x4aa27c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA280u;
        goto label_4aa280;
    }
    ctx->pc = 0x4AA278u;
    SET_GPR_U32(ctx, 31, 0x4AA280u);
    ctx->pc = 0x4AA27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA278u;
    // 0x4aa27c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498A88u, 0x4AA278u, 0x4AA280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA280u;
label_4aa280:
    // 0x4aa280: 0x8f82b87c  lw          $v0, -0x4784($gp)
    ctx->pc = 0x4aa280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948988)));
label_4aa284:
    // 0x4aa284: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4aa284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4aa288:
    // 0x4aa288: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4aa28c:
    if (ctx->pc == 0x4AA28Cu) {
        ctx->pc = 0x4AA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA288u;
        // 0x4aa28c: 0x8f83c208  lw          $v1, -0x3DF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA290u;
        goto label_4aa290;
    }
    ctx->pc = 0x4AA288u;
    {
        const bool branch_taken_0x4aa288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA288u;
        // 0x4aa28c: 0x8f83c208  lw          $v1, -0x3DF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa288) {
            ctx->pc = 0x4AA268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa268;
        }
    }
    ctx->pc = 0x4AA290u;
label_4aa290:
    // 0x4aa290: 0x8f90b878  lw          $s0, -0x4788($gp)
    ctx->pc = 0x4aa290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948984)));
label_4aa294:
    // 0x4aa294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aa294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aa298:
    // 0x4aa298: 0xc1262a2  jal         func_498A88
label_4aa29c:
    if (ctx->pc == 0x4AA29Cu) {
        ctx->pc = 0x4AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA298u;
        // 0x4aa29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA2A0u;
        goto label_4aa2a0;
    }
    ctx->pc = 0x4AA298u;
    SET_GPR_U32(ctx, 31, 0x4AA2A0u);
    ctx->pc = 0x4AA29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA298u;
    // 0x4aa29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498A88u, 0x4AA298u, 0x4AA2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA2A0u;
label_4aa2a0:
    // 0x4aa2a0: 0xc127cae  jal         func_49F2B8
label_4aa2a4:
    if (ctx->pc == 0x4AA2A4u) {
        ctx->pc = 0x4AA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2A0u;
        // 0x4aa2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA2A8u;
        goto label_4aa2a8;
    }
    ctx->pc = 0x4AA2A0u;
    SET_GPR_U32(ctx, 31, 0x4AA2A8u);
    ctx->pc = 0x4AA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA2A0u;
    // 0x4aa2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AA2A0u, 0x4AA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA2A8u;
label_4aa2a8:
    // 0x4aa2a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4aa2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aa2ac:
    // 0x4aa2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aa2b0:
    // 0x4aa2b0: 0xaf80b874  sw          $zero, -0x478C($gp)
    ctx->pc = 0x4aa2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948980), GPR_U32(ctx, 0));
label_4aa2b4:
    // 0x4aa2b4: 0xaf80b87c  sw          $zero, -0x4784($gp)
    ctx->pc = 0x4aa2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948988), GPR_U32(ctx, 0));
label_4aa2b8:
    // 0x4aa2b8: 0x3e00008  jr          $ra
label_4aa2bc:
    if (ctx->pc == 0x4AA2BCu) {
        ctx->pc = 0x4AA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2B8u;
        // 0x4aa2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA2C0u;
        goto label_4aa2c0;
    }
    ctx->pc = 0x4AA2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2B8u;
        // 0x4aa2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA2C0u;
label_4aa2c0:
    // 0x4aa2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aa2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4aa2c4:
    // 0x4aa2c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4aa2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4aa2c8:
    // 0x4aa2c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4aa2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4aa2cc:
    // 0x4aa2cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aa2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4aa2d0:
    // 0x4aa2d0: 0x2791c200  addiu       $s1, $gp, -0x3E00
    ctx->pc = 0x4aa2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951424));
label_4aa2d4:
    // 0x4aa2d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4aa2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4aa2d8:
    // 0x4aa2d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4aa2dc:
    // 0x4aa2dc: 0x8f90c200  lw          $s0, -0x3E00($gp)
    ctx->pc = 0x4aa2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951424)));
label_4aa2e0:
    // 0x4aa2e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4aa2e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aa2e4:
    // 0x4aa2e4: 0x1211000c  beq         $s0, $s1, . + 4 + (0xC << 2)
label_4aa2e8:
    if (ctx->pc == 0x4AA2E8u) {
        ctx->pc = 0x4AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2E4u;
        // 0x4aa2e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA2ECu;
        goto label_4aa2ec;
    }
    ctx->pc = 0x4AA2E4u;
    {
        const bool branch_taken_0x4aa2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4AA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2E4u;
        // 0x4aa2e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa2e4) {
            ctx->pc = 0x4AA318u;
            goto label_4aa318;
        }
    }
    ctx->pc = 0x4AA2ECu;
label_4aa2ec:
    // 0x4aa2ec: 0x2604ffc0  addiu       $a0, $s0, -0x40
    ctx->pc = 0x4aa2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
label_4aa2f0:
    // 0x4aa2f0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4aa2f4:
    // 0x4aa2f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4aa2f8:
    if (ctx->pc == 0x4AA2F8u) {
        ctx->pc = 0x4AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2F4u;
        // 0x4aa2f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA2FCu;
        goto label_4aa2fc;
    }
    ctx->pc = 0x4AA2F4u;
    {
        const bool branch_taken_0x4aa2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa2f4) {
            ctx->pc = 0x4AA2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA2F4u;
            // 0x4aa2f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA310u;
            goto label_4aa310;
        }
    }
    ctx->pc = 0x4AA2FCu;
label_4aa2fc:
    // 0x4aa2fc: 0x260f809  jalr        $s3
label_4aa300:
    if (ctx->pc == 0x4AA300u) {
        ctx->pc = 0x4AA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2FCu;
        // 0x4aa300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA304u;
        goto label_4aa304;
    }
    ctx->pc = 0x4AA2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x4AA304u);
        ctx->pc = 0x4AA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA2FCu;
        // 0x4aa300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA2FCu, 0x4AA304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AA304u;
label_4aa304:
    // 0x4aa304: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4aa308:
    if (ctx->pc == 0x4AA308u) {
        ctx->pc = 0x4AA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA304u;
        // 0x4aa308: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA30Cu;
        goto label_4aa30c;
    }
    ctx->pc = 0x4AA304u;
    {
        const bool branch_taken_0x4aa304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa304) {
            ctx->pc = 0x4AA308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA304u;
            // 0x4aa308: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA31Cu;
            goto label_4aa31c;
        }
    }
    ctx->pc = 0x4AA30Cu;
label_4aa30c:
    // 0x4aa30c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4aa30cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4aa310:
    // 0x4aa310: 0x1611fff7  bne         $s0, $s1, . + 4 + (-0x9 << 2)
label_4aa314:
    if (ctx->pc == 0x4AA314u) {
        ctx->pc = 0x4AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA310u;
        // 0x4aa314: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA318u;
        goto label_4aa318;
    }
    ctx->pc = 0x4AA310u;
    {
        const bool branch_taken_0x4aa310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x4AA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA310u;
        // 0x4aa314: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa310) {
            ctx->pc = 0x4AA2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa2f0;
        }
    }
    ctx->pc = 0x4AA318u;
label_4aa318:
    // 0x4aa318: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4aa318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4aa31c:
    // 0x4aa31c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4aa31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4aa320:
    // 0x4aa320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aa320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aa324:
    // 0x4aa324: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4aa324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aa328:
    // 0x4aa328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aa32c:
    // 0x4aa32c: 0x3e00008  jr          $ra
label_4aa330:
    if (ctx->pc == 0x4AA330u) {
        ctx->pc = 0x4AA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA32Cu;
        // 0x4aa330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA334u;
        goto label_4aa334;
    }
    ctx->pc = 0x4AA32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA32Cu;
        // 0x4aa330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA334u;
label_4aa334:
    // 0x4aa334: 0x0  nop
    ctx->pc = 0x4aa334u;
    // NOP
label_4aa338:
    // 0x4aa338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aa338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4aa33c:
    // 0x4aa33c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4aa33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4aa340:
    // 0x4aa340: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4aa340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4aa344:
    // 0x4aa344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aa344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4aa348:
    // 0x4aa348: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4aa348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4aa34c:
    // 0x4aa34c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4aa34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4aa350:
    // 0x4aa350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4aa350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4aa354:
    // 0x4aa354: 0x8f90c1f8  lw          $s0, -0x3E08($gp)
    ctx->pc = 0x4aa354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
label_4aa358:
    // 0x4aa358: 0x2793c1f8  addiu       $s3, $gp, -0x3E08
    ctx->pc = 0x4aa358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951416));
label_4aa35c:
    // 0x4aa35c: 0x12130009  beq         $s0, $s3, . + 4 + (0x9 << 2)
label_4aa360:
    if (ctx->pc == 0x4AA360u) {
        ctx->pc = 0x4AA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA35Cu;
        // 0x4aa360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA364u;
        goto label_4aa364;
    }
    ctx->pc = 0x4AA35Cu;
    {
        const bool branch_taken_0x4aa35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x4AA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA35Cu;
        // 0x4aa360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa35c) {
            ctx->pc = 0x4AA384u;
            goto label_4aa384;
        }
    }
    ctx->pc = 0x4AA364u;
label_4aa364:
    // 0x4aa364: 0x2604ffc0  addiu       $a0, $s0, -0x40
    ctx->pc = 0x4aa364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
label_4aa368:
    // 0x4aa368: 0x240f809  jalr        $s2
label_4aa36c:
    if (ctx->pc == 0x4AA36Cu) {
        ctx->pc = 0x4AA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA368u;
        // 0x4aa36c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA370u;
        goto label_4aa370;
    }
    ctx->pc = 0x4AA368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x4AA370u);
        ctx->pc = 0x4AA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA368u;
        // 0x4aa36c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA368u, 0x4AA370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AA370u;
label_4aa370:
    // 0x4aa370: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4aa374:
    if (ctx->pc == 0x4AA374u) {
        ctx->pc = 0x4AA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA370u;
        // 0x4aa374: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA378u;
        goto label_4aa378;
    }
    ctx->pc = 0x4AA370u;
    {
        const bool branch_taken_0x4aa370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa370) {
            ctx->pc = 0x4AA374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA370u;
            // 0x4aa374: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA3B8u;
            goto label_4aa3b8;
        }
    }
    ctx->pc = 0x4AA378u;
label_4aa378:
    // 0x4aa378: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4aa378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4aa37c:
    // 0x4aa37c: 0x1613fffa  bne         $s0, $s3, . + 4 + (-0x6 << 2)
label_4aa380:
    if (ctx->pc == 0x4AA380u) {
        ctx->pc = 0x4AA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA37Cu;
        // 0x4aa380: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA384u;
        goto label_4aa384;
    }
    ctx->pc = 0x4AA37Cu;
    {
        const bool branch_taken_0x4aa37c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x4AA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA37Cu;
        // 0x4aa380: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa37c) {
            ctx->pc = 0x4AA368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa368;
        }
    }
    ctx->pc = 0x4AA384u;
label_4aa384:
    // 0x4aa384: 0x8f90c200  lw          $s0, -0x3E00($gp)
    ctx->pc = 0x4aa384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951424)));
label_4aa388:
    // 0x4aa388: 0x2793c200  addiu       $s3, $gp, -0x3E00
    ctx->pc = 0x4aa388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951424));
label_4aa38c:
    // 0x4aa38c: 0x5213000a  beql        $s0, $s3, . + 4 + (0xA << 2)
label_4aa390:
    if (ctx->pc == 0x4AA390u) {
        ctx->pc = 0x4AA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA38Cu;
        // 0x4aa390: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA394u;
        goto label_4aa394;
    }
    ctx->pc = 0x4AA38Cu;
    {
        const bool branch_taken_0x4aa38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x4aa38c) {
            ctx->pc = 0x4AA390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA38Cu;
            // 0x4aa390: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA3B8u;
            goto label_4aa3b8;
        }
    }
    ctx->pc = 0x4AA394u;
label_4aa394:
    // 0x4aa394: 0x2604ffc0  addiu       $a0, $s0, -0x40
    ctx->pc = 0x4aa394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
label_4aa398:
    // 0x4aa398: 0x240f809  jalr        $s2
label_4aa39c:
    if (ctx->pc == 0x4AA39Cu) {
        ctx->pc = 0x4AA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA398u;
        // 0x4aa39c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA3A0u;
        goto label_4aa3a0;
    }
    ctx->pc = 0x4AA398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x4AA3A0u);
        ctx->pc = 0x4AA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA398u;
        // 0x4aa39c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA398u, 0x4AA3A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AA3A0u;
label_4aa3a0:
    // 0x4aa3a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4aa3a4:
    if (ctx->pc == 0x4AA3A4u) {
        ctx->pc = 0x4AA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA3A0u;
        // 0x4aa3a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA3A8u;
        goto label_4aa3a8;
    }
    ctx->pc = 0x4AA3A0u;
    {
        const bool branch_taken_0x4aa3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa3a0) {
            ctx->pc = 0x4AA3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA3A0u;
            // 0x4aa3a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA3B8u;
            goto label_4aa3b8;
        }
    }
    ctx->pc = 0x4AA3A8u;
label_4aa3a8:
    // 0x4aa3a8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4aa3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4aa3ac:
    // 0x4aa3ac: 0x1613fffa  bne         $s0, $s3, . + 4 + (-0x6 << 2)
label_4aa3b0:
    if (ctx->pc == 0x4AA3B0u) {
        ctx->pc = 0x4AA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA3ACu;
        // 0x4aa3b0: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA3B4u;
        goto label_4aa3b4;
    }
    ctx->pc = 0x4AA3ACu;
    {
        const bool branch_taken_0x4aa3ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x4AA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA3ACu;
        // 0x4aa3b0: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa3ac) {
            ctx->pc = 0x4AA398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aa398;
        }
    }
    ctx->pc = 0x4AA3B4u;
label_4aa3b4:
    // 0x4aa3b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4aa3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4aa3b8:
    // 0x4aa3b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4aa3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4aa3bc:
    // 0x4aa3bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aa3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aa3c0:
    // 0x4aa3c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4aa3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4aa3c4:
    // 0x4aa3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4aa3c8:
    // 0x4aa3c8: 0x3e00008  jr          $ra
label_4aa3cc:
    if (ctx->pc == 0x4AA3CCu) {
        ctx->pc = 0x4AA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA3C8u;
        // 0x4aa3cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AA3D0u;
        goto label_fallthrough_0x4aa3c8;
    }
    ctx->pc = 0x4AA3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA3C8u;
        // 0x4aa3cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4aa3c8:
    ctx->pc = 0x4AA3D0u;
}
