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

// Function: sub_00266520
// Address: 0x266520 - 0x266690
void sub_00266520_0x266520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266520_0x266520");
#endif

    switch (ctx->pc) {
        case 0x266550u: goto label_266550;
        case 0x266560u: goto label_266560;
        case 0x266570u: goto label_266570;
        case 0x266580u: goto label_266580;
        case 0x26658cu: goto label_26658c;
        case 0x2665a8u: goto label_2665a8;
        case 0x2665bcu: goto label_2665bc;
        case 0x2665e0u: goto label_2665e0;
        case 0x2665f0u: goto label_2665f0;
        case 0x266600u: goto label_266600;
        case 0x266610u: goto label_266610;
        case 0x26661cu: goto label_26661c;
        case 0x266638u: goto label_266638;
        case 0x26664cu: goto label_26664c;
        default: break;
    }

    ctx->pc = 0x266520u;

    // 0x266520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x266520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x266524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x266524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x266528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26652c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266538: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x266538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x26653c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26653cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266540: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x266540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266544: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266548: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x266548u;
    SET_GPR_U32(ctx, 31, 0x266550u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x266548u, 0x266550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266550u;
label_266550:
    // 0x266550: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x266550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266558: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x266558u;
    SET_GPR_U32(ctx, 31, 0x266560u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x266558u, 0x266560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266560u;
label_266560:
    // 0x266560: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266564: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x266564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266568: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x266568u;
    {
        const bool branch_taken_0x266568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266568) {
            ctx->pc = 0x2665C8u;
            goto label_2665c8;
        }
    }
    ctx->pc = 0x266570u;
label_266570:
    // 0x266570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266578: 0xc0999a4  jal         func_266690
    ctx->pc = 0x266578u;
    SET_GPR_U32(ctx, 31, 0x266580u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x266578u, 0x266580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266580u;
label_266580:
    // 0x266580: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266584: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x266584u;
    SET_GPR_U32(ctx, 31, 0x26658Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x266584u, 0x26658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26658Cu;
label_26658c:
    // 0x26658c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x26658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x266590: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x266590u;
    {
        const bool branch_taken_0x266590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266590) {
            ctx->pc = 0x2665C4u;
            goto label_2665c4;
        }
    }
    ctx->pc = 0x266598u;
    // 0x266598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26659c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26659cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665a0: 0xc0999a4  jal         func_266690
    ctx->pc = 0x2665A0u;
    SET_GPR_U32(ctx, 31, 0x2665A8u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x2665A0u, 0x2665A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665A8u;
label_2665a8:
    // 0x2665a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2665a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2665ac: 0x2785a0c0  addiu       $a1, $gp, -0x5F40
    ctx->pc = 0x2665acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942912));
    // 0x2665b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2665b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2665b4: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2665B4u;
    SET_GPR_U32(ctx, 31, 0x2665BCu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2665B4u, 0x2665BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665BCu;
label_2665bc:
    // 0x2665bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2665BCu;
    {
        const bool branch_taken_0x2665bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665bc) {
            ctx->pc = 0x266668u;
            goto label_266668;
        }
    }
    ctx->pc = 0x2665C4u;
label_2665c4:
    // 0x2665c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2665c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2665c8:
    // 0x2665c8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2665c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2665cc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2665CCu;
    {
        const bool branch_taken_0x2665cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2665cc) {
            ctx->pc = 0x266570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266570;
        }
    }
    ctx->pc = 0x2665D4u;
    // 0x2665d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2665d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2665d8: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2665D8u;
    SET_GPR_U32(ctx, 31, 0x2665E0u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2665D8u, 0x2665E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665E0u;
label_2665e0:
    // 0x2665e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2665e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2665e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665e8: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x2665E8u;
    SET_GPR_U32(ctx, 31, 0x2665F0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2665E8u, 0x2665F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665F0u;
label_2665f0:
    // 0x2665f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2665f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2665f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2665F8u;
    {
        const bool branch_taken_0x2665f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665f8) {
            ctx->pc = 0x266658u;
            goto label_266658;
        }
    }
    ctx->pc = 0x266600u;
label_266600:
    // 0x266600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266608: 0xc0999a4  jal         func_266690
    ctx->pc = 0x266608u;
    SET_GPR_U32(ctx, 31, 0x266610u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x266608u, 0x266610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266610u;
label_266610:
    // 0x266610: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266614: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x266614u;
    SET_GPR_U32(ctx, 31, 0x26661Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x266614u, 0x26661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26661Cu;
label_26661c:
    // 0x26661c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x26661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x266620: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x266620u;
    {
        const bool branch_taken_0x266620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x266620) {
            ctx->pc = 0x266654u;
            goto label_266654;
        }
    }
    ctx->pc = 0x266628u;
    // 0x266628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26662c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266630: 0xc0999a4  jal         func_266690
    ctx->pc = 0x266630u;
    SET_GPR_U32(ctx, 31, 0x266638u);
    ctx->pc = 0x266690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266690u, 0x266630u, 0x266638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266638u;
label_266638:
    // 0x266638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26663c: 0x2785a0c0  addiu       $a1, $gp, -0x5F40
    ctx->pc = 0x26663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942912));
    // 0x266640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x266640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266644: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x266644u;
    SET_GPR_U32(ctx, 31, 0x26664Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x266644u, 0x26664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26664Cu;
label_26664c:
    // 0x26664c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26664Cu;
    {
        const bool branch_taken_0x26664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26664c) {
            ctx->pc = 0x266668u;
            goto label_266668;
        }
    }
    ctx->pc = 0x266654u;
label_266654:
    // 0x266654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x266654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_266658:
    // 0x266658: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x266658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x26665c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x26665Cu;
    {
        const bool branch_taken_0x26665c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26665c) {
            ctx->pc = 0x266600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266600;
        }
    }
    ctx->pc = 0x266664u;
    // 0x266664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266668:
    // 0x266668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x266668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26666c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26666cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26667c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26667cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266680: 0x3e00008  jr          $ra
    ctx->pc = 0x266680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266688u;
    // 0x266688: 0x0  nop
    ctx->pc = 0x266688u;
    // NOP
    // 0x26668c: 0x0  nop
    ctx->pc = 0x26668cu;
    // NOP
    ctx->pc = 0x266690u;
}
