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

// Function: sub_001BA050
// Address: 0x1ba050 - 0x1ba120
void sub_001BA050_0x1ba050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA050_0x1ba050");
#endif

    switch (ctx->pc) {
        case 0x1ba078u: goto label_1ba078;
        case 0x1ba090u: goto label_1ba090;
        case 0x1ba0b0u: goto label_1ba0b0;
        case 0x1ba0c4u: goto label_1ba0c4;
        case 0x1ba0d8u: goto label_1ba0d8;
        case 0x1ba0e8u: goto label_1ba0e8;
        case 0x1ba104u: goto label_1ba104;
        default: break;
    }

    ctx->pc = 0x1ba050u;

    // 0x1ba050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ba050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ba054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ba054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ba058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba05c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ba05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ba060: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ba060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ba064: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1ba064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1ba068: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1ba068u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba06c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba070: 0xc06e8c8  jal         func_1BA320
    ctx->pc = 0x1BA070u;
    SET_GPR_U32(ctx, 31, 0x1BA078u);
    ctx->pc = 0x1BA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA320u, 0x1BA070u, 0x1BA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA078u;
label_1ba078:
    // 0x1ba078: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1ba078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ba07c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA07Cu;
    {
        const bool branch_taken_0x1ba07c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba07c) {
            ctx->pc = 0x1BA0CCu;
            goto label_1ba0cc;
        }
    }
    ctx->pc = 0x1BA084u;
    // 0x1ba084: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba088: 0xc06e8c0  jal         func_1BA300
    ctx->pc = 0x1BA088u;
    SET_GPR_U32(ctx, 31, 0x1BA090u);
    ctx->pc = 0x1BA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA300u, 0x1BA088u, 0x1BA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA090u;
label_1ba090:
    // 0x1ba090: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba094: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ba094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ba098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ba098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ba09c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba0a0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1ba0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba0a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba0a8: 0xc06e8b8  jal         func_1BA2E0
    ctx->pc = 0x1BA0A8u;
    SET_GPR_U32(ctx, 31, 0x1BA0B0u);
    ctx->pc = 0x1BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA2E0u, 0x1BA0A8u, 0x1BA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0B0u;
label_1ba0b0:
    // 0x1ba0b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba0b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ba0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ba0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0bc: 0xc06e858  jal         func_1BA160
    ctx->pc = 0x1BA0BCu;
    SET_GPR_U32(ctx, 31, 0x1BA0C4u);
    ctx->pc = 0x1BA160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA160u, 0x1BA0BCu, 0x1BA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0C4u;
label_1ba0c4:
    // 0x1ba0c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BA0C4u;
    {
        const bool branch_taken_0x1ba0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0c4) {
            ctx->pc = 0x1BA104u;
            goto label_1ba104;
        }
    }
    ctx->pc = 0x1BA0CCu;
label_1ba0cc:
    // 0x1ba0cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba0d0: 0xc06e8b8  jal         func_1BA2E0
    ctx->pc = 0x1BA0D0u;
    SET_GPR_U32(ctx, 31, 0x1BA0D8u);
    ctx->pc = 0x1BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA2E0u, 0x1BA0D0u, 0x1BA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0D8u;
label_1ba0d8:
    // 0x1ba0d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba0e0: 0xc06e8c8  jal         func_1BA320
    ctx->pc = 0x1BA0E0u;
    SET_GPR_U32(ctx, 31, 0x1BA0E8u);
    ctx->pc = 0x1BA320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA320u, 0x1BA0E0u, 0x1BA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0E8u;
label_1ba0e8:
    // 0x1ba0e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ba0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba0ec: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1ba0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba0f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba0f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ba0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0f8: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1ba0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba0fc: 0xc06e848  jal         func_1BA120
    ctx->pc = 0x1BA0FCu;
    SET_GPR_U32(ctx, 31, 0x1BA104u);
    ctx->pc = 0x1BA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA120u, 0x1BA0FCu, 0x1BA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA104u;
label_1ba104:
    // 0x1ba104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba10c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ba110: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA118u;
    // 0x1ba118: 0x0  nop
    ctx->pc = 0x1ba118u;
    // NOP
    // 0x1ba11c: 0x0  nop
    ctx->pc = 0x1ba11cu;
    // NOP
    ctx->pc = 0x1ba120u;
}
