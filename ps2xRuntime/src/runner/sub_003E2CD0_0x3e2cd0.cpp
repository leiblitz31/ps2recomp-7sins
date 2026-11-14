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

// Function: sub_003E2CD0
// Address: 0x3e2cd0 - 0x3e2d38
void sub_003E2CD0_0x3e2cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2CD0_0x3e2cd0");
#endif

    switch (ctx->pc) {
        case 0x3e2d0cu: goto label_3e2d0c;
        case 0x3e2d1cu: goto label_3e2d1c;
        default: break;
    }

    ctx->pc = 0x3e2cd0u;

    // 0x3e2cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e2cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e2cd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e2cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e2cd8: 0x7803c  dsll32      $s0, $a3, 0
    ctx->pc = 0x3e2cd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3e2cdc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3e2cdcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3e2ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e2ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e2ce4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e2ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e2ce8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3e2ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3e2cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2cf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e2cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2cf4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3e2cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3e2cf8: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2CF8u;
    {
        const bool branch_taken_0x3e2cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3E2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CF8u;
        // 0x3e2cfc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2cf8) {
            ctx->pc = 0x3E2D0Cu;
            goto label_3e2d0c;
        }
    }
    ctx->pc = 0x3E2D00u;
    // 0x3e2d00: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e2d04: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E2D04u;
    SET_GPR_U32(ctx, 31, 0x3E2D0Cu);
    ctx->pc = 0x3E2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D04u;
    // 0x3e2d08: 0x24a5e330  addiu       $a1, $a1, -0x1CD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E2D04u, 0x3E2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D0Cu;
label_3e2d0c:
    // 0x3e2d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e2d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e2d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2d14: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3E2D14u;
    SET_GPR_U32(ctx, 31, 0x3E2D1Cu);
    ctx->pc = 0x3E2D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2D14u;
    // 0x3e2d18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3E2D14u, 0x3E2D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2D1Cu;
label_3e2d1c:
    // 0x3e2d1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e2d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e2d20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e2d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e2d24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e2d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2D2Cu;
        // 0x3e2d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2D34u;
    // 0x3e2d34: 0x0  nop
    ctx->pc = 0x3e2d34u;
    // NOP
    ctx->pc = 0x3e2d38u;
}
