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

// Function: sub_00146700
// Address: 0x146700 - 0x146d00
void sub_00146700_0x146700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146700_0x146700");
#endif

    switch (ctx->pc) {
        case 0x146740u: goto label_146740;
        case 0x146764u: goto label_146764;
        case 0x146770u: goto label_146770;
        case 0x146780u: goto label_146780;
        case 0x1467acu: goto label_1467ac;
        case 0x1467dcu: goto label_1467dc;
        case 0x14680cu: goto label_14680c;
        case 0x14684cu: goto label_14684c;
        case 0x14686cu: goto label_14686c;
        case 0x1468a8u: goto label_1468a8;
        case 0x1468b4u: goto label_1468b4;
        case 0x1468c0u: goto label_1468c0;
        case 0x1468e0u: goto label_1468e0;
        case 0x1468fcu: goto label_1468fc;
        case 0x14690cu: goto label_14690c;
        case 0x14691cu: goto label_14691c;
        case 0x146930u: goto label_146930;
        case 0x146940u: goto label_146940;
        case 0x1469a0u: goto label_1469a0;
        case 0x1469bcu: goto label_1469bc;
        case 0x1469c8u: goto label_1469c8;
        case 0x1469d4u: goto label_1469d4;
        case 0x1469f0u: goto label_1469f0;
        case 0x146a0cu: goto label_146a0c;
        case 0x146a1cu: goto label_146a1c;
        case 0x146a44u: goto label_146a44;
        case 0x146a60u: goto label_146a60;
        case 0x146a6cu: goto label_146a6c;
        case 0x146a78u: goto label_146a78;
        case 0x146a94u: goto label_146a94;
        case 0x146ab0u: goto label_146ab0;
        case 0x146ac0u: goto label_146ac0;
        case 0x146aecu: goto label_146aec;
        case 0x146b08u: goto label_146b08;
        case 0x146b14u: goto label_146b14;
        case 0x146b20u: goto label_146b20;
        case 0x146b3cu: goto label_146b3c;
        case 0x146b58u: goto label_146b58;
        case 0x146b68u: goto label_146b68;
        case 0x146b78u: goto label_146b78;
        case 0x146bb8u: goto label_146bb8;
        case 0x146bd4u: goto label_146bd4;
        case 0x146be0u: goto label_146be0;
        case 0x146c0cu: goto label_146c0c;
        case 0x146c18u: goto label_146c18;
        default: break;
    }

    ctx->pc = 0x146700u;

    // 0x146700: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x146700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x146704: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x146704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x146708: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x146708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14670c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x146710: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x146710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x146714: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x146714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x146718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x146718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14671c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x146720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14672c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x14672cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x146730: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x146730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x146734: 0x24a52ad0  addiu       $a1, $a1, 0x2AD0
    ctx->pc = 0x146734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10960));
    // 0x146738: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14673c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_146740:
    // 0x146740: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146744: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x146744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x146748: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14674c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14674cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146750: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x146750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x146754: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146754u;
    {
        const bool branch_taken_0x146754 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x146754) {
            ctx->pc = 0x146740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146740;
        }
    }
    ctx->pc = 0x14675Cu;
    // 0x14675c: 0xc090864  jal         func_242190
    ctx->pc = 0x14675Cu;
    SET_GPR_U32(ctx, 31, 0x146764u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x14675Cu, 0x146764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146764u;
label_146764:
    // 0x146764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146768: 0xc090590  jal         func_241640
    ctx->pc = 0x146768u;
    SET_GPR_U32(ctx, 31, 0x146770u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x146768u, 0x146770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146770u;
label_146770:
    // 0x146770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146774: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x146774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146778: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x146778u;
    SET_GPR_U32(ctx, 31, 0x146780u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x146778u, 0x146780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146780u;
label_146780:
    // 0x146780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146784: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x146788: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x146788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14678c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x14678cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x146790: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x146790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x146794: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146794u;
    {
        const bool branch_taken_0x146794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146794) {
            ctx->pc = 0x1467B8u;
            goto label_1467b8;
        }
    }
    ctx->pc = 0x14679Cu;
    // 0x14679c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x14679cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1467a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1467a4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1467A4u;
    SET_GPR_U32(ctx, 31, 0x1467ACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1467A4u, 0x1467ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467ACu;
label_1467ac:
    // 0x1467ac: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1467acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1467b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1467B0u;
    {
        const bool branch_taken_0x1467b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467b0) {
            ctx->pc = 0x1467BCu;
            goto label_1467bc;
        }
    }
    ctx->pc = 0x1467B8u;
label_1467b8:
    // 0x1467b8: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1467b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_1467bc:
    // 0x1467bc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1467bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1467c0: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x1467c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x1467c4: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x1467c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1467c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1467C8u;
    {
        const bool branch_taken_0x1467c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467c8) {
            ctx->pc = 0x1467E8u;
            goto label_1467e8;
        }
    }
    ctx->pc = 0x1467D0u;
    // 0x1467d0: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x1467d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1467d4: 0xc096880  jal         func_25A200
    ctx->pc = 0x1467D4u;
    SET_GPR_U32(ctx, 31, 0x1467DCu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1467D4u, 0x1467DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467DCu;
label_1467dc:
    // 0x1467dc: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1467dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1467e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1467E0u;
    {
        const bool branch_taken_0x1467e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467e0) {
            ctx->pc = 0x1467ECu;
            goto label_1467ec;
        }
    }
    ctx->pc = 0x1467E8u;
label_1467e8:
    // 0x1467e8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x1467e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_1467ec:
    // 0x1467ec: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1467f0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1467f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1467f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1467f8: 0xa3a3014f  sb          $v1, 0x14F($sp)
    ctx->pc = 0x1467f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 3));
    // 0x1467fc: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146800: 0x8c75003c  lw          $s5, 0x3C($v1)
    ctx->pc = 0x146800u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x146804: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x146804u;
    {
        const bool branch_taken_0x146804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146804) {
            ctx->pc = 0x146C40u;
            goto label_146c40;
        }
    }
    ctx->pc = 0x14680Cu;
