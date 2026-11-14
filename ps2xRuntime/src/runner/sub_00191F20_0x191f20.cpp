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

// Function: sub_00191F20
// Address: 0x191f20 - 0x191fe0
void sub_00191F20_0x191f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191F20_0x191f20");
#endif

    switch (ctx->pc) {
        case 0x191f48u: goto label_191f48;
        case 0x191f60u: goto label_191f60;
        case 0x191f78u: goto label_191f78;
        case 0x191f8cu: goto label_191f8c;
        case 0x191fa0u: goto label_191fa0;
        case 0x191fb0u: goto label_191fb0;
        case 0x191fccu: goto label_191fcc;
        default: break;
    }

    ctx->pc = 0x191f20u;

    // 0x191f20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x191f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x191f2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x191f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x191f30: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x191f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x191f34: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x191f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x191f38: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191f3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191f40: 0xc044598  jal         func_111660
    ctx->pc = 0x191F40u;
    SET_GPR_U32(ctx, 31, 0x191F48u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x191F40u, 0x191F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F48u;
label_191f48:
    // 0x191f48: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x191f48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191f4c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x191F4Cu;
    {
        const bool branch_taken_0x191f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f4c) {
            ctx->pc = 0x191F94u;
            goto label_191f94;
        }
    }
    ctx->pc = 0x191F54u;
    // 0x191f54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191f58: 0xc041010  jal         func_104040
    ctx->pc = 0x191F58u;
    SET_GPR_U32(ctx, 31, 0x191F60u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x191F58u, 0x191F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F60u;
label_191f60:
    // 0x191f60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191f64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x191f68: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191f6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191f70: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x191F70u;
    SET_GPR_U32(ctx, 31, 0x191F78u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x191F70u, 0x191F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F78u;
label_191f78:
    // 0x191f78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x191f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f84: 0xc053cec  jal         func_14F3B0
    ctx->pc = 0x191F84u;
    SET_GPR_U32(ctx, 31, 0x191F8Cu);
    ctx->pc = 0x14F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3B0u, 0x191F84u, 0x191F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F8Cu;
label_191f8c:
    // 0x191f8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x191F8Cu;
    {
        const bool branch_taken_0x191f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f8c) {
            ctx->pc = 0x191FCCu;
            goto label_191fcc;
        }
    }
    ctx->pc = 0x191F94u;
label_191f94:
    // 0x191f94: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191f98: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x191F98u;
    SET_GPR_U32(ctx, 31, 0x191FA0u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x191F98u, 0x191FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FA0u;
label_191fa0:
    // 0x191fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191fa8: 0xc044598  jal         func_111660
    ctx->pc = 0x191FA8u;
    SET_GPR_U32(ctx, 31, 0x191FB0u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x191FA8u, 0x191FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FB0u;
label_191fb0:
    // 0x191fb0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191fb4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x191fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x191fb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fc0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x191fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191fc4: 0xc0647f8  jal         func_191FE0
    ctx->pc = 0x191FC4u;
    SET_GPR_U32(ctx, 31, 0x191FCCu);
    ctx->pc = 0x191FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191FE0u, 0x191FC4u, 0x191FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FCCu;
label_191fcc:
    // 0x191fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x191fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191fd4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x191fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x191FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191FE0u;
}
