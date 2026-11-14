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

// Function: sub_001C1510
// Address: 0x1c1510 - 0x1c1610
void sub_001C1510_0x1c1510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1510_0x1c1510");
#endif

    switch (ctx->pc) {
        case 0x1c1530u: goto label_1c1530;
        case 0x1c153cu: goto label_1c153c;
        case 0x1c1590u: goto label_1c1590;
        case 0x1c159cu: goto label_1c159c;
        case 0x1c15ccu: goto label_1c15cc;
        default: break;
    }

    ctx->pc = 0x1c1510u;

    // 0x1c1510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c1514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c151c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1520: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1c1520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1c1524: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c1524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1528: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C1528u;
    {
        const bool branch_taken_0x1c1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1528) {
            ctx->pc = 0x1C15E0u;
            goto label_1c15e0;
        }
    }
    ctx->pc = 0x1C1530u;
label_1c1530:
    // 0x1c1530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1534: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C1534u;
    {
        const bool branch_taken_0x1c1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1534) {
            ctx->pc = 0x1C15D0u;
            goto label_1c15d0;
        }
    }
    ctx->pc = 0x1C153Cu;
label_1c153c:
    // 0x1c153c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c1540: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c1544: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c1544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c1548: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c154c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c154cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1550: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1c1550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c1554: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c1554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c1558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c155c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c155cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1560: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c1560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c1564: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c1568: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c156c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c156cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c1570: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c1570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1574: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1578: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c1578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c157c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1584: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c1584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1588: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C1588u;
    SET_GPR_U32(ctx, 31, 0x1C1590u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C1588u, 0x1C1590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1590u;
label_1c1590:
    // 0x1c1590: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c1590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1594: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C1594u;
    SET_GPR_U32(ctx, 31, 0x1C159Cu);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C1594u, 0x1C159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C159Cu;
label_1c159c:
    // 0x1c159c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c159cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c15a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c15a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c15a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c15ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c15b0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c15b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c15b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c15bc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c15c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c15c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15c4: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1C15C4u;
    SET_GPR_U32(ctx, 31, 0x1C15CCu);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1C15C4u, 0x1C15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15CCu;
label_1c15cc:
    // 0x1c15cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c15ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c15d0:
    // 0x1c15d0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1c15d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c15d4: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C15D4u;
    {
        const bool branch_taken_0x1c15d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c15d4) {
            ctx->pc = 0x1C153Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c153c;
        }
    }
    ctx->pc = 0x1C15DCu;
    // 0x1c15dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c15e0:
    // 0x1c15e0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c15e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c15e4: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1C15E4u;
    {
        const bool branch_taken_0x1c15e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c15e4) {
            ctx->pc = 0x1C1530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1530;
        }
    }
    ctx->pc = 0x1C15ECu;
    // 0x1c15ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c15ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c15f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c15f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c15f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c15f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c15f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c15fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C15FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C15FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1604u;
    // 0x1c1604: 0x0  nop
    ctx->pc = 0x1c1604u;
    // NOP
    // 0x1c1608: 0x0  nop
    ctx->pc = 0x1c1608u;
    // NOP
    // 0x1c160c: 0x0  nop
    ctx->pc = 0x1c160cu;
    // NOP
    ctx->pc = 0x1c1610u;
}
