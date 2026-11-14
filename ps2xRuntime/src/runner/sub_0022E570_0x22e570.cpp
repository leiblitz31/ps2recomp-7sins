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

// Function: sub_0022E570
// Address: 0x22e570 - 0x22e600
void sub_0022E570_0x22e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E570_0x22e570");
#endif

    switch (ctx->pc) {
        case 0x22e598u: goto label_22e598;
        case 0x22e5c4u: goto label_22e5c4;
        case 0x22e5e4u: goto label_22e5e4;
        default: break;
    }

    ctx->pc = 0x22e570u;

    // 0x22e570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22e574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22e578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22e57c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22e580: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22e584: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e588: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x22e588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x22e58c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e590: 0xc08b954  jal         func_22E550
    ctx->pc = 0x22E590u;
    SET_GPR_U32(ctx, 31, 0x22E598u);
    ctx->pc = 0x22E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E550u, 0x22E590u, 0x22E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E598u;
label_22e598:
    // 0x22e598: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22E598u;
    {
        const bool branch_taken_0x22e598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22e598) {
            ctx->pc = 0x22E5C4u;
            goto label_22e5c4;
        }
    }
    ctx->pc = 0x22E5A0u;
    // 0x22e5a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x22e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e5a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e5a8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x22e5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e5ac: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x22e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x22e5b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22e5b4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22e5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e5b8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x22e5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22e5bc: 0xc08b980  jal         func_22E600
    ctx->pc = 0x22E5BCu;
    SET_GPR_U32(ctx, 31, 0x22E5C4u);
    ctx->pc = 0x22E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E600u, 0x22E5BCu, 0x22E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5C4u;
label_22e5c4:
    // 0x22e5c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e5c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22e5cc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x22e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x22e5d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22e5d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e5d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22e5dc: 0xc08b034  jal         func_22C0D0
    ctx->pc = 0x22E5DCu;
    SET_GPR_U32(ctx, 31, 0x22E5E4u);
    ctx->pc = 0x22C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C0D0u, 0x22E5DCu, 0x22E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E5E4u;
label_22e5e4:
    // 0x22e5e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e5e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22e5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e5f0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22e5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x22E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E5FCu;
    // 0x22e5fc: 0x0  nop
    ctx->pc = 0x22e5fcu;
    // NOP
    ctx->pc = 0x22e600u;
}
