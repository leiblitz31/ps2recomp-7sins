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

// Function: sub_0015F710
// Address: 0x15f710 - 0x160000
void sub_0015F710_0x15f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F710_0x15f710");
#endif

    switch (ctx->pc) {
        case 0x15f73cu: goto label_15f73c;
        case 0x15f748u: goto label_15f748;
        case 0x15f764u: goto label_15f764;
        case 0x15f780u: goto label_15f780;
        case 0x15f794u: goto label_15f794;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f804u: goto label_15f804;
        case 0x15f818u: goto label_15f818;
        case 0x15f828u: goto label_15f828;
        case 0x15f844u: goto label_15f844;
        case 0x15f858u: goto label_15f858;
        case 0x15f894u: goto label_15f894;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f900u: goto label_15f900;
        case 0x15f910u: goto label_15f910;
        case 0x15f920u: goto label_15f920;
        case 0x15f934u: goto label_15f934;
        case 0x15f944u: goto label_15f944;
        case 0x15f964u: goto label_15f964;
        case 0x15f974u: goto label_15f974;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fadcu: goto label_15fadc;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb40u: goto label_15fb40;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb60u: goto label_15fb60;
        case 0x15fb74u: goto label_15fb74;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fb9cu: goto label_15fb9c;
        case 0x15fbacu: goto label_15fbac;
        case 0x15fbe8u: goto label_15fbe8;
        case 0x15fc00u: goto label_15fc00;
        case 0x15fc30u: goto label_15fc30;
        case 0x15fc48u: goto label_15fc48;
        case 0x15fc58u: goto label_15fc58;
        case 0x15fc68u: goto label_15fc68;
        case 0x15fc7cu: goto label_15fc7c;
        case 0x15fc8cu: goto label_15fc8c;
        case 0x15fca4u: goto label_15fca4;
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcf0u: goto label_15fcf0;
        case 0x15fd08u: goto label_15fd08;
        case 0x15fd38u: goto label_15fd38;
        case 0x15fd4cu: goto label_15fd4c;
        case 0x15fd64u: goto label_15fd64;
        case 0x15fd78u: goto label_15fd78;
        case 0x15fda8u: goto label_15fda8;
        case 0x15fdc8u: goto label_15fdc8;
        case 0x15fdf8u: goto label_15fdf8;
        case 0x15fe0cu: goto label_15fe0c;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fedcu: goto label_15fedc;
        case 0x15fef4u: goto label_15fef4;
        case 0x15ff10u: goto label_15ff10;
        case 0x15ff28u: goto label_15ff28;
        case 0x15ff5cu: goto label_15ff5c;
        case 0x15ff80u: goto label_15ff80;
        case 0x15ffb8u: goto label_15ffb8;
        case 0x15ffd4u: goto label_15ffd4;
        case 0x15fff8u: goto label_15fff8;
        default: break;
    }

    ctx->pc = 0x15f710u;

    // 0x15f710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15f714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15f714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15f718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15f71c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f72c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x15f730: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x15f734: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x15F734u;
    SET_GPR_U32(ctx, 31, 0x15F73Cu);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15F734u, 0x15F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F73Cu;
