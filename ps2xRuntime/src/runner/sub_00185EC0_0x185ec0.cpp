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

// Function: sub_00185EC0
// Address: 0x185ec0 - 0x185f50
void sub_00185EC0_0x185ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185EC0_0x185ec0");
#endif

    switch (ctx->pc) {
        case 0x185ee8u: goto label_185ee8;
        case 0x185f14u: goto label_185f14;
        case 0x185f34u: goto label_185f34;
        default: break;
    }

    ctx->pc = 0x185ec0u;

    // 0x185ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x185ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x185ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x185ecc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x185eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x185ed0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x185ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x185ed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x185ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185ed8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x185ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x185edc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185ee0: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x185EE0u;
    SET_GPR_U32(ctx, 31, 0x185EE8u);
    ctx->pc = 0x1849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1849F0u, 0x185EE0u, 0x185EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185EE8u;
label_185ee8:
    // 0x185ee8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x185EE8u;
    {
        const bool branch_taken_0x185ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x185ee8) {
            ctx->pc = 0x185F14u;
            goto label_185f14;
        }
    }
    ctx->pc = 0x185EF0u;
    // 0x185ef0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x185ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185ef4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x185ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185ef8: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x185ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x185efc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x185f00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x185f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x185f04: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185f08: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x185f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x185f0c: 0xc061238  jal         func_1848E0
    ctx->pc = 0x185F0Cu;
    SET_GPR_U32(ctx, 31, 0x185F14u);
    ctx->pc = 0x1848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848E0u, 0x185F0Cu, 0x185F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F14u;
label_185f14:
    // 0x185f14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x185f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185f18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x185f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x185f1c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x185f20: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x185f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x185f24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185f28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x185f2c: 0xc060ee0  jal         func_183B80
    ctx->pc = 0x185F2Cu;
    SET_GPR_U32(ctx, 31, 0x185F34u);
    ctx->pc = 0x183B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B80u, 0x185F2Cu, 0x185F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F34u;
label_185f34:
    // 0x185f34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x185f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185f40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x185f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x185f44: 0x3e00008  jr          $ra
    ctx->pc = 0x185F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185F4Cu;
    // 0x185f4c: 0x0  nop
    ctx->pc = 0x185f4cu;
    // NOP
    ctx->pc = 0x185f50u;
}
