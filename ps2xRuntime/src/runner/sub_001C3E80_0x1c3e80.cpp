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

// Function: sub_001C3E80
// Address: 0x1c3e80 - 0x1c3f00
void sub_001C3E80_0x1c3e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3E80_0x1c3e80");
#endif

    switch (ctx->pc) {
        case 0x1c3ebcu: goto label_1c3ebc;
        case 0x1c3ee0u: goto label_1c3ee0;
        default: break;
    }

    ctx->pc = 0x1c3e80u;

    // 0x1c3e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c3e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3e8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c3e90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c3e94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3e9c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1c3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1c3ea0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3ea4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c3ea8: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x1c3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x1c3eac: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1c3eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3eb0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c3eb4: 0xc070fd4  jal         func_1C3F50
    ctx->pc = 0x1C3EB4u;
    SET_GPR_U32(ctx, 31, 0x1C3EBCu);
    ctx->pc = 0x1C3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F50u, 0x1C3EB4u, 0x1C3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EBCu;
label_1c3ebc:
    // 0x1c3ebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3ec0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3ec4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c3ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c3ec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3ecc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c3eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c3ed0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c3ed4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3ed8: 0xc070fc0  jal         func_1C3F00
    ctx->pc = 0x1C3ED8u;
    SET_GPR_U32(ctx, 31, 0x1C3EE0u);
    ctx->pc = 0x1C3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F00u, 0x1C3ED8u, 0x1C3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3ee8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c3eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3EF4u;
    // 0x1c3ef4: 0x0  nop
    ctx->pc = 0x1c3ef4u;
    // NOP
    // 0x1c3ef8: 0x0  nop
    ctx->pc = 0x1c3ef8u;
    // NOP
    // 0x1c3efc: 0x0  nop
    ctx->pc = 0x1c3efcu;
    // NOP
    ctx->pc = 0x1c3f00u;
}
