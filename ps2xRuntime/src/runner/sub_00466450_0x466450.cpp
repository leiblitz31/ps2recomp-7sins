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

// Function: sub_00466450
// Address: 0x466450 - 0x4665a0
void sub_00466450_0x466450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466450_0x466450");
#endif

    switch (ctx->pc) {
        case 0x466484u: goto label_466484;
        case 0x466490u: goto label_466490;
        case 0x4664a0u: goto label_4664a0;
        case 0x4664bcu: goto label_4664bc;
        case 0x4664e4u: goto label_4664e4;
        case 0x4664f4u: goto label_4664f4;
        case 0x46650cu: goto label_46650c;
        case 0x46651cu: goto label_46651c;
        case 0x466530u: goto label_466530;
        case 0x466540u: goto label_466540;
        case 0x466558u: goto label_466558;
        case 0x466568u: goto label_466568;
        default: break;
    }

    ctx->pc = 0x466450u;

    // 0x466450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x466450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x466454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x466454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x466458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46645c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x466460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x466464: 0xaf80c010  sw          $zero, -0x3FF0($gp)
    ctx->pc = 0x466464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950928), GPR_U32(ctx, 0));
    // 0x466468: 0xaf80c014  sw          $zero, -0x3FEC($gp)
    ctx->pc = 0x466468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950932), GPR_U32(ctx, 0));
    // 0x46646c: 0xaf80c018  sw          $zero, -0x3FE8($gp)
    ctx->pc = 0x46646cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950936), GPR_U32(ctx, 0));
    // 0x466470: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x466470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x466474: 0xaf82c020  sw          $v0, -0x3FE0($gp)
    ctx->pc = 0x466474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950944), GPR_U32(ctx, 2));
    // 0x466478: 0xaf80c024  sw          $zero, -0x3FDC($gp)
    ctx->pc = 0x466478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950948), GPR_U32(ctx, 0));
    // 0x46647c: 0xc119af0  jal         func_466BC0
    ctx->pc = 0x46647Cu;
    SET_GPR_U32(ctx, 31, 0x466484u);
    ctx->pc = 0x466BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466BC0u, 0x46647Cu, 0x466484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466484u;
label_466484:
    // 0x466484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x466484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466488: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x466488u;
    SET_GPR_U32(ctx, 31, 0x466490u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x466488u, 0x466490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466490u;
label_466490:
    // 0x466490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x466490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x466494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466498: 0xc0400e0  jal         func_100380
    ctx->pc = 0x466498u;
    SET_GPR_U32(ctx, 31, 0x4664A0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x466498u, 0x4664A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4664A0u;
label_4664a0:
    // 0x4664a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4664a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4664a4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4664A4u;
    {
        const bool branch_taken_0x4664a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664a4) {
            ctx->pc = 0x4664C0u;
            goto label_4664c0;
        }
    }
    ctx->pc = 0x4664ACu;
    // 0x4664ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4664acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4664b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4664b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4664b4: 0xc119a84  jal         func_466A10
    ctx->pc = 0x4664B4u;
    SET_GPR_U32(ctx, 31, 0x4664BCu);
    ctx->pc = 0x466A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466A10u, 0x4664B4u, 0x4664BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4664BCu;
label_4664bc:
    // 0x4664bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4664bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4664c0:
    // 0x4664c0: 0x8f82c008  lw          $v0, -0x3FF8($gp)
    ctx->pc = 0x4664c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x4664c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4664C4u;
    {
        const bool branch_taken_0x4664c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4664c4) {
            ctx->pc = 0x4664D8u;
            goto label_4664d8;
        }
    }
    ctx->pc = 0x4664CCu;
    // 0x4664cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4664ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4664d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4664D0u;
    {
        const bool branch_taken_0x4664d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664d0) {
            ctx->pc = 0x46657Cu;
            goto label_46657c;
        }
    }
    ctx->pc = 0x4664D8u;
label_4664d8:
    // 0x4664d8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4664d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4664dc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x4664DCu;
    SET_GPR_U32(ctx, 31, 0x4664E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4664DCu, 0x4664E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4664E4u;
label_4664e4:
    // 0x4664e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4664e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4664e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4664e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4664ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4664ECu;
    SET_GPR_U32(ctx, 31, 0x4664F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4664ECu, 0x4664F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4664F4u;
label_4664f4:
    // 0x4664f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4664f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4664f8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4664F8u;
    {
        const bool branch_taken_0x4664f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4664f8) {
            ctx->pc = 0x466520u;
            goto label_466520;
        }
    }
    ctx->pc = 0x466500u;
    // 0x466500: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x466500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x466504: 0xc05150c  jal         func_145430
    ctx->pc = 0x466504u;
    SET_GPR_U32(ctx, 31, 0x46650Cu);
    ctx->pc = 0x145430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145430u, 0x466504u, 0x46650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46650Cu;
label_46650c:
    // 0x46650c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46650cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x466510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466514: 0xc0514cc  jal         func_145330
    ctx->pc = 0x466514u;
    SET_GPR_U32(ctx, 31, 0x46651Cu);
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x466514u, 0x46651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46651Cu;
label_46651c:
    // 0x46651c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46651cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_466520:
    // 0x466520: 0xaf91c02c  sw          $s1, -0x3FD4($gp)
    ctx->pc = 0x466520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950956), GPR_U32(ctx, 17));
    // 0x466524: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x466524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x466528: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x466528u;
    SET_GPR_U32(ctx, 31, 0x466530u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x466528u, 0x466530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466530u;
label_466530:
    // 0x466530: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x466530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x466534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x466534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466538: 0xc0400e0  jal         func_100380
    ctx->pc = 0x466538u;
    SET_GPR_U32(ctx, 31, 0x466540u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x466538u, 0x466540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466540u;
label_466540:
    // 0x466540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x466540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466544: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x466544u;
    {
        const bool branch_taken_0x466544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x466544) {
            ctx->pc = 0x46656Cu;
            goto label_46656c;
        }
    }
    ctx->pc = 0x46654Cu;
    // 0x46654c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x46654cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x466550: 0xc1199d4  jal         func_466750
    ctx->pc = 0x466550u;
    SET_GPR_U32(ctx, 31, 0x466558u);
    ctx->pc = 0x466750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466750u, 0x466550u, 0x466558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466558u;
label_466558:
    // 0x466558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x466558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46655c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46655cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x466560: 0xc119968  jal         func_4665A0
    ctx->pc = 0x466560u;
    SET_GPR_U32(ctx, 31, 0x466568u);
    ctx->pc = 0x4665A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4665A0u, 0x466560u, 0x466568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466568u;
label_466568:
    // 0x466568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x466568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46656c:
    // 0x46656c: 0xaf90c030  sw          $s0, -0x3FD0($gp)
    ctx->pc = 0x46656cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950960), GPR_U32(ctx, 16));
    // 0x466570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x466574: 0xaf82c004  sw          $v0, -0x3FFC($gp)
    ctx->pc = 0x466574u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950916), GPR_U32(ctx, 2));
    // 0x466578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46657c:
    // 0x46657c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46658c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46658cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x466590: 0x3e00008  jr          $ra
    ctx->pc = 0x466590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466598u;
    // 0x466598: 0x0  nop
    ctx->pc = 0x466598u;
    // NOP
    // 0x46659c: 0x0  nop
    ctx->pc = 0x46659cu;
    // NOP
    ctx->pc = 0x4665a0u;
}
