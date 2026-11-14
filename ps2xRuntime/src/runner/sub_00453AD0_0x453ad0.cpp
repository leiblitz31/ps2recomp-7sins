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

// Function: sub_00453AD0
// Address: 0x453ad0 - 0x453b40
void sub_00453AD0_0x453ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453AD0_0x453ad0");
#endif

    switch (ctx->pc) {
        case 0x453aecu: goto label_453aec;
        default: break;
    }

    ctx->pc = 0x453ad0u;

    // 0x453ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x453ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x453ad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x453ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x453ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x453adc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x453adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x453ae0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x453ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x453ae4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x453AE4u;
    {
        const bool branch_taken_0x453ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453ae4) {
            ctx->pc = 0x453B14u;
            goto label_453b14;
        }
    }
    ctx->pc = 0x453AECu;
label_453aec:
    // 0x453aec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x453aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x453af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x453af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x453af4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x453af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x453af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x453afc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x453afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453b00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x453b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x453b04: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x453b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x453b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x453b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453b0c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x453b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x453b10: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x453b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_453b14:
    // 0x453b14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x453b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453b18: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x453B18u;
    {
        const bool branch_taken_0x453b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453b18) {
            ctx->pc = 0x453AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_453aec;
        }
    }
    ctx->pc = 0x453B20u;
    // 0x453b20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x453b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x453b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453b28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x453b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x453b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x453B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453B34u;
    // 0x453b34: 0x0  nop
    ctx->pc = 0x453b34u;
    // NOP
    // 0x453b38: 0x0  nop
    ctx->pc = 0x453b38u;
    // NOP
    // 0x453b3c: 0x0  nop
    ctx->pc = 0x453b3cu;
    // NOP
    ctx->pc = 0x453b40u;
}
