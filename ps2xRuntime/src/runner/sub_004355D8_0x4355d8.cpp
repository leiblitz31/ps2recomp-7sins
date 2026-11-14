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

// Function: sub_004355D8
// Address: 0x4355d8 - 0x435a08
void sub_004355D8_0x4355d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004355D8_0x4355d8");
#endif

    switch (ctx->pc) {
        case 0x43562cu: goto label_43562c;
        case 0x435688u: goto label_435688;
        case 0x4356d4u: goto label_4356d4;
        case 0x4356f4u: goto label_4356f4;
        case 0x4356fcu: goto label_4356fc;
        case 0x4357b4u: goto label_4357b4;
        case 0x435888u: goto label_435888;
        case 0x435894u: goto label_435894;
        case 0x4358dcu: goto label_4358dc;
        case 0x4358f0u: goto label_4358f0;
        case 0x435998u: goto label_435998;
        case 0x4359b0u: goto label_4359b0;
        default: break;
    }

    ctx->pc = 0x4355d8u;

    // 0x4355d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4355D8u;
    {
        const bool branch_taken_0x4355d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4355D8u;
        // 0x4355dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4355d8) {
            ctx->pc = 0x4355ECu;
            goto label_4355ec;
        }
    }
    ctx->pc = 0x4355E0u;
    // 0x4355e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4355e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4355e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4355e8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x4355e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_4355ec:
    // 0x4355ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4355ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4355F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4355ECu;
        // 0x4355f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4355ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4355F4u;
    // 0x4355f4: 0x0  nop
    ctx->pc = 0x4355f4u;
    // NOP
    // 0x4355f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4355f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4355fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4355fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x435600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x435600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x435604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435608: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x435608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43560c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x43560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x435610: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x435610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x435614: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x435614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x435618: 0x1444001d  bne         $v0, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x435618u;
    {
        const bool branch_taken_0x435618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x43561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435618u;
        // 0x43561c: 0x8f82ae30  lw          $v0, -0x51D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435618) {
            ctx->pc = 0x435690u;
            goto label_435690;
        }
    }
    ctx->pc = 0x435620u;
    // 0x435620: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x435620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x435624: 0xc10a322  jal         func_428C88
    ctx->pc = 0x435624u;
    SET_GPR_U32(ctx, 31, 0x43562Cu);
    ctx->pc = 0x435628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435624u;
    // 0x435628: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x435624u, 0x43562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43562Cu;
label_43562c:
    // 0x43562c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x43562cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x435630: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x435630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x435634: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x435634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x435638: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x435638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x43563c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x43563cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x435640: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x435640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x435644: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x435644u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x435648: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x435648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x43564c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x43564cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x435650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435654: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x435654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x435658: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x435658u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x43565c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x43565cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x435660: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x435660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x435664: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435668: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x435668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x43566c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x43566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x435670: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x435670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x435674: 0x30420090  andi        $v0, $v0, 0x90
    ctx->pc = 0x435674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)144);
    // 0x435678: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x435678u;
    {
        const bool branch_taken_0x435678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x43567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435678u;
        // 0x43567c: 0x8f82ae30  lw          $v0, -0x51D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435678) {
            ctx->pc = 0x435690u;
            goto label_435690;
        }
    }
    ctx->pc = 0x435680u;
    // 0x435680: 0xc10d212  jal         func_434848
    ctx->pc = 0x435680u;
    SET_GPR_U32(ctx, 31, 0x435688u);
    ctx->pc = 0x434848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434848u, 0x435680u, 0x435688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435688u;
label_435688:
    // 0x435688: 0x8f82ae30  lw          $v0, -0x51D0($gp)
    ctx->pc = 0x435688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946352)));
    // 0x43568c: 0x0  nop
    ctx->pc = 0x43568cu;
    // NOP
label_435690:
    // 0x435690: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x435690u;
    {
        const bool branch_taken_0x435690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435690) {
            ctx->pc = 0x435694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435690u;
            // 0x435694: 0xaf80ae30  sw          $zero, -0x51D0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294946352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435698u;
            goto label_435698;
        }
    }
    ctx->pc = 0x435698u;
