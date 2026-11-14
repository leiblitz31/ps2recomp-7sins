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

// Function: sub_00161CC0
// Address: 0x161cc0 - 0x161d50
void sub_00161CC0_0x161cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161CC0_0x161cc0");
#endif

    switch (ctx->pc) {
        case 0x161ce4u: goto label_161ce4;
        case 0x161cf4u: goto label_161cf4;
        case 0x161d0cu: goto label_161d0c;
        case 0x161d20u: goto label_161d20;
        default: break;
    }

    ctx->pc = 0x161cc0u;

    // 0x161cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x161cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161cd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x161cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x161cd4: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x161cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x161cd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x161cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cdc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x161CDCu;
    {
        const bool branch_taken_0x161cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161cdc) {
            ctx->pc = 0x161D24u;
            goto label_161d24;
        }
    }
    ctx->pc = 0x161CE4u;
label_161ce4:
    // 0x161ce4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x161ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161ce8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161cec: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161CECu;
    SET_GPR_U32(ctx, 31, 0x161CF4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161CECu, 0x161CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CF4u;
label_161cf4:
    // 0x161cf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x161cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161cfc: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x161cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x161d00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d04: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x161D04u;
    SET_GPR_U32(ctx, 31, 0x161D0Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x161D04u, 0x161D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D0Cu;
label_161d0c:
    // 0x161d0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x161d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d14: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x161d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161d18: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x161D18u;
    SET_GPR_U32(ctx, 31, 0x161D20u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x161D18u, 0x161D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161D20u;
label_161d20:
    // 0x161d20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x161d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_161d24:
    // 0x161d24: 0x2e01000a  sltiu       $at, $s0, 0xA
    ctx->pc = 0x161d24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x161d28: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x161D28u;
    {
        const bool branch_taken_0x161d28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x161d28) {
            ctx->pc = 0x161CE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161ce4;
        }
    }
    ctx->pc = 0x161D30u;
    // 0x161d30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161d34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x161d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x161d40: 0x3e00008  jr          $ra
    ctx->pc = 0x161D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161D48u;
    // 0x161d48: 0x0  nop
    ctx->pc = 0x161d48u;
    // NOP
    // 0x161d4c: 0x0  nop
    ctx->pc = 0x161d4cu;
    // NOP
    ctx->pc = 0x161d50u;
}
