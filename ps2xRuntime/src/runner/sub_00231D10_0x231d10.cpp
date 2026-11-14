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

// Function: sub_00231D10
// Address: 0x231d10 - 0x231dd0
void sub_00231D10_0x231d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231D10_0x231d10");
#endif

    switch (ctx->pc) {
        case 0x231d6cu: goto label_231d6c;
        case 0x231d84u: goto label_231d84;
        case 0x231da4u: goto label_231da4;
        case 0x231dbcu: goto label_231dbc;
        default: break;
    }

    ctx->pc = 0x231d10u;

    // 0x231d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x231d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x231d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x231d1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x231d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x231d20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x231d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x231d24: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x231d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x231d28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x231d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231d30: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x231d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x231d34: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x231d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x231d38: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x231D38u;
    {
        const bool branch_taken_0x231d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231d38) {
            ctx->pc = 0x231D8Cu;
            goto label_231d8c;
        }
    }
    ctx->pc = 0x231D40u;
    // 0x231d40: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x231d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x231d44: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x231D44u;
    {
        const bool branch_taken_0x231d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x231d44) {
            ctx->pc = 0x231D54u;
            goto label_231d54;
        }
    }
    ctx->pc = 0x231D4Cu;
    // 0x231d4c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x231D4Cu;
    {
        const bool branch_taken_0x231d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d4c) {
            ctx->pc = 0x231DBCu;
            goto label_231dbc;
        }
    }
    ctx->pc = 0x231D54u;
label_231d54:
    // 0x231d54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x231d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231d58: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231d5c: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x231d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x231d60: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x231d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x231d64: 0xc08c248  jal         func_230920
    ctx->pc = 0x231D64u;
    SET_GPR_U32(ctx, 31, 0x231D6Cu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x231D64u, 0x231D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D6Cu;
label_231d6c:
    // 0x231d6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x231d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231d70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231d74: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x231d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231d78: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x231d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x231d7c: 0xc11cb40  jal         func_472D00
    ctx->pc = 0x231D7Cu;
    SET_GPR_U32(ctx, 31, 0x231D84u);
    ctx->pc = 0x472D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D00u, 0x231D7Cu, 0x231D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D84u;
label_231d84:
    // 0x231d84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x231D84u;
    {
        const bool branch_taken_0x231d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d84) {
            ctx->pc = 0x231DBCu;
            goto label_231dbc;
        }
    }
    ctx->pc = 0x231D8Cu;
label_231d8c:
    // 0x231d8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x231d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231d90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231d94: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231d98: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231d9c: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231D9Cu;
    SET_GPR_U32(ctx, 31, 0x231DA4u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231D9Cu, 0x231DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DA4u;
label_231da4:
    // 0x231da4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x231da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231da8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231dac: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231db0: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x231db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x231db4: 0xc11cb40  jal         func_472D00
    ctx->pc = 0x231DB4u;
    SET_GPR_U32(ctx, 31, 0x231DBCu);
    ctx->pc = 0x472D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D00u, 0x231DB4u, 0x231DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DBCu;
label_231dbc:
    // 0x231dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231dc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x231dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x231dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x231DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231DD0u;
}
