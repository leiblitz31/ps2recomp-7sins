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

// Function: sub_002C9C90
// Address: 0x2c9c90 - 0x2c9de0
void sub_002C9C90_0x2c9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9C90_0x2c9c90");
#endif

    switch (ctx->pc) {
        case 0x2c9cd8u: goto label_2c9cd8;
        case 0x2c9ce8u: goto label_2c9ce8;
        case 0x2c9cf8u: goto label_2c9cf8;
        case 0x2c9d08u: goto label_2c9d08;
        case 0x2c9d18u: goto label_2c9d18;
        case 0x2c9d28u: goto label_2c9d28;
        case 0x2c9d38u: goto label_2c9d38;
        case 0x2c9d48u: goto label_2c9d48;
        case 0x2c9d5cu: goto label_2c9d5c;
        case 0x2c9d6cu: goto label_2c9d6c;
        case 0x2c9d7cu: goto label_2c9d7c;
        case 0x2c9d8cu: goto label_2c9d8c;
        case 0x2c9da8u: goto label_2c9da8;
        default: break;
    }

    ctx->pc = 0x2c9c90u;

    // 0x2c9c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c9c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c9c94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c9c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c9c98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c9c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c9c9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c9c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c9ca0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c9ca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9cb4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c9cb8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x2c9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x2c9cbc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2c9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c9cc0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C9CC0u;
    {
        const bool branch_taken_0x2c9cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9cc0) {
            ctx->pc = 0x2C9DA8u;
            goto label_2c9da8;
        }
    }
    ctx->pc = 0x2C9CC8u;
    // 0x2c9cc8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c9ccc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2c9cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c9cd0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9CD0u;
    SET_GPR_U32(ctx, 31, 0x2C9CD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9CD0u, 0x2C9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CD8u;
label_2c9cd8:
    // 0x2c9cd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c9cd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cdc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c9ce0: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x2C9CE0u;
    SET_GPR_U32(ctx, 31, 0x2C9CE8u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x2C9CE0u, 0x2C9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CE8u;
label_2c9ce8:
    // 0x2c9ce8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c9ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9cf0: 0xc0983e4  jal         func_260F90
    ctx->pc = 0x2C9CF0u;
    SET_GPR_U32(ctx, 31, 0x2C9CF8u);
    ctx->pc = 0x260F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260F90u, 0x2C9CF0u, 0x2C9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9CF8u;
label_2c9cf8:
    // 0x2c9cf8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c9cfc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c9cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9d00: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9D00u;
    SET_GPR_U32(ctx, 31, 0x2C9D08u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9D00u, 0x2C9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D08u;
label_2c9d08:
    // 0x2c9d08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c9d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d0c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c9d10: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x2C9D10u;
    SET_GPR_U32(ctx, 31, 0x2C9D18u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x2C9D10u, 0x2C9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D18u;
label_2c9d18:
    // 0x2c9d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c9d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d20: 0xc09b6b0  jal         func_26DAC0
    ctx->pc = 0x2C9D20u;
    SET_GPR_U32(ctx, 31, 0x2C9D28u);
    ctx->pc = 0x26DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DAC0u, 0x2C9D20u, 0x2C9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D28u;
label_2c9d28:
    // 0x2c9d28: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c9d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c9d2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c9d30: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9D30u;
    SET_GPR_U32(ctx, 31, 0x2C9D38u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9D30u, 0x2C9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D38u;
label_2c9d38:
    // 0x2c9d38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c9d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d3c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c9d40: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2C9D40u;
    SET_GPR_U32(ctx, 31, 0x2C9D48u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2C9D40u, 0x2C9D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D48u;
label_2c9d48:
    // 0x2c9d48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d50: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2c9d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c9d54: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C9D54u;
    SET_GPR_U32(ctx, 31, 0x2C9D5Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9D54u, 0x2C9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D5Cu;
label_2c9d5c:
    // 0x2c9d5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c9d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d64: 0xc0b767c  jal         func_2DD9F0
    ctx->pc = 0x2C9D64u;
    SET_GPR_U32(ctx, 31, 0x2C9D6Cu);
    ctx->pc = 0x2DD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD9F0u, 0x2C9D64u, 0x2C9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D6Cu;
label_2c9d6c:
    // 0x2c9d6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c9d6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d70: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2c9d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c9d74: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x2C9D74u;
    SET_GPR_U32(ctx, 31, 0x2C9D7Cu);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x2C9D74u, 0x2C9D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D7Cu;
label_2c9d7c:
    // 0x2c9d7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d84: 0xc0b9ee4  jal         func_2E7B90
    ctx->pc = 0x2C9D84u;
    SET_GPR_U32(ctx, 31, 0x2C9D8Cu);
    ctx->pc = 0x2E7B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7B90u, 0x2C9D84u, 0x2C9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D8Cu;
label_2c9d8c:
    // 0x2c9d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d90: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9D90u;
    {
        const bool branch_taken_0x2c9d90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d90) {
            ctx->pc = 0x2C9DA8u;
            goto label_2c9da8;
        }
    }
    ctx->pc = 0x2C9D98u;
    // 0x2c9d98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c9d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9da0: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2C9DA0u;
    SET_GPR_U32(ctx, 31, 0x2C9DA8u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2C9DA0u, 0x2C9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DA8u;
label_2c9da8:
    // 0x2c9da8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c9da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c9dac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c9dacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9db0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c9db0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9db4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9db8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9dc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2c9dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c9dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9DD4u;
    // 0x2c9dd4: 0x0  nop
    ctx->pc = 0x2c9dd4u;
    // NOP
    // 0x2c9dd8: 0x0  nop
    ctx->pc = 0x2c9dd8u;
    // NOP
    // 0x2c9ddc: 0x0  nop
    ctx->pc = 0x2c9ddcu;
    // NOP
    ctx->pc = 0x2c9de0u;
}
