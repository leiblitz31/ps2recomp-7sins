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

// Function: sub_002074B0
// Address: 0x2074b0 - 0x207840
void sub_002074B0_0x2074b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002074B0_0x2074b0");
#endif

    switch (ctx->pc) {
        case 0x2074ecu: goto label_2074ec;
        case 0x2074fcu: goto label_2074fc;
        case 0x20752cu: goto label_20752c;
        case 0x207538u: goto label_207538;
        case 0x20754cu: goto label_20754c;
        case 0x20755cu: goto label_20755c;
        case 0x207568u: goto label_207568;
        case 0x207578u: goto label_207578;
        case 0x207590u: goto label_207590;
        case 0x2075a4u: goto label_2075a4;
        case 0x2075e8u: goto label_2075e8;
        case 0x207668u: goto label_207668;
        case 0x207684u: goto label_207684;
        case 0x207694u: goto label_207694;
        case 0x2076f0u: goto label_2076f0;
        case 0x207730u: goto label_207730;
        case 0x207770u: goto label_207770;
        case 0x2077a0u: goto label_2077a0;
        case 0x2077d0u: goto label_2077d0;
        case 0x207800u: goto label_207800;
        case 0x207830u: goto label_207830;
        default: break;
    }

    ctx->pc = 0x2074b0u;

    // 0x2074b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2074b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2074b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2074b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2074b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2074b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2074bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2074bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2074c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2074c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2074c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2074c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2074c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2074c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2074cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2074ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2074d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2074d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2074d4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2074d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2074d8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2074dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2074dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2074e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2074e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2074e4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2074E4u;
    SET_GPR_U32(ctx, 31, 0x2074ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2074E4u, 0x2074ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074ECu;
label_2074ec:
    // 0x2074ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2074ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2074f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2074f4: 0xc096880  jal         func_25A200
    ctx->pc = 0x2074F4u;
    SET_GPR_U32(ctx, 31, 0x2074FCu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2074F4u, 0x2074FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2074FCu;
label_2074fc:
    // 0x2074fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2074fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207500: 0x1640003b  bnez        $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x207500u;
    {
        const bool branch_taken_0x207500 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x207500) {
            ctx->pc = 0x2075F0u;
            goto label_2075f0;
        }
    }
    ctx->pc = 0x207508u;
    // 0x207508: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x207508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20750c: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x20750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x207510: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207510u;
    {
        const bool branch_taken_0x207510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207510) {
            ctx->pc = 0x207524u;
            goto label_207524;
        }
    }
    ctx->pc = 0x207518u;
    // 0x207518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x207518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20751c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x20751Cu;
    {
        const bool branch_taken_0x20751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20751c) {
            ctx->pc = 0x2075F4u;
            goto label_2075f4;
        }
    }
    ctx->pc = 0x207524u;