label_435698:
    // 0x435698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x435698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43569c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4356a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4356a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4356a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4356A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4356A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4356A4u;
        // 0x4356a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4356A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4356ACu;
    // 0x4356ac: 0x0  nop
    ctx->pc = 0x4356acu;
    // NOP
    // 0x4356b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4356b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4356b4: 0xdf82ae28  ld          $v0, -0x51D8($gp)
    ctx->pc = 0x4356b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946344)));
    // 0x4356b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4356b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4356bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4356BCu;
    {
        const bool branch_taken_0x4356bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4356C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4356BCu;
        // 0x4356c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4356bc) {
            ctx->pc = 0x4356CCu;
            goto label_4356cc;
        }
    }
    ctx->pc = 0x4356C4u;
    // 0x4356c4: 0xff80ae28  sd          $zero, -0x51D8($gp)
    ctx->pc = 0x4356c4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946344), GPR_U64(ctx, 0));
    // 0x4356c8: 0xaf80ae30  sw          $zero, -0x51D0($gp)
    ctx->pc = 0x4356c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946352), GPR_U32(ctx, 0));
label_4356cc:
    // 0x4356cc: 0xc110fd2  jal         func_443F48
    ctx->pc = 0x4356CCu;
    SET_GPR_U32(ctx, 31, 0x4356D4u);
    ctx->pc = 0x443F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443F48u, 0x4356CCu, 0x4356D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4356D4u;
label_4356d4:
    // 0x4356d4: 0x8f83ae94  lw          $v1, -0x516C($gp)
    ctx->pc = 0x4356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
    // 0x4356d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4356dc: 0x24503170  addiu       $s0, $v0, 0x3170
    ctx->pc = 0x4356dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12656));
    // 0x4356e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x4356e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4356e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4356e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4356e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4356e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4356ec: 0xc10a17c  jal         func_4285F0
    ctx->pc = 0x4356ECu;
    SET_GPR_U32(ctx, 31, 0x4356F4u);
    ctx->pc = 0x4356F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4356ECu;
    // 0x4356f0: 0xaf83ae94  sw          $v1, -0x516C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946452), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4285F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4285F0u, 0x4356ECu, 0x4356F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4356F4u;
label_4356f4:
    // 0x4356f4: 0xc10d09c  jal         func_434270
    ctx->pc = 0x4356F4u;
    SET_GPR_U32(ctx, 31, 0x4356FCu);
    ctx->pc = 0x434270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434270u, 0x4356F4u, 0x4356FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4356FCu;
label_4356fc:
    // 0x4356fc: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x4356fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x435700: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x435700u;
    {
        const bool branch_taken_0x435700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435700u;
        // 0x435704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435700) {
            ctx->pc = 0x43572Cu;
            goto label_43572c;
        }
    }
    ctx->pc = 0x435708u;
    // 0x435708: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x435708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x43570c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43570Cu;
    {
        const bool branch_taken_0x43570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43570Cu;
        // 0x435710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43570c) {
            ctx->pc = 0x43572Cu;
            goto label_43572c;
        }
    }
    ctx->pc = 0x435714u;
    // 0x435714: 0x8e0203c8  lw          $v0, 0x3C8($s0)
    ctx->pc = 0x435714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x435718: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x435718u;
    {
        const bool branch_taken_0x435718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435718u;
        // 0x43571c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435718) {
            ctx->pc = 0x43572Cu;
            goto label_43572c;
        }
    }
    ctx->pc = 0x435720u;
    // 0x435720: 0x8e0203cc  lw          $v0, 0x3CC($s0)
    ctx->pc = 0x435720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x435724: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x435724u;
    {
        const bool branch_taken_0x435724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435724u;
        // 0x435728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435724) {
            ctx->pc = 0x435730u;
            goto label_435730;
        }
    }
    ctx->pc = 0x43572Cu;
label_43572c:
    // 0x43572c: 0xaf82aeb4  sw          $v0, -0x514C($gp)
    ctx->pc = 0x43572cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 2));
