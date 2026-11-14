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

// Function: sub_00459730
// Address: 0x459730 - 0x459920
void sub_00459730_0x459730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459730_0x459730");
#endif

    switch (ctx->pc) {
        case 0x459730u: goto label_459730;
        case 0x459734u: goto label_459734;
        case 0x459738u: goto label_459738;
        case 0x45973cu: goto label_45973c;
        case 0x459740u: goto label_459740;
        case 0x459744u: goto label_459744;
        case 0x459748u: goto label_459748;
        case 0x45974cu: goto label_45974c;
        case 0x459750u: goto label_459750;
        case 0x459754u: goto label_459754;
        case 0x459758u: goto label_459758;
        case 0x45975cu: goto label_45975c;
        case 0x459760u: goto label_459760;
        case 0x459764u: goto label_459764;
        case 0x459768u: goto label_459768;
        case 0x45976cu: goto label_45976c;
        case 0x459770u: goto label_459770;
        case 0x459774u: goto label_459774;
        case 0x459778u: goto label_459778;
        case 0x45977cu: goto label_45977c;
        case 0x459780u: goto label_459780;
        case 0x459784u: goto label_459784;
        case 0x459788u: goto label_459788;
        case 0x45978cu: goto label_45978c;
        case 0x459790u: goto label_459790;
        case 0x459794u: goto label_459794;
        case 0x459798u: goto label_459798;
        case 0x45979cu: goto label_45979c;
        case 0x4597a0u: goto label_4597a0;
        case 0x4597a4u: goto label_4597a4;
        case 0x4597a8u: goto label_4597a8;
        case 0x4597acu: goto label_4597ac;
        case 0x4597b0u: goto label_4597b0;
        case 0x4597b4u: goto label_4597b4;
        case 0x4597b8u: goto label_4597b8;
        case 0x4597bcu: goto label_4597bc;
        case 0x4597c0u: goto label_4597c0;
        case 0x4597c4u: goto label_4597c4;
        case 0x4597c8u: goto label_4597c8;
        case 0x4597ccu: goto label_4597cc;
        case 0x4597d0u: goto label_4597d0;
        case 0x4597d4u: goto label_4597d4;
        case 0x4597d8u: goto label_4597d8;
        case 0x4597dcu: goto label_4597dc;
        case 0x4597e0u: goto label_4597e0;
        case 0x4597e4u: goto label_4597e4;
        case 0x4597e8u: goto label_4597e8;
        case 0x4597ecu: goto label_4597ec;
        case 0x4597f0u: goto label_4597f0;
        case 0x4597f4u: goto label_4597f4;
        case 0x4597f8u: goto label_4597f8;
        case 0x4597fcu: goto label_4597fc;
        case 0x459800u: goto label_459800;
        case 0x459804u: goto label_459804;
        case 0x459808u: goto label_459808;
        case 0x45980cu: goto label_45980c;
        case 0x459810u: goto label_459810;
        case 0x459814u: goto label_459814;
        case 0x459818u: goto label_459818;
        case 0x45981cu: goto label_45981c;
        case 0x459820u: goto label_459820;
        case 0x459824u: goto label_459824;
        case 0x459828u: goto label_459828;
        case 0x45982cu: goto label_45982c;
        case 0x459830u: goto label_459830;
        case 0x459834u: goto label_459834;
        case 0x459838u: goto label_459838;
        case 0x45983cu: goto label_45983c;
        case 0x459840u: goto label_459840;
        case 0x459844u: goto label_459844;
        case 0x459848u: goto label_459848;
        case 0x45984cu: goto label_45984c;
        case 0x459850u: goto label_459850;
        case 0x459854u: goto label_459854;
        case 0x459858u: goto label_459858;
        case 0x45985cu: goto label_45985c;
        case 0x459860u: goto label_459860;
        case 0x459864u: goto label_459864;
        case 0x459868u: goto label_459868;
        case 0x45986cu: goto label_45986c;
        case 0x459870u: goto label_459870;
        case 0x459874u: goto label_459874;
        case 0x459878u: goto label_459878;
        case 0x45987cu: goto label_45987c;
        case 0x459880u: goto label_459880;
        case 0x459884u: goto label_459884;
        case 0x459888u: goto label_459888;
        case 0x45988cu: goto label_45988c;
        case 0x459890u: goto label_459890;
        case 0x459894u: goto label_459894;
        case 0x459898u: goto label_459898;
        case 0x45989cu: goto label_45989c;
        case 0x4598a0u: goto label_4598a0;
        case 0x4598a4u: goto label_4598a4;
        case 0x4598a8u: goto label_4598a8;
        case 0x4598acu: goto label_4598ac;
        case 0x4598b0u: goto label_4598b0;
        case 0x4598b4u: goto label_4598b4;
        case 0x4598b8u: goto label_4598b8;
        case 0x4598bcu: goto label_4598bc;
        case 0x4598c0u: goto label_4598c0;
        case 0x4598c4u: goto label_4598c4;
        case 0x4598c8u: goto label_4598c8;
        case 0x4598ccu: goto label_4598cc;
        case 0x4598d0u: goto label_4598d0;
        case 0x4598d4u: goto label_4598d4;
        case 0x4598d8u: goto label_4598d8;
        case 0x4598dcu: goto label_4598dc;
        case 0x4598e0u: goto label_4598e0;
        case 0x4598e4u: goto label_4598e4;
        case 0x4598e8u: goto label_4598e8;
        case 0x4598ecu: goto label_4598ec;
        case 0x4598f0u: goto label_4598f0;
        case 0x4598f4u: goto label_4598f4;
        case 0x4598f8u: goto label_4598f8;
        case 0x4598fcu: goto label_4598fc;
        case 0x459900u: goto label_459900;
        case 0x459904u: goto label_459904;
        case 0x459908u: goto label_459908;
        case 0x45990cu: goto label_45990c;
        case 0x459910u: goto label_459910;
        case 0x459914u: goto label_459914;
        case 0x459918u: goto label_459918;
        case 0x45991cu: goto label_45991c;
        default: break;
    }

    ctx->pc = 0x459730u;

