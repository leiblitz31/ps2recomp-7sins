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

// Function: sub_0045E520
// Address: 0x45e520 - 0x45e620
void sub_0045E520_0x45e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E520_0x45e520");
#endif

    switch (ctx->pc) {
        case 0x45e520u: goto label_45e520;
        case 0x45e524u: goto label_45e524;
        case 0x45e528u: goto label_45e528;
        case 0x45e52cu: goto label_45e52c;
        case 0x45e530u: goto label_45e530;
        case 0x45e534u: goto label_45e534;
        case 0x45e538u: goto label_45e538;
        case 0x45e53cu: goto label_45e53c;
        case 0x45e540u: goto label_45e540;
        case 0x45e544u: goto label_45e544;
        case 0x45e548u: goto label_45e548;
        case 0x45e54cu: goto label_45e54c;
        case 0x45e550u: goto label_45e550;
        case 0x45e554u: goto label_45e554;
        case 0x45e558u: goto label_45e558;
        case 0x45e55cu: goto label_45e55c;
        case 0x45e560u: goto label_45e560;
        case 0x45e564u: goto label_45e564;
        case 0x45e568u: goto label_45e568;
        case 0x45e56cu: goto label_45e56c;
        case 0x45e570u: goto label_45e570;
        case 0x45e574u: goto label_45e574;
        case 0x45e578u: goto label_45e578;
        case 0x45e57cu: goto label_45e57c;
        case 0x45e580u: goto label_45e580;
        case 0x45e584u: goto label_45e584;
        case 0x45e588u: goto label_45e588;
        case 0x45e58cu: goto label_45e58c;
        case 0x45e590u: goto label_45e590;
        case 0x45e594u: goto label_45e594;
        case 0x45e598u: goto label_45e598;
        case 0x45e59cu: goto label_45e59c;
        case 0x45e5a0u: goto label_45e5a0;
        case 0x45e5a4u: goto label_45e5a4;
        case 0x45e5a8u: goto label_45e5a8;
        case 0x45e5acu: goto label_45e5ac;
        case 0x45e5b0u: goto label_45e5b0;
        case 0x45e5b4u: goto label_45e5b4;
        case 0x45e5b8u: goto label_45e5b8;
        case 0x45e5bcu: goto label_45e5bc;
        case 0x45e5c0u: goto label_45e5c0;
        case 0x45e5c4u: goto label_45e5c4;
        case 0x45e5c8u: goto label_45e5c8;
        case 0x45e5ccu: goto label_45e5cc;
        case 0x45e5d0u: goto label_45e5d0;
        case 0x45e5d4u: goto label_45e5d4;
        case 0x45e5d8u: goto label_45e5d8;
        case 0x45e5dcu: goto label_45e5dc;
        case 0x45e5e0u: goto label_45e5e0;
        case 0x45e5e4u: goto label_45e5e4;
        case 0x45e5e8u: goto label_45e5e8;
        case 0x45e5ecu: goto label_45e5ec;
        case 0x45e5f0u: goto label_45e5f0;
        case 0x45e5f4u: goto label_45e5f4;
        case 0x45e5f8u: goto label_45e5f8;
        case 0x45e5fcu: goto label_45e5fc;
        case 0x45e600u: goto label_45e600;
        case 0x45e604u: goto label_45e604;
        case 0x45e608u: goto label_45e608;
        case 0x45e60cu: goto label_45e60c;
        case 0x45e610u: goto label_45e610;
        case 0x45e614u: goto label_45e614;
        case 0x45e618u: goto label_45e618;
        case 0x45e61cu: goto label_45e61c;
        default: break;
    }

    ctx->pc = 0x45e520u;

label_45e520:
    // 0x45e520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_45e524:
    // 0x45e524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_45e528:
    // 0x45e528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45e52c:
    // 0x45e52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45e52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45e530:
    // 0x45e530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45e534:
    // 0x45e534: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x45e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_45e538:
    // 0x45e538: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45e538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_45e53c:
    // 0x45e53c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e540:
    // 0x45e540: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45e544:
    // 0x45e544: 0x40f809  jalr        $v0
label_45e548:
    if (ctx->pc == 0x45E548u) {
        ctx->pc = 0x45E54Cu;
        goto label_45e54c;
    }
    ctx->pc = 0x45E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45E54Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E544u, 0x45E54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45E54Cu;
label_45e54c:
    // 0x45e54c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45e54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e550:
    // 0x45e550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45e550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e554:
    // 0x45e554: 0x10000024  b           . + 4 + (0x24 << 2)
label_45e558:
    if (ctx->pc == 0x45E558u) {
        ctx->pc = 0x45E55Cu;
        goto label_45e55c;
    }
    ctx->pc = 0x45E554u;
    {
        const bool branch_taken_0x45e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e554) {
            ctx->pc = 0x45E5E8u;
            goto label_45e5e8;
        }
    }
    ctx->pc = 0x45E55Cu;