label_14680c:
    // 0x14680c: 0x2ea10009  sltiu       $at, $s5, 0x9
    ctx->pc = 0x14680cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x146810: 0x10200109  beqz        $at, . + 4 + (0x109 << 2)
    ctx->pc = 0x146810u;
    {
        const bool branch_taken_0x146810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146810) {
            ctx->pc = 0x146C38u;
            goto label_146c38;
        }
    }
    ctx->pc = 0x146818u;
    // 0x146818: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x14681c: 0x24848150  addiu       $a0, $a0, -0x7EB0
    ctx->pc = 0x14681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934864));
    // 0x146820: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x146824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x146824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146828: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x146828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14682c: 0x600008  jr          $v1
    ctx->pc = 0x14682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146834u: goto label_146834;
            case 0x14689Cu: goto label_14689c;
            case 0x1469B0u: goto label_1469b0;
            case 0x146A54u: goto label_146a54;
            case 0x146AFCu: goto label_146afc;
            case 0x146BC8u: goto label_146bc8;
            case 0x146C00u: goto label_146c00;
            case 0x146C38u: goto label_146c38;
            case 0x146C3Cu: goto label_146c3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14682Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x146834u;
label_146834:
    // 0x146834: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x146834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146838: 0x10030100  beq         $zero, $v1, . + 4 + (0x100 << 2)
    ctx->pc = 0x146838u;
    {
        const bool branch_taken_0x146838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x146838) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x146840u;
    // 0x146840: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x146840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x146844: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x146844u;
    {
        const bool branch_taken_0x146844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146844) {
            ctx->pc = 0x146884u;
            goto label_146884;
        }
    }
    ctx->pc = 0x14684Cu;
label_14684c:
    // 0x14684c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x14684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x146850: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146854: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x146858: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x146858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x14685c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x14685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x146860: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146864: 0xc09138c  jal         func_244E30
    ctx->pc = 0x146864u;
    SET_GPR_U32(ctx, 31, 0x14686Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x146864u, 0x14686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14686Cu;
label_14686c:
    // 0x14686c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x14686cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x146870: 0x106200ff  beq         $v1, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x146870u;
    {
        const bool branch_taken_0x146870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146870) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146878u;
    // 0x146878: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x14687c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146880: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x146880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_146884:
    // 0x146884: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x146888: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x146888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14688c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14688Cu;
    {
        const bool branch_taken_0x14688c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14688c) {
            ctx->pc = 0x14684Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14684c;
        }
    }
    ctx->pc = 0x146894u;
    // 0x146894: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x146894u;
    {
        const bool branch_taken_0x146894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146894) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x14689Cu;