label_459730:
    // 0x459730: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x459730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_459734:
    // 0x459734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x459734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_459738:
    // 0x459738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45973c:
    // 0x45973c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459740:
    // 0x459740: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_459744:
    // 0x459744: 0x2484e900  addiu       $a0, $a0, -0x1700
    ctx->pc = 0x459744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961408));
label_459748:
    // 0x459748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x459748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45974c:
    // 0x45974c: 0xc115ae4  jal         func_456B90
label_459750:
    if (ctx->pc == 0x459750u) {
        ctx->pc = 0x459754u;
        goto label_459754;
    }
    ctx->pc = 0x45974Cu;
    SET_GPR_U32(ctx, 31, 0x459754u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x45974Cu, 0x459754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459754u;
label_459754:
    // 0x459754: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_459758:
    // 0x459758: 0x2484e928  addiu       $a0, $a0, -0x16D8
    ctx->pc = 0x459758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961448));
label_45975c:
    // 0x45975c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45975cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459760:
    // 0x459760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x459760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459764:
    // 0x459764: 0xc11655c  jal         func_459570
label_459768:
    if (ctx->pc == 0x459768u) {
        ctx->pc = 0x45976Cu;
        goto label_45976c;
    }
    ctx->pc = 0x459764u;
    SET_GPR_U32(ctx, 31, 0x45976Cu);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x459764u, 0x45976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45976Cu;
label_45976c:
    // 0x45976c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x45976cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_459770:
    // 0x459770: 0x2484e938  addiu       $a0, $a0, -0x16C8
    ctx->pc = 0x459770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961464));
label_459774:
    // 0x459774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x459774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459778:
    // 0x459778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x459778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45977c:
    // 0x45977c: 0xc11655c  jal         func_459570
label_459780:
    if (ctx->pc == 0x459780u) {
        ctx->pc = 0x459784u;
        goto label_459784;
    }
    ctx->pc = 0x45977Cu;
    SET_GPR_U32(ctx, 31, 0x459784u);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x45977Cu, 0x459784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459784u;
