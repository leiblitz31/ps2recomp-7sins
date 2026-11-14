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

// Function: sub_0010DD90
// Address: 0x10dd90 - 0x10de20
void sub_0010DD90_0x10dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DD90_0x10dd90");
#endif

    switch (ctx->pc) {
        case 0x10ddc8u: goto label_10ddc8;
        case 0x10ddecu: goto label_10ddec;
        default: break;
    }

    ctx->pc = 0x10dd90u;

    // 0x10dd90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10dd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10dd98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10dd9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10dda0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10dda4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10dda8: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x10dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x10ddac: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x10ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ddb0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ddb4: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x10ddb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10ddb8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x10ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10ddbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ddc0: 0xc119354  jal         func_464D50
    ctx->pc = 0x10DDC0u;
    SET_GPR_U32(ctx, 31, 0x10DDC8u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x10DDC0u, 0x10DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDC8u;
label_10ddc8:
    // 0x10ddc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ddcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ddd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ddd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ddd8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10dddc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10dde0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10dde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dde4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x10DDE4u;
    SET_GPR_U32(ctx, 31, 0x10DDECu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x10DDE4u, 0x10DDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDECu;
label_10ddec:
    // 0x10ddec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ddf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ddf4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10ddf8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x10ddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10ddfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10de00: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x10de00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x10de04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10de04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10de08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de0c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10de0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10de10: 0x3e00008  jr          $ra
    ctx->pc = 0x10DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DE18u;
    // 0x10de18: 0x0  nop
    ctx->pc = 0x10de18u;
    // NOP
    // 0x10de1c: 0x0  nop
    ctx->pc = 0x10de1cu;
    // NOP
    ctx->pc = 0x10de20u;
}