label_435730:
    // 0x435730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x435730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x435734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x435738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43573c: 0x3e00008  jr          $ra
    ctx->pc = 0x43573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43573Cu;
        // 0x435740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435744u;
    // 0x435744: 0x0  nop
    ctx->pc = 0x435744u;
    // NOP
    // 0x435748: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x435748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x43574c: 0x3e00008  jr          $ra
    ctx->pc = 0x43574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43574Cu;
        // 0x435750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435754u;
    // 0x435754: 0x0  nop
    ctx->pc = 0x435754u;
    // NOP
    // 0x435758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x435758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43575c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x43575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x435760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x435760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x435764: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x435764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435768: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x435768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x43576c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x43576cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435770: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x435770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x435774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435778: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x435778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x43577c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x43577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x435780: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x435780u;
    {
        const bool branch_taken_0x435780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435780u;
        // 0x435784: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435780) {
            ctx->pc = 0x4357ECu;
            goto label_4357ec;
        }
    }
    ctx->pc = 0x435788u;
    // 0x435788: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x435788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x43578c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x43578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x435790: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x435790u;
    {
        const bool branch_taken_0x435790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435790u;
        // 0x435794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435790) {
            ctx->pc = 0x4357F0u;
            goto label_4357f0;
        }
    }
    ctx->pc = 0x435798u;
    // 0x435798: 0x32510001  andi        $s1, $s2, 0x1
    ctx->pc = 0x435798u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x43579c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x43579Cu;
    {
        const bool branch_taken_0x43579c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4357A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43579Cu;
        // 0x4357a0: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43579c) {
            ctx->pc = 0x4357B4u;
            goto label_4357b4;
        }
    }
    ctx->pc = 0x4357A4u;
    // 0x4357a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4357A4u;
    {
        const bool branch_taken_0x4357a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4357a4) {
            ctx->pc = 0x4357A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4357A4u;
            // 0x4357a8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4357B8u;
            goto label_4357b8;
        }
    }
    ctx->pc = 0x4357ACu;
    // 0x4357ac: 0xc110c82  jal         func_443208
    ctx->pc = 0x4357ACu;
    SET_GPR_U32(ctx, 31, 0x4357B4u);
    ctx->pc = 0x4357B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4357ACu;
    // 0x4357b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443208u, 0x4357ACu, 0x4357B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4357B4u;
label_4357b4:
    // 0x4357b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4357b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4357b8:
    // 0x4357b8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4357B8u;
    {
        const bool branch_taken_0x4357b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4357BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4357B8u;
        // 0x4357bc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357b8) {
            ctx->pc = 0x4357CCu;
            goto label_4357cc;
        }
    }
    ctx->pc = 0x4357C0u;
    // 0x4357c0: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4357c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4357c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4357c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4357c8: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x4357c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_4357cc:
    // 0x4357cc: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x4357ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x4357d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4357D0u;
    {
        const bool branch_taken_0x4357d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4357d0) {
            ctx->pc = 0x4357D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4357D0u;
            // 0x4357d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4357F0u;
            goto label_4357f0;
        }
    }
    ctx->pc = 0x4357D8u;
    // 0x4357d8: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4357d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4357dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4357dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4357e0: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x4357e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x4357e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4357E4u;
    {
        const bool branch_taken_0x4357e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4357E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4357E4u;
        // 0x4357e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357e4) {
            ctx->pc = 0x4357F0u;
            goto label_4357f0;
        }
    }
    ctx->pc = 0x4357ECu;
label_4357ec:
    // 0x4357ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4357ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4357f0:
    // 0x4357f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4357f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4357f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4357f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4357f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4357f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4357fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4357fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435804: 0x3e00008  jr          $ra
    ctx->pc = 0x435804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435804u;
        // 0x435808: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43580Cu;
    // 0x43580c: 0x0  nop
    ctx->pc = 0x43580cu;
    // NOP
    // 0x435810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x435814: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x435814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x435818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43581c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435820: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x435820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x435824: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x435824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x435828: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x435828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x43582c: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x43582Cu;
    {
        const bool branch_taken_0x43582c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43582c) {
            ctx->pc = 0x435830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43582Cu;
            // 0x435830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435900u;
            goto label_435900;
        }
    }
    ctx->pc = 0x435834u;
    // 0x435834: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x435834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x435838: 0x10e00030  beqz        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x435838u;
    {
        const bool branch_taken_0x435838 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x43583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435838u;
        // 0x43583c: 0x30444000  andi        $a0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x435838) {
            ctx->pc = 0x4358FCu;
            goto label_4358fc;
        }
    }
    ctx->pc = 0x435840u;
    // 0x435840: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x435840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x435844: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x435844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x435848: 0x30460f00  andi        $a2, $v0, 0xF00
    ctx->pc = 0x435848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x43584c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x43584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x435850: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x435850u;
    {
        const bool branch_taken_0x435850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x435854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435850u;
        // 0x435854: 0x64280b  movn        $a1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435850) {
            ctx->pc = 0x43586Cu;
            goto label_43586c;
        }
    }
    ctx->pc = 0x435858u;
    // 0x435858: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x435858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x43585c: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43585Cu;
    {
        const bool branch_taken_0x43585c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x435860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43585Cu;
        // 0x435860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43585c) {
            ctx->pc = 0x435874u;
            goto label_435874;
        }
    }
    ctx->pc = 0x435864u;
    // 0x435864: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x435864u;
    {
        const bool branch_taken_0x435864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435864u;
        // 0x435868: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435864) {
            ctx->pc = 0x43587Cu;
            goto label_43587c;
        }
    }
    ctx->pc = 0x43586Cu;