label_459784:
    // 0x459784: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_459788:
    // 0x459788: 0x2484e948  addiu       $a0, $a0, -0x16B8
    ctx->pc = 0x459788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961480));
label_45978c:
    // 0x45978c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459790:
    // 0x459790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x459790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459794:
    // 0x459794: 0xc11655c  jal         func_459570
label_459798:
    if (ctx->pc == 0x459798u) {
        ctx->pc = 0x45979Cu;
        goto label_45979c;
    }
    ctx->pc = 0x459794u;
    SET_GPR_U32(ctx, 31, 0x45979Cu);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x459794u, 0x45979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45979Cu;
label_45979c:
    // 0x45979c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x45979cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4597a0:
    // 0x4597a0: 0x2484e960  addiu       $a0, $a0, -0x16A0
    ctx->pc = 0x4597a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
label_4597a4:
    // 0x4597a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4597a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4597a8:
    // 0x4597a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4597a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4597ac:
    // 0x4597ac: 0xc11655c  jal         func_459570
label_4597b0:
    if (ctx->pc == 0x4597B0u) {
        ctx->pc = 0x4597B4u;
        goto label_4597b4;
    }
    ctx->pc = 0x4597ACu;
    SET_GPR_U32(ctx, 31, 0x4597B4u);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x4597ACu, 0x4597B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4597B4u;
label_4597b4:
    // 0x4597b4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4597b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4597b8:
    // 0x4597b8: 0x2484e978  addiu       $a0, $a0, -0x1688
    ctx->pc = 0x4597b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961528));
label_4597bc:
    // 0x4597bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4597bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4597c0:
    // 0x4597c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4597c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4597c4:
    // 0x4597c4: 0xc11655c  jal         func_459570
label_4597c8:
    if (ctx->pc == 0x4597C8u) {
        ctx->pc = 0x4597CCu;
        goto label_4597cc;
    }
    ctx->pc = 0x4597C4u;
    SET_GPR_U32(ctx, 31, 0x4597CCu);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x4597C4u, 0x4597CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4597CCu;
label_4597cc:
    // 0x4597cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4597ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4597d0:
    // 0x4597d0: 0x8c4241c8  lw          $v0, 0x41C8($v0)
    ctx->pc = 0x4597d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16840)));
label_4597d4:
    // 0x4597d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4597d8:
    if (ctx->pc == 0x4597D8u) {
        ctx->pc = 0x4597DCu;
        goto label_4597dc;
    }
    ctx->pc = 0x4597D4u;
    {
        const bool branch_taken_0x4597d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4597d4) {
            ctx->pc = 0x4597F4u;
            goto label_4597f4;
        }
    }
    ctx->pc = 0x4597DCu;
label_4597dc:
    // 0x4597dc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4597dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4597e0:
    // 0x4597e0: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x4597e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_4597e4:
    // 0x4597e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4597e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4597e8:
    // 0x4597e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4597e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4597ec:
    // 0x4597ec: 0xc11655c  jal         func_459570
label_4597f0:
    if (ctx->pc == 0x4597F0u) {
        ctx->pc = 0x4597F4u;
        goto label_4597f4;
    }
    ctx->pc = 0x4597ECu;
    SET_GPR_U32(ctx, 31, 0x4597F4u);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x4597ECu, 0x4597F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4597F4u;
label_4597f4:
    // 0x4597f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4597f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4597f8:
    // 0x4597f8: 0x2785b138  addiu       $a1, $gp, -0x4EC8
    ctx->pc = 0x4597f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947128));
label_4597fc:
    // 0x4597fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4597fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459800:
    // 0x459800: 0xc0bc3e2  jal         func_2F0F88
