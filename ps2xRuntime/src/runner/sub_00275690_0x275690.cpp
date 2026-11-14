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

// Function: sub_00275690
// Address: 0x275690 - 0x275940
void sub_00275690_0x275690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275690_0x275690");
#endif

    switch (ctx->pc) {
        case 0x2756a8u: goto label_2756a8;
        case 0x275704u: goto label_275704;
        case 0x275744u: goto label_275744;
        case 0x275778u: goto label_275778;
        case 0x275788u: goto label_275788;
        case 0x27579cu: goto label_27579c;
        case 0x2757b4u: goto label_2757b4;
        case 0x2757e4u: goto label_2757e4;
        case 0x275804u: goto label_275804;
        case 0x275814u: goto label_275814;
        case 0x27582cu: goto label_27582c;
        case 0x275844u: goto label_275844;
        case 0x275850u: goto label_275850;
        case 0x275864u: goto label_275864;
        case 0x27588cu: goto label_27588c;
        case 0x2758acu: goto label_2758ac;
        case 0x2758bcu: goto label_2758bc;
        case 0x2758ccu: goto label_2758cc;
        case 0x2758e0u: goto label_2758e0;
        case 0x2758f0u: goto label_2758f0;
        case 0x275908u: goto label_275908;
        default: break;
    }

    ctx->pc = 0x275690u;

    // 0x275690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27569c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2756a0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2756A0u;
    SET_GPR_U32(ctx, 31, 0x2756A8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2756A0u, 0x2756A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756A8u;
label_2756a8:
    // 0x2756a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2756a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2756ac: 0x24635bd0  addiu       $v1, $v1, 0x5BD0
    ctx->pc = 0x2756acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23504));
    // 0x2756b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2756b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2756b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2756b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2756b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2756bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2756bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2756c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2756c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2756c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2756C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2756C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2756CCu;
    // 0x2756cc: 0x0  nop
    ctx->pc = 0x2756ccu;
    // NOP
    // 0x2756d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2756d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2756d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2756d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2756d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2756d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2756dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2756dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2756e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2756e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2756e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2756e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2756e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2756e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2756ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2756ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2756f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2756f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2756f4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2756f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2756f8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2756f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2756fc: 0xc09d248  jal         func_274920
    ctx->pc = 0x2756FCu;
    SET_GPR_U32(ctx, 31, 0x275704u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2756FCu, 0x275704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275704u;
label_275704:
    // 0x275704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275708: 0x1043007b  beq         $v0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x275708u;
    {
        const bool branch_taken_0x275708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275708) {
            ctx->pc = 0x2758F8u;
            goto label_2758f8;
        }
    }
    ctx->pc = 0x275710u;
    // 0x275710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275714: 0x1043007c  beq         $v0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x275714u;
    {
        const bool branch_taken_0x275714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275714) {
            ctx->pc = 0x275908u;
            goto label_275908;
        }
    }
    ctx->pc = 0x27571Cu;
    // 0x27571c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275720: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275720u;
    {
        const bool branch_taken_0x275720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275720) {
            ctx->pc = 0x275730u;
            goto label_275730;
        }
    }
    ctx->pc = 0x275728u;
    // 0x275728: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x275728u;
    {
        const bool branch_taken_0x275728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275728) {
            ctx->pc = 0x275908u;
            goto label_275908;
        }
    }
    ctx->pc = 0x275730u;