label_15f73c:
    // 0x15f73c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f740: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x15F740u;
    SET_GPR_U32(ctx, 31, 0x15F748u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15F740u, 0x15F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F748u;
label_15f748:
    // 0x15f748: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15f748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f74c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f750: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f754: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15f754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15f758: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x15f75c: 0xc057944  jal         func_15E510
    ctx->pc = 0x15F75Cu;
    SET_GPR_U32(ctx, 31, 0x15F764u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15F75Cu, 0x15F764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F764u;
label_15f764:
    // 0x15f764: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15f764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f768: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f76c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f770: 0x24e40074  addiu       $a0, $a3, 0x74
    ctx->pc = 0x15f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 116));
    // 0x15f774: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15f774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f778: 0xc057944  jal         func_15E510
    ctx->pc = 0x15F778u;
    SET_GPR_U32(ctx, 31, 0x15F780u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15F778u, 0x15F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F780u;
label_15f780:
    // 0x15f780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f784: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x15f784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15f788: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x15f788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f78c: 0xc0b133c  jal         func_2C4CF0
    ctx->pc = 0x15F78Cu;
    SET_GPR_U32(ctx, 31, 0x15F794u);
    ctx->pc = 0x2C4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4CF0u, 0x15F78Cu, 0x15F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F794u;
label_15f794:
    // 0x15f794: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x15f794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x15f798: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f79c: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x15F79Cu;
    SET_GPR_U32(ctx, 31, 0x15F7A4u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x15F79Cu, 0x15F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7A4u;
label_15f7a4:
    // 0x15f7a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15f7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7a8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15f7ac: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x15f7b0: 0x24c63348  addiu       $a2, $a2, 0x3348
    ctx->pc = 0x15f7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13128));
    // 0x15f7b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15f7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7b8: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x15F7B8u;
    SET_GPR_U32(ctx, 31, 0x15F7C0u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x15F7B8u, 0x15F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7C0u;
label_15f7c0:
    // 0x15f7c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f7cc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f7d0: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f7d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7d8: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15F7D8u;
    SET_GPR_U32(ctx, 31, 0x15F7E0u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15F7D8u, 0x15F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7E0u;
label_15f7e0:
    // 0x15f7e0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x15f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x15f7e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f7e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7ec: 0xc041010  jal         func_104040
    ctx->pc = 0x15F7ECu;
    SET_GPR_U32(ctx, 31, 0x15F7F4u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15F7ECu, 0x15F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7F4u;
label_15f7f4:
    // 0x15f7f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15f7f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f7fc: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15F7FCu;
    SET_GPR_U32(ctx, 31, 0x15F804u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15F7FCu, 0x15F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F804u;
label_15f804:
    // 0x15f804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15f804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15f808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f80c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15f80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15f810: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15F810u;
    SET_GPR_U32(ctx, 31, 0x15F818u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15F810u, 0x15F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F818u;
label_15f818:
    // 0x15f818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15f818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f81c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f820: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15F820u;
    SET_GPR_U32(ctx, 31, 0x15F828u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15F820u, 0x15F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F828u;
label_15f828:
    // 0x15f828: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15F828u;
    {
        const bool branch_taken_0x15f828 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f828) {
            ctx->pc = 0x15F864u;
            goto label_15f864;
        }
    }
    ctx->pc = 0x15F830u;
    // 0x15f830: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x15f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f834: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f838: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15f83c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15F83Cu;
    SET_GPR_U32(ctx, 31, 0x15F844u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15F83Cu, 0x15F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F844u;
label_15f844:
    // 0x15f844: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15f844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f848: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15f84c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15f84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f850: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15F850u;
    SET_GPR_U32(ctx, 31, 0x15F858u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15F850u, 0x15F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F858u;
label_15f858:
    // 0x15f858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f85c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15F85Cu;
    {
        const bool branch_taken_0x15f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f85c) {
            ctx->pc = 0x15F898u;
            goto label_15f898;
        }
    }
    ctx->pc = 0x15F864u;
label_15f864:
    // 0x15f864: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f868: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x15f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15f86c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15f86cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15f870: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F870u;
    {
        const bool branch_taken_0x15f870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f870) {
            ctx->pc = 0x15F884u;
            goto label_15f884;
        }
    }
    ctx->pc = 0x15F878u;
    // 0x15f878: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f87c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15F87Cu;
    {
        const bool branch_taken_0x15f87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f87c) {
            ctx->pc = 0x15F898u;
            goto label_15f898;
        }
    }
    ctx->pc = 0x15F884u;
label_15f884:
    // 0x15f884: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15f884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f888: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15f888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15f88c: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15F88Cu;
    SET_GPR_U32(ctx, 31, 0x15F894u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15F88Cu, 0x15F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F894u;
label_15f894:
    // 0x15f894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f898:
    // 0x15f898: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f89c: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x15f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x15f8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F8A4u;
    SET_GPR_U32(ctx, 31, 0x15F8ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F8A4u, 0x15F8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8ACu;
label_15f8ac:
    // 0x15f8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8b0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f8b4: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f8b8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15f8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15f8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15f8c0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f8c4: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x15f8c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15f8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8cc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f8d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15f8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8dc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F8DCu;
    SET_GPR_U32(ctx, 31, 0x15F8E4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F8DCu, 0x15F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8E4u;
label_15f8e4:
    // 0x15f8e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f8e8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f8ec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f8f0: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f8f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f8f8: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15F8F8u;
    SET_GPR_U32(ctx, 31, 0x15F900u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15F8F8u, 0x15F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F900u;
label_15f900:
    // 0x15f900: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x15f900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x15f904: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f908: 0xc041010  jal         func_104040
    ctx->pc = 0x15F908u;
    SET_GPR_U32(ctx, 31, 0x15F910u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15F908u, 0x15F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F910u;
label_15f910:
    // 0x15f910: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15f910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f914: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f918: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15F918u;
    SET_GPR_U32(ctx, 31, 0x15F920u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15F918u, 0x15F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F920u;
label_15f920:
    // 0x15f920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15f924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f928: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15f928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15f92c: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15F92Cu;
    SET_GPR_U32(ctx, 31, 0x15F934u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15F92Cu, 0x15F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F934u;
label_15f934:
    // 0x15f934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15f934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f938: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f93c: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15F93Cu;
    SET_GPR_U32(ctx, 31, 0x15F944u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15F93Cu, 0x15F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F944u;
label_15f944:
    // 0x15f944: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15f944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f948: 0x1623000d  bne         $s1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15F948u;
    {
        const bool branch_taken_0x15f948 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x15f948) {
            ctx->pc = 0x15F980u;
            goto label_15f980;
        }
    }
    ctx->pc = 0x15F950u;
    // 0x15f950: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f954: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x15f954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15f958: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15f958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f95c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15F95Cu;
    SET_GPR_U32(ctx, 31, 0x15F964u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15F95Cu, 0x15F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F964u;
label_15f964:
    // 0x15f964: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f968: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15f968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15f96c: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15F96Cu;
    SET_GPR_U32(ctx, 31, 0x15F974u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15F96Cu, 0x15F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F974u;
label_15f974:
    // 0x15f974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f978: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15F978u;
    {
        const bool branch_taken_0x15f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f978) {
            ctx->pc = 0x15F9B8u;
            goto label_15f9b8;
        }
    }
    ctx->pc = 0x15F980u;
label_15f980:
    // 0x15f980: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15f980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f984: 0x8ca200fc  lw          $v0, 0xFC($a1)
    ctx->pc = 0x15f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x15f988: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15f988u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15f98c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F98Cu;
    {
        const bool branch_taken_0x15f98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f98c) {
            ctx->pc = 0x15F9A0u;
            goto label_15f9a0;
        }
    }
    ctx->pc = 0x15F994u;
    // 0x15f994: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15f994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15F998u;
    {
        const bool branch_taken_0x15f998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f998) {
            ctx->pc = 0x15F9B8u;
            goto label_15f9b8;
        }
    }
    ctx->pc = 0x15F9A0u;
label_15f9a0:
    // 0x15f9a0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f9a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9a8: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15f9ac: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15F9ACu;
    SET_GPR_U32(ctx, 31, 0x15F9B4u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15F9ACu, 0x15F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9B4u;
label_15f9b4:
    // 0x15f9b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15f9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f9b8:
    // 0x15f9b8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f9bc: 0x24860068  addiu       $a2, $a0, 0x68
    ctx->pc = 0x15f9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x15f9c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x15f9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f9c8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15f9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15F9CCu;
    SET_GPR_U32(ctx, 31, 0x15F9D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15F9CCu, 0x15F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F9D4u;
label_15f9d4:
    // 0x15f9d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f9d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f9dc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15f9e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15f9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15f9e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15f9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15f9e8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15f9ec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15f9f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15f9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f9f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15f9f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f9fc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15F9FCu;
    SET_GPR_U32(ctx, 31, 0x15FA04u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15F9FCu, 0x15FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA04u;
label_15fa04:
    // 0x15fa04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fa08: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x15fa08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fa0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15fa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa10: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15fa14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fa18: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15FA18u;
    SET_GPR_U32(ctx, 31, 0x15FA20u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15FA18u, 0x15FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA20u;
label_15fa20:
    // 0x15fa20: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x15fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x15fa24: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa2c: 0xc041010  jal         func_104040
    ctx->pc = 0x15FA2Cu;
    SET_GPR_U32(ctx, 31, 0x15FA34u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15FA2Cu, 0x15FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA34u;
label_15fa34:
    // 0x15fa34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15fa34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa38: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa40: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15FA40u;
    SET_GPR_U32(ctx, 31, 0x15FA48u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15FA40u, 0x15FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA48u;
label_15fa48:
    // 0x15fa48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15fa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa50: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15fa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fa54: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15FA54u;
    SET_GPR_U32(ctx, 31, 0x15FA5Cu);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15FA54u, 0x15FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA5Cu;
label_15fa5c:
    // 0x15fa5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15fa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa60: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x15fa60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa64: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa68: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15FA68u;
    SET_GPR_U32(ctx, 31, 0x15FA70u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15FA68u, 0x15FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA70u;
label_15fa70:
    // 0x15fa70: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15FA70u;
    {
        const bool branch_taken_0x15fa70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15fa70) {
            ctx->pc = 0x15FAA4u;
            goto label_15faa4;
        }
    }
    ctx->pc = 0x15FA78u;
    // 0x15fa78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fa7c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x15fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fa80: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15FA80u;
    SET_GPR_U32(ctx, 31, 0x15FA88u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15FA80u, 0x15FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA88u;
label_15fa88:
    // 0x15fa88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fa8c: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15fa90: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15FA90u;
    SET_GPR_U32(ctx, 31, 0x15FA98u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15FA90u, 0x15FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA98u;
label_15fa98:
    // 0x15fa98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fa9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15FA9Cu;
    {
        const bool branch_taken_0x15fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fa9c) {
            ctx->pc = 0x15FAE0u;
            goto label_15fae0;
        }
    }
    ctx->pc = 0x15FAA4u;
label_15faa4:
    // 0x15faa4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15faa8: 0x8c6400fc  lw          $a0, 0xFC($v1)
    ctx->pc = 0x15faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x15faac: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x15faacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15fab0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FAB0u;
    {
        const bool branch_taken_0x15fab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fab0) {
            ctx->pc = 0x15FAC4u;
            goto label_15fac4;
        }
    }
    ctx->pc = 0x15FAB8u;
    // 0x15fab8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15fab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fabc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15FABCu;
    {
        const bool branch_taken_0x15fabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fabc) {
            ctx->pc = 0x15FAE0u;
            goto label_15fae0;
        }
    }
    ctx->pc = 0x15FAC4u;
label_15fac4:
    // 0x15fac4: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x15fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fac8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15facc: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15fad0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15fad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fad4: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15FAD4u;
    SET_GPR_U32(ctx, 31, 0x15FADCu);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15FAD4u, 0x15FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FADCu;
label_15fadc:
    // 0x15fadc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fae0:
    // 0x15fae0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fae4: 0x24850068  addiu       $a1, $a0, 0x68
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x15fae8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15faec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15faf0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FAF0u;
    SET_GPR_U32(ctx, 31, 0x15FAF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FAF0u, 0x15FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FAF8u;
label_15faf8:
    // 0x15faf8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fafc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fb00: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15fb04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15fb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fb08: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15fb08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15fb0c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15fb10: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15fb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15fb14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15fb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fb18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fb1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb20: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FB20u;
    SET_GPR_U32(ctx, 31, 0x15FB28u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FB20u, 0x15FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB28u;
label_15fb28:
    // 0x15fb28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fb2c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fb30: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15fb34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15fb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fb38: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15FB38u;
    SET_GPR_U32(ctx, 31, 0x15FB40u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15FB38u, 0x15FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB40u;
label_15fb40:
    // 0x15fb40: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x15fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x15fb44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb48: 0xc041010  jal         func_104040
    ctx->pc = 0x15FB48u;
    SET_GPR_U32(ctx, 31, 0x15FB50u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15FB48u, 0x15FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB50u;
label_15fb50:
    // 0x15fb50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15fb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb58: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15FB58u;
    SET_GPR_U32(ctx, 31, 0x15FB60u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15FB58u, 0x15FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB60u;
label_15fb60:
    // 0x15fb60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15fb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb68: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fb6c: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15FB6Cu;
    SET_GPR_U32(ctx, 31, 0x15FB74u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15FB6Cu, 0x15FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB74u;
label_15fb74:
    // 0x15fb74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15fb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb7c: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15FB7Cu;
    SET_GPR_U32(ctx, 31, 0x15FB84u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15FB7Cu, 0x15FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB84u;
label_15fb84:
    // 0x15fb84: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15FB84u;
    {
        const bool branch_taken_0x15fb84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15fb84) {
            ctx->pc = 0x15FBB8u;
            goto label_15fbb8;
        }
    }
    ctx->pc = 0x15FB8Cu;
    // 0x15fb8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fb90: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fb94: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15FB94u;
    SET_GPR_U32(ctx, 31, 0x15FB9Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15FB94u, 0x15FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB9Cu;
label_15fb9c:
    // 0x15fb9c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fba0: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15fba4: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15FBA4u;
    SET_GPR_U32(ctx, 31, 0x15FBACu);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15FBA4u, 0x15FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBACu;
label_15fbac:
    // 0x15fbac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fbb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15FBB0u;
    {
        const bool branch_taken_0x15fbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fbb0) {
            ctx->pc = 0x15FBECu;
            goto label_15fbec;
        }
    }
    ctx->pc = 0x15FBB8u;
label_15fbb8:
    // 0x15fbb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fbbc: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x15fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15fbc0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15fbc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15fbc4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FBC4u;
    {
        const bool branch_taken_0x15fbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fbc4) {
            ctx->pc = 0x15FBD8u;
            goto label_15fbd8;
        }
    }
    ctx->pc = 0x15FBCCu;
    // 0x15fbcc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15fbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fbd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FBD0u;
    {
        const bool branch_taken_0x15fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fbd0) {
            ctx->pc = 0x15FBECu;
            goto label_15fbec;
        }
    }
    ctx->pc = 0x15FBD8u;
label_15fbd8:
    // 0x15fbd8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fbdc: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15fbe0: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15FBE0u;
    SET_GPR_U32(ctx, 31, 0x15FBE8u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15FBE0u, 0x15FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FBE8u;
label_15fbe8:
    // 0x15fbe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fbe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fbec:
    // 0x15fbec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fbf0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15fbf4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15fbf8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FBF8u;
    SET_GPR_U32(ctx, 31, 0x15FC00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FBF8u, 0x15FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC00u;
label_15fc00:
    // 0x15fc00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fc04: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fc08: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15fc0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15fc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fc10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15fc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15fc14: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15fc18: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15fc1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15fc1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fc20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fc24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc28: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FC28u;
    SET_GPR_U32(ctx, 31, 0x15FC30u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FC28u, 0x15FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC30u;
label_15fc30:
    // 0x15fc30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fc34: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fc38: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15fc3c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x15fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15fc40: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15FC40u;
    SET_GPR_U32(ctx, 31, 0x15FC48u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15FC40u, 0x15FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC48u;
label_15fc48:
    // 0x15fc48: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x15fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x15fc4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fc50: 0xc041010  jal         func_104040
    ctx->pc = 0x15FC50u;
    SET_GPR_U32(ctx, 31, 0x15FC58u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15FC50u, 0x15FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC58u;
label_15fc58:
    // 0x15fc58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15fc58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fc60: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15FC60u;
    SET_GPR_U32(ctx, 31, 0x15FC68u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15FC60u, 0x15FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC68u;
label_15fc68:
    // 0x15fc68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc70: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fc74: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15FC74u;
    SET_GPR_U32(ctx, 31, 0x15FC7Cu);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15FC74u, 0x15FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC7Cu;
label_15fc7c:
    // 0x15fc7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15fc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fc84: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15FC84u;
    SET_GPR_U32(ctx, 31, 0x15FC8Cu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15FC84u, 0x15FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC8Cu;
label_15fc8c:
    // 0x15fc8c: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15FC8Cu;
    {
        const bool branch_taken_0x15fc8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15fc8c) {
            ctx->pc = 0x15FCC0u;
            goto label_15fcc0;
        }
    }
    ctx->pc = 0x15FC94u;
    // 0x15fc94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15fc98: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x15fc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fc9c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15FC9Cu;
    SET_GPR_U32(ctx, 31, 0x15FCA4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15FC9Cu, 0x15FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCA4u;
label_15fca4:
    // 0x15fca4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fca8: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15fcac: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15FCACu;
    SET_GPR_U32(ctx, 31, 0x15FCB4u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15FCACu, 0x15FCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCB4u;
label_15fcb4:
    // 0x15fcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15FCB8u;
    {
        const bool branch_taken_0x15fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fcb8) {
            ctx->pc = 0x15FCF4u;
            goto label_15fcf4;
        }
    }
    ctx->pc = 0x15FCC0u;
label_15fcc0:
    // 0x15fcc0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fcc4: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x15fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15fcc8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15fccc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FCCCu;
    {
        const bool branch_taken_0x15fccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fccc) {
            ctx->pc = 0x15FCE0u;
            goto label_15fce0;
        }
    }
    ctx->pc = 0x15FCD4u;
    // 0x15fcd4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15fcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FCD8u;
    {
        const bool branch_taken_0x15fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fcd8) {
            ctx->pc = 0x15FCF4u;
            goto label_15fcf4;
        }
    }
    ctx->pc = 0x15FCE0u;
label_15fce0:
    // 0x15fce0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fce4: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x15fce8: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15FCE8u;
    SET_GPR_U32(ctx, 31, 0x15FCF0u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15FCE8u, 0x15FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FCF0u;
label_15fcf0:
    // 0x15fcf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15fcf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15fcf4:
    // 0x15fcf4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fcf8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15fcfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fd00: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FD00u;
    SET_GPR_U32(ctx, 31, 0x15FD08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FD00u, 0x15FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD08u;
label_15fd08:
    // 0x15fd08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fd0c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fd10: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15fd14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15fd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fd18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15fd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15fd1c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15fd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15fd20: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15fd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15fd24: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15fd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fd28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fd2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd30: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FD30u;
    SET_GPR_U32(ctx, 31, 0x15FD38u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FD30u, 0x15FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD38u;
label_15fd38:
    // 0x15fd38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fd3c: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15fd40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15fd44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FD44u;
    SET_GPR_U32(ctx, 31, 0x15FD4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FD44u, 0x15FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD4Cu;
label_15fd4c:
    // 0x15fd4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fd50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fd54: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15fd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15fd58: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fd5c: 0xc08c744  jal         func_231D10
    ctx->pc = 0x15FD5Cu;
    SET_GPR_U32(ctx, 31, 0x15FD64u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x15FD5Cu, 0x15FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD64u;
label_15fd64:
    // 0x15fd64: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fd68: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15fd6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15fd70: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FD70u;
    SET_GPR_U32(ctx, 31, 0x15FD78u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FD70u, 0x15FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD78u;
label_15fd78:
    // 0x15fd78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fd7c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fd80: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15fd84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15fd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fd88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15fd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15fd8c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15fd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15fd90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd94: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15fd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fd98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fd98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fd9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fda0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FDA0u;
    SET_GPR_U32(ctx, 31, 0x15FDA8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FDA0u, 0x15FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDA8u;
label_15fda8:
    // 0x15fda8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fda8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdac: 0x0  nop
    ctx->pc = 0x15fdacu;
    // NOP
    // 0x15fdb0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15fdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15fdb4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fdb8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15fdbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15fdc0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FDC0u;
    SET_GPR_U32(ctx, 31, 0x15FDC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FDC0u, 0x15FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDC8u;
label_15fdc8:
    // 0x15fdc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fdcc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fdd0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15fdd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15fdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fdd8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15fdd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15fddc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15fde0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fde4: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x15fde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15fde8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fde8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fdecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fdf0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FDF0u;
    SET_GPR_U32(ctx, 31, 0x15FDF8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FDF0u, 0x15FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDF8u;
label_15fdf8:
    // 0x15fdf8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fdfc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15fe00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fe04: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FE04u;
    SET_GPR_U32(ctx, 31, 0x15FE0Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FE04u, 0x15FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE0Cu;
label_15fe0c:
    // 0x15fe0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fe10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fe14: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15fe18: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fe1c: 0xc08c744  jal         func_231D10
    ctx->pc = 0x15FE1Cu;
    SET_GPR_U32(ctx, 31, 0x15FE24u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x15FE1Cu, 0x15FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE24u;
label_15fe24:
    // 0x15fe24: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fe28: 0x24820068  addiu       $v0, $a0, 0x68
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x15fe2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe30: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fe34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15fe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe38: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FE38u;
    SET_GPR_U32(ctx, 31, 0x15FE40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FE38u, 0x15FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE40u;
label_15fe40:
    // 0x15fe40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fe44: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fe48: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x15fe4c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x15fe4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15fe50: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15fe50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15fe54: 0x8c940034  lw          $s4, 0x34($a0)
    ctx->pc = 0x15fe54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15fe58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe5c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15fe5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fe60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe64: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fe68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15fe68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fe6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe70: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FE70u;
    SET_GPR_U32(ctx, 31, 0x15FE78u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FE70u, 0x15FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE78u;
label_15fe78:
    // 0x15fe78: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x15fe7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15fe7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe80: 0x0  nop
    ctx->pc = 0x15fe80u;
    // NOP
    // 0x15fe84: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15fe88: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fe8c: 0x24a20068  addiu       $v0, $a1, 0x68
    ctx->pc = 0x15fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x15fe90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15fe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fe98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FE98u;
    SET_GPR_U32(ctx, 31, 0x15FEA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FE98u, 0x15FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FEA0u;
label_15fea0:
    // 0x15fea0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15fea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fea4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fea8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15feac: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x15feb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15feb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15feb4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15feb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15feb8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15febc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fec0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fec4: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x15fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15fec8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15fec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15feccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15fed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fed4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FED4u;
    SET_GPR_U32(ctx, 31, 0x15FEDCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FED4u, 0x15FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FEDCu;
label_15fedc:
    // 0x15fedc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fee0: 0x24850068  addiu       $a1, $a0, 0x68
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x15fee4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15fee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15fee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15feec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FEECu;
    SET_GPR_U32(ctx, 31, 0x15FEF4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FEECu, 0x15FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FEF4u;
label_15fef4:
    // 0x15fef4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fef8: 0x8fb30080  lw          $s3, 0x80($sp)
    ctx->pc = 0x15fef8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fefc: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x15fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x15ff00: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ff04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15ff04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff08: 0xc08c744  jal         func_231D10
    ctx->pc = 0x15FF08u;
    SET_GPR_U32(ctx, 31, 0x15FF10u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x15FF08u, 0x15FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF10u;
label_15ff10:
    // 0x15ff10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15ff10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff14: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ff18: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15ff1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ff1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff20: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FF20u;
    SET_GPR_U32(ctx, 31, 0x15FF28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FF20u, 0x15FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF28u;
label_15ff28:
    // 0x15ff28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ff2c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ff30: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15ff34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15ff34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ff38: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15ff38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ff3c: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x15ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15ff40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ff44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff48: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15ff48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ff4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ff4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ff50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff54: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FF54u;
    SET_GPR_U32(ctx, 31, 0x15FF5Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FF54u, 0x15FF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF5Cu;
label_15ff5c:
    // 0x15ff5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ff60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff64: 0x0  nop
    ctx->pc = 0x15ff64u;
    // NOP
    // 0x15ff68: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15ff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15ff6c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ff70: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15ff74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FF78u;
    SET_GPR_U32(ctx, 31, 0x15FF80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FF78u, 0x15FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF80u;
label_15ff80:
    // 0x15ff80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ff80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ff88: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ff8c: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x15ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x15ff90: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x15ff90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ff94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15ff94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ff98: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ff9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ffa4: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x15ffa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15ffa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ffa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ffacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffb0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15FFB0u;
    SET_GPR_U32(ctx, 31, 0x15FFB8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15FFB0u, 0x15FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFB8u;
label_15ffb8:
    // 0x15ffb8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ffbc: 0x24860068  addiu       $a2, $a0, 0x68
    ctx->pc = 0x15ffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x15ffc0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15ffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ffc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffcc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15FFCCu;
    SET_GPR_U32(ctx, 31, 0x15FFD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15FFCCu, 0x15FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFD4u;
label_15ffd4:
    // 0x15ffd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ffd8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ffdc: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x15ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15ffe0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffe4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15ffe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ffe8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ffec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fff0: 0xc08c744  jal         func_231D10
    ctx->pc = 0x15FFF0u;
    SET_GPR_U32(ctx, 31, 0x15FFF8u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x15FFF0u, 0x15FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFF8u;
label_15fff8:
    // 0x15fff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fffc: 0x8fb30080  lw          $s3, 0x80($sp)
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x160000u;
}
