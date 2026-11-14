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

// Function: sub_00290D00
// Address: 0x290d00 - 0x290df0
void sub_00290D00_0x290d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290D00_0x290d00");
#endif

    switch (ctx->pc) {
        case 0x290d40u: goto label_290d40;
        case 0x290d4cu: goto label_290d4c;
        case 0x290d8cu: goto label_290d8c;
        case 0x290dd4u: goto label_290dd4;
        default: break;
    }

    ctx->pc = 0x290d00u;

    // 0x290d00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x290d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x290d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290d10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x290d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x290d14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x290d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290d18: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x290d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x290d1c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x290d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290d20: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x290d24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x290d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x290d28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x290d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x290d2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x290d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290d30: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x290d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x290d34: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x290d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290d38: 0xc073b50  jal         func_1CED40
    ctx->pc = 0x290D38u;
    SET_GPR_U32(ctx, 31, 0x290D40u);
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x290D38u, 0x290D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D40u;
label_290d40:
    // 0x290d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d44: 0xc119c5c  jal         func_467170
    ctx->pc = 0x290D44u;
    SET_GPR_U32(ctx, 31, 0x290D4Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x290D44u, 0x290D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D4Cu;
label_290d4c:
    // 0x290d4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x290d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290d58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x290d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x290D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290D64u;
    // 0x290d64: 0x0  nop
    ctx->pc = 0x290d64u;
    // NOP
    // 0x290d68: 0x0  nop
    ctx->pc = 0x290d68u;
    // NOP
    // 0x290d6c: 0x0  nop
    ctx->pc = 0x290d6cu;
    // NOP
    // 0x290d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290d7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x290d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x290d80: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x290d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290d84: 0xc0911a4  jal         func_244690
    ctx->pc = 0x290D84u;
    SET_GPR_U32(ctx, 31, 0x290D8Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x290D84u, 0x290D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D8Cu;
label_290d8c:
    // 0x290d8c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x290d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290d9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290d9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290da0: 0x3e00008  jr          $ra
    ctx->pc = 0x290DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290DA8u;
    // 0x290da8: 0x0  nop
    ctx->pc = 0x290da8u;
    // NOP
    // 0x290dac: 0x0  nop
    ctx->pc = 0x290dacu;
    // NOP
    // 0x290db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290dbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x290dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x290dc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x290dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x290dc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x290dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290dc8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x290dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290dcc: 0xc0911dc  jal         func_244770
    ctx->pc = 0x290DCCu;
    SET_GPR_U32(ctx, 31, 0x290DD4u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x290DCCu, 0x290DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DD4u;
label_290dd4:
    // 0x290dd4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x290dd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290de4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x290de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x290de8: 0x3e00008  jr          $ra
    ctx->pc = 0x290DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290DF0u;
}