label_459804:
    if (ctx->pc == 0x459804u) {
        ctx->pc = 0x459808u;
        goto label_459808;
    }
    ctx->pc = 0x459800u;
    SET_GPR_U32(ctx, 31, 0x459808u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x459800u, 0x459808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459808u;
label_459808:
    // 0x459808: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x459808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45980c:
    // 0x45980c: 0xc0bc60c  jal         func_2F1830
label_459810:
    if (ctx->pc == 0x459810u) {
        ctx->pc = 0x459814u;
        goto label_459814;
    }
    ctx->pc = 0x45980Cu;
    SET_GPR_U32(ctx, 31, 0x459814u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45980Cu, 0x459814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459814u;
label_459814:
    // 0x459814: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x459814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_459818:
    // 0x459818: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_45981c:
    // 0x45981c: 0x2484e9a0  addiu       $a0, $a0, -0x1660
    ctx->pc = 0x45981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961568));
label_459820:
    // 0x459820: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x459820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_459824:
    // 0x459824: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x459824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_459828:
    // 0x459828: 0xc11655c  jal         func_459570
label_45982c:
    if (ctx->pc == 0x45982Cu) {
        ctx->pc = 0x459830u;
        goto label_459830;
    }
    ctx->pc = 0x459828u;
    SET_GPR_U32(ctx, 31, 0x459830u);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x459828u, 0x459830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459830u;
label_459830:
    // 0x459830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x459830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459834:
    // 0x459834: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x459834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_459838:
    // 0x459838: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x459838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_45983c:
    // 0x45983c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_459840:
    // 0x459840: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_459844:
    if (ctx->pc == 0x459844u) {
        ctx->pc = 0x459848u;
        goto label_459848;
    }
    ctx->pc = 0x459840u;
    {
        const bool branch_taken_0x459840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459840) {
            ctx->pc = 0x4598F0u;
            goto label_4598f0;
        }
    }
    ctx->pc = 0x459848u;
label_459848:
    // 0x459848: 0x8f82b134  lw          $v0, -0x4ECC($gp)
    ctx->pc = 0x459848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947124)));
label_45984c:
    // 0x45984c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_459850:
    if (ctx->pc == 0x459850u) {
        ctx->pc = 0x459854u;
        goto label_459854;
    }
    ctx->pc = 0x45984Cu;
    {
        const bool branch_taken_0x45984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45984c) {
            ctx->pc = 0x4598F0u;
            goto label_4598f0;
        }
    }
    ctx->pc = 0x459854u;
label_459854:
    // 0x459854: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x459854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_459858:
    // 0x459858: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x459858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45985c:
    // 0x45985c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x45985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_459860:
    // 0x459860: 0xc115ee8  jal         func_457BA0
label_459864:
    if (ctx->pc == 0x459864u) {
        ctx->pc = 0x459868u;
        goto label_459868;
    }
    ctx->pc = 0x459860u;
    SET_GPR_U32(ctx, 31, 0x459868u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x459860u, 0x459868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459868u;
label_459868:
    // 0x459868: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45986c:
    if (ctx->pc == 0x45986Cu) {
        ctx->pc = 0x459870u;
        goto label_459870;
    }
    ctx->pc = 0x459868u;
    {
        const bool branch_taken_0x459868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459868) {
            ctx->pc = 0x4598F0u;
            goto label_4598f0;
        }
    }
    ctx->pc = 0x459870u;
label_459870:
    // 0x459870: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x459870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_459874:
    // 0x459874: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_459878:
    if (ctx->pc == 0x459878u) {
        ctx->pc = 0x45987Cu;
        goto label_45987c;
    }
    ctx->pc = 0x459874u;
    {
        const bool branch_taken_0x459874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459874) {
            ctx->pc = 0x4598F0u;
            goto label_4598f0;
        }
    }
    ctx->pc = 0x45987Cu;
label_45987c:
    // 0x45987c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_459880:
    // 0x459880: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x459880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_459884:
    // 0x459884: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x459884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_459888:
    // 0x459888: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x459888u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45988c:
    // 0x45988c: 0x24e7e9c0  addiu       $a3, $a3, -0x1640
    ctx->pc = 0x45988cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961600));
label_459890:
    // 0x459890: 0x240801a2  addiu       $t0, $zero, 0x1A2
    ctx->pc = 0x459890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
label_459894:
    // 0x459894: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x459894u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_459898:
    // 0x459898: 0x2529e9d0  addiu       $t1, $t1, -0x1630
    ctx->pc = 0x459898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961616));
