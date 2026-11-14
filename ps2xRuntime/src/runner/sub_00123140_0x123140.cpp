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

// Function: sub_00123140
// Address: 0x123140 - 0x123200
void sub_00123140_0x123140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123140_0x123140");
#endif

    switch (ctx->pc) {
        case 0x123164u: goto label_123164;
        case 0x123178u: goto label_123178;
        case 0x123188u: goto label_123188;
        case 0x1231a0u: goto label_1231a0;
        case 0x1231acu: goto label_1231ac;
        case 0x1231c8u: goto label_1231c8;
        default: break;
    }

    ctx->pc = 0x123140u;

    // 0x123140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x123144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x123148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12314c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123150: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x123150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x123154: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x123154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x123158: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x123158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12315c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x12315Cu;
    SET_GPR_U32(ctx, 31, 0x123164u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x12315Cu, 0x123164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123164u;
label_123164:
    // 0x123164: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x123164u;
    {
        const bool branch_taken_0x123164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123164) {
            ctx->pc = 0x1231E8u;
            goto label_1231e8;
        }
    }
    ctx->pc = 0x12316Cu;
    // 0x12316c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x12316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123170: 0xc042514  jal         func_109450
    ctx->pc = 0x123170u;
    SET_GPR_U32(ctx, 31, 0x123178u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x123170u, 0x123178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123178u;
label_123178:
    // 0x123178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12317c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x12317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123180: 0xc042514  jal         func_109450
    ctx->pc = 0x123180u;
    SET_GPR_U32(ctx, 31, 0x123188u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x123180u, 0x123188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123188u;
label_123188:
    // 0x123188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12318c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x12318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x123190: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x123190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x123194: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x123194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123198: 0xc119354  jal         func_464D50
    ctx->pc = 0x123198u;
    SET_GPR_U32(ctx, 31, 0x1231A0u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x123198u, 0x1231A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231A0u;
label_1231a0:
    // 0x1231a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1231a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1231a4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1231A4u;
    SET_GPR_U32(ctx, 31, 0x1231ACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1231A4u, 0x1231ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231ACu;
label_1231ac:
    // 0x1231ac: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1231acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1231b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1231b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1231b4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1231b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1231b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1231b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1231bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231c0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x1231C0u;
    SET_GPR_U32(ctx, 31, 0x1231C8u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x1231C0u, 0x1231C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1231C8u;
label_1231c8:
    // 0x1231c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1231c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1231cc: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x1231ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1231d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1231d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1231d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1231d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1231d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1231d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1231dc: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x1231dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1231e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1231e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1231e4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1231e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1231e8:
    // 0x1231e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1231e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1231ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1231ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1231f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1231f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1231f4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1231f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1231f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1231F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1231F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123200u;
}
