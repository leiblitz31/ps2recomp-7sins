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

// Function: sub_0028EC40
// Address: 0x28ec40 - 0x28ecc0
void sub_0028EC40_0x28ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EC40_0x28ec40");
#endif

    switch (ctx->pc) {
        case 0x28ec58u: goto label_28ec58;
        case 0x28ec80u: goto label_28ec80;
        default: break;
    }

    ctx->pc = 0x28ec40u;

    // 0x28ec40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28ec44: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x28ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x28ec48: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x28ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x28ec4c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x28ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ec50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ec54: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28ec58:
    // 0x28ec58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ec5c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28ec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x28ec60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ec64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28ec68: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x28ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x28ec6c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28EC6Cu;
    {
        const bool branch_taken_0x28ec6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x28ec6c) {
            ctx->pc = 0x28EC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ec58;
        }
    }
    ctx->pc = 0x28EC74u;
    // 0x28ec74: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x28ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ec78: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x28ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x28ec7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x28ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28ec80:
    // 0x28ec80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ec84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28ec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x28ec88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ec8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28ec90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x28ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x28ec94: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28EC94u;
    {
        const bool branch_taken_0x28ec94 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x28ec94) {
            ctx->pc = 0x28EC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ec80;
        }
    }
    ctx->pc = 0x28EC9Cu;
    // 0x28ec9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eca0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eca4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x28eca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28eca8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x28ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ECB4u;
    // 0x28ecb4: 0x0  nop
    ctx->pc = 0x28ecb4u;
    // NOP
    // 0x28ecb8: 0x0  nop
    ctx->pc = 0x28ecb8u;
    // NOP
    // 0x28ecbc: 0x0  nop
    ctx->pc = 0x28ecbcu;
    // NOP
    ctx->pc = 0x28ecc0u;
}