label_207524:
    // 0x207524: 0xc090864  jal         func_242190
    ctx->pc = 0x207524u;
    SET_GPR_U32(ctx, 31, 0x20752Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x207524u, 0x20752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20752Cu;
label_20752c:
    // 0x20752c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20752cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207530: 0xc090590  jal         func_241640
    ctx->pc = 0x207530u;
    SET_GPR_U32(ctx, 31, 0x207538u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x207530u, 0x207538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207538u;
label_207538:
    // 0x207538: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x207538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20753c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207540: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x207544: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x207544u;
    SET_GPR_U32(ctx, 31, 0x20754Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x207544u, 0x20754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20754Cu;
label_20754c:
    // 0x20754c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20754cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x207550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207554: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x207554u;
    SET_GPR_U32(ctx, 31, 0x20755Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x207554u, 0x20755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20755Cu;
label_20755c:
    // 0x20755c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20755cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207560: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x207560u;
    {
        const bool branch_taken_0x207560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207560) {
            ctx->pc = 0x2075DCu;
            goto label_2075dc;
        }
    }
    ctx->pc = 0x207568u;
label_207568:
    // 0x207568: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x207568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20756c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x207570: 0xc085538  jal         func_2154E0
    ctx->pc = 0x207570u;
    SET_GPR_U32(ctx, 31, 0x207578u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x207570u, 0x207578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207578u;
label_207578:
    // 0x207578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20757c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20757Cu;
    {
        const bool branch_taken_0x20757c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20757c) {
            ctx->pc = 0x2075D8u;
            goto label_2075d8;
        }
    }
    ctx->pc = 0x207584u;
    // 0x207584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207588: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x207588u;
    SET_GPR_U32(ctx, 31, 0x207590u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x207588u, 0x207590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207590u;
label_207590:
    // 0x207590: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x207590u;
    {
        const bool branch_taken_0x207590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207590) {
            ctx->pc = 0x2075D8u;
            goto label_2075d8;
        }
    }
    ctx->pc = 0x207598u;
    // 0x207598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x207598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20759c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x20759Cu;
    SET_GPR_U32(ctx, 31, 0x2075A4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x20759Cu, 0x2075A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075A4u;
label_2075a4:
    // 0x2075a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2075a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2075a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2075ac: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x2075acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x2075b0: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2075B0u;
    {
        const bool branch_taken_0x2075b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2075b0) {
            ctx->pc = 0x2075D8u;
            goto label_2075d8;
        }
    }
    ctx->pc = 0x2075B8u;
    // 0x2075b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2075bc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2075bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2075c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2075c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2075C4u;
    {
        const bool branch_taken_0x2075c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2075c4) {
            ctx->pc = 0x2075D8u;
            goto label_2075d8;
        }
    }
    ctx->pc = 0x2075CCu;
    // 0x2075cc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2075ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2075d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2075D0u;
    {
        const bool branch_taken_0x2075d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075d0) {
            ctx->pc = 0x2075F0u;
            goto label_2075f0;
        }
    }
    ctx->pc = 0x2075D8u;
label_2075d8:
    // 0x2075d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2075dc:
    // 0x2075dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2075dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2075e0: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2075E0u;
    SET_GPR_U32(ctx, 31, 0x2075E8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2075E0u, 0x2075E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2075E8u;
label_2075e8:
    // 0x2075e8: 0x1602ffdf  bne         $s0, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2075E8u;
    {
        const bool branch_taken_0x2075e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2075e8) {
            ctx->pc = 0x207568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207568;
        }
    }
    ctx->pc = 0x2075F0u;
label_2075f0:
    // 0x2075f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2075f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2075f4:
    // 0x2075f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2075f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2075f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2075f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2075fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2075fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x207600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x207604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20760c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20760cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x207610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207614: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x207614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x207618: 0x3e00008  jr          $ra
    ctx->pc = 0x207618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207620u;
    // 0x207620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x207624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x207624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x207628: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20762c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20762cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x207630: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x207630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x207634: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207638: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20763c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x20763Cu;
    {
        const bool branch_taken_0x20763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20763c) {
            ctx->pc = 0x20769Cu;
            goto label_20769c;
        }
    }
    ctx->pc = 0x207644u;
    // 0x207644: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x207648: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20764c: 0x10030013  beq         $zero, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x20764Cu;
    {
        const bool branch_taken_0x20764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x20764c) {
            ctx->pc = 0x20769Cu;
            goto label_20769c;
        }
    }
    ctx->pc = 0x207654u;
    // 0x207654: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x207658: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20765c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x207660: 0xc085538  jal         func_2154E0
    ctx->pc = 0x207660u;
    SET_GPR_U32(ctx, 31, 0x207668u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x207660u, 0x207668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207668u;
label_207668:
    // 0x207668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x207668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20766c: 0x1010000b  beq         $zero, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x20766Cu;
    {
        const bool branch_taken_0x20766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x20766c) {
            ctx->pc = 0x20769Cu;
            goto label_20769c;
        }
    }
    ctx->pc = 0x207674u;
    // 0x207674: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x207674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x207678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20767c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x20767Cu;
    SET_GPR_U32(ctx, 31, 0x207684u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x20767Cu, 0x207684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207684u;
label_207684:
    // 0x207684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207688: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20768c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x20768Cu;
    SET_GPR_U32(ctx, 31, 0x207694u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x20768Cu, 0x207694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207694u;
label_207694:
    // 0x207694: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207698: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x207698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_20769c:
    // 0x20769c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20769cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2076a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2076a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2076a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2076a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2076a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2076a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2076ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2076ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2076B4u;
    // 0x2076b4: 0x0  nop
    ctx->pc = 0x2076b4u;
    // NOP
    // 0x2076b8: 0x0  nop
    ctx->pc = 0x2076b8u;
    // NOP
    // 0x2076bc: 0x0  nop
    ctx->pc = 0x2076bcu;
    // NOP
    // 0x2076c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2076c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2076c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2076c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2076c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2076cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2076ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2076d0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2076d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2076d4: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x2076d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2076d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2076dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2076dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2076e0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2076e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2076e4: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x2076e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2076e8: 0xc064e90  jal         func_193A40
    ctx->pc = 0x2076E8u;
    SET_GPR_U32(ctx, 31, 0x2076F0u);
    ctx->pc = 0x193A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193A40u, 0x2076E8u, 0x2076F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2076F0u;
label_2076f0:
    // 0x2076f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2076f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2076f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2076f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2076F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2076F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207700u;
    // 0x207700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x207704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20770c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20770cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x207710: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x207710u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x207714: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x207714u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x207718: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20771c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207720: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x207720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207724: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x207724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x207728: 0xc064f2c  jal         func_193CB0
    ctx->pc = 0x207728u;
    SET_GPR_U32(ctx, 31, 0x207730u);
    ctx->pc = 0x193CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193CB0u, 0x207728u, 0x207730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207730u;
label_207730:
    // 0x207730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207734: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x207738: 0x3e00008  jr          $ra
    ctx->pc = 0x207738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207740u;
    // 0x207740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x207744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20774c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20774cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x207750: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x207750u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x207754: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x207754u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x207758: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20775c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207760: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x207760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207764: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x207764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x207768: 0xc064ff8  jal         func_193FE0
    ctx->pc = 0x207768u;
    SET_GPR_U32(ctx, 31, 0x207770u);
    ctx->pc = 0x193FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE0u, 0x207768u, 0x207770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207770u;
label_207770:
    // 0x207770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207774: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x207774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x207778: 0x3e00008  jr          $ra
    ctx->pc = 0x207778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207780u;
    // 0x207780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20778c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20778cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x207790: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207794: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207798: 0xc0650f0  jal         func_1943C0
    ctx->pc = 0x207798u;
    SET_GPR_U32(ctx, 31, 0x2077A0u);
    ctx->pc = 0x1943C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943C0u, 0x207798u, 0x2077A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2077A0u;
label_2077a0:
    // 0x2077a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2077a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2077a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2077a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2077a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2077A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077B0u;
    // 0x2077b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2077b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2077b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2077b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2077b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2077b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2077bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2077bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2077c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2077c4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2077c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2077c8: 0xc0650f4  jal         func_1943D0
    ctx->pc = 0x2077C8u;
    SET_GPR_U32(ctx, 31, 0x2077D0u);
    ctx->pc = 0x1943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1943D0u, 0x2077C8u, 0x2077D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2077D0u;
label_2077d0:
    // 0x2077d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2077d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2077d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2077d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2077d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2077D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077E0u;
    // 0x2077e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2077e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2077e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2077e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2077e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2077e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2077ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2077ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2077f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2077f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2077f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077f8: 0xc081e10  jal         func_207840
    ctx->pc = 0x2077F8u;
    SET_GPR_U32(ctx, 31, 0x207800u);
    ctx->pc = 0x207840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207840u, 0x2077F8u, 0x207800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207800u;
label_207800:
    // 0x207800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207804: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x207808: 0x3e00008  jr          $ra
    ctx->pc = 0x207808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207810u;
    // 0x207810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20781c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x207824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207828: 0xc081e10  jal         func_207840
    ctx->pc = 0x207828u;
    SET_GPR_U32(ctx, 31, 0x207830u);
    ctx->pc = 0x207840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207840u, 0x207828u, 0x207830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207830u;
label_207830:
    // 0x207830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207834: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x207834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x207838: 0x3e00008  jr          $ra
    ctx->pc = 0x207838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207840u;
}
