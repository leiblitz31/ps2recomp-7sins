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

// Function: sub_0048AD00
// Address: 0x48ad00 - 0x48ad40
void sub_0048AD00_0x48ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AD00_0x48ad00");
#endif

    ctx->pc = 0x48ad00u;

    // 0x48ad00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48ad04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48ad08: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x48ad08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x48ad0c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x48ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48ad10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ad14: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x48ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x48ad18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ad1c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x48ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x48ad20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ad24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ad28: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
    // 0x48ad2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48ad2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48ad30: 0x3e00008  jr          $ra
    ctx->pc = 0x48AD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48AD38u;
    // 0x48ad38: 0x0  nop
    ctx->pc = 0x48ad38u;
    // NOP
    // 0x48ad3c: 0x0  nop
    ctx->pc = 0x48ad3cu;
    // NOP
    ctx->pc = 0x48ad40u;
}