label_275730:
    // 0x275730: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x275730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275734: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x275734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x275738: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x275738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27573c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27573Cu;
    SET_GPR_U32(ctx, 31, 0x275744u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27573Cu, 0x275744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275744u;
label_275744:
    // 0x275744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275748: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x275748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x27574c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x275750: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x275750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x275754: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x275754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275758: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x275758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x27575c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27575Cu;
    {
        const bool branch_taken_0x27575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27575c) {
            ctx->pc = 0x2757C8u;
            goto label_2757c8;
        }
    }
    ctx->pc = 0x275764u;
    // 0x275764: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x275764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275768: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x275768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x27576c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x275770: 0xc085538  jal         func_2154E0
    ctx->pc = 0x275770u;
    SET_GPR_U32(ctx, 31, 0x275778u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x275770u, 0x275778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275778u;
label_275778:
    // 0x275778: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x275778u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27577c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27577cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275780: 0xc096874  jal         func_25A1D0
    ctx->pc = 0x275780u;
    SET_GPR_U32(ctx, 31, 0x275788u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x275780u, 0x275788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275788u;
label_275788:
    // 0x275788: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x275788u;
    {
        const bool branch_taken_0x275788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275788) {
            ctx->pc = 0x2757C8u;
            goto label_2757c8;
        }
    }
    ctx->pc = 0x275790u;
    // 0x275790: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x275790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275794: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x275794u;
    SET_GPR_U32(ctx, 31, 0x27579Cu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x275794u, 0x27579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27579Cu;
label_27579c:
    // 0x27579c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2757a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2757a4: 0x24a5d108  addiu       $a1, $a1, -0x2EF8
    ctx->pc = 0x2757a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955272));
    // 0x2757a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2757a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757ac: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2757ACu;
    SET_GPR_U32(ctx, 31, 0x2757B4u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2757ACu, 0x2757B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757B4u;
label_2757b4:
    // 0x2757b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2757B4u;
    {
        const bool branch_taken_0x2757b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2757b4) {
            ctx->pc = 0x2757C8u;
            goto label_2757c8;
        }
    }
    ctx->pc = 0x2757BCu;
    // 0x2757bc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2757bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2757c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2757c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2757c4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2757c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2757c8:
    // 0x2757c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2757c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2757cc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2757ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2757d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2757d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2757d4: 0x24a5d120  addiu       $a1, $a1, -0x2EE0
    ctx->pc = 0x2757d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955296));
    // 0x2757d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2757d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757dc: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2757DCu;
    SET_GPR_U32(ctx, 31, 0x2757E4u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2757DCu, 0x2757E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2757E4u;
label_2757e4:
    // 0x2757e4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2757E4u;
    {
        const bool branch_taken_0x2757e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2757e4) {
            ctx->pc = 0x275870u;
            goto label_275870;
        }
    }
    ctx->pc = 0x2757ECu;
    // 0x2757ec: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2757ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2757f0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2757f4: 0x24520028  addiu       $s2, $v0, 0x28
    ctx->pc = 0x2757f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2757f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2757f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2757FCu;
    {
        const bool branch_taken_0x2757fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2757fc) {
            ctx->pc = 0x275858u;
            goto label_275858;
        }
    }
    ctx->pc = 0x275804u;
