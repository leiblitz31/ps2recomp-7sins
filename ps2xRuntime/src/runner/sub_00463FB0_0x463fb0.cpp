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

// Function: sub_00463FB0
// Address: 0x463fb0 - 0x464050
void sub_00463FB0_0x463fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463FB0_0x463fb0");
#endif

    switch (ctx->pc) {
        case 0x463fd8u: goto label_463fd8;
        case 0x463ff0u: goto label_463ff0;
        case 0x464004u: goto label_464004;
        case 0x464014u: goto label_464014;
        case 0x464028u: goto label_464028;
        default: break;
    }

    ctx->pc = 0x463fb0u;

    // 0x463fb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x463fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x463fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x463fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x463fbc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x463fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x463fc0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x463fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x463fc4: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x463fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x463fc8: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x463fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x463fcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x463fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463fd0: 0xc0495e0  jal         func_125780
    ctx->pc = 0x463FD0u;
    SET_GPR_U32(ctx, 31, 0x463FD8u);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x463FD0u, 0x463FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463FD8u;
label_463fd8:
    // 0x463fd8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x463fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x463fdc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x463fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x463fe0: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x463fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x463fe4: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x463fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x463fe8: 0xc117f10  jal         func_45FC40
    ctx->pc = 0x463FE8u;
    SET_GPR_U32(ctx, 31, 0x463FF0u);
    ctx->pc = 0x45FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FC40u, 0x463FE8u, 0x463FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463FF0u;
label_463ff0:
    // 0x463ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463ff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x463ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x463ff8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x463ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x463ffc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x463FFCu;
    {
        const bool branch_taken_0x463ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463ffc) {
            ctx->pc = 0x464028u;
            goto label_464028;
        }
    }
    ctx->pc = 0x464004u;
label_464004:
    // 0x464004: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x464004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x464008: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x464008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46400c: 0xc117c14  jal         func_45F050
    ctx->pc = 0x46400Cu;
    SET_GPR_U32(ctx, 31, 0x464014u);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x46400Cu, 0x464014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464014u;
label_464014:
    // 0x464014: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x464014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464018: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x464018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46401c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x46401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464020: 0xc117f34  jal         func_45FCD0
    ctx->pc = 0x464020u;
    SET_GPR_U32(ctx, 31, 0x464028u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x464020u, 0x464028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464028u;
label_464028:
    // 0x464028: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x464028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46402c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x46402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x464030: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x464030u;
    {
        const bool branch_taken_0x464030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x464030) {
            ctx->pc = 0x464004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464004;
        }
    }
    ctx->pc = 0x464038u;
    // 0x464038: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x464038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46403c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464044: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x464044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x464048: 0x3e00008  jr          $ra
    ctx->pc = 0x464048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464050u;
}