label_14689c:
    // 0x14689c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468a0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x1468A0u;
    SET_GPR_U32(ctx, 31, 0x1468A8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1468A0u, 0x1468A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468A8u;
label_1468a8:
    // 0x1468a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1468a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1468ac: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1468ACu;
    {
        const bool branch_taken_0x1468ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468ac) {
            ctx->pc = 0x146994u;
            goto label_146994;
        }
    }
    ctx->pc = 0x1468B4u;
label_1468b4:
    // 0x1468b4: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x1468b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x1468b8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1468B8u;
    {
        const bool branch_taken_0x1468b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468b8) {
            ctx->pc = 0x146980u;
            goto label_146980;
        }
    }
    ctx->pc = 0x1468C0u;
label_1468c0:
    // 0x1468c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1468c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1468c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1468c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1468c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1468c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1468cc: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x1468ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1468d0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1468d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1468d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1468d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1468d8: 0xc09138c  jal         func_244E30
    ctx->pc = 0x1468D8u;
    SET_GPR_U32(ctx, 31, 0x1468E0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x1468D8u, 0x1468E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468E0u;
label_1468e0:
    // 0x1468e0: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1468e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1468e4: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1468E4u;
    {
        const bool branch_taken_0x1468e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1468e4) {
            ctx->pc = 0x146974u;
            goto label_146974;
        }
    }
    ctx->pc = 0x1468ECu;
    // 0x1468ec: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1468f0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1468f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1468f4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1468F4u;
    SET_GPR_U32(ctx, 31, 0x1468FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1468F4u, 0x1468FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1468FCu;
label_1468fc:
    // 0x1468fc: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1468fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x146900: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x146904: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x146904u;
    SET_GPR_U32(ctx, 31, 0x14690Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x146904u, 0x14690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14690Cu;
label_14690c:
    // 0x14690c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146910: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x146910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146914: 0xc040a90  jal         func_102A40
    ctx->pc = 0x146914u;
    SET_GPR_U32(ctx, 31, 0x14691Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x146914u, 0x14691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14691Cu;
label_14691c:
    // 0x14691c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146920: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x146920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x146924: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x146924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x146928: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x146928u;
    SET_GPR_U32(ctx, 31, 0x146930u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x146928u, 0x146930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146930u;
label_146930:
    // 0x146930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146934: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x146934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146938: 0xc040a90  jal         func_102A40
    ctx->pc = 0x146938u;
    SET_GPR_U32(ctx, 31, 0x146940u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x146938u, 0x146940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146940u;
label_146940:
    // 0x146940: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x146940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146944: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x146944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146948: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x146948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14694c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146950: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x146950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x146954: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x146954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x146958: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x146958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14695c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x14695cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x146960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146964: 0x0  nop
    ctx->pc = 0x146964u;
    // NOP
    // 0x146968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14696c: 0x450000c0  bc1f        . + 4 + (0xC0 << 2)
    ctx->pc = 0x14696Cu;
    {
        const bool branch_taken_0x14696c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14696c) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146974u;
label_146974:
    // 0x146974: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x146974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x146978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14697c: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x14697cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_146980:
    // 0x146980: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x146980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x146984: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x146984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146988: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x146988u;
    {
        const bool branch_taken_0x146988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146988) {
            ctx->pc = 0x1468C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468c0;
        }
    }
    ctx->pc = 0x146990u;
    // 0x146990: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_146994:
    // 0x146994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146998: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x146998u;
    SET_GPR_U32(ctx, 31, 0x1469A0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x146998u, 0x1469A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469A0u;
label_1469a0:
    // 0x1469a0: 0x1682ffc4  bne         $s4, $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1469A0u;
    {
        const bool branch_taken_0x1469a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1469a0) {
            ctx->pc = 0x1468B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1468b4;
        }
    }
    ctx->pc = 0x1469A8u;
    // 0x1469a8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1469A8u;
    {
        const bool branch_taken_0x1469a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469a8) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x1469B0u;
label_1469b0:
    // 0x1469b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1469b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469b4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x1469B4u;
    SET_GPR_U32(ctx, 31, 0x1469BCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1469B4u, 0x1469BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469BCu;
label_1469bc:
    // 0x1469bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1469bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1469C0u;
    {
        const bool branch_taken_0x1469c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469c0) {
            ctx->pc = 0x146A38u;
            goto label_146a38;
        }
    }
    ctx->pc = 0x1469C8u;
label_1469c8:
    // 0x1469c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1469c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1469CCu;
    {
        const bool branch_taken_0x1469cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469cc) {
            ctx->pc = 0x146A28u;
            goto label_146a28;
        }
    }
    ctx->pc = 0x1469D4u;
label_1469d4:
    // 0x1469d4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x1469d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1469d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1469dc: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x1469dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1469e0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1469e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1469e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1469e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1469e8: 0xc09138c  jal         func_244E30
    ctx->pc = 0x1469E8u;
    SET_GPR_U32(ctx, 31, 0x1469F0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x1469E8u, 0x1469F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469F0u;
label_1469f0:
    // 0x1469f0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1469f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1469f4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1469F4u;
    {
        const bool branch_taken_0x1469f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1469f4) {
            ctx->pc = 0x146A24u;
            goto label_146a24;
        }
    }
    ctx->pc = 0x1469FCu;
    // 0x1469fc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1469fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x146a00: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x146a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x146a04: 0xc085538  jal         func_2154E0
    ctx->pc = 0x146A04u;
    SET_GPR_U32(ctx, 31, 0x146A0Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x146A04u, 0x146A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A0Cu;
label_146a0c:
    // 0x146a0c: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x146a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x146a10: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x146a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146a14: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x146A14u;
    SET_GPR_U32(ctx, 31, 0x146A1Cu);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x146A14u, 0x146A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A1Cu;
label_146a1c:
    // 0x146a1c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x146A1Cu;
    {
        const bool branch_taken_0x146a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146a1c) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146A24u;
label_146a24:
    // 0x146a24: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x146a24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_146a28:
    // 0x146a28: 0x2bc20004  slti        $v0, $fp, 0x4
    ctx->pc = 0x146a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146a2c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x146A2Cu;
    {
        const bool branch_taken_0x146a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146a2c) {
            ctx->pc = 0x1469D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1469d4;
        }
    }
    ctx->pc = 0x146A34u;
    // 0x146a34: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x146a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_146a38:
    // 0x146a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a3c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x146A3Cu;
    SET_GPR_U32(ctx, 31, 0x146A44u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x146A3Cu, 0x146A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A44u;
label_146a44:
    // 0x146a44: 0x1662ffe0  bne         $s3, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x146A44u;
    {
        const bool branch_taken_0x146a44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x146a44) {
            ctx->pc = 0x1469C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1469c8;
        }
    }
    ctx->pc = 0x146A4Cu;
    // 0x146a4c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x146A4Cu;
    {
        const bool branch_taken_0x146a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a4c) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x146A54u;
label_146a54:
    // 0x146a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a58: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x146A58u;
    SET_GPR_U32(ctx, 31, 0x146A60u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x146A58u, 0x146A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A60u;
label_146a60:
    // 0x146a60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a64: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x146A64u;
    {
        const bool branch_taken_0x146a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a64) {
            ctx->pc = 0x146AE0u;
            goto label_146ae0;
        }
    }
    ctx->pc = 0x146A6Cu;
label_146a6c:
    // 0x146a6c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x146a6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a70: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x146A70u;
    {
        const bool branch_taken_0x146a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a70) {
            ctx->pc = 0x146AD0u;
            goto label_146ad0;
        }
    }
    ctx->pc = 0x146A78u;
label_146a78:
    // 0x146a78: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x146a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x146a7c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x146a80: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x146a84: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x146a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x146a88: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x146a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146a8c: 0xc09138c  jal         func_244E30
    ctx->pc = 0x146A8Cu;
    SET_GPR_U32(ctx, 31, 0x146A94u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x146A8Cu, 0x146A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A94u;
label_146a94:
    // 0x146a94: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x146a94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146a98: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x146A98u;
    {
        const bool branch_taken_0x146a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146a98) {
            ctx->pc = 0x146ACCu;
            goto label_146acc;
        }
    }
    ctx->pc = 0x146AA0u;
    // 0x146aa0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x146aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146aa4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x146aa8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x146AA8u;
    SET_GPR_U32(ctx, 31, 0x146AB0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x146AA8u, 0x146AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AB0u;
label_146ab0:
    // 0x146ab0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x146ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x146ab4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x146ab8: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x146AB8u;
    SET_GPR_U32(ctx, 31, 0x146AC0u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x146AB8u, 0x146AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AC0u;
label_146ac0:
    // 0x146ac0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x146ac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x146ac4: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x146AC4u;
    {
        const bool branch_taken_0x146ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ac4) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146ACCu;
label_146acc:
    // 0x146acc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x146accu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_146ad0:
    // 0x146ad0: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x146ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146ad4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x146AD4u;
    {
        const bool branch_taken_0x146ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146ad4) {
            ctx->pc = 0x146A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a78;
        }
    }
    ctx->pc = 0x146ADCu;
    // 0x146adc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x146adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_146ae0:
    // 0x146ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ae4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x146AE4u;
    SET_GPR_U32(ctx, 31, 0x146AECu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x146AE4u, 0x146AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AECu;
label_146aec:
    // 0x146aec: 0x1642ffdf  bne         $s2, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146AECu;
    {
        const bool branch_taken_0x146aec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x146aec) {
            ctx->pc = 0x146A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a6c;
        }
    }
    ctx->pc = 0x146AF4u;
    // 0x146af4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x146AF4u;
    {
        const bool branch_taken_0x146af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146af4) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x146AFCu;
label_146afc:
    // 0x146afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b00: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x146B00u;
    SET_GPR_U32(ctx, 31, 0x146B08u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x146B00u, 0x146B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B08u;
label_146b08:
    // 0x146b08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x146b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b0c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x146B0Cu;
    {
        const bool branch_taken_0x146b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b0c) {
            ctx->pc = 0x146BACu;
            goto label_146bac;
        }
    }
    ctx->pc = 0x146B14u;
label_146b14:
    // 0x146b14: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x146b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b18: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x146B18u;
    {
        const bool branch_taken_0x146b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b18) {
            ctx->pc = 0x146B9Cu;
            goto label_146b9c;
        }
    }
    ctx->pc = 0x146B20u;
label_146b20:
    // 0x146b20: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x146b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x146b24: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x146b28: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x146b2c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x146b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x146b30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x146b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146b34: 0xc09138c  jal         func_244E30
    ctx->pc = 0x146B34u;
    SET_GPR_U32(ctx, 31, 0x146B3Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x146B34u, 0x146B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B3Cu;
label_146b3c:
    // 0x146b3c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x146b3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146b40: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x146B40u;
    {
        const bool branch_taken_0x146b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146b40) {
            ctx->pc = 0x146B98u;
            goto label_146b98;
        }
    }
    ctx->pc = 0x146B48u;
    // 0x146b48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x146b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146b4c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x146b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x146b50: 0xc085538  jal         func_2154E0
    ctx->pc = 0x146B50u;
    SET_GPR_U32(ctx, 31, 0x146B58u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x146B50u, 0x146B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B58u;
label_146b58:
    // 0x146b58: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x146b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x146b5c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x146b60: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x146B60u;
    SET_GPR_U32(ctx, 31, 0x146B68u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x146B60u, 0x146B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B68u;
label_146b68:
    // 0x146b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146b70: 0xc040a90  jal         func_102A40
    ctx->pc = 0x146B70u;
    SET_GPR_U32(ctx, 31, 0x146B78u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x146B70u, 0x146B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146B78u;
label_146b78:
    // 0x146b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146b7c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x146b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146b80: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x146b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x146b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146b88: 0x0  nop
    ctx->pc = 0x146b88u;
    // NOP
    // 0x146b8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x146b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b90: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x146B90u;
    {
        const bool branch_taken_0x146b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b90) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146B98u;
label_146b98:
    // 0x146b98: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x146b98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_146b9c:
    // 0x146b9c: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x146b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146ba0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x146BA0u;
    {
        const bool branch_taken_0x146ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146ba0) {
            ctx->pc = 0x146B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146b20;
        }
    }
    ctx->pc = 0x146BA8u;
    // 0x146ba8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x146ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_146bac:
    // 0x146bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bb0: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x146BB0u;
    SET_GPR_U32(ctx, 31, 0x146BB8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x146BB0u, 0x146BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BB8u;
label_146bb8:
    // 0x146bb8: 0x1622ffd6  bne         $s1, $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x146BB8u;
    {
        const bool branch_taken_0x146bb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x146bb8) {
            ctx->pc = 0x146B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146b14;
        }
    }
    ctx->pc = 0x146BC0u;
    // 0x146bc0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x146BC0u;
    {
        const bool branch_taken_0x146bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146bc0) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x146BC8u;
label_146bc8:
    // 0x146bc8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x146bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x146bcc: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x146BCCu;
    SET_GPR_U32(ctx, 31, 0x146BD4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x146BCCu, 0x146BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BD4u;
label_146bd4:
    // 0x146bd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bd8: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x146BD8u;
    SET_GPR_U32(ctx, 31, 0x146BE0u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x146BD8u, 0x146BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BE0u;
label_146be0:
    // 0x146be0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x146be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x146be4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x146be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146be8: 0x0  nop
    ctx->pc = 0x146be8u;
    // NOP
    // 0x146bec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146bf0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x146BF0u;
    {
        const bool branch_taken_0x146bf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x146bf0) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146BF8u;
    // 0x146bf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x146BF8u;
    {
        const bool branch_taken_0x146bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146bf8) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x146C00u;
label_146c00:
    // 0x146c00: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x146c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x146c04: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x146C04u;
    SET_GPR_U32(ctx, 31, 0x146C0Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x146C04u, 0x146C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C0Cu;
label_146c0c:
    // 0x146c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c10: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x146C10u;
    SET_GPR_U32(ctx, 31, 0x146C18u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x146C10u, 0x146C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C18u;
label_146c18:
    // 0x146c18: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x146c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x146c1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x146c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146c20: 0x0  nop
    ctx->pc = 0x146c20u;
    // NOP
    // 0x146c24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x146c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c28: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x146C28u;
    {
        const bool branch_taken_0x146c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x146c28) {
            ctx->pc = 0x146C70u;
            goto label_146c70;
        }
    }
    ctx->pc = 0x146C30u;
    // 0x146c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146C30u;
    {
        const bool branch_taken_0x146c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c30) {
            ctx->pc = 0x146C3Cu;
            goto label_146c3c;
        }
    }
    ctx->pc = 0x146C38u;
label_146c38:
    // 0x146c38: 0xa3a0014f  sb          $zero, 0x14F($sp)
    ctx->pc = 0x146c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 0));
label_146c3c:
    // 0x146c3c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_146c40:
    // 0x146c40: 0x93a3014f  lbu         $v1, 0x14F($sp)
    ctx->pc = 0x146c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 335)));
    // 0x146c44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x146c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146c4c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x146C4Cu;
    {
        const bool branch_taken_0x146c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x146c4c) {
            ctx->pc = 0x146C68u;
            goto label_146c68;
        }
    }
    ctx->pc = 0x146C54u;
    // 0x146c54: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146c58: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x146c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x146c5c: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x146c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x146c60: 0x1020feea  beqz        $at, . + 4 + (-0x116 << 2)
    ctx->pc = 0x146C60u;
    {
        const bool branch_taken_0x146c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c60) {
            ctx->pc = 0x14680Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14680c;
        }
    }
    ctx->pc = 0x146C68u;
