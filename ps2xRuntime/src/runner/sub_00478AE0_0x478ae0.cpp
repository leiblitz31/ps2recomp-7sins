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

// Function: sub_00478AE0
// Address: 0x478ae0 - 0x478b50
void sub_00478AE0_0x478ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478AE0_0x478ae0");
#endif

    switch (ctx->pc) {
        case 0x478b14u: goto label_478b14;
        case 0x478b34u: goto label_478b34;
        default: break;
    }

    ctx->pc = 0x478ae0u;

    // 0x478ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x478ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x478ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x478ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x478ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x478ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x478aec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x478aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x478af0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x478af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x478af4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x478af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x478af8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x478af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x478afc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478b00: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x478b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x478b04: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x478b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478b0c: 0xc11e1fc  jal         func_4787F0
    ctx->pc = 0x478B0Cu;
    SET_GPR_U32(ctx, 31, 0x478B14u);
    ctx->pc = 0x4787F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4787F0u, 0x478B0Cu, 0x478B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478B14u;
label_478b14:
    // 0x478b14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x478b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478b18: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x478b18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x478b1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x478b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x478b20: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x478b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x478b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x478b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478b28: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x478b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x478b2c: 0xc11ded0  jal         func_477B40
    ctx->pc = 0x478B2Cu;
    SET_GPR_U32(ctx, 31, 0x478B34u);
    ctx->pc = 0x477B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477B40u, 0x478B2Cu, 0x478B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478B34u;
label_478b34:
    // 0x478b34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x478b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x478b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478b40: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x478b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x478b44: 0x3e00008  jr          $ra
    ctx->pc = 0x478B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478B4Cu;
    // 0x478b4c: 0x0  nop
    ctx->pc = 0x478b4cu;
    // NOP
    ctx->pc = 0x478b50u;
}
