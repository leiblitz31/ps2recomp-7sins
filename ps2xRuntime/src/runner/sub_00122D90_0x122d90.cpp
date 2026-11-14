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

// Function: sub_00122D90
// Address: 0x122d90 - 0x122e40
void sub_00122D90_0x122d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D90_0x122d90");
#endif

    switch (ctx->pc) {
        case 0x122e00u: goto label_122e00;
        case 0x122e20u: goto label_122e20;
        default: break;
    }

    ctx->pc = 0x122d90u;

    // 0x122d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x122d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x122d9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x122d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x122da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122da4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x122DA4u;
    {
        const bool branch_taken_0x122da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122da4) {
            ctx->pc = 0x122E20u;
            goto label_122e20;
        }
    }
    ctx->pc = 0x122DACu;
    // 0x122dac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122db4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x122DB4u;
    {
        const bool branch_taken_0x122db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122db4) {
            ctx->pc = 0x122E00u;
            goto label_122e00;
        }
    }
    ctx->pc = 0x122DBCu;
    // 0x122dbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122dc0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x122dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122dc8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x122dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x122dcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122dd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122dd4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x122dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122dd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x122dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x122ddc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x122ddcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x122de0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x122DE0u;
    {
        const bool branch_taken_0x122de0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x122de0) {
            ctx->pc = 0x122DF0u;
            goto label_122df0;
        }
    }
    ctx->pc = 0x122DE8u;
    // 0x122de8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x122de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x122dec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x122decu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_122df0:
    // 0x122df0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x122df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x122df4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x122df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122df8: 0xc048c1c  jal         func_123070
    ctx->pc = 0x122DF8u;
    SET_GPR_U32(ctx, 31, 0x122E00u);
    ctx->pc = 0x123070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123070u, 0x122DF8u, 0x122E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E00u;
label_122e00:
    // 0x122e00: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x122e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122e04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x122e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x122e08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x122e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x122e0c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122E0Cu;
    {
        const bool branch_taken_0x122e0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x122e0c) {
            ctx->pc = 0x122E20u;
            goto label_122e20;
        }
    }
    ctx->pc = 0x122E14u;
    // 0x122e14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122e18: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x122E18u;
    SET_GPR_U32(ctx, 31, 0x122E20u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x122E18u, 0x122E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E20u;
label_122e20:
    // 0x122e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122e28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x122e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x122e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x122E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122E34u;
    // 0x122e34: 0x0  nop
    ctx->pc = 0x122e34u;
    // NOP
    // 0x122e38: 0x0  nop
    ctx->pc = 0x122e38u;
    // NOP
    // 0x122e3c: 0x0  nop
    ctx->pc = 0x122e3cu;
    // NOP
    ctx->pc = 0x122e40u;
}