label_43586c:
    // 0x43586c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x43586Cu;
    {
        const bool branch_taken_0x43586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43586Cu;
        // 0x435870: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43586c) {
            ctx->pc = 0x4358A0u;
            goto label_4358a0;
        }
    }
    ctx->pc = 0x435874u;
label_435874:
    // 0x435874: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x435874u;
    {
        const bool branch_taken_0x435874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435874u;
        // 0x435878: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435874) {
            ctx->pc = 0x4358A0u;
            goto label_4358a0;
        }
    }
    ctx->pc = 0x43587Cu;
label_43587c:
    // 0x43587c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x43587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x435880: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x435880u;
    SET_GPR_U32(ctx, 31, 0x435888u);
    ctx->pc = 0x435884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435880u;
    // 0x435884: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x435880u, 0x435888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435888u;
label_435888:
    // 0x435888: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x435888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43588c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x43588Cu;
    SET_GPR_U32(ctx, 31, 0x435894u);
    ctx->pc = 0x435890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43588Cu;
    // 0x435890: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x43588Cu, 0x435894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435894u;
label_435894:
    // 0x435894: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x435894u;
    {
        const bool branch_taken_0x435894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435894u;
        // 0x435898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435894) {
            ctx->pc = 0x435900u;
            goto label_435900;
        }
    }
    ctx->pc = 0x43589Cu;
    // 0x43589c: 0x0  nop
    ctx->pc = 0x43589cu;
    // NOP
label_4358a0:
    // 0x4358a0: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x4358a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x4358a4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x4358a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x4358a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4358A8u;
    {
        const bool branch_taken_0x4358a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4358ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4358A8u;
        // 0x4358ac: 0xe32821  addu        $a1, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4358a8) {
            ctx->pc = 0x4358E4u;
            goto label_4358e4;
        }
    }
    ctx->pc = 0x4358B0u;
    // 0x4358b0: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4358b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4358b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4358b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4358b8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4358B8u;
    {
        const bool branch_taken_0x4358b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4358b8) {
            ctx->pc = 0x4358BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4358B8u;
            // 0x4358bc: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4358F4u;
            goto label_4358f4;
        }
    }
    ctx->pc = 0x4358C0u;
    // 0x4358c0: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x4358c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4358c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4358c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4358c8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x4358c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x4358cc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4358CCu;
    {
        const bool branch_taken_0x4358cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4358cc) {
            ctx->pc = 0x4358D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4358CCu;
            // 0x4358d0: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4358F4u;
            goto label_4358f4;
        }
    }
    ctx->pc = 0x4358D4u;
    // 0x4358d4: 0xc110a92  jal         func_442A48
    ctx->pc = 0x4358D4u;
    SET_GPR_U32(ctx, 31, 0x4358DCu);
    ctx->pc = 0x4358D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4358D4u;
    // 0x4358d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442A48u, 0x4358D4u, 0x4358DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4358DCu;
label_4358dc:
    // 0x4358dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4358DCu;
    {
        const bool branch_taken_0x4358dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4358E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4358DCu;
        // 0x4358e0: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4358dc) {
            ctx->pc = 0x4358F4u;
            goto label_4358f4;
        }
    }
    ctx->pc = 0x4358E4u;
label_4358e4:
    // 0x4358e4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4358e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4358e8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4358E8u;
    SET_GPR_U32(ctx, 31, 0x4358F0u);
    ctx->pc = 0x4358ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4358E8u;
    // 0x4358ec: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4358E8u, 0x4358F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4358F0u;