label_146c68:
    // 0x146c68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x146C68u;
    {
        const bool branch_taken_0x146c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c68) {
            ctx->pc = 0x146CC0u;
            goto label_146cc0;
        }
    }
    ctx->pc = 0x146C70u;
label_146c70:
    // 0x146c70: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146c74: 0xac750034  sw          $s5, 0x34($v1)
    ctx->pc = 0x146c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 21));
    // 0x146c78: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146c7c: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x146c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x146c80: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146c84: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x146c88: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x146c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146c8c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146c90: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x146c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x146c94: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146c98: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x146c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x146c9c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146ca0: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x146ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x146ca4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x146ca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x146ca8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x146CA8u;
    {
        const bool branch_taken_0x146ca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ca8) {
            ctx->pc = 0x146CC0u;
            goto label_146cc0;
        }
    }
    ctx->pc = 0x146CB0u;
    // 0x146cb0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146cb4: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x146cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x146cb8: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x146cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x146cbc: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x146cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_146cc0:
    // 0x146cc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x146cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146cc4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x146cc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x146cc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x146cc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x146ccc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x146cccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146cd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x146cd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146cd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146cd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146cd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146cdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146ce8: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x146ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x146cec: 0x3e00008  jr          $ra
    ctx->pc = 0x146CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146CF4u;
    // 0x146cf4: 0x0  nop
    ctx->pc = 0x146cf4u;
    // NOP
    // 0x146cf8: 0x0  nop
    ctx->pc = 0x146cf8u;
    // NOP
    // 0x146cfc: 0x0  nop
    ctx->pc = 0x146cfcu;
    // NOP
    ctx->pc = 0x146d00u;
}
