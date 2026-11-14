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

// Function: sub_00187600
// Address: 0x187600 - 0x187700
void sub_00187600_0x187600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187600_0x187600");
#endif

    switch (ctx->pc) {
        case 0x187638u: goto label_187638;
        case 0x187644u: goto label_187644;
        case 0x187658u: goto label_187658;
        case 0x187668u: goto label_187668;
        case 0x187680u: goto label_187680;
        case 0x187694u: goto label_187694;
        case 0x1876acu: goto label_1876ac;
        case 0x1876dcu: goto label_1876dc;
        default: break;
    }

    ctx->pc = 0x187600u;

    // 0x187600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x187600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x187604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x187604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x187608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18760c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187618: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x187618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x18761c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x18761cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x187620: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x187620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x187624: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x187624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187628: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x187628u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18762c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x18762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187630: 0xc060fe8  jal         func_183FA0
    ctx->pc = 0x187630u;
    SET_GPR_U32(ctx, 31, 0x187638u);
    ctx->pc = 0x183FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183FA0u, 0x187630u, 0x187638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187638u;
label_187638:
    // 0x187638: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x187638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18763c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18763Cu;
    {
        const bool branch_taken_0x18763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18763c) {
            ctx->pc = 0x1876B4u;
            goto label_1876b4;
        }
    }
    ctx->pc = 0x187644u;
label_187644:
    // 0x187644: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x187644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187648: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x187648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x18764c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x18764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187650: 0xc061df4  jal         func_1877D0
    ctx->pc = 0x187650u;
    SET_GPR_U32(ctx, 31, 0x187658u);
    ctx->pc = 0x1877D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1877D0u, 0x187650u, 0x187658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187658u;
label_187658:
    // 0x187658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x187658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18765c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18765cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187660: 0xc061ddc  jal         func_187770
    ctx->pc = 0x187660u;
    SET_GPR_U32(ctx, 31, 0x187668u);
    ctx->pc = 0x187770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187770u, 0x187660u, 0x187668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187668u;
label_187668:
    // 0x187668: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x187668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18766c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x18766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x187670: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x187670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x187674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187678: 0xc061dd0  jal         func_187740
    ctx->pc = 0x187678u;
    SET_GPR_U32(ctx, 31, 0x187680u);
    ctx->pc = 0x187740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187740u, 0x187678u, 0x187680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187680u;
label_187680:
    // 0x187680: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187680u;
    {
        const bool branch_taken_0x187680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187680) {
            ctx->pc = 0x1876A0u;
            goto label_1876a0;
        }
    }
    ctx->pc = 0x187688u;
    // 0x187688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18768c: 0xc061dc8  jal         func_187720
    ctx->pc = 0x18768Cu;
    SET_GPR_U32(ctx, 31, 0x187694u);
    ctx->pc = 0x187720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187720u, 0x18768Cu, 0x187694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187694u;
label_187694:
    // 0x187694: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x187694u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x187698u;
    {
        const bool branch_taken_0x187698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187698) {
            ctx->pc = 0x1876B0u;
            goto label_1876b0;
        }
    }
    ctx->pc = 0x1876A0u;
label_1876a0:
    // 0x1876a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1876a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876a4: 0xc061dc0  jal         func_187700
    ctx->pc = 0x1876A4u;
    SET_GPR_U32(ctx, 31, 0x1876ACu);
    ctx->pc = 0x187700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187700u, 0x1876A4u, 0x1876ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876ACu;
label_1876ac:
    // 0x1876ac: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1876acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1876b0:
    // 0x1876b0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1876b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1876b4:
    // 0x1876b4: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1876B4u;
    {
        const bool branch_taken_0x1876b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1876b4) {
            ctx->pc = 0x187644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187644;
        }
    }
    ctx->pc = 0x1876BCu;
    // 0x1876bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1876bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1876c0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1876c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1876c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1876c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1876c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876cc: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1876d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1876d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876d4: 0xc061e94  jal         func_187A50
    ctx->pc = 0x1876D4u;
    SET_GPR_U32(ctx, 31, 0x1876DCu);
    ctx->pc = 0x187A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187A50u, 0x1876D4u, 0x1876DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876DCu;
label_1876dc:
    // 0x1876dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1876e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1876e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1876e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1876e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1876e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1876e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1876ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1876ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1876f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1876f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1876f4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1876f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1876F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187700u;
}
