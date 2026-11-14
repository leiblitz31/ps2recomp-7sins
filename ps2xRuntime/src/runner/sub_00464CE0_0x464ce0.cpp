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

// Function: sub_00464CE0
// Address: 0x464ce0 - 0x464d50
void sub_00464CE0_0x464ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464CE0_0x464ce0");
#endif

    switch (ctx->pc) {
        case 0x464cfcu: goto label_464cfc;
        default: break;
    }

    ctx->pc = 0x464ce0u;

    // 0x464ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x464ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x464ce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464cec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x464cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464cf0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x464cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x464cf4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x464CF4u;
    {
        const bool branch_taken_0x464cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464cf4) {
            ctx->pc = 0x464D2Cu;
            goto label_464d2c;
        }
    }
    ctx->pc = 0x464CFCu;
label_464cfc:
    // 0x464cfc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x464cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464d00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x464d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x464d04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x464d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x464d08: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x464d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x464d0c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x464d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464d10: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x464d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x464d14: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x464d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x464d18: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x464d18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x464d1c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x464d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x464d20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x464d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x464d24: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x464d24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x464d28: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x464d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_464d2c:
    // 0x464d2c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x464d2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x464d30: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x464D30u;
    {
        const bool branch_taken_0x464d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x464d30) {
            ctx->pc = 0x464CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464cfc;
        }
    }
    ctx->pc = 0x464D38u;
    // 0x464d38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464d3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x464d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464d40: 0x3e00008  jr          $ra
    ctx->pc = 0x464D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464D48u;
    // 0x464d48: 0x0  nop
    ctx->pc = 0x464d48u;
    // NOP
    // 0x464d4c: 0x0  nop
    ctx->pc = 0x464d4cu;
    // NOP
    ctx->pc = 0x464d50u;
}
