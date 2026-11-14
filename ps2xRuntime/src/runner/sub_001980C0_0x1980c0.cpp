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

// Function: sub_001980C0
// Address: 0x1980c0 - 0x198190
void sub_001980C0_0x1980c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001980C0_0x1980c0");
#endif

    switch (ctx->pc) {
        case 0x1980e8u: goto label_1980e8;
        case 0x198100u: goto label_198100;
        case 0x198120u: goto label_198120;
        case 0x198134u: goto label_198134;
        case 0x198148u: goto label_198148;
        case 0x198158u: goto label_198158;
        case 0x198174u: goto label_198174;
        default: break;
    }

    ctx->pc = 0x1980c0u;

    // 0x1980c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1980c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1980c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1980c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1980c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1980cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1980ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1980d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1980d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1980d4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1980d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1980d8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1980d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1980dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1980dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1980e0: 0xc06610c  jal         func_198430
    ctx->pc = 0x1980E0u;
    SET_GPR_U32(ctx, 31, 0x1980E8u);
    ctx->pc = 0x198430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198430u, 0x1980E0u, 0x1980E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980E8u;
label_1980e8:
    // 0x1980e8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1980e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1980ec: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1980ECu;
    {
        const bool branch_taken_0x1980ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1980ec) {
            ctx->pc = 0x19813Cu;
            goto label_19813c;
        }
    }
    ctx->pc = 0x1980F4u;
    // 0x1980f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1980f8: 0xc066014  jal         func_198050
    ctx->pc = 0x1980F8u;
    SET_GPR_U32(ctx, 31, 0x198100u);
    ctx->pc = 0x198050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198050u, 0x1980F8u, 0x198100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198100u;
label_198100:
    // 0x198100: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198104: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x198104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x198108: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19810c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19810cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x198110: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198114: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198118: 0xc066104  jal         func_198410
    ctx->pc = 0x198118u;
    SET_GPR_U32(ctx, 31, 0x198120u);
    ctx->pc = 0x198410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198410u, 0x198118u, 0x198120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198120u;
label_198120:
    // 0x198120: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198128: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x198128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19812c: 0xc066074  jal         func_1981D0
    ctx->pc = 0x19812Cu;
    SET_GPR_U32(ctx, 31, 0x198134u);
    ctx->pc = 0x1981D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1981D0u, 0x19812Cu, 0x198134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198134u;
label_198134:
    // 0x198134: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x198134u;
    {
        const bool branch_taken_0x198134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198134) {
            ctx->pc = 0x198174u;
            goto label_198174;
        }
    }
    ctx->pc = 0x19813Cu;
label_19813c:
    // 0x19813c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198140: 0xc066104  jal         func_198410
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 31, 0x198148u);
    ctx->pc = 0x198410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198410u, 0x198140u, 0x198148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198148u;
label_198148:
    // 0x198148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19814c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198150: 0xc06610c  jal         func_198430
    ctx->pc = 0x198150u;
    SET_GPR_U32(ctx, 31, 0x198158u);
    ctx->pc = 0x198430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198430u, 0x198150u, 0x198158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198158u;
label_198158:
    // 0x198158: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x198158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19815c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x19815cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198160: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x198160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198168: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19816c: 0xc066064  jal         func_198190
    ctx->pc = 0x19816Cu;
    SET_GPR_U32(ctx, 31, 0x198174u);
    ctx->pc = 0x198190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198190u, 0x19816Cu, 0x198174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198174u;
label_198174:
    // 0x198174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19817c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19817cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x198180: 0x3e00008  jr          $ra
    ctx->pc = 0x198180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198188u;
    // 0x198188: 0x0  nop
    ctx->pc = 0x198188u;
    // NOP
    // 0x19818c: 0x0  nop
    ctx->pc = 0x19818cu;
    // NOP
    ctx->pc = 0x198190u;
}