label_4358f0:
    // 0x4358f0: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4358f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_4358f4:
    // 0x4358f4: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x4358f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x4358f8: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x4358f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_4358fc:
    // 0x4358fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4358fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_435900:
    // 0x435900: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x435900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435908: 0x3e00008  jr          $ra
    ctx->pc = 0x435908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435908u;
        // 0x43590c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435910u;
    // 0x435910: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x435910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x435914: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x435914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x435918: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x435918u;
    {
        const bool branch_taken_0x435918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435918u;
        // 0x43591c: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435918) {
            ctx->pc = 0x435954u;
            goto label_435954;
        }
    }
    ctx->pc = 0x435920u;
    // 0x435920: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x435920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x435924: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x435924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x435928: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x435928u;
    {
        const bool branch_taken_0x435928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435928u;
        // 0x43592c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435928) {
            ctx->pc = 0x43594Cu;
            goto label_43594c;
        }
    }
    ctx->pc = 0x435930u;
    // 0x435930: 0x50c0000c  beql        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x435930u;
    {
        const bool branch_taken_0x435930 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x435930) {
            ctx->pc = 0x435934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435930u;
            // 0x435934: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435964u;
            goto label_435964;
        }
    }
    ctx->pc = 0x435938u;
    // 0x435938: 0x90c20016  lbu         $v0, 0x16($a2)
    ctx->pc = 0x435938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x43593c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x43593cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x435940: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x435940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x435944: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x435944u;
    {
        const bool branch_taken_0x435944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435944u;
        // 0x435948: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435944) {
            ctx->pc = 0x43595Cu;
            goto label_43595c;
        }
    }
    ctx->pc = 0x43594Cu;
label_43594c:
    // 0x43594c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43594Cu;
    {
        const bool branch_taken_0x43594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43594Cu;
        // 0x435950: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43594c) {
            ctx->pc = 0x43595Cu;
            goto label_43595c;
        }
    }
    ctx->pc = 0x435954u;
label_435954:
    // 0x435954: 0x3e00008  jr          $ra
    ctx->pc = 0x435954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435954u;
        // 0x435958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43595Cu;
label_43595c:
    // 0x43595c: 0x3e00008  jr          $ra
    ctx->pc = 0x43595Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43595Cu;
        // 0x435960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43595Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435964u;
label_435964:
    // 0x435964: 0x3e00008  jr          $ra
    ctx->pc = 0x435964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43596Cu;
    // 0x43596c: 0x0  nop
    ctx->pc = 0x43596cu;
    // NOP
    // 0x435970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x435974: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x435974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x435978: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x435978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43597c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x435980: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x435980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x435984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43598c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x43598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x435990: 0xc105328  jal         func_414CA0
    ctx->pc = 0x435990u;
    SET_GPR_U32(ctx, 31, 0x435998u);
    ctx->pc = 0x435994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435990u;
    // 0x435994: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x435990u, 0x435998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435998u;
label_435998:
    // 0x435998: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x435998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43599c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x43599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4359a0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4359a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4359a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4359a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4359a8: 0xc105328  jal         func_414CA0
    ctx->pc = 0x4359A8u;
    SET_GPR_U32(ctx, 31, 0x4359B0u);
    ctx->pc = 0x4359ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4359A8u;
    // 0x4359ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414CA0u, 0x4359A8u, 0x4359B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4359B0u;
label_4359b0:
    // 0x4359b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4359b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4359b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4359b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4359b8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x4359b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4359bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4359bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4359c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4359c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4359c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4359c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4359c8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4359c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4359cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4359d0: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x4359d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4359d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4359d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4359d8: 0x8ca6002c  lw          $a2, 0x2C($a1)
    ctx->pc = 0x4359d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4359dc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x4359dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4359e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4359e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4359e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4359e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4359e8: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x4359e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x4359ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4359ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4359f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4359f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4359f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4359F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4359F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4359F4u;
        // 0x4359f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4359F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4359FCu;
    // 0x4359fc: 0x0  nop
    ctx->pc = 0x4359fcu;
    // NOP
    // 0x435a00: 0x3e00008  jr          $ra
    ctx->pc = 0x435A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435A00u;
        // 0x435a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435A08u;
}
