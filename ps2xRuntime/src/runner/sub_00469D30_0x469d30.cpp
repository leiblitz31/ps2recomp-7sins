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

// Function: sub_00469D30
// Address: 0x469d30 - 0x469e00
void sub_00469D30_0x469d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469D30_0x469d30");
#endif

    switch (ctx->pc) {
        case 0x469d94u: goto label_469d94;
        case 0x469da8u: goto label_469da8;
        case 0x469db8u: goto label_469db8;
        case 0x469dd0u: goto label_469dd0;
        case 0x469de0u: goto label_469de0;
        default: break;
    }

    ctx->pc = 0x469d30u;

    // 0x469d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x469d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x469d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469d38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x469d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x469d3c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x469d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x469d40: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x469d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x469d44: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x469d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x469d48: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x469d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x469d4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x469d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469d50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x469d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469d58: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x469d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x469d5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x469d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x469d64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x469d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x469d68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x469d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469d6c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x469d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x469d70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d74: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x469d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x469d78: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x469d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x469d7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x469d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469d80: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x469d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x469d84: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x469d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x469d88: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x469d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x469d8c: 0xc11a824  jal         func_46A090
    ctx->pc = 0x469D8Cu;
    SET_GPR_U32(ctx, 31, 0x469D94u);
    ctx->pc = 0x46A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A090u, 0x469D8Cu, 0x469D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469D94u;
label_469d94:
    // 0x469d94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469d98: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x469d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x469d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x469d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469da0: 0xc11a7e4  jal         func_469F90
    ctx->pc = 0x469DA0u;
    SET_GPR_U32(ctx, 31, 0x469DA8u);
    ctx->pc = 0x469F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F90u, 0x469DA0u, 0x469DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469DA8u;
label_469da8:
    // 0x469da8: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x469da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x469dac: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x469dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x469db0: 0xc11a7dc  jal         func_469F70
    ctx->pc = 0x469DB0u;
    SET_GPR_U32(ctx, 31, 0x469DB8u);
    ctx->pc = 0x469F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F70u, 0x469DB0u, 0x469DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469DB8u;
label_469db8:
    // 0x469db8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x469db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469dbc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x469dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x469dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x469dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x469dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469dc8: 0xc11a7c0  jal         func_469F00
    ctx->pc = 0x469DC8u;
    SET_GPR_U32(ctx, 31, 0x469DD0u);
    ctx->pc = 0x469F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F00u, 0x469DC8u, 0x469DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469DD0u;
label_469dd0:
    // 0x469dd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x469dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469dd4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x469dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469dd8: 0xc11a780  jal         func_469E00
    ctx->pc = 0x469DD8u;
    SET_GPR_U32(ctx, 31, 0x469DE0u);
    ctx->pc = 0x469E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469E00u, 0x469DD8u, 0x469DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469DE0u;
label_469de0:
    // 0x469de0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x469de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469de8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x469de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x469dec: 0x3e00008  jr          $ra
    ctx->pc = 0x469DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469DF4u;
    // 0x469df4: 0x0  nop
    ctx->pc = 0x469df4u;
    // NOP
    // 0x469df8: 0x0  nop
    ctx->pc = 0x469df8u;
    // NOP
    // 0x469dfc: 0x0  nop
    ctx->pc = 0x469dfcu;
    // NOP
    ctx->pc = 0x469e00u;
}
