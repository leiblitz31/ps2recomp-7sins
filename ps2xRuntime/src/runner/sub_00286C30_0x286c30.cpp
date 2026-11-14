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

// Function: sub_00286C30
// Address: 0x286c30 - 0x286d00
void sub_00286C30_0x286c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286C30_0x286c30");
#endif

    switch (ctx->pc) {
        case 0x286c58u: goto label_286c58;
        case 0x286c70u: goto label_286c70;
        case 0x286c90u: goto label_286c90;
        case 0x286ca4u: goto label_286ca4;
        case 0x286cb8u: goto label_286cb8;
        case 0x286cc8u: goto label_286cc8;
        case 0x286ce4u: goto label_286ce4;
        default: break;
    }

    ctx->pc = 0x286c30u;

    // 0x286c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x286c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x286c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x286c3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x286c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x286c40: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x286c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x286c44: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x286c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x286c48: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x286c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286c4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286c50: 0xc0a1b50  jal         func_286D40
    ctx->pc = 0x286C50u;
    SET_GPR_U32(ctx, 31, 0x286C58u);
    ctx->pc = 0x286D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D40u, 0x286C50u, 0x286C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C58u;
label_286c58:
    // 0x286c58: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x286c58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x286c5c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x286C5Cu;
    {
        const bool branch_taken_0x286c5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x286c5c) {
            ctx->pc = 0x286CACu;
            goto label_286cac;
        }
    }
    ctx->pc = 0x286C64u;
    // 0x286c64: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286c68: 0xc0a1848  jal         func_286120
    ctx->pc = 0x286C68u;
    SET_GPR_U32(ctx, 31, 0x286C70u);
    ctx->pc = 0x286120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286120u, 0x286C68u, 0x286C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C70u;
label_286c70:
    // 0x286c70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286c74: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x286c78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286c7c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x286c80: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286c84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286c88: 0xc0a1840  jal         func_286100
    ctx->pc = 0x286C88u;
    SET_GPR_U32(ctx, 31, 0x286C90u);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x286C88u, 0x286C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C90u;
label_286c90:
    // 0x286c90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286c94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x286c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c9c: 0xc0a17d4  jal         func_285F50
    ctx->pc = 0x286C9Cu;
    SET_GPR_U32(ctx, 31, 0x286CA4u);
    ctx->pc = 0x285F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F50u, 0x286C9Cu, 0x286CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CA4u;
label_286ca4:
    // 0x286ca4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x286CA4u;
    {
        const bool branch_taken_0x286ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ca4) {
            ctx->pc = 0x286CE4u;
            goto label_286ce4;
        }
    }
    ctx->pc = 0x286CACu;
label_286cac:
    // 0x286cac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286cb0: 0xc0a1840  jal         func_286100
    ctx->pc = 0x286CB0u;
    SET_GPR_U32(ctx, 31, 0x286CB8u);
    ctx->pc = 0x286100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286100u, 0x286CB0u, 0x286CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CB8u;
label_286cb8:
    // 0x286cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286cc0: 0xc0a1b50  jal         func_286D40
    ctx->pc = 0x286CC0u;
    SET_GPR_U32(ctx, 31, 0x286CC8u);
    ctx->pc = 0x286D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D40u, 0x286CC0u, 0x286CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CC8u;
label_286cc8:
    // 0x286cc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x286cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286ccc: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x286cccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286cd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x286cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cd8: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x286cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286cdc: 0xc0a1b40  jal         func_286D00
    ctx->pc = 0x286CDCu;
    SET_GPR_U32(ctx, 31, 0x286CE4u);
    ctx->pc = 0x286D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D00u, 0x286CDCu, 0x286CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CE4u;
label_286ce4:
    // 0x286ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x286ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286cec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x286cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x286cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x286CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286CF8u;
    // 0x286cf8: 0x0  nop
    ctx->pc = 0x286cf8u;
    // NOP
    // 0x286cfc: 0x0  nop
    ctx->pc = 0x286cfcu;
    // NOP
    ctx->pc = 0x286d00u;
}
