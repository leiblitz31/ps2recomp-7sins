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

// Function: sub_00296BA0
// Address: 0x296ba0 - 0x296c70
void sub_00296BA0_0x296ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296BA0_0x296ba0");
#endif

    switch (ctx->pc) {
        case 0x296bc8u: goto label_296bc8;
        case 0x296bd8u: goto label_296bd8;
        case 0x296becu: goto label_296bec;
        case 0x296c0cu: goto label_296c0c;
        case 0x296c44u: goto label_296c44;
        case 0x296c54u: goto label_296c54;
        default: break;
    }

    ctx->pc = 0x296ba0u;

    // 0x296ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296bb0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x296bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x296bb4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x296bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x296bb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296bbc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296bc0: 0xc0a5138  jal         func_2944E0
    ctx->pc = 0x296BC0u;
    SET_GPR_U32(ctx, 31, 0x296BC8u);
    ctx->pc = 0x2944E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944E0u, 0x296BC0u, 0x296BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BC8u;
label_296bc8:
    // 0x296bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296bcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x296bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296bd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x296BD0u;
    {
        const bool branch_taken_0x296bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296bd0) {
            ctx->pc = 0x296C24u;
            goto label_296c24;
        }
    }
    ctx->pc = 0x296BD8u;
label_296bd8:
    // 0x296bd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296bdc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296be4: 0xc0a5b1c  jal         func_296C70
    ctx->pc = 0x296BE4u;
    SET_GPR_U32(ctx, 31, 0x296BECu);
    ctx->pc = 0x296C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C70u, 0x296BE4u, 0x296BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BECu;
label_296bec:
    // 0x296bec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296bf0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296bf4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x296BF4u;
    {
        const bool branch_taken_0x296bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x296bf4) {
            ctx->pc = 0x296C20u;
            goto label_296c20;
        }
    }
    ctx->pc = 0x296BFCu;
    // 0x296bfc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c04: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x296C04u;
    SET_GPR_U32(ctx, 31, 0x296C0Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x296C04u, 0x296C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C0Cu;
label_296c0c:
    // 0x296c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296c14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x296c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x296c18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x296C18u;
    {
        const bool branch_taken_0x296c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c18) {
            ctx->pc = 0x296C54u;
            goto label_296c54;
        }
    }
    ctx->pc = 0x296C20u;
label_296c20:
    // 0x296c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296c24:
    // 0x296c24: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x296c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x296c28: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x296C28u;
    {
        const bool branch_taken_0x296c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c28) {
            ctx->pc = 0x296BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296bd8;
        }
    }
    ctx->pc = 0x296C30u;
    // 0x296c30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296c34: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296c38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x296c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x296c3c: 0xc0a505c  jal         func_294170
    ctx->pc = 0x296C3Cu;
    SET_GPR_U32(ctx, 31, 0x296C44u);
    ctx->pc = 0x294170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294170u, 0x296C3Cu, 0x296C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C44u;
label_296c44:
    // 0x296c44: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296c48: 0x2785a2dc  addiu       $a1, $gp, -0x5D24
    ctx->pc = 0x296c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943452));
    // 0x296c4c: 0xc05614c  jal         func_158530
    ctx->pc = 0x296C4Cu;
    SET_GPR_U32(ctx, 31, 0x296C54u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x296C4Cu, 0x296C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C54u;
label_296c54:
    // 0x296c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296c60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x296c64: 0x3e00008  jr          $ra
    ctx->pc = 0x296C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296C6Cu;
    // 0x296c6c: 0x0  nop
    ctx->pc = 0x296c6cu;
    // NOP
    ctx->pc = 0x296c70u;
}
