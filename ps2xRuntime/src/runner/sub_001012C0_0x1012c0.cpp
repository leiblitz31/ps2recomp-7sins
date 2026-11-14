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

// Function: sub_001012C0
// Address: 0x1012c0 - 0x1014c0
void sub_001012C0_0x1012c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001012C0_0x1012c0");
#endif

    switch (ctx->pc) {
        case 0x1012d8u: goto label_1012d8;
        case 0x10133cu: goto label_10133c;
        case 0x10135cu: goto label_10135c;
        case 0x1013a0u: goto label_1013a0;
        case 0x1013acu: goto label_1013ac;
        case 0x1013e4u: goto label_1013e4;
        case 0x1013f0u: goto label_1013f0;
        case 0x10140cu: goto label_10140c;
        case 0x10141cu: goto label_10141c;
        case 0x101430u: goto label_101430;
        case 0x101460u: goto label_101460;
        case 0x101480u: goto label_101480;
        case 0x101494u: goto label_101494;
        default: break;
    }

    ctx->pc = 0x1012c0u;

    // 0x1012c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1012c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1012c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1012c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1012c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1012cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1012d0: 0xc04008c  jal         func_100230
    ctx->pc = 0x1012D0u;
    SET_GPR_U32(ctx, 31, 0x1012D8u);
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x1012D0u, 0x1012D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012D8u;
label_1012d8:
    // 0x1012d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1012d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1012dc: 0x24633220  addiu       $v1, $v1, 0x3220
    ctx->pc = 0x1012dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12832));
    // 0x1012e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1012e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1012e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1012e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1012ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1012ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1012f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1012f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1012F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1012FCu;
    // 0x1012fc: 0x0  nop
    ctx->pc = 0x1012fcu;
    // NOP
    // 0x101300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10130c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10130cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x101310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101314: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x101314u;
    {
        const bool branch_taken_0x101314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101314) {
            ctx->pc = 0x10135Cu;
            goto label_10135c;
        }
    }
    ctx->pc = 0x10131Cu;
    // 0x10131c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x101320: 0x24633220  addiu       $v1, $v1, 0x3220
    ctx->pc = 0x101320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12832));
    // 0x101324: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101328: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x101328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10132c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10132cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101334: 0xc040098  jal         func_100260
    ctx->pc = 0x101334u;
    SET_GPR_U32(ctx, 31, 0x10133Cu);
    ctx->pc = 0x100260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100260u, 0x101334u, 0x10133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10133Cu;
label_10133c:
    // 0x10133c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10133cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101340: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x101340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x101344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x101348: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101348u;
    {
        const bool branch_taken_0x101348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x101348) {
            ctx->pc = 0x10135Cu;
            goto label_10135c;
        }
    }
    ctx->pc = 0x101350u;
    // 0x101350: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101354: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x101354u;
    SET_GPR_U32(ctx, 31, 0x10135Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x101354u, 0x10135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10135Cu;
label_10135c:
    // 0x10135c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101364: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x101364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x101368: 0x3e00008  jr          $ra
    ctx->pc = 0x101368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101370u;
    // 0x101370: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x101374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10137c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101384: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x101384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x101388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10138c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x101390: 0x3c02edb8  lui         $v0, 0xEDB8
    ctx->pc = 0x101390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60856 << 16));
    // 0x101394: 0x34448320  ori         $a0, $v0, 0x8320
    ctx->pc = 0x101394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33568);
    // 0x101398: 0xc1196f0  jal         func_465BC0
    ctx->pc = 0x101398u;
    SET_GPR_U32(ctx, 31, 0x1013A0u);
    ctx->pc = 0x465BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465BC0u, 0x101398u, 0x1013A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013A0u;
label_1013a0:
    // 0x1013a0: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x1013a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1013a4: 0xc0401d0  jal         func_100740
    ctx->pc = 0x1013A4u;
    SET_GPR_U32(ctx, 31, 0x1013ACu);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x1013A4u, 0x1013ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013ACu;
label_1013ac:
    // 0x1013ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1013acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1013b0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1013b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1013b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1013b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1013b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1013b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1013bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1013bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1013c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1013c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1013c4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1013c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1013c8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1013c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1013cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1013ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013d0: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1013D0u;
    {
        const bool branch_taken_0x1013d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1013d0) {
            ctx->pc = 0x10148Cu;
            goto label_10148c;
        }
    }
    ctx->pc = 0x1013D8u;
    // 0x1013d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1013d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1013dc: 0xc040530  jal         func_1014C0
    ctx->pc = 0x1013DCu;
    SET_GPR_U32(ctx, 31, 0x1013E4u);
    ctx->pc = 0x1014C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C0u, 0x1013DCu, 0x1013E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013E4u;