label_45989c:
    // 0x45989c: 0xc113940  jal         func_44E500
label_4598a0:
    if (ctx->pc == 0x4598A0u) {
        ctx->pc = 0x4598A4u;
        goto label_4598a4;
    }
    ctx->pc = 0x45989Cu;
    SET_GPR_U32(ctx, 31, 0x4598A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45989Cu, 0x4598A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4598A4u;
label_4598a4:
    // 0x4598a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4598a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4598a8:
    // 0x4598a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4598a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4598ac:
    // 0x4598ac: 0x24a5e9e0  addiu       $a1, $a1, -0x1620
    ctx->pc = 0x4598acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961632));
label_4598b0:
    // 0x4598b0: 0xc115c24  jal         func_457090
label_4598b4:
    if (ctx->pc == 0x4598B4u) {
        ctx->pc = 0x4598B8u;
        goto label_4598b8;
    }
    ctx->pc = 0x4598B0u;
    SET_GPR_U32(ctx, 31, 0x4598B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4598B0u, 0x4598B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4598B8u;
label_4598b8:
    // 0x4598b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4598b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4598bc:
    // 0x4598bc: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x4598bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4598c0:
    // 0x4598c0: 0x40f809  jalr        $v0
label_4598c4:
    if (ctx->pc == 0x4598C4u) {
        ctx->pc = 0x4598C8u;
        goto label_4598c8;
    }
    ctx->pc = 0x4598C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4598C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4598C0u, 0x4598C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4598C8u;
label_4598c8:
    // 0x4598c8: 0xaf82b134  sw          $v0, -0x4ECC($gp)
    ctx->pc = 0x4598c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947124), GPR_U32(ctx, 2));
label_4598cc:
    // 0x4598cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4598ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4598d0:
    // 0x4598d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4598d4:
    if (ctx->pc == 0x4598D4u) {
        ctx->pc = 0x4598D8u;
        goto label_4598d8;
    }
    ctx->pc = 0x4598D0u;
    {
        const bool branch_taken_0x4598d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4598d0) {
            ctx->pc = 0x4598E0u;
            goto label_4598e0;
        }
    }
    ctx->pc = 0x4598D8u;
label_4598d8:
    // 0x4598d8: 0xd  break       0
    ctx->pc = 0x4598d8u;
    runtime->handleBreak(rdram, ctx);
label_4598dc:
    // 0x4598dc: 0x0  nop
    ctx->pc = 0x4598dcu;
    // NOP
label_4598e0:
    // 0x4598e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4598e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4598e4:
    // 0x4598e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4598e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4598e8:
    // 0x4598e8: 0xc11392c  jal         func_44E4B0
label_4598ec:
    if (ctx->pc == 0x4598ECu) {
        ctx->pc = 0x4598F0u;
        goto label_4598f0;
    }
    ctx->pc = 0x4598E8u;
    SET_GPR_U32(ctx, 31, 0x4598F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4598E8u, 0x4598F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4598F0u;
label_4598f0:
    // 0x4598f0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4598f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4598f4:
    // 0x4598f4: 0x2484ea00  addiu       $a0, $a0, -0x1600
    ctx->pc = 0x4598f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961664));
label_4598f8:
    // 0x4598f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4598f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4598fc:
    // 0x4598fc: 0xc115ae4  jal         func_456B90
label_459900:
    if (ctx->pc == 0x459900u) {
        ctx->pc = 0x459904u;
        goto label_459904;
    }
    ctx->pc = 0x4598FCu;
    SET_GPR_U32(ctx, 31, 0x459904u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4598FCu, 0x459904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459904u;
label_459904:
    // 0x459904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459908:
    // 0x459908: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x459908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45990c:
    // 0x45990c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45990cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_459910:
    // 0x459910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_459914:
    // 0x459914: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x459914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_459918:
    // 0x459918: 0x3e00008  jr          $ra
label_45991c:
    if (ctx->pc == 0x45991Cu) {
        ctx->pc = 0x459920u;
        goto label_fallthrough_0x459918;
    }
    ctx->pc = 0x459918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x459918:
    ctx->pc = 0x459920u;
}
