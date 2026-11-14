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

// Function: sub_00256FB0
// Address: 0x256fb0 - 0x257070
void sub_00256FB0_0x256fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256FB0_0x256fb0");
#endif

    switch (ctx->pc) {
        case 0x256fd4u: goto label_256fd4;
        case 0x256fdcu: goto label_256fdc;
        case 0x256fe8u: goto label_256fe8;
        case 0x257000u: goto label_257000;
        case 0x25700cu: goto label_25700c;
        case 0x25701cu: goto label_25701c;
        case 0x257030u: goto label_257030;
        case 0x257040u: goto label_257040;
        case 0x257058u: goto label_257058;
        default: break;
    }

    ctx->pc = 0x256fb0u;

    // 0x256fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x256fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x256fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256fbc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x256fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x256fc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x256fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256fc4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x256fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x256fc8: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x256fcc: 0xc095410  jal         func_255040
    ctx->pc = 0x256FCCu;
    SET_GPR_U32(ctx, 31, 0x256FD4u);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x256FCCu, 0x256FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FD4u;
label_256fd4:
    // 0x256fd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x256FD4u;
    {
        const bool branch_taken_0x256fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fd4) {
            ctx->pc = 0x25701Cu;
            goto label_25701c;
        }
    }
    ctx->pc = 0x256FDCu;
label_256fdc:
    // 0x256fdc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x256fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x256fe0: 0xc095408  jal         func_255020
    ctx->pc = 0x256FE0u;
    SET_GPR_U32(ctx, 31, 0x256FE8u);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x256FE0u, 0x256FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FE8u;
label_256fe8:
    // 0x256fe8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x256fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256fec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256FECu;
    {
        const bool branch_taken_0x256fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fec) {
            ctx->pc = 0x257010u;
            goto label_257010;
        }
    }
    ctx->pc = 0x256FF4u;
    // 0x256ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256ff8: 0xc0953dc  jal         func_254F70
    ctx->pc = 0x256FF8u;
    SET_GPR_U32(ctx, 31, 0x257000u);
    ctx->pc = 0x254F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F70u, 0x256FF8u, 0x257000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257000u;
label_257000:
    // 0x257000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257004: 0xc119c5c  jal         func_467170
    ctx->pc = 0x257004u;
    SET_GPR_U32(ctx, 31, 0x25700Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x257004u, 0x25700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25700Cu;
label_25700c:
    // 0x25700c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25700cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257010:
    // 0x257010: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x257010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x257014: 0xc0953cc  jal         func_254F30
    ctx->pc = 0x257014u;
    SET_GPR_U32(ctx, 31, 0x25701Cu);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x257014u, 0x25701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25701Cu;
label_25701c:
    // 0x25701c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257020: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x257020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x257024: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x257024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x257028: 0xc0953a0  jal         func_254E80
    ctx->pc = 0x257028u;
    SET_GPR_U32(ctx, 31, 0x257030u);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x257028u, 0x257030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257030u;
label_257030:
    // 0x257030: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x257030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x257034: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x257034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x257038: 0xc041998  jal         func_106660
    ctx->pc = 0x257038u;
    SET_GPR_U32(ctx, 31, 0x257040u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x257038u, 0x257040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257040u;
label_257040:
    // 0x257040: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x257040u;
    {
        const bool branch_taken_0x257040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257040) {
            ctx->pc = 0x256FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256fdc;
        }
    }
    ctx->pc = 0x257048u;
    // 0x257048: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25704c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x25704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x257050: 0xc095394  jal         func_254E50
    ctx->pc = 0x257050u;
    SET_GPR_U32(ctx, 31, 0x257058u);
    ctx->pc = 0x254E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E50u, 0x257050u, 0x257058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257058u;
label_257058:
    // 0x257058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25705c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25705cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257060: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x257060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257064: 0x3e00008  jr          $ra
    ctx->pc = 0x257064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25706Cu;
    // 0x25706c: 0x0  nop
    ctx->pc = 0x25706cu;
    // NOP
    ctx->pc = 0x257070u;
}