label_275804:
    // 0x275804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27580c: 0xc09d660  jal         func_275980
    ctx->pc = 0x27580Cu;
    SET_GPR_U32(ctx, 31, 0x275814u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x27580Cu, 0x275814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275814u;
label_275814:
    // 0x275814: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x275814u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x275818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27581c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27581cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x275820: 0x24a5d138  addiu       $a1, $a1, -0x2EC8
    ctx->pc = 0x275820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955320));
    // 0x275824: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x275824u;
    SET_GPR_U32(ctx, 31, 0x27582Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x275824u, 0x27582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27582Cu;
label_27582c:
    // 0x27582c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27582Cu;
    {
        const bool branch_taken_0x27582c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27582c) {
            ctx->pc = 0x275854u;
            goto label_275854;
        }
    }
    ctx->pc = 0x275834u;
    // 0x275834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275838: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27583c: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x27583Cu;
    SET_GPR_U32(ctx, 31, 0x275844u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x27583Cu, 0x275844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275844u;
label_275844:
    // 0x275844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275848: 0xc09d650  jal         func_275940
    ctx->pc = 0x275848u;
    SET_GPR_U32(ctx, 31, 0x275850u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x275848u, 0x275850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275850u;
label_275850:
    // 0x275850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275854:
    // 0x275854: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x275854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_275858:
    // 0x275858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27585c: 0xc09d650  jal         func_275940
    ctx->pc = 0x27585Cu;
    SET_GPR_U32(ctx, 31, 0x275864u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x27585Cu, 0x275864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275864u;
label_275864:
    // 0x275864: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x275864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x275868: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x275868u;
    {
        const bool branch_taken_0x275868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275868) {
            ctx->pc = 0x275804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275804;
        }
    }
    ctx->pc = 0x275870u;
label_275870:
    // 0x275870: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x275870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x275874: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x275874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x275878: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x275878u;
    {
        const bool branch_taken_0x275878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275878) {
            ctx->pc = 0x2758E0u;
            goto label_2758e0;
        }
    }
    ctx->pc = 0x275880u;
    // 0x275880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275884: 0xc096880  jal         func_25A200
    ctx->pc = 0x275884u;
    SET_GPR_U32(ctx, 31, 0x27588Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x275884u, 0x27588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27588Cu;
label_27588c:
    // 0x27588c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x27588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x275890: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x275890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275894: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x275894u;
    {
        const bool branch_taken_0x275894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x275894) {
            ctx->pc = 0x2758E0u;
            goto label_2758e0;
        }
    }
    ctx->pc = 0x27589Cu;
    // 0x27589c: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x27589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x2758a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2758a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2758a4: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x2758A4u;
    SET_GPR_U32(ctx, 31, 0x2758ACu);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x2758A4u, 0x2758ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758ACu;
label_2758ac:
    // 0x2758ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2758acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2758b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758b4: 0xc04d050  jal         func_134140
    ctx->pc = 0x2758B4u;
    SET_GPR_U32(ctx, 31, 0x2758BCu);
    ctx->pc = 0x134140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134140u, 0x2758B4u, 0x2758BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758BCu;
label_2758bc:
    // 0x2758bc: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x2758bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x2758c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2758c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2758c4: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x2758C4u;
    SET_GPR_U32(ctx, 31, 0x2758CCu);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x2758C4u, 0x2758CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758CCu;
label_2758cc:
    // 0x2758cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2758ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2758d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2758d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2758d8: 0xc050270  jal         func_1409C0
    ctx->pc = 0x2758D8u;
    SET_GPR_U32(ctx, 31, 0x2758E0u);
    ctx->pc = 0x1409C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1409C0u, 0x2758D8u, 0x2758E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758E0u;
label_2758e0:
    // 0x2758e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2758e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2758e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2758e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2758e8: 0xc09d250  jal         func_274940
    ctx->pc = 0x2758E8u;
    SET_GPR_U32(ctx, 31, 0x2758F0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2758E8u, 0x2758F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758F0u;
label_2758f0:
    // 0x2758f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2758F0u;
    {
        const bool branch_taken_0x2758f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758f0) {
            ctx->pc = 0x275908u;
            goto label_275908;
        }
    }
    ctx->pc = 0x2758F8u;
label_2758f8:
    // 0x2758f8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2758f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2758fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2758fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275900: 0xc09d250  jal         func_274940
    ctx->pc = 0x275900u;
    SET_GPR_U32(ctx, 31, 0x275908u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275900u, 0x275908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275908u;
label_275908:
    // 0x275908: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x275908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27590c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27590cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x275910: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x275910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275914: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x275914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x275918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27591c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27591cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275928: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x275928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27592c: 0x3e00008  jr          $ra
    ctx->pc = 0x27592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275934u;
    // 0x275934: 0x0  nop
    ctx->pc = 0x275934u;
    // NOP
    // 0x275938: 0x0  nop
    ctx->pc = 0x275938u;
    // NOP
    // 0x27593c: 0x0  nop
    ctx->pc = 0x27593cu;
    // NOP
    ctx->pc = 0x275940u;
}