label_1013e4:
    // 0x1013e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1013e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1013e8: 0xc116450  jal         func_459140
    ctx->pc = 0x1013E8u;
    SET_GPR_U32(ctx, 31, 0x1013F0u);
    ctx->pc = 0x459140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459140u, 0x1013E8u, 0x1013F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013F0u;
label_1013f0:
    // 0x1013f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1013f4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1013f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1013f8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1013f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1013fc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x101400: 0x278584b0  addiu       $a1, $gp, -0x7B50
    ctx->pc = 0x101400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935728));
    // 0x101404: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x101404u;
    SET_GPR_U32(ctx, 31, 0x10140Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x101404u, 0x10140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10140Cu;
label_10140c:
    // 0x10140c: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x10140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x101410: 0x278584b8  addiu       $a1, $gp, -0x7B48
    ctx->pc = 0x101410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935736));
    // 0x101414: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x101414u;
    SET_GPR_U32(ctx, 31, 0x10141Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x101414u, 0x10141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10141Cu;
label_10141c:
    // 0x10141c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101420: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x101420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x101424: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x101424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x101428: 0xc116420  jal         func_459080
    ctx->pc = 0x101428u;
    SET_GPR_U32(ctx, 31, 0x101430u);
    ctx->pc = 0x459080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459080u, 0x101428u, 0x101430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101430u;
label_101430:
    // 0x101430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101434: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x101434u;
    {
        const bool branch_taken_0x101434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101434) {
            ctx->pc = 0x101448u;
            goto label_101448;
        }
    }
    ctx->pc = 0x10143Cu;
    // 0x10143c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10143cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101440: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x101440u;
    {
        const bool branch_taken_0x101440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101440) {
            ctx->pc = 0x10149Cu;
            goto label_10149c;
        }
    }
    ctx->pc = 0x101448u;
label_101448:
    // 0x101448: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x101448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10144c: 0x278484bc  addiu       $a0, $gp, -0x7B44
    ctx->pc = 0x10144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935740));
    // 0x101450: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x101450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x101454: 0x24a51250  addiu       $a1, $a1, 0x1250
    ctx->pc = 0x101454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    // 0x101458: 0xc117c68  jal         func_45F1A0
    ctx->pc = 0x101458u;
    SET_GPR_U32(ctx, 31, 0x101460u);
    ctx->pc = 0x45F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F1A0u, 0x101458u, 0x101460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101460u;
label_101460:
    // 0x101460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101464: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x101464u;
    {
        const bool branch_taken_0x101464 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x101464) {
            ctx->pc = 0x10148Cu;
            goto label_10148c;
        }
    }
    ctx->pc = 0x10146Cu;
    // 0x10146c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x10146cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x101470: 0x24841260  addiu       $a0, $a0, 0x1260
    ctx->pc = 0x101470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4704));
    // 0x101474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101478: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x101478u;
    SET_GPR_U32(ctx, 31, 0x101480u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x101478u, 0x101480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101480u;
label_101480:
    // 0x101480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101484: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101484u;
    {
        const bool branch_taken_0x101484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101484) {
            ctx->pc = 0x10149Cu;
            goto label_10149c;
        }
    }
    ctx->pc = 0x10148Cu;
label_10148c:
    // 0x10148c: 0xc116e28  jal         func_45B8A0
    ctx->pc = 0x10148Cu;
    SET_GPR_U32(ctx, 31, 0x101494u);
    ctx->pc = 0x45B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B8A0u, 0x10148Cu, 0x101494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101494u;
label_101494:
    // 0x101494: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10149c:
    // 0x10149c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10149cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1014a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1014a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1014a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1014a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1014a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1014a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1014ac: 0x27bd0270  addiu       $sp, $sp, 0x270
    ctx->pc = 0x1014acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1014b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1014B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1014B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1014B8u;
    // 0x1014b8: 0x0  nop
    ctx->pc = 0x1014b8u;
    // NOP
    // 0x1014bc: 0x0  nop
    ctx->pc = 0x1014bcu;
    // NOP
    ctx->pc = 0x1014c0u;
}
