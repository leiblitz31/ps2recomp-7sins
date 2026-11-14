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

// Function: sub_0017F1A0
// Address: 0x17f1a0 - 0x17f270
void sub_0017F1A0_0x17f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F1A0_0x17f1a0");
#endif

    switch (ctx->pc) {
        case 0x17f1c8u: goto label_17f1c8;
        case 0x17f1e0u: goto label_17f1e0;
        case 0x17f200u: goto label_17f200;
        case 0x17f214u: goto label_17f214;
        case 0x17f228u: goto label_17f228;
        case 0x17f238u: goto label_17f238;
        case 0x17f254u: goto label_17f254;
        default: break;
    }

    ctx->pc = 0x17f1a0u;

    // 0x17f1a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f1a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f1ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17f1b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17f1b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17f1b8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f1bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f1c0: 0xc05fdc4  jal         func_17F710
    ctx->pc = 0x17F1C0u;
    SET_GPR_U32(ctx, 31, 0x17F1C8u);
    ctx->pc = 0x17F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F710u, 0x17F1C0u, 0x17F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1C8u;
label_17f1c8:
    // 0x17f1c8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x17f1c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f1cc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F1CCu;
    {
        const bool branch_taken_0x17f1cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1cc) {
            ctx->pc = 0x17F21Cu;
            goto label_17f21c;
        }
    }
    ctx->pc = 0x17F1D4u;
    // 0x17f1d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f1d8: 0xc05f5f0  jal         func_17D7C0
    ctx->pc = 0x17F1D8u;
    SET_GPR_U32(ctx, 31, 0x17F1E0u);
    ctx->pc = 0x17D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D7C0u, 0x17F1D8u, 0x17F1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1E0u;
label_17f1e0:
    // 0x17f1e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f1e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17f1e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f1ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f1f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x17f1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f1f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f1f8: 0xc05fdbc  jal         func_17F6F0
    ctx->pc = 0x17F1F8u;
    SET_GPR_U32(ctx, 31, 0x17F200u);
    ctx->pc = 0x17F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6F0u, 0x17F1F8u, 0x17F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F200u;
label_17f200:
    // 0x17f200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f208: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17f208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f20c: 0xc05fcac  jal         func_17F2B0
    ctx->pc = 0x17F20Cu;
    SET_GPR_U32(ctx, 31, 0x17F214u);
    ctx->pc = 0x17F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2B0u, 0x17F20Cu, 0x17F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F214u;
label_17f214:
    // 0x17f214: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17F214u;
    {
        const bool branch_taken_0x17f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f214) {
            ctx->pc = 0x17F254u;
            goto label_17f254;
        }
    }
    ctx->pc = 0x17F21Cu;
label_17f21c:
    // 0x17f21c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f220: 0xc05fdbc  jal         func_17F6F0
    ctx->pc = 0x17F220u;
    SET_GPR_U32(ctx, 31, 0x17F228u);
    ctx->pc = 0x17F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6F0u, 0x17F220u, 0x17F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F228u;
label_17f228:
    // 0x17f228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f22c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f230: 0xc05fdc4  jal         func_17F710
    ctx->pc = 0x17F230u;
    SET_GPR_U32(ctx, 31, 0x17F238u);
    ctx->pc = 0x17F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F710u, 0x17F230u, 0x17F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F238u;
label_17f238:
    // 0x17f238: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f23c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x17f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f240: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17f240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f248: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f24c: 0xc05fc9c  jal         func_17F270
    ctx->pc = 0x17F24Cu;
    SET_GPR_U32(ctx, 31, 0x17F254u);
    ctx->pc = 0x17F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F270u, 0x17F24Cu, 0x17F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F254u;
label_17f254:
    // 0x17f254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f25c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17f25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17f260: 0x3e00008  jr          $ra
    ctx->pc = 0x17F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F268u;
    // 0x17f268: 0x0  nop
    ctx->pc = 0x17f268u;
    // NOP
    // 0x17f26c: 0x0  nop
    ctx->pc = 0x17f26cu;
    // NOP
    ctx->pc = 0x17f270u;
}