label_45e55c:
    // 0x45e55c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45e560:
    // 0x45e560: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e564:
    // 0x45e564: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45e568:
    // 0x45e568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45e56c:
    // 0x45e56c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45e570:
    // 0x45e570: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_45e574:
    if (ctx->pc == 0x45E574u) {
        ctx->pc = 0x45E578u;
        goto label_45e578;
    }
    ctx->pc = 0x45E570u;
    {
        const bool branch_taken_0x45e570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e570) {
            ctx->pc = 0x45E5E4u;
            goto label_45e5e4;
        }
    }
    ctx->pc = 0x45E578u;
label_45e578:
    // 0x45e578: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45e57c:
    // 0x45e57c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e580:
    // 0x45e580: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45e584:
    // 0x45e584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45e588:
    // 0x45e588: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45e588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45e58c:
    // 0x45e58c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e590:
    // 0x45e590: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45e594:
    // 0x45e594: 0x40f809  jalr        $v0
label_45e598:
    if (ctx->pc == 0x45E598u) {
        ctx->pc = 0x45E59Cu;
        goto label_45e59c;
    }
    ctx->pc = 0x45E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45E59Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E594u, 0x45E59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45E59Cu;
label_45e59c:
    // 0x45e59c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45e59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45e5a0:
    // 0x45e5a0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x45e5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_45e5a4:
    // 0x45e5a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_45e5a8:
    if (ctx->pc == 0x45E5A8u) {
        ctx->pc = 0x45E5ACu;
        goto label_45e5ac;
    }
    ctx->pc = 0x45E5A4u;
    {
        const bool branch_taken_0x45e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e5a4) {
            ctx->pc = 0x45E5E4u;
            goto label_45e5e4;
        }
    }
    ctx->pc = 0x45E5ACu;
label_45e5ac:
    // 0x45e5ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45e5b0:
    // 0x45e5b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45e5b4:
    // 0x45e5b4: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45e5b8:
    // 0x45e5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45e5bc:
    // 0x45e5bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_45e5c0:
    // 0x45e5c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45e5c4:
    // 0x45e5c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45e5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e5c8:
    // 0x45e5c8: 0xc0bc710  jal         func_2F1C40
label_45e5cc:
    if (ctx->pc == 0x45E5CCu) {
        ctx->pc = 0x45E5D0u;
        goto label_45e5d0;
    }
    ctx->pc = 0x45E5C8u;
    SET_GPR_U32(ctx, 31, 0x45E5D0u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x45E5C8u, 0x45E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E5D0u;
label_45e5d0:
    // 0x45e5d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_45e5d4:
    if (ctx->pc == 0x45E5D4u) {
        ctx->pc = 0x45E5D8u;
        goto label_45e5d8;
    }
    ctx->pc = 0x45E5D0u;
    {
        const bool branch_taken_0x45e5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e5d0) {
            ctx->pc = 0x45E5E4u;
            goto label_45e5e4;
        }
    }
    ctx->pc = 0x45E5D8u;
label_45e5d8:
    // 0x45e5d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45e5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45e5dc:
    // 0x45e5dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_45e5e0:
    if (ctx->pc == 0x45E5E0u) {
        ctx->pc = 0x45E5E4u;
        goto label_45e5e4;
    }
    ctx->pc = 0x45E5DCu;
    {
        const bool branch_taken_0x45e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e5dc) {
            ctx->pc = 0x45E5F8u;
            goto label_45e5f8;
        }
    }
    ctx->pc = 0x45E5E4u;
label_45e5e4:
    // 0x45e5e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45e5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45e5e8:
    // 0x45e5e8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x45e5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_45e5ec:
    // 0x45e5ec: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_45e5f0:
    if (ctx->pc == 0x45E5F0u) {
        ctx->pc = 0x45E5F4u;
        goto label_45e5f4;
    }
    ctx->pc = 0x45E5ECu;
    {
        const bool branch_taken_0x45e5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e5ec) {
            ctx->pc = 0x45E55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e55c;
        }
    }
    ctx->pc = 0x45E5F4u;
label_45e5f4:
    // 0x45e5f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45e5f8:
    // 0x45e5f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_45e5fc:
    // 0x45e5fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45e5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45e600:
    // 0x45e600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45e600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45e604:
    // 0x45e604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45e608:
    // 0x45e608: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45e60c:
    // 0x45e60c: 0x3e00008  jr          $ra
label_45e610:
    if (ctx->pc == 0x45E610u) {
        ctx->pc = 0x45E614u;
        goto label_45e614;
    }
    ctx->pc = 0x45E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E614u;
label_45e614:
    // 0x45e614: 0x0  nop
    ctx->pc = 0x45e614u;
    // NOP
label_45e618:
    // 0x45e618: 0x0  nop
    ctx->pc = 0x45e618u;
    // NOP
label_45e61c:
    // 0x45e61c: 0x0  nop
    ctx->pc = 0x45e61cu;
    // NOP
    ctx->pc = 0x45e620u;
}
