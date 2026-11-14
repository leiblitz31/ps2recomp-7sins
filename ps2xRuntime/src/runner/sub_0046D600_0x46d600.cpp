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

// Function: sub_0046D600
// Address: 0x46d600 - 0x46d730
void sub_0046D600_0x46d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D600_0x46d600");
#endif

    switch (ctx->pc) {
        case 0x46d620u: goto label_46d620;
        case 0x46d62cu: goto label_46d62c;
        case 0x46d668u: goto label_46d668;
        case 0x46d674u: goto label_46d674;
        case 0x46d6a4u: goto label_46d6a4;
        case 0x46d6b0u: goto label_46d6b0;
        case 0x46d6f4u: goto label_46d6f4;
        case 0x46d700u: goto label_46d700;
        default: break;
    }

    ctx->pc = 0x46d600u;

    // 0x46d600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46d604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46d608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d60c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46d610: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46d610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46d614: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d618: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x46D618u;
    SET_GPR_U32(ctx, 31, 0x46D620u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x46D618u, 0x46D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D620u;
label_46d620:
    // 0x46d620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46d620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x46D624u;
    {
        const bool branch_taken_0x46d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d624) {
            ctx->pc = 0x46D640u;
            goto label_46d640;
        }
    }
    ctx->pc = 0x46D62Cu;
label_46d62c:
    // 0x46d62c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d630: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46d630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d634: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46d634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46d638: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d63c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x46d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_46d640:
    // 0x46d640: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d644: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d648: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x46d648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x46d64c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x46D64Cu;
    {
        const bool branch_taken_0x46d64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d64c) {
            ctx->pc = 0x46D67Cu;
            goto label_46d67c;
        }
    }
    ctx->pc = 0x46D654u;
    // 0x46d654: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d658: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d65c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x46d65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d660: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x46D660u;
    SET_GPR_U32(ctx, 31, 0x46D668u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x46D660u, 0x46D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D668u;
label_46d668:
    // 0x46d668: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46d668u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d66c: 0xc11b56c  jal         func_46D5B0
    ctx->pc = 0x46D66Cu;
    SET_GPR_U32(ctx, 31, 0x46D674u);
    ctx->pc = 0x46D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D5B0u, 0x46D66Cu, 0x46D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D674u;
label_46d674:
    // 0x46d674: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x46D674u;
    {
        const bool branch_taken_0x46d674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d674) {
            ctx->pc = 0x46D62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d62c;
        }
    }
    ctx->pc = 0x46D67Cu;
label_46d67c:
    // 0x46d67c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d680: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46d680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d684: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x46d684u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x46d688: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x46D688u;
    {
        const bool branch_taken_0x46d688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d688) {
            ctx->pc = 0x46D6CCu;
            goto label_46d6cc;
        }
    }
    ctx->pc = 0x46D690u;
    // 0x46d690: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d694: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d698: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x46d698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d69c: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x46D69Cu;
    SET_GPR_U32(ctx, 31, 0x46D6A4u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x46D69Cu, 0x46D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D6A4u;
label_46d6a4:
    // 0x46d6a4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46d6a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d6a8: 0xc11b56c  jal         func_46D5B0
    ctx->pc = 0x46D6A8u;
    SET_GPR_U32(ctx, 31, 0x46D6B0u);
    ctx->pc = 0x46D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D5B0u, 0x46D6A8u, 0x46D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D6B0u;
label_46d6b0:
    // 0x46d6b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46D6B0u;
    {
        const bool branch_taken_0x46d6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d6b0) {
            ctx->pc = 0x46D6CCu;
            goto label_46d6cc;
        }
    }
    ctx->pc = 0x46D6B8u;
    // 0x46d6b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d6bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d6c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46d6c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d6c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x46d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_46d6cc:
    // 0x46d6cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d6d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d6d4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x46d6d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x46d6d8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x46D6D8u;
    {
        const bool branch_taken_0x46d6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d6d8) {
            ctx->pc = 0x46D71Cu;
            goto label_46d71c;
        }
    }
    ctx->pc = 0x46D6E0u;
    // 0x46d6e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x46d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d6e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d6e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x46d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d6ec: 0xc0563b8  jal         func_158EE0
    ctx->pc = 0x46D6ECu;
    SET_GPR_U32(ctx, 31, 0x46D6F4u);
    ctx->pc = 0x158EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158EE0u, 0x46D6ECu, 0x46D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D6F4u;
label_46d6f4:
    // 0x46d6f4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x46d6f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d6f8: 0xc11b56c  jal         func_46D5B0
    ctx->pc = 0x46D6F8u;
    SET_GPR_U32(ctx, 31, 0x46D700u);
    ctx->pc = 0x46D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D5B0u, 0x46D6F8u, 0x46D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D700u;
label_46d700:
    // 0x46d700: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x46D700u;
    {
        const bool branch_taken_0x46d700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d700) {
            ctx->pc = 0x46D71Cu;
            goto label_46d71c;
        }
    }
    ctx->pc = 0x46D708u;
    // 0x46d708: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d70c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46d710: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46d714: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x46d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d718: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x46d718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_46d71c:
    // 0x46d71c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46d71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d724: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46d724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46d728: 0x3e00008  jr          $ra
    ctx->pc = 0x46D728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D730u;
}
