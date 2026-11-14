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

// Function: sub_0048DF40
// Address: 0x48df40 - 0x48e010
void sub_0048DF40_0x48df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DF40_0x48df40");
#endif

    switch (ctx->pc) {
        case 0x48dfa4u: goto label_48dfa4;
        case 0x48dfb8u: goto label_48dfb8;
        case 0x48dfc8u: goto label_48dfc8;
        case 0x48dfe0u: goto label_48dfe0;
        case 0x48dff0u: goto label_48dff0;
        default: break;
    }

    ctx->pc = 0x48df40u;

    // 0x48df40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48df44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48df48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48df48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48df4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48df50: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x48df50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x48df54: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x48df54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x48df58: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x48df58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x48df5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48df60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48df64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x48df64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48df68: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x48df68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48df6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48df70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x48df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48df74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48df74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48df78: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x48df78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48df7c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x48df7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48df80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48df84: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x48df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48df88: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x48df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x48df8c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x48df8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48df90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x48df90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x48df94: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x48df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x48df98: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x48df98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48df9c: 0xc123850  jal         func_48E140
    ctx->pc = 0x48DF9Cu;
    SET_GPR_U32(ctx, 31, 0x48DFA4u);
    ctx->pc = 0x48E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E140u, 0x48DF9Cu, 0x48DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFA4u;
label_48dfa4:
    // 0x48dfa4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dfa8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x48dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48dfac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48dfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dfb0: 0xc04e0fc  jal         func_1383F0
    ctx->pc = 0x48DFB0u;
    SET_GPR_U32(ctx, 31, 0x48DFB8u);
    ctx->pc = 0x1383F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1383F0u, 0x48DFB0u, 0x48DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFB8u;
label_48dfb8:
    // 0x48dfb8: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x48dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x48dfbc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x48dfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48dfc0: 0xc123848  jal         func_48E120
    ctx->pc = 0x48DFC0u;
    SET_GPR_U32(ctx, 31, 0x48DFC8u);
    ctx->pc = 0x48E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E120u, 0x48DFC0u, 0x48DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFC8u;
label_48dfc8:
    // 0x48dfc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x48dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dfcc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x48dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x48dfd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48dfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dfd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48dfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48dfd8: 0xc12382c  jal         func_48E0B0
    ctx->pc = 0x48DFD8u;
    SET_GPR_U32(ctx, 31, 0x48DFE0u);
    ctx->pc = 0x48E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E0B0u, 0x48DFD8u, 0x48DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFE0u;
label_48dfe0:
    // 0x48dfe0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dfe4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48dfe8: 0xc123804  jal         func_48E010
    ctx->pc = 0x48DFE8u;
    SET_GPR_U32(ctx, 31, 0x48DFF0u);
    ctx->pc = 0x48E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E010u, 0x48DFE8u, 0x48DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DFF0u;
label_48dff0:
    // 0x48dff0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48dff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48dff8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x48dff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x48dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x48DFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E004u;
    // 0x48e004: 0x0  nop
    ctx->pc = 0x48e004u;
    // NOP
    // 0x48e008: 0x0  nop
    ctx->pc = 0x48e008u;
    // NOP
    // 0x48e00c: 0x0  nop
    ctx->pc = 0x48e00cu;
    // NOP
    ctx->pc = 0x48e010u;
}
